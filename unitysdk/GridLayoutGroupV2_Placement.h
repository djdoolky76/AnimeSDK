#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RectTransform; }

inline static constexpr unsigned int GridLayoutGroupV2_Placement_TypeDefinitionIndex = 49541;

struct alignas(8) GridLayoutGroupV2_Placement
{
	::UnityEngine::RectTransform* rect; // 0x10
	::System::Int32 x; // 0x18
	::System::Int32 y; // 0x1C
	::System::Int32 colSpan; // 0x20
	::System::Int32 rowSpan; // 0x24
};
