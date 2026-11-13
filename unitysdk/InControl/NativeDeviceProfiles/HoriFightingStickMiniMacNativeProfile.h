#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKMINIMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC5560)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKMINIMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC54E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriFightingStickMiniMacNativeProfile_TypeDefinitionIndex = 42108;

	class HoriFightingStickMiniMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKMINIMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKMINIMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
