#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int CloudLightningController_LightningSlot_TypeDefinitionIndex = 26164;

struct alignas(4) CloudLightningController_LightningSlot
{
	::System::Boolean active; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 startPos; // 0x14
	::UnityEngine::Vector3 endPos; // 0x20
	::System::Single width; // 0x2C
	::System::Single intensity; // 0x30
	::System::Single elapsed; // 0x34
	::System::Single lifetime; // 0x38
	::System::Int32 curveIndex; // 0x3C
	::System::Int32 variantIndex; // 0x40
};
