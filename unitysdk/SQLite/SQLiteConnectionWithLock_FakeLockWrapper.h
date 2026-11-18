#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SQLITE_SQLITECONNECTIONWITHLOCK_FAKELOCKWRAPPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED012D0)
#define SQLITE_SQLITECONNECTIONWITHLOCK_FAKELOCKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED012C0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionWithLock_FakeLockWrapper_TypeDefinitionIndex = 37153;

	class SQLiteConnectionWithLock_FakeLockWrapper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_FAKELOCKWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_FAKELOCKWRAPPER_DISPOSE_OFFSET))(this);
		}
	};
}
