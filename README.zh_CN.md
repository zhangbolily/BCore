# BCore #
[![Build Status](https://travis-ci.com/zhangbolily/BCore.svg?branch=dev)](https://travis-ci.com/zhangbolily/BCore)
[![Language](https://img.shields.io/badge/language-C%2B%2B11-orange.svg)](https://isocpp.org/)
[![Platforms](https://img.shields.io/badge/platform-Linux%20%7C%20Windows-green.svg)](https://gitlab.com/zhangbolily/BCore)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT/)
[![codecov](https://codecov.io/gl/zhangbolily/BCore/branch/dev/graph/badge.svg)](https://codecov.io/gl/zhangbolily/BCore)

[English](./README.md)

Ball Chang 每个项目的核心部分。

## 主要特性
- 统一的基础数据类型定义。
- 调试输出用的宏定义。
- 返回值的枚举定义。

## 如何开始

通过以下步骤，你将获得本项目的源代码用于开发或者测试。

### 系统要求

若你想在你的平台上使用 BCore，必须满足以下条件。
```
C++ 标准: c++11
构建工具: cmake make autoconf automake gcc
```

### 安装

```
$ git clone https://gitlab.com/zhangbolily/BCore.git BCore
$ cd BCore
$ mkdir build
$ cd build
$ cmake .. 
$ make
$ make install
```

##### 项目构建演示视频 (点击观看)

[![Build](https://asciinema.org/a/4Sh30mIfX3uw6hboIJWFkXqbf.svg)](https://asciinema.org/a/4Sh30mIfX3uw6hboIJWFkXqbf)

## 测试
默认情况下，测试程序会在构建完成后自动运行。

## 版本信息

获取可用版本，请参阅 [tags on this repository](https://gitlab.com/zhangbolily/BCore/tags)。

## 路线图
下个版本提供一个更棒的调试输出宏定义。

## 作者

* **Ball Chang** - *构建了整个项目*

## 许可证

本项目使用了 MIT 许可 - 阅读 [LICENSE.md](LICENSE.md) 获取更多信息。

## 致谢

* GitLab
