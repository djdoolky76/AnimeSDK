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

#define INCONTROL_MOUSEBINDINGSOURCE_BUTTONISPRESSED_OFFSET UNITYSDK_OFFSET(0x19FAE7A0)
#define INCONTROL_MOUSEBINDINGSOURCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x19FAF0A0)
#define INCONTROL_MOUSEBINDINGSOURCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FAE790)
#define INCONTROL_MOUSEBINDINGSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FAE780)
#define INCONTROL_MOUSEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FAEF20)
#define INCONTROL_MOUSEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FAEEE0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FAEF60)
#define INCONTROL_MOUSEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x19FAEDB0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x19FAED80)
#define INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x19FAE960)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x19FAEF70)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x19FAE760)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x19FAEEC0)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x19FAEEB0)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x19FAEED0)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19FAEE00)
#define INCONTROL_MOUSEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x19FAF010)
#define INCONTROL_MOUSEBINDINGSOURCE_NEGATIVESCROLLWHEELISACTIVE_OFFSET UNITYSDK_OFFSET(0x19FAE820)
#define INCONTROL_MOUSEBINDINGSOURCE_POSITIVESCROLLWHEELISACTIVE_OFFSET UNITYSDK_OFFSET(0x19FAE8C0)
#define INCONTROL_MOUSEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x19FAEF80)
#define INCONTROL_MOUSEBINDINGSOURCE_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x19FAE770)

namespace InControl
{
	inline static constexpr unsigned int MouseBindingSource_TypeDefinitionIndex = 41779;

	class MouseBindingSource : public ::InControl::BindingSource
	{
	public:
		::InControl::Mouse _Control_k__BackingField; // 0x18
		static ::System::Single* StaticGet_ScaleX()
		{
			return (::System::Single*)UnitySDK::FromName("InControl", "MouseBindingSource")->GetStaticField(0x14F00);
		}

		static ::System::Single* StaticGet_ScaleZ()
		{
			return (::System::Single*)UnitySDK::FromName("InControl", "MouseBindingSource")->GetStaticField(0x14F04);
		}

		static ::System::Single* StaticGet_ScaleY()
		{
			return (::System::Single*)UnitySDK::FromName("InControl", "MouseBindingSource")->GetStaticField(0x14F08);
		}

		static ::System::Single* StaticGet_JitterThreshold()
		{
			return (::System::Single*)UnitySDK::FromName("InControl", "MouseBindingSource")->GetStaticField(0x14F0C);
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
