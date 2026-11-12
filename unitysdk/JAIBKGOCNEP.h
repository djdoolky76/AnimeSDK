#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginAnim; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define JAIBKGOCNEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB884900)
#define JAIBKGOCNEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB884110)
#define JAIBKGOCNEP_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB8846D0)
#define JAIBKGOCNEP_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB884660)
#define JAIBKGOCNEP_IMMEKJJEICK_OFFSET UNITYSDK_OFFSET(0xB884180)
#define JAIBKGOCNEP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB8840A0)

inline static constexpr unsigned int JAIBKGOCNEP_TypeDefinitionIndex = 71817;

	class JAIBKGOCNEP : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::String* FFNMPPECJAO; // 0x18
		::System::Boolean CAIIJEOFOHM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIBKGOCNEP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + JAIBKGOCNEP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIBKGOCNEP_DISPOSE_OFFSET))(this);
		}

		::System::Void IMMEKJJEICK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIBKGOCNEP_IMMEKJJEICK_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAIBKGOCNEP_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginAnim* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIBKGOCNEP_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
