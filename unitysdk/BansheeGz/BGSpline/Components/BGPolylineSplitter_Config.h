#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_SplitModeEnum.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x19221FA0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPolylineSplitter_Config_TypeDefinitionIndex = 36993;

	class BGPolylineSplitter_Config : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Transform; // 0x10
		::System::Int32 PartsTotal; // 0x18
		::System::Single DistanceMin; // 0x1C
		::System::Int32 PartsPerSection; // 0x20
		::System::Single DistanceMax; // 0x24
		::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum SplitMode; // 0x28
		::System::Boolean UseLocal; // 0x2C
		::System::Boolean DoNotOptimizeStraightLines; // 0x2D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_CONFIG_CTOR_OFFSET))(this);
		}

	};
}
