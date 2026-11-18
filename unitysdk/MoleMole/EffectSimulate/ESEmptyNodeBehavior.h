#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"

#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEBEHAVIOR_KBILGFLPCFK_OFFSET UNITYSDK_OFFSET(0xFFF7DF0)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEBEHAVIOR_MCBLFAGODMD_OFFSET UNITYSDK_OFFSET(0xFFF7D90)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF7DD0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESEmptyNodeBehavior_TypeDefinitionIndex = 54373;

	class ESEmptyNodeBehavior : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Boolean MCBLFAGODMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEBEHAVIOR_MCBLFAGODMD_OFFSET))(this);
		}

		::System::Boolean KBILGFLPCFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEBEHAVIOR_KBILGFLPCFK_OFFSET))(this);
		}
	};
}
