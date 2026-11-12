#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAD460)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBAD5D0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int Xbox360DriverMacNativeProfile_TypeDefinitionIndex = 42247;

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
