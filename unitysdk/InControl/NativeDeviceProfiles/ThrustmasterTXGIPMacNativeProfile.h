#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTXGIPMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA552A0)
#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTXGIPMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA55220)

namespace InControl::NativeDeviceProfiles
{
	class ThrustmasterTXGIPMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTXGIPMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTXGIPMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
