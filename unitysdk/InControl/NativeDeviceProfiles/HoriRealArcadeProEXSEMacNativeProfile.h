#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXSEMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA0CF0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXSEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBA0C70)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProEXSEMacNativeProfile_TypeDefinitionIndex = 42115;

	class HoriRealArcadeProEXSEMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXSEMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXSEMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
