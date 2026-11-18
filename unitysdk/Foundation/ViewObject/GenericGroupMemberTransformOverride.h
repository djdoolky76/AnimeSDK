#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GenericGroupMemberTransformOverride_TypeDefinitionIndex = 83727;

	struct alignas(4) GenericGroupMemberTransformOverride
	{
		::System::Boolean HasPosition; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 Position; // 0x14
		::System::Boolean HasRotation; // 0x20
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 Rotation; // 0x24
	};
}
