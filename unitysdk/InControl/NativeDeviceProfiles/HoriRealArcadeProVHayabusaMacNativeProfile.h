#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVHAYABUSAMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA18100)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVHAYABUSAMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA18080)

namespace InControl::NativeDeviceProfiles
{
	class HoriRealArcadeProVHayabusaMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVHAYABUSAMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVHAYABUSAMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
