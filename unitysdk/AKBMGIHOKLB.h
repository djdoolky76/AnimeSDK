#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginDelayEnableChildren; }
namespace UnityEngine { class MonoBehaviour; }

#define AKBMGIHOKLB_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCA450)
#define AKBMGIHOKLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CCA0B0)
#define AKBMGIHOKLB_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x12CCA270)
#define AKBMGIHOKLB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CCA2C0)
#define AKBMGIHOKLB_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x12CCA120)
#define AKBMGIHOKLB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12CCA040)

	class AKBMGIHOKLB : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single NPINECOCALC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBMGIHOKLB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + AKBMGIHOKLB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBMGIHOKLB_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBMGIHOKLB_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKBMGIHOKLB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginDelayEnableChildren* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginDelayEnableChildren*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBMGIHOKLB_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
