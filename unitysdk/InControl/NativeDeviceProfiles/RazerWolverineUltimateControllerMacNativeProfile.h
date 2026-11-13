#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERWOLVERINEULTIMATECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155FA0F0)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERWOLVERINEULTIMATECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155FA070)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerWolverineUltimateControllerMacNativeProfile_TypeDefinitionIndex = 42201;

	class RazerWolverineUltimateControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERWOLVERINEULTIMATECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERWOLVERINEULTIMATECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
