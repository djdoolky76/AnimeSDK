#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDevice.h"
namespace InControl { class InputDeviceProfile; }
namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_UNITYINPUTDEVICE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB510C0)
#define INCONTROL_UNITYINPUTDEVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB510B0)
#define INCONTROL_UNITYINPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x1BB51E30)
#define INCONTROL_UNITYINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x1BB52270)
#define INCONTROL_UNITYINPUTDEVICE_GET_JOYSTICKID_OFFSET UNITYSDK_OFFSET(0x1BB51090)
#define INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x1BB51E50)
#define INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x1BB51E40)
#define INCONTROL_UNITYINPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x1BB52200)
#define INCONTROL_UNITYINPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1BB52190)
#define INCONTROL_UNITYINPUTDEVICE_SETUPANALOGQUERIES_OFFSET UNITYSDK_OFFSET(0x1BB51980)
#define INCONTROL_UNITYINPUTDEVICE_SETUPBUTTONQUERIES_OFFSET UNITYSDK_OFFSET(0x1BB51AC0)
#define INCONTROL_UNITYINPUTDEVICE_SET_JOYSTICKID_OFFSET UNITYSDK_OFFSET(0x1BB510A0)
#define INCONTROL_UNITYINPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BB51E60)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDevice_TypeDefinitionIndex = 40897;

	class UnityInputDevice : public ::InControl::InputDevice
	{
	public:
		::InControl::InputDeviceProfile* profile; // 0x198
		::System::Int32 _JoystickId_k__BackingField; // 0x1A0
		static ::System::Object** StaticGet_buttonQueries()
		{
			return (::System::Object**)UnitySDK::FromName("InControl", "UnityInputDevice")->GetStaticField(0xF8F0);
		}

		static ::System::Object** StaticGet_analogQueries()
		{
			return (::System::Object**)UnitySDK::FromName("InControl", "UnityInputDevice")->GetStaticField(0xF8F8);
		}

		// static const ::System::Object MaxDevices; // 0x0
		// static const ::System::Object MaxButtons; // 0x0
		// static const ::System::Object MaxAnalogs; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::InControl::InputDeviceProfile* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfile*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_JoystickId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_JOYSTICKID_OFFSET))(this);
		}

		::System::Void set_JoystickId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SET_JOYSTICKID_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_UPDATE_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetupAnalogQueries()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SETUPANALOGQUERIES_OFFSET))();
		}

		static ::System::Void SetupButtonQueries()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SETUPBUTTONQUERIES_OFFSET))();
		}

		::System::Boolean ReadRawButtonState(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, a1);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSupportedOnThisPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET))(this);
		}

		::System::Boolean get_IsKnown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_ISKNOWN_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownButtons()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownAnalogs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET))(this);
		}

	};
}
