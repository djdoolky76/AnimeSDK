#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectLowPrefabHashMap; }
namespace System { class Action; }

#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_HMOIEGGGAPM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1278E8B0)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_HMOIEGGGAPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1278E8A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLowPrefabRuntime_HMOIEGGGAPM_TypeDefinitionIndex = 85172;

	class EffectLowPrefabRuntime_HMOIEGGGAPM : public ::System::Object
	{
	public:
		::System::Action* IBNICCGMILF; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_HMOIEGGGAPM__CTOR_OFFSET))(this);
		}

		::System::Void OKKMJKOAIKG(::MoleMole::Config::EffectLowPrefabHashMap* KNHIFHIKHIO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectLowPrefabHashMap*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABRUNTIME_HMOIEGGGAPM_OKKMJKOAIKG_OFFSET))(this, KNHIFHIKHIO);
		}
	};
}
