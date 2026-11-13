#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPMARVELCONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155EBB30)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPMARVELCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155EBAB0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPMarvelControllerMacNativeProfile_TypeDefinitionIndex = 42178;

	class PDPMarvelControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPMARVELCONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPMARVELCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
