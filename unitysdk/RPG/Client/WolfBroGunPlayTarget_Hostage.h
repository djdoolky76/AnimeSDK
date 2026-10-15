#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE46E380)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_GETWAITMISSTIME_OFFSET UNITYSDK_OFFSET(0xE46DF20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_HLFAPFCOBGJ_OFFSET UNITYSDK_OFFSET(0xE46E2F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_IHAOPJPAEIF_OFFSET UNITYSDK_OFFSET(0xE46E100)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_IJCCAJDIDGO_OFFSET UNITYSDK_OFFSET(0xE46E250)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_JMFJILBEPBG_OFFSET UNITYSDK_OFFSET(0xE46DFB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_MDNCLDAFLLJ_OFFSET UNITYSDK_OFFSET(0xE46E2A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE46DF70)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Hostage_TypeDefinitionIndex = 68730;

	class WolfBroGunPlayTarget_Hostage : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Single removeScore; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_CTOR_OFFSET))(this);
		}

		::System::Single GetWaitMissTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_GETWAITMISSTIME_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_ONENABLE_OFFSET))(this);
		}

		::System::Void JMFJILBEPBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_JMFJILBEPBG_OFFSET))(this);
		}

		::System::Void IHAOPJPAEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_IHAOPJPAEIF_OFFSET))(this);
		}

		::System::Boolean IJCCAJDIDGO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_IJCCAJDIDGO_OFFSET))(this, a1);
		}

		::System::Boolean MDNCLDAFLLJ(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_MDNCLDAFLLJ_OFFSET))(this, a1);
		}

		::System::Void HLFAPFCOBGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HOSTAGE_HLFAPFCOBGJ_OFFSET))(this, a1);
		}

	};
}
