#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXGUITARMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC4C60)
#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXGUITARMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC4BE0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HarmonixGuitarMacNativeProfile_TypeDefinitionIndex = 42096;

	class HarmonixGuitarMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HARMONIXGUITARMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HARMONIXGUITARMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
