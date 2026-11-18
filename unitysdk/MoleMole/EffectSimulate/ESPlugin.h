#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

#define MOLEMOLE_EFFECTSIMULATE_ESPLUGIN_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1BA639D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPLUGIN_LLLIDJKOBEC_OFFSET UNITYSDK_OFFSET(0x1BA63AD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA63A60)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPlugin_TypeDefinitionIndex = 40516;

	class ESPlugin : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPLUGIN_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void LLLIDJKOBEC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPLUGIN_LLLIDJKOBEC_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
