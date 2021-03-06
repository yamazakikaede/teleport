#ifndef __TELEPORT_CONST_H__
#define __TELEPORT_CONST_H__

// 本文件设定teleport各个模块之间通讯时的错误值（JSON数据），包括：
//  - WEB界面与助手
//  - WEB界面与WEB后台
//  - WEB后台与CORE核心服务

// 成功
#define TPE_OK			0

//-------------------------------------------------------
// 通用错误值
//-------------------------------------------------------
#define TPE_NEED_MORE_DATA			1	// 需要更多数据（不一定是错误）
#define TPE_NEED_LOGIN				2	// 需要登录
#define TPE_PRIVILEGE				3	// 没有操作权限
#define TPE_EXISTS					8	// 目标已经存在
#define TPE_NOT_EXISTS              9   // 目标不存在

// 100~299是通用错误值

#define TPE_FAILED					100	// 内部错误
#define TPE_NETWORK					101	// 网络错误
#define TPE_DATABASE				102 // 数据库操作失败

// HTTP请求相关错误
#define TPE_HTTP_METHOD				120	// 无效的请求方法（不是GET/POST等），或者错误的请求方法（例如需要POST，却使用GET方式请求）
#define TPE_HTTP_URL_ENCODE			121	// URL编码错误（无法解码）
//#define TPE_HTTP_URI				122	// 无效的URI

#define TPE_UNKNOWN_CMD				124	// 未知的命令
#define TPE_JSON_FORMAT				125	// 错误的JSON格式（需要JSON格式数据，但是却无法按JSON格式解码）
#define TPE_PARAM					126	// 参数错误
#define TPE_DATA					127	// 数据错误

// #define TPE_OPENFILE_ERROR			0x1007	// 无法打开文件
// #define TPE_GETTEMPPATH_ERROR		0x1007
#define TPE_OPENFILE				300


//-------------------------------------------------------
// WEB服务专用错误值
//-------------------------------------------------------
#define TPE_CAPTCHA_EXPIRED			10000	// 验证码已过期
#define TPE_CAPTCHA_MISMATCH		10001	// 验证码错误
#define TPE_OATH_MISMATCH			10002	// 身份验证器动态验证码错误
#define TPE_SYS_MAINTENANCE			10003	// 系统维护中

#define TPE_USER_LOCKED				10100	// 用户已经被锁定（连续多次错误密码）
#define TPE_USER_BAN				10101	// 用户已经被禁用
#define TPE_USER_AUTH				10102	// 身份验证失败

//-------------------------------------------------------
// 助手程序专用错误值
//-------------------------------------------------------
#define TPE_NO_ASSIST				100000	// 未能检测到助手程序
#define TPE_OLD_ASSIST				100001	// 助手程序版本太低
#define TPE_START_CLIENT			100002	// 无法启动客户端程序（无法创建进程）



//-------------------------------------------------------
// 核心服务专用错误值
//-------------------------------------------------------
#define TPE_NO_CORE_SERVER			200000	// 未能检测到核心服务



#endif // __TELEPORT_CONST_H__
