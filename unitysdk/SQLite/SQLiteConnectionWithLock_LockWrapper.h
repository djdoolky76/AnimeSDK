#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SQLITE_SQLITECONNECTIONWITHLOCK_LOCKWRAPPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED012E0)
#define SQLITE_SQLITECONNECTIONWITHLOCK_LOCKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED01280)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionWithLock_LockWrapper_TypeDefinitionIndex = 37152;

	class SQLiteConnectionWithLock_LockWrapper : public ::System::Object
	{
	public:
		::System::Object* _lockPoint; // 0x10

		::System::Void _ctor(::System::Object* lockPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_LOCKWRAPPER__CTOR_OFFSET))(this, lockPoint);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_LOCKWRAPPER_DISPOSE_OFFSET))(this);
		}
	};
}
