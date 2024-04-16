#pragma once
// this is called the header guard
// 
// legacy implementation below:
//
// #ifndef _LOG_H
// #define _LOG_H
// void InitLog();
// void Log(const char* message);
// #endif

void InitLog();
void Log(const char* message);