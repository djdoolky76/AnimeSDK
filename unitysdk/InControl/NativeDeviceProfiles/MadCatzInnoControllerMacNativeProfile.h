#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZINNOCONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FD1BC0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZINNOCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FD1B40)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzInnoControllerMacNativeProfile_TypeDefinitionIndex = 42150;

	class MadCatzInnoControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZINNOCONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZINNOCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
