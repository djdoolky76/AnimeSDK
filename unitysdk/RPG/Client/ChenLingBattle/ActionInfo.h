#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNHBDMIDFCL;

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCA36EB0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_GET_ACTIONUID_OFFSET UNITYSDK_OFFSET(0xCA36ED0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_SET_ACTIONUID_OFFSET UNITYSDK_OFFSET(0xCA36EE0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionInfo_TypeDefinitionIndex = 76391;

	class ActionInfo : public ::System::Object
	{
	public:
		::System::UInt32 _ActionUID_k__BackingField; // 0x10
		::System::Void _ctor(::BNHBDMIDFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNHBDMIDFCL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_GET_ACTIONUID_OFFSET))(this);
		}

		::System::Void set_ActionUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_SET_ACTIONUID_OFFSET))(this, a1);
		}

	};
}
