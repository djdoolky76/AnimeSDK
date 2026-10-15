#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_KONAMIDANCEPADMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA19260)
#define INCONTROL_NATIVEDEVICEPROFILES_KONAMIDANCEPADMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA191E0)

namespace InControl::NativeDeviceProfiles
{
	class KonamiDancePadMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_KONAMIDANCEPADMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_KONAMIDANCEPADMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
