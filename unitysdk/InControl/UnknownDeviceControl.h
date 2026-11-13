#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputRangeType.h"
namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_UNKNOWNDEVICECONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6B4A00)
#define INCONTROL_UNKNOWNDEVICECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x7CEA60)
#define INCONTROL_UNKNOWNDEVICECONTROL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7CEAE0)
#define INCONTROL_UNKNOWNDEVICECONTROL_EQUALS_OFFSET UNITYSDK_OFFSET(0x7CEAC0)
#define INCONTROL_UNKNOWNDEVICECONTROL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CEBA0)
#define INCONTROL_UNKNOWNDEVICECONTROL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x7CEA90)
#define INCONTROL_UNKNOWNDEVICECONTROL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x7CEAA0)
#define INCONTROL_UNKNOWNDEVICECONTROL_LOAD_OFFSET UNITYSDK_OFFSET(0x7CEBD0)
#define INCONTROL_UNKNOWNDEVICECONTROL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC6B3B40)
#define INCONTROL_UNKNOWNDEVICECONTROL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xC6B44C0)
#define INCONTROL_UNKNOWNDEVICECONTROL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC6B4710)
#define INCONTROL_UNKNOWNDEVICECONTROL_SAVE_OFFSET UNITYSDK_OFFSET(0x7CEBC0)
#define INCONTROL_UNKNOWNDEVICECONTROL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CEBB0)

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceControl_TypeDefinitionIndex = 41788;

	struct alignas(4) UnknownDeviceControl
	{
		::InControl::InputControlType Control; // 0x10
		::InControl::InputRangeType SourceRange; // 0x14
		::System::Boolean IsButton; // 0x18
		::System::Boolean IsAnalog; // 0x19
		static ::InControl::UnknownDeviceControl* StaticGet_None()
		{
			return (::InControl::UnknownDeviceControl*)UnitySDK::FromName("InControl", "UnknownDeviceControl")->GetStaticField(0x14DC0);
		}

		::System::Void _ctor(::InControl::InputControlType a1, ::InControl::InputRangeType a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_CCTOR_OFFSET))();
		}

		::System::Single GetValue(::InControl::InputDevice* a1)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_GETVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_GET_INDEX_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::InControl::UnknownDeviceControl a1, ::InControl::UnknownDeviceControl a2)
		{
			return ((::System::Boolean(*)(::InControl::UnknownDeviceControl, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::InControl::UnknownDeviceControl a1, ::InControl::UnknownDeviceControl a2)
		{
			return ((::System::Boolean(*)(::InControl::UnknownDeviceControl, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::InControl::UnknownDeviceControl a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::InControl::UnknownDeviceControl a1)
		{
			return ((::System::Boolean(*)(::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_TOSTRING_OFFSET))(this);
		}

		::System::Void Save(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_SAVE_OFFSET))(this, a1);
		}

		::System::Void Load(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_LOAD_OFFSET))(this, a1);
		}

	};
}
