#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlSource.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDevice.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace InControl { class InputDeviceProfile; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INCONTROL_NATIVEINPUTDEVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x15624DC0)
#define INCONTROL_NATIVEINPUTDEVICE_FLOATTOBYTE_OFFSET UNITYSDK_OFFSET(0x156264C0)
#define INCONTROL_NATIVEINPUTDEVICE_GETAPPLEGLYPHNAMEFORCONTROL_OFFSET UNITYSDK_OFFSET(0x15626570)
#define INCONTROL_NATIVEINPUTDEVICE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x15624D40)
#define INCONTROL_NATIVEINPUTDEVICE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x15624D60)
#define INCONTROL_NATIVEINPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x156253B0)
#define INCONTROL_NATIVEINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x15626A50)
#define INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x15626A80)
#define INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x15626A70)
#define INCONTROL_NATIVEINPUTDEVICE_GET_PROFILENAME_OFFSET UNITYSDK_OFFSET(0x15626970)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMELOCATION_OFFSET UNITYSDK_OFFSET(0x156268F0)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEPRODUCTID_OFFSET UNITYSDK_OFFSET(0x156268D0)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMESERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x15626930)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEVENDORID_OFFSET UNITYSDK_OFFSET(0x156268C0)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x156268E0)
#define INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x15625420)
#define INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15624E60)
#define INCONTROL_NATIVEINPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x15626470)
#define INCONTROL_NATIVEINPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x15626430)
#define INCONTROL_NATIVEINPUTDEVICE_SENDSTATUSUPDATES_OFFSET UNITYSDK_OFFSET(0x15625C50)
#define INCONTROL_NATIVEINPUTDEVICE_SETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x15626530)
#define INCONTROL_NATIVEINPUTDEVICE_SETLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x15626550)
#define INCONTROL_NATIVEINPUTDEVICE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x15624D50)
#define INCONTROL_NATIVEINPUTDEVICE_SET_INFO_OFFSET UNITYSDK_OFFSET(0x15624D90)
#define INCONTROL_NATIVEINPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15625460)
#define INCONTROL_NATIVEINPUTDEVICE_VIBRATETRIGGERS_OFFSET UNITYSDK_OFFSET(0x15626510)
#define INCONTROL_NATIVEINPUTDEVICE_VIBRATE_OFFSET UNITYSDK_OFFSET(0x156264F0)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDevice_TypeDefinitionIndex = 41841;

	class NativeInputDevice : public ::InControl::InputDevice
	{
	public:
		::InControl::InputDeviceInfo _Info_k__BackingField; // 0x198
		::Il2CppArray<::System::Int16>* analogs; // 0x1C8
		::Il2CppArray<::System::Int16>* buttons; // 0x1D0
		::System::Text::StringBuilder* glyphName; // 0x1D8
		::Il2CppArray<::InControl::InputControlSource>* controlSourceByTarget; // 0x1E0
		::InControl::InputDeviceProfile* profile; // 0x1E8
		::UnityEngine::Vector2 vibrateToSend; // 0x1F0
		::System::Int32 skipUpdateFrames; // 0x1F8
		::System::Single lastTimeLightColorWasSent; // 0x1FC
		::System::Single lastTimeVibrateWasSent; // 0x200
		::System::Int32 numUnknownButtons; // 0x204
		::UnityEngine::Vector3 lightColorToSend; // 0x208
		::System::Boolean sendVibrateTriggers; // 0x214
		::System::Boolean sendLightFlash; // 0x215
		::System::Boolean sendLightColor; // 0x216
		::System::Boolean sendVibrate; // 0x217
		::System::Int32 numUnknownAnalogs; // 0x218
		::System::Single lastTimeLightFlashWasSent; // 0x21C
		::UnityEngine::Vector2 lightFlashToSend; // 0x220
		::System::UInt32 _Handle_k__BackingField; // 0x228
		::UnityEngine::Vector2 vibrateTriggersToSend; // 0x22C
		::System::Single lastTimeVibrateTriggersWasSent; // 0x234
		// static const ::System::Object maxUnknownButtons; // 0x0
		// static const ::System::Object maxUnknownAnalogs; // 0x0
		// static const ::System::String* defaultGlyphName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Handle()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SET_HANDLE_OFFSET))(this, a1);
		}

		::InControl::InputDeviceInfo get_Info()
		{
			return ((::InControl::InputDeviceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_INFO_OFFSET))(this);
		}

		::System::Void set_Info(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SET_INFO_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::UInt32 a1, ::InControl::InputDeviceInfo a2, ::InControl::InputDeviceProfile* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::InControl::InputDeviceInfo, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Initialize_1(::System::UInt32 a1, ::InControl::InputDeviceInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_1_OFFSET))(this, a1, a2);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReadRawButtonState(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, a1);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, a1);
		}

		static ::System::Byte FloatToByte(::System::Single a1)
		{
			return ((::System::Byte(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_FLOATTOBYTE_OFFSET))(a1);
		}

		::System::Void Vibrate(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_VIBRATE_OFFSET))(this, a1, a2);
		}

		::System::Void VibrateTriggers(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_VIBRATETRIGGERS_OFFSET))(this, a1, a2);
		}

		::System::Void SetLightColor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SETLIGHTCOLOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLightFlash(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SETLIGHTFLASH_OFFSET))(this, a1, a2);
		}

		::System::Void SendStatusUpdates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SENDSTATUSUPDATES_OFFSET))(this);
		}

		::System::String* GetAppleGlyphNameForControl(::InControl::InputControlType a1)
		{
			return ((::System::String*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GETAPPLEGLYPHNAMEFORCONTROL_OFFSET))(this, a1);
		}

		::System::Boolean HasSameVendorID(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEVENDORID_OFFSET))(this, a1);
		}

		::System::Boolean HasSameProductID(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEPRODUCTID_OFFSET))(this, a1);
		}

		::System::Boolean HasSameVersionNumber(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEVERSIONNUMBER_OFFSET))(this, a1);
		}

		::System::Boolean HasSameLocation(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMELOCATION_OFFSET))(this, a1);
		}

		::System::Boolean HasSameSerialNumber(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMESERIALNUMBER_OFFSET))(this, a1);
		}

		::System::String* get_ProfileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_PROFILENAME_OFFSET))(this);
		}

		::System::Boolean get_IsSupportedOnThisPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET))(this);
		}

		::System::Boolean get_IsKnown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_ISKNOWN_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownButtons()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownAnalogs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET))(this);
		}

	};
}
