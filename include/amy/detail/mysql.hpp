#ifndef __AMY_DETAIL_MYSQL_HPP__
#define __AMY_DETAIL_MYSQL_HPP__

#ifdef WIN32
#   include <winsock2.h>
#   include <mysql/mysql.h>
#   include <mysql/errmsg.h>
#else
#   include <mysql/mysql.h>
#   include <mysql/errmsg.h>
#endif // #ifdef WIN32

#endif // __AMY_DETAIL_MYSQL_HPP__

// vim:ft=cpp sw=4 ts=4 tw=80 et
