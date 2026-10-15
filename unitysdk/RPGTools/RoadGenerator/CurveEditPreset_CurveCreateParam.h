#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/RoadGenerator/CurveCreateMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET_CURVECREATEPARAM_CCTOR_OFFSET UNITYSDK_OFFSET(0xE89D880)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int CurveEditPreset_CurveCreateParam_TypeDefinitionIndex = 48864;

	struct alignas(4) CurveEditPreset_CurveCreateParam
	{
		::RPGTools::RoadGenerator::CurveCreateMode Mode; // 0x10
		::UnityEngine::Vector3 RootPos; // 0x14
		::System::Single Radius; // 0x20
		::System::Int32 SegmentCount; // 0x24
		::System::Single Angle; // 0x28
		::System::Single AngleOffset; // 0x2C
		::System::Single TotalHeight; // 0x30
		static ::RPGTools::RoadGenerator::CurveEditPreset_CurveCreateParam* StaticGet_Default()
		{
			return (::RPGTools::RoadGenerator::CurveEditPreset_CurveCreateParam*)UnitySDK::FromName("RPGTools.RoadGenerator", "CurveCreateParam")->GetStaticField(0x15A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET_CURVECREATEPARAM_CCTOR_OFFSET))();
		}

	};
}
