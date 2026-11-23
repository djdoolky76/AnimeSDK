#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_BB341200D0B3ACFD.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_F4B448CF955AC2B7.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDCollectionDescriptor_TypeDefinitionIndex = 14578;

	struct alignas(4) HID_HIDCollectionDescriptor
	{
		::UnityEngine::InputSystem::HID::HID_BB341200D0B3ACFD type; // 0x10
		::System::Int32 usage; // 0x14
		::UnityEngine::InputSystem::HID::HID_F4B448CF955AC2B7 usagePage; // 0x18
		::System::Int32 parent; // 0x1C
		::System::Int32 childCount; // 0x20
		::System::Int32 firstChild; // 0x24
	};
}
