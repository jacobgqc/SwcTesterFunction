using System;
using System.Runtime.InteropServices;
using Microsoft.Azure.WebJobs;
using Microsoft.Extensions.Logging;

namespace SwcTesterFunction
{
    public class Function1
    {
        [DllImport("ReturnNumber.dll")]
        public static extern int fnDoubleNumber(int num);

        [FunctionName("Function1")]
        public void Run([TimerTrigger("0,10,20,30,40,50 * * * * *")]TimerInfo myTimer, ILogger log)
        {
            log.LogInformation($"C# Timer trigger function executed at: {DateTime.Now}");
            int num = 2;
            log.LogInformation($"Doubling {num}");
            int result = fnDoubleNumber(num);
            log.LogInformation($"Result is {result}");
        }
    }
}
