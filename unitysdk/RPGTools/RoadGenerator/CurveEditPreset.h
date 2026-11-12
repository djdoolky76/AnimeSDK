#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/RoadGenerator/CurveEditPreset_CurveCreateParam.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0xF379480)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int CurveEditPreset_TypeDefinitionIndex = 49909;

	class CurveEditPreset : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPGTools::RoadGenerator::CurveEditPreset_CurveCreateParam CreateParam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET_CTOR_OFFSET))(this);
		}

	};
}
