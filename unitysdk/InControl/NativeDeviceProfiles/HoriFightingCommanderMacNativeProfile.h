#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC5330)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC5270)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriFightingCommanderMacNativeProfile_TypeDefinitionIndex = 42105;

	class HoriFightingCommanderMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
