#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSource.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/Mouse.h"
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_MOUSEBINDINGSOURCE_BUTTONISPRESSED_OFFSET UNITYSDK_OFFSET(0x1CB89B00)
#define INCONTROL_MOUSEBINDINGSOURCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB8A400)
#define INCONTROL_MOUSEBINDINGSOURCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB89AF0)
#define INCONTROL_MOUSEBINDINGSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB89AE0)
#define INCONTROL_MOUSEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CB8A280)
#define INCONTROL_MOUSEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB8A240)
#define INCONTROL_MOUSEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB8A2C0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1CB8A110)
#define INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1CB8A0E0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1CB89CC0)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1CB8A2D0)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1CB89AC0)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x1CB8A220)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1CB8A210)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x1CB8A230)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CB8A160)
#define INCONTROL_MOUSEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x1CB8A370)
#define INCONTROL_MOUSEBINDINGSOURCE_NEGATIVESCROLLWHEELISACTIVE_OFFSET UNITYSDK_OFFSET(0x1CB89B80)
#define INCONTROL_MOUSEBINDINGSOURCE_POSITIVESCROLLWHEELISACTIVE_OFFSET UNITYSDK_OFFSET(0x1CB89C20)
#define INCONTROL_MOUSEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x1CB8A2E0)
#define INCONTROL_MOUSEBINDINGSOURCE_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1CB89AD0)

namespace InControl
{
	inline static constexpr unsigned int MouseBindingSource_TypeDefinitionIndex = 41779;

	class MouseBindingSource : public ::InControl::BindingSource
	{
	public:
		::InControl::Mouse _Control_k__BackingField; // 0x18
		static ::System::Single* StaticGet_ScaleY()
		{
			return (::System::Single*)UnitySDK::FromName("InControl", "MouseBindingSource")->GetStaticField(0x152C0);
		}

		static ::System::Single* StaticGet_ScaleZ()
		{
			return (::System::Single*)UnitySDK::FromName("InControl", "MouseBindingSource")->GetStaticField(0x152C4);
		}

		static ::System::Single* StaticGet_ScaleX()
		{
			return (::System::Single*)UnitySDK::FromName("InControl", "MouseBindingSource")->GetStaticField(0x152C8);
		}

		static ::System::Single* StaticGet_JitterThreshold()
		{
			return (::System::Single*)UnitySDK::FromName("InControl", "MouseBindingSource")->GetStaticField(0x152CC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::Mouse a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_CCTOR_OFFSET))();
		}

		::InControl::Mouse get_Control()
		{
			return ((::InControl::Mouse(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_Control(::InControl::Mouse a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_SET_CONTROL_OFFSET))(this, a1);
		}

		static ::System::Boolean ButtonIsPressed(::InControl::Mouse a1)
		{
			return ((::System::Boolean(*)(::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_BUTTONISPRESSED_OFFSET))(a1);
		}

		static ::System::Boolean NegativeScrollWheelIsActive(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_NEGATIVESCROLLWHEELISACTIVE_OFFSET))(a1);
		}

		static ::System::Boolean PositiveScrollWheelIsActive(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_POSITIVESCROLLWHEELISACTIVE_OFFSET))(a1);
		}

		static ::System::Single GetValue(::InControl::Mouse a1)
		{
			return ((::System::Single(*)(::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_OFFSET))(a1);
		}

		::System::Single GetValue_1(::InControl::InputDevice* a1)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_1_OFFSET))(this, a1);
		}

		::System::Boolean GetState(::InControl::InputDevice* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETSTATE_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICENAME_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Boolean Equals(::InControl::BindingSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::BindingSourceType get_BindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET))(this);
		}

		::System::Void Save(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_SAVE_OFFSET))(this, a1);
		}

		::System::Void Load(::System::IO::BinaryReader* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_LOAD_OFFSET))(this, a1, a2);
		}

	};
}
