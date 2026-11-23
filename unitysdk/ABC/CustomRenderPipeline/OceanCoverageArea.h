#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"

#define ABC_CUSTOMRENDERPIPELINE_OCEANCOVERAGEAREA_INTERSECTSWITH_OFFSET UNITYSDK_OFFSET(0x27F2250)
#define ABC_CUSTOMRENDERPIPELINE_OCEANCOVERAGEAREA_SHOULDRENDERTILE_OFFSET UNITYSDK_OFFSET(0x27F22F0)
#define ABC_CUSTOMRENDERPIPELINE_OCEANCOVERAGEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x27F23B0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int OceanCoverageArea_TypeDefinitionIndex = 16773;

	class OceanCoverageArea : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 center; // 0x10
		::UnityEngine::Vector2 size; // 0x18
		::System::Boolean enableCulling; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::E46B881AA2636190 gizmoColor; // 0x24

		::System::Boolean ShouldRenderTile(::UnityEngine::B3A7F113FE1DE383 B42EEF5A169E7394)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::B3A7F113FE1DE383))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_OCEANCOVERAGEAREA_SHOULDRENDERTILE_OFFSET))(this, B42EEF5A169E7394);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_OCEANCOVERAGEAREA__CTOR_OFFSET))(this);
		}

		::System::Boolean IntersectsWith(::UnityEngine::B3A7F113FE1DE383 B42EEF5A169E7394)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::B3A7F113FE1DE383))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_OCEANCOVERAGEAREA_INTERSECTSWITH_OFFSET))(this, B42EEF5A169E7394);
		}
	};
}
