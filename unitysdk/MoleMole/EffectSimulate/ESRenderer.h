#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"

#define MOLEMOLE_EFFECTSIMULATE_ESRENDERER_ENLHJJEFIAJ_OFFSET UNITYSDK_OFFSET(0x1243FDD0)
#define MOLEMOLE_EFFECTSIMULATE_ESRENDERER_KDCHBGOMCMG_OFFSET UNITYSDK_OFFSET(0x1243FE30)
#define MOLEMOLE_EFFECTSIMULATE_ESRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1243FE10)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESRenderer_TypeDefinitionIndex = 47634;

	class ESRenderer : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESRENDERER__CTOR_OFFSET))(this);
		}

		::System::Boolean ENLHJJEFIAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESRENDERER_ENLHJJEFIAJ_OFFSET))(this);
		}

		::System::Boolean KDCHBGOMCMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESRENDERER_KDCHBGOMCMG_OFFSET))(this);
		}
	};
}
