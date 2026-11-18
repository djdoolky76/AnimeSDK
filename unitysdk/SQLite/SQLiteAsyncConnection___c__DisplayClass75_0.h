#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF4570)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS75_0__GETTABLEINFOASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1ECF95D0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass75_0_TypeDefinitionIndex = 37127;

	class SQLiteAsyncConnection___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::System::String* tableName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* _GetTableInfoAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS75_0__GETTABLEINFOASYNC_B__0_OFFSET))(this, conn);
		}
	};
}
