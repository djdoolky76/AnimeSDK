#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSource.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/UnknownDeviceControl.h"
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC6B34D0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B3460)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC6B3B90)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0xC6B3A60)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC6B3C70)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0xC6B3630)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0xC6B34E0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC6B3C90)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0xC6B3430)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0xC6B3A40)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0xC6B3960)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0xC6B3A50)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xC6B3CA0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC6B3690)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0xC6B3DD0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0xC6B3F30)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0xC6B3450)

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceBindingSource_TypeDefinitionIndex = 41785;

	class UnknownDeviceBindingSource : public ::InControl::BindingSource
	{
	public:
		::InControl::UnknownDeviceControl _Control_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::UnknownDeviceControl a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_CTOR_1_OFFSET))(this, a1);
		}

		::InControl::UnknownDeviceControl get_Control()
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_Control(::InControl::UnknownDeviceControl a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SET_CONTROL_OFFSET))(this, a1);
		}

		::System::Single GetValue(::InControl::InputDevice* a1)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean GetState(::InControl::InputDevice* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETSTATE_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Boolean Equals(::InControl::BindingSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::BindingSourceType get_BindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Load(::System::IO::BinaryReader* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Save(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SAVE_OFFSET))(this, a1);
		}

	};
}
