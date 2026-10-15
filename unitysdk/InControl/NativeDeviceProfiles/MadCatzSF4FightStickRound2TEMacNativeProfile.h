#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKROUND2TEMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA261E0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKROUND2TEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA26160)

namespace InControl::NativeDeviceProfiles
{
	class MadCatzSF4FightStickRound2TEMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKROUND2TEMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKROUND2TEMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
