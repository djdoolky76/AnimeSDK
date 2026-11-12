#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MKKLASSIKFIGHTSTICKMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAC600)
#define INCONTROL_NATIVEDEVICEPROFILES_MKKLASSIKFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBAC580)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MKKlassikFightStickMacNativeProfile_TypeDefinitionIndex = 42136;

	class MKKlassikFightStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MKKLASSIKFIGHTSTICKMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MKKLASSIKFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
