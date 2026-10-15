#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLBKJAEKPMO;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarSkillConfig; }

#define GLBKJAEKPMO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15AAA7B0)
#define GLBKJAEKPMO_CTOR_OFFSET UNITYSDK_OFFSET(0x15AAA840)
#define GLBKJAEKPMO_GET_SKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x15AAA8D0)
#define GLBKJAEKPMO_MNBBCAMDGDI_OFFSET UNITYSDK_OFFSET(0x15AAA850)
#define GLBKJAEKPMO_SET_SKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x15AAA8E0)

	class GLBKJAEKPMO : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig* _SkillConfig_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBKJAEKPMO_CTOR_OFFSET))(this);
		}

		static ::GLBKJAEKPMO* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::GLBKJAEKPMO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GLBKJAEKPMO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean MNBBCAMDGDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBKJAEKPMO_MNBBCAMDGDI_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig* get_SkillConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBKJAEKPMO_GET_SKILLCONFIG_OFFSET))(this);
		}

		::System::Void set_SkillConfig(::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*))((::PBYTE)hIl2Cpp + GLBKJAEKPMO_SET_SKILLCONFIG_OFFSET))(this, a1);
		}

	};
