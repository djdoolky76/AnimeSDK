#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class HFNPJABCAFI;

#define RPG_CLIENT_RPGDEMOMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xDE12E80)
#define RPG_CLIENT_RPGDEMOMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE12DD0)
#define RPG_CLIENT_RPGDEMOMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xDE12E60)
#define RPG_CLIENT_RPGDEMOMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDE12D60)
#define RPG_CLIENT_RPGDEMOMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xDE12E70)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGDemoModule_TypeDefinitionIndex = 66764;

	class RPGDemoModule : public ::RPG::Client::BaseModule
	{
	public:
		::HFNPJABCAFI* _PVPMgr_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_DISPOSE_OFFSET))(this);
		}

		::HFNPJABCAFI* get_PVPMgr()
		{
			return ((::HFNPJABCAFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::HFNPJABCAFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFNPJABCAFI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_SET_PVPMGR_OFFSET))(this, a1);
		}

	};
}
