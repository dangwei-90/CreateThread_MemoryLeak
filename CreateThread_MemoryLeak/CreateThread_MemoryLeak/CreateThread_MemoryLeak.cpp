// CreateThread_MemoryLeak.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// 设置：C/C++ -> 代码生成 -> 运行库 -> MTd

#include <iostream>
#include <Windows.h>
#include <process.h>

void TestCreateThread() {
  std::cout << "test CreateThread" << std::endl;
  ExitThread(0);
}

int main()
{
  while (1) {
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)TestCreateThread, 0, 0, 0);
    Sleep(1);
  }
  
  return 0;
}