#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIEDGEFIGHTINGSTICKMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA17790)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIEDGEFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA17710)

namespace InControl::NativeDeviceProfiles
{
	class HoriEdgeFightingStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIEDGEFIGHTINGSTICKMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIEDGEFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
