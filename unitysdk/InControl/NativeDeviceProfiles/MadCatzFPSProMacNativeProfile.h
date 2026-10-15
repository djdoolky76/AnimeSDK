#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFPSPROMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA23DE0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFPSPROMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA23D60)

namespace InControl::NativeDeviceProfiles
{
	class MadCatzFPSProMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFPSPROMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFPSPROMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
