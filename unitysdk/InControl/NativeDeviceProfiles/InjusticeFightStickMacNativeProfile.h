#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_INJUSTICEFIGHTSTICKMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC5F20)
#define INCONTROL_NATIVEDEVICEPROFILES_INJUSTICEFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC5EA0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int InjusticeFightStickMacNativeProfile_TypeDefinitionIndex = 42124;

	class InjusticeFightStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_INJUSTICEFIGHTSTICKMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_INJUSTICEFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
