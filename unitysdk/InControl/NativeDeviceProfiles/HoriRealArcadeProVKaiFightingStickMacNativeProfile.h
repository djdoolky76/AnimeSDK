#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVKAIFIGHTINGSTICKMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC5C10)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVKAIFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC5B50)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProVKaiFightingStickMacNativeProfile_TypeDefinitionIndex = 42119;

	class HoriRealArcadeProVKaiFightingStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVKAIFIGHTINGSTICKMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVKAIFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
