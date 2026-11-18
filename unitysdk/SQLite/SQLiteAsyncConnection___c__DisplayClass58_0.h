#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System::Collections { class IEnumerable; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF3F50)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS58_0__UPDATEALLASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1ECF7E00)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass58_0_TypeDefinitionIndex = 37110;

	class SQLiteAsyncConnection___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::Collections::IEnumerable* objects; // 0x10
		::System::Boolean runInTransaction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateAllAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Int32(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS58_0__UPDATEALLASYNC_B__0_OFFSET))(this, conn);
		}
	};
}
