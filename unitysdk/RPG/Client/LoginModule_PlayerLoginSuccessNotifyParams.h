#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LOGINMODULE_PLAYERLOGINSUCCESSNOTIFYPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x19454590)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginModule_PlayerLoginSuccessNotifyParams_TypeDefinitionIndex = 67715;

	class LoginModule_PlayerLoginSuccessNotifyParams : public ::System::Object
	{
	public:
		::System::Int32 CurServerTimezone; // 0x10
		::System::Boolean IsRelay; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt64 ServerTimestampMs; // 0x18
		::System::UInt64 ServerLoginRandomNum; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_PLAYERLOGINSUCCESSNOTIFYPARAMS_CTOR_OFFSET))(this);
		}

	};
}
