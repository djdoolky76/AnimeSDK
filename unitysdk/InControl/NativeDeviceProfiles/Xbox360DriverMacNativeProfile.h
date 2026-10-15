#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA246C0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA24830)

namespace InControl::NativeDeviceProfiles
{
	class Xbox360DriverMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
