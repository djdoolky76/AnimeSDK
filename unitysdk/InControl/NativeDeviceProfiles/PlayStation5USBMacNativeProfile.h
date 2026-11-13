#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155F4290)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155F2E60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5USBMacNativeProfile_TypeDefinitionIndex = 42241;

	class PlayStation5USBMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
