#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class Type; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF3A90)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS51_0__INSERTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1ECF6D40)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass51_0_TypeDefinitionIndex = 37103;

	class SQLiteAsyncConnection___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Type* objType; // 0x10
		::System::Object* obj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InsertAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS51_0__INSERTASYNC_B__0_OFFSET))(this, conn);
		}
	};
}
