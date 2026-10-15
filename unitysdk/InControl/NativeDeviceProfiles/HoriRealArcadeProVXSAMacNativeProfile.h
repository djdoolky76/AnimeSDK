#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXSAMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA18330)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXSAMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA18270)

namespace InControl::NativeDeviceProfiles
{
	class HoriRealArcadeProVXSAMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXSAMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXSAMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
