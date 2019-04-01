/* MIT License
*
* Copyright (c) 2019 Ball Chang
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

/*
 * @Author      : Ball Chang
 * @File        : tests.cpp
 * @Date        : 2019-4-1
*/

#include <iostream>

#include "BCore/BCore.h"
#include "BCore/BDebug.h"
#include "BCore/BType.h"

int main(int argc, char** argv) {
    using namespace BCore;

    std::cout << "Start testing..." << std::endl;

    // BType test
    uint    val_uint = sizeof(uint);
    int8    val_int8 = sizeof(int8);
    int16   val_int16 = sizeof(int16);
    int32   val_int32 = sizeof(int32);
    int64   val_int64 = sizeof(int64);
    uint8   val_uint8 = sizeof(uint8);
    uint16  val_uint16 = sizeof(uint16);
    uint32  val_uint32 = sizeof(uint32);
    uint64  val_uint64 = sizeof(uint64);

    std::cout << "BType test summary: " << std::endl;
    std::cout << "Type\t|" << " Size in bytes" << std::endl;
    std::cout << "uint\t| " << static_cast<int32>(val_uint) << std::endl;
    std::cout << "int8\t| " << static_cast<int32>(val_int8) << std::endl;
    std::cout << "int16\t| " << static_cast<int32>(val_int16) << std::endl;
    std::cout << "int32\t| " << static_cast<int32>(val_int32) << std::endl;
    std::cout << "int64\t| " << static_cast<int32>(val_int64) << std::endl;
    std::cout << "uint8\t| " << static_cast<int32>(val_uint8) << std::endl;
    std::cout << "uint16\t| " << static_cast<int32>(val_uint16) << std::endl;
    std::cout << "uint32\t| " << static_cast<int32>(val_uint32) << std::endl;
    std::cout << "uint64\t| " << static_cast<int32>(val_uint64) << std::endl;
    std::cout << "BType test finished. " << std::endl;

    // BDebug test
    std::cout << std::endl;
    std::cout << "BDebug test summary: " << std::endl;
    B_PRINT_DEBUG("B_PRINT_DEBUG print this message.")
    B_END_OF_DEBUG("B_END_OF_DEBUG print this message.")
    B_PRINT_ERROR("B_PRINT_ERROR print this message.")
    std::cout << "BDebug test finished. " << std::endl;

}
