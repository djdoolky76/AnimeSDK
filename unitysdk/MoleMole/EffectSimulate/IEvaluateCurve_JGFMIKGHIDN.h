#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_JGFMIKGHIDN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x142E9EA0)
#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_JGFMIKGHIDN__CTOR_OFFSET UNITYSDK_OFFSET(0x142E9E90)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int IEvaluateCurve_JGFMIKGHIDN_TypeDefinitionIndex = 91283;

	class IEvaluateCurve_JGFMIKGHIDN : public ::System::Object
	{
	public:
		::System::Single EEMNHFGAKPA; // 0x10
		::System::Single HNMIHEALBOM; // 0x14
		::System::Single HJBICJJOOJK; // 0x18
		::System::Single BMEPEKHNILP; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_JGFMIKGHIDN__CTOR_OFFSET))(this);
		}

		::System::Void PHOADBJGFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_JGFMIKGHIDN_PHOADBJGFBE_OFFSET))(this);
		}
	};
}
