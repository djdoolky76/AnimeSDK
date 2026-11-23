#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.h"

class EFDFD8D59E1B8215;
namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x4006F70)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDLayoutBuilder_TypeDefinitionIndex = 14573;

	class HID_HIDLayoutBuilder : public ::System::Object
	{
	public:
		::System::String* displayName; // 0x10
		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor hidDescriptor; // 0x18
		::System::String* parentLayout; // 0x48
		::System::Type* deviceType; // 0x50

		::EFDFD8D59E1B8215* Build()
		{
			return ((::EFDFD8D59E1B8215*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_BUILD_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER__CTOR_OFFSET))(this);
		}
	};
}
