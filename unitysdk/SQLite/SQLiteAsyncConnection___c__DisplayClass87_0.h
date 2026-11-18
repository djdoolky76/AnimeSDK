#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class TableMapping; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF4A80)
#define SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS87_0__DEFERREDQUERYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1ECFAAA0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass87_0_TypeDefinitionIndex = 37138;

	class SQLiteAsyncConnection___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::SQLite::TableMapping* map; // 0x10
		::Il2CppArray<::System::Object*>* args; // 0x18
		::System::String* query; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* _DeferredQueryAsync_b__0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__DISPLAYCLASS87_0__DEFERREDQUERYASYNC_B__0_OFFSET))(this, conn);
		}
	};
}
