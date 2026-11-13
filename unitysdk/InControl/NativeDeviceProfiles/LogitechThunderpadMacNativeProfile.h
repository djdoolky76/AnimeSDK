#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHTHUNDERPADMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FD1210)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHTHUNDERPADMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FD1190)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechThunderpadMacNativeProfile_TypeDefinitionIndex = 42135;

	class LogitechThunderpadMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHTHUNDERPADMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHTHUNDERPADMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
