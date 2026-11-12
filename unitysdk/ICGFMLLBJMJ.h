#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginChildNodeFollow; }
namespace UnityEngine { class MonoBehaviour; }

#define ICGFMLLBJMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16DF9540)
#define ICGFMLLBJMJ_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x16DF8E90)
#define ICGFMLLBJMJ_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x16DF94D0)
#define ICGFMLLBJMJ_JHAHEPOOOHC_OFFSET UNITYSDK_OFFSET(0x16DF8EF0)
#define ICGFMLLBJMJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16DF8E20)

inline static constexpr unsigned int ICGFMLLBJMJ_TypeDefinitionIndex = 71830;

	class ICGFMLLBJMJ : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGFMLLBJMJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + ICGFMLLBJMJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICGFMLLBJMJ_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void JHAHEPOOOHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGFMLLBJMJ_JHAHEPOOOHC_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginChildNodeFollow* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginChildNodeFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGFMLLBJMJ_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
