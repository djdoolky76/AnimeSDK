#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class DeviceManager; }
namespace System { class String; }

#define MIHOYO_SDK_DEVICEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xAF774A0)
#define MIHOYO_SDK_DEVICEMANAGER_CHECKINVALIDDEVICEID_OFFSET UNITYSDK_OFFSET(0xAF773B0)
#define MIHOYO_SDK_DEVICEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xAF771A0)
#define MIHOYO_SDK_DEVICEMANAGER_GETDEVICEID_OFFSET UNITYSDK_OFFSET(0xAF761D0)
#define MIHOYO_SDK_DEVICEMANAGER_ONDEVICEIDREADY_OFFSET UNITYSDK_OFFSET(0xAF77250)
#define MIHOYO_SDK_DEVICEMANAGER_SETDEVICEID_OFFSET UNITYSDK_OFFSET(0xAF771B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DeviceManager_TypeDefinitionIndex = 46288;

	class DeviceManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DeviceManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DeviceManager**)UnitySDK::FromName("MiHoYo.SDK", "DeviceManager")->GetStaticField(0x1EEB0);
		}

		// static const ::System::String* DEVICE_ID; // 0x0
		// static const ::System::String* REGISTRY_KEY_NAME; // 0x0
		// static const ::System::String* SOFTWARE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_CCTOR_OFFSET))();
		}

		::System::Void SetDeviceID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_SETDEVICEID_OFFSET))(this, a1);
		}

		::System::String* GetDeviceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_GETDEVICEID_OFFSET))(this);
		}

		::System::Void OnDeviceIDReady(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_ONDEVICEIDREADY_OFFSET))(this, a1);
		}

		::System::Boolean CheckInvalidDeviceID(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEMANAGER_CHECKINVALIDDEVICEID_OFFSET))(this, a1);
		}

	};
}
