#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceManager.h"
namespace InControl { class InputDeviceProfile; }
namespace InControl { class UnityInputDevice; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET UNITYSDK_OFFSET(0x1CCDB070)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET UNITYSDK_OFFSET(0x1CCDC480)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICES_OFFSET UNITYSDK_OFFSET(0x1CCDB360)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET UNITYSDK_OFFSET(0x1CCDC080)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDAE90)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETACHDEVICES_OFFSET UNITYSDK_OFFSET(0x1CCDB750)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET UNITYSDK_OFFSET(0x1CCDC280)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTJOYSTICKDEVICE_OFFSET UNITYSDK_OFFSET(0x1CCDB840)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_GET_JOYSTICKINFOHASCHANGED_OFFSET UNITYSDK_OFFSET(0x1CCDB730)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_HASATTACHEDDEVICEWITHJOYSTICKID_OFFSET UNITYSDK_OFFSET(0x1CCDC120)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_QUERYJOYSTICKINFO_OFFSET UNITYSDK_OFFSET(0x1CCDB260)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_RELOADDEVICES_OFFSET UNITYSDK_OFFSET(0x1CCDBF70)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CCDB560)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDeviceManager_TypeDefinitionIndex = 41873;

	class UnityInputDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* customDeviceProfiles; // 0x18
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* systemDeviceProfiles; // 0x20
		::Il2CppArray<::System::String*>* joystickNames; // 0x28
		::System::Single deviceRefreshTimer; // 0x30
		::System::Int32 lastJoystickCount; // 0x34
		::System::Int32 joystickCount; // 0x38
		::System::Int32 lastJoystickHash; // 0x3C
		::System::Int32 joystickHash; // 0x40
		// static const ::System::Object deviceRefreshInterval; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void QueryJoystickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_QUERYJOYSTICKINFO_OFFSET))(this);
		}

		::System::Boolean get_JoystickInfoHasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_GET_JOYSTICKINFOHASCHANGED_OFFSET))(this);
		}

		::System::Void AttachDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICES_OFFSET))(this);
		}

		::System::Void DetachDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_DETACHDEVICES_OFFSET))(this);
		}

		::System::Void ReloadDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_RELOADDEVICES_OFFSET))(this);
		}

		::System::Void AttachDevice(::InControl::UnityInputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnityInputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET))(this, a1);
		}

		::System::Boolean HasAttachedDeviceWithJoystickId(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_HASATTACHEDDEVICEWITHJOYSTICKID_OFFSET))(this, a1);
		}

		::System::Void DetectJoystickDevice(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTJOYSTICKDEVICE_OFFSET))(this, a1, a2);
		}

		::InControl::InputDeviceProfile* DetectDevice(::System::String* a1)
		{
			return ((::InControl::InputDeviceProfile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET))(this, a1);
		}

		::System::Void AddSystemDeviceProfile(::InControl::InputDeviceProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET))(this, a1);
		}

		::System::Void AddSystemDeviceProfiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET))(this);
		}

	};
}
