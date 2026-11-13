#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKVXMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC5630)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKVXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC5570)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriFightingStickVXMacNativeProfile_TypeDefinitionIndex = 42109;

	class HoriFightingStickVXMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKVXMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKVXMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
