#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginDelayEnableChildren; }
namespace UnityEngine { class MonoBehaviour; }

#define AKBMGIHOKLB_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC58E0)
#define AKBMGIHOKLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC5540)
#define AKBMGIHOKLB_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x12CC5700)
#define AKBMGIHOKLB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CC5750)
#define AKBMGIHOKLB_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x12CC55B0)
#define AKBMGIHOKLB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12CC54D0)

inline static constexpr unsigned int AKBMGIHOKLB_TypeDefinitionIndex = 69872;

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
