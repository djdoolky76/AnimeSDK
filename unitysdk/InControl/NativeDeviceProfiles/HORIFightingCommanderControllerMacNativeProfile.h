#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERCONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC4B40)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC4AC0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HORIFightingCommanderControllerMacNativeProfile_TypeDefinitionIndex = 42094;

	class HORIFightingCommanderControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERCONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
