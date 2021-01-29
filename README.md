自己设计的日志库，主要网上的日志用起来太复杂而且和自己的业务场景不太适用，故设计一个用于嵌入式平台的日志库，而且带调试功能

主要功能如下

- 日志系统
- [ ] 以模块为设计输出单位,单独进程运行，这样可以收集崩溃信息(一个进程一个文件)
- [ ] 可以自定义输出源头
- [ ] 可以多个输出源
- [ ] 可以打标签
- [ ] 不同标签可以自定义不同的输出源
- [ ] 多种输出格式
- [ ] 自定义输出格式，和输出内容/变量（可以在支持的输出格式中添加）
- [ ] 日志保存
- [ ] 日志上传
- [ ] 日志远程访问
- [ ] 代码崩溃信息记录
- [ ] 代码崩溃信息额外保存选项
- [ ] 代码崩溃日志保存/上传选项
- [ ] 可以开关日志输出等级

- 调试系统
- [ ] 支持自定义命令
- [ ] 支持串口运行指定程序
- [ ] 支持各种系统的使用
