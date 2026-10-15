#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginSyncTargetShaderProperty; }
namespace UnityEngine { class MonoBehaviour; }

#define GNHGHGLEGPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFEEA0)
#define GNHGHGLEGPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AFEA80)
#define GNHGHGLEGPN_HDFKHHIHNHF_OFFSET UNITYSDK_OFFSET(0x15AFEAF0)
#define GNHGHGLEGPN_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15AFEE30)
#define GNHGHGLEGPN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15AFEA10)

inline static constexpr unsigned int GNHGHGLEGPN_TypeDefinitionIndex = 69903;

	class GNHGHGLEGPN : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHGHGLEGPN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + GNHGHGLEGPN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHGHGLEGPN_DISPOSE_OFFSET))(this);
		}

		::System::Void HDFKHHIHNHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHGHGLEGPN_HDFKHHIHNHF_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginSyncTargetShaderProperty* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginSyncTargetShaderProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHGHGLEGPN_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
