#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTSTICKMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA05C0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBA0540)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriFightStickMacNativeProfile_TypeDefinitionIndex = 42104;

	class HoriFightStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTSTICKMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
