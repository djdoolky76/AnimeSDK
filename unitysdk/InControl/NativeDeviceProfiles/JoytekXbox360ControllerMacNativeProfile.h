#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_JOYTEKXBOX360CONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA13A0)
#define INCONTROL_NATIVEDEVICEPROFILES_JOYTEKXBOX360CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBA1320)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int JoytekXbox360ControllerMacNativeProfile_TypeDefinitionIndex = 42126;

	class JoytekXbox360ControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_JOYTEKXBOX360CONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_JOYTEKXBOX360CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
