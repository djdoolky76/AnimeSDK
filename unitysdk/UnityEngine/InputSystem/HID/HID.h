#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_F4B448CF955AC2B7.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/AFB530854B88B5A8.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"

namespace E7F9C9491EE9F059 { class E497C885EE8CCBB1; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_HIDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x40096C0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDPARSEDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x4009600)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x4009640)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORSIZEDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x4009680)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x40081D0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_READHIDDEVICEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x4008C80)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_USAGEPAGETOSTRING_OFFSET UNITYSDK_OFFSET(0x40094E0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_USAGETOSTRING_OFFSET UNITYSDK_OFFSET(0x4009550)
#define UNITYENGINE_INPUTSYSTEM_HID_HID__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_TypeDefinitionIndex = 14584;

	class HID : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		// static const ::System::String* kHIDInterface; // 0x0
		// static const ::System::String* kHIDNamespace; // 0x0
		::System::Boolean m_HaveParsedHIDDescriptor; // 0x190
		::System::Byte _padding0[0x7];
		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor m_HIDDescriptor; // 0x198

		static ::System::String* OnFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& A90E48A7BCFA135B, ::System::String* ABCD5D394A792652, ::E7F9C9491EE9F059::E497C885EE8CCBB1* BC0037EF049EA099)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::String*, ::E7F9C9491EE9F059::E497C885EE8CCBB1*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_ONFINDLAYOUTFORDEVICE_OFFSET))(A90E48A7BCFA135B, ABCD5D394A792652, BC0037EF049EA099);
		}

		static ::AFB530854B88B5A8 get_QueryHIDReportDescriptorDeviceCommandType()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET))();
		}

		static ::AFB530854B88B5A8 get_QueryHIDParsedReportDescriptorDeviceCommandType()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDPARSEDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET))();
		}

		static ::AFB530854B88B5A8 get_QueryHIDReportDescriptorSizeDeviceCommandType()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORSIZEDEVICECOMMANDTYPE_OFFSET))();
		}

		static ::System::String* UsagePageToString(::UnityEngine::InputSystem::HID::HID_F4B448CF955AC2B7 A3C9C3B7964A780F)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::HID::HID_F4B448CF955AC2B7))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_USAGEPAGETOSTRING_OFFSET))(A3C9C3B7964A780F);
		}

		static ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor ReadHIDDeviceDescriptor(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& E8DF49246D5CD4E1, ::E7F9C9491EE9F059::E497C885EE8CCBB1* BFF5D359B061ABA2)
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::E7F9C9491EE9F059::E497C885EE8CCBB1*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_READHIDDEVICEDESCRIPTOR_OFFSET))(E8DF49246D5CD4E1, BFF5D359B061ABA2);
		}

		static ::System::String* UsageToString(::UnityEngine::InputSystem::HID::HID_F4B448CF955AC2B7 A3C9C3B7964A780F, ::System::Int32 E8074BBF0ADF3A7B)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::HID::HID_F4B448CF955AC2B7, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_USAGETOSTRING_OFFSET))(A3C9C3B7964A780F, E8074BBF0ADF3A7B);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor get_hidDescriptor()
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_HIDDESCRIPTOR_OFFSET))(this);
		}
	};
}
