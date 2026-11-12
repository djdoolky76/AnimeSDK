#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERSERVALWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC5EA0)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERSERVALWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBC4E40)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerServalWindowsNativeProfile_TypeDefinitionIndex = 42296;

	class RazerServalWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERSERVALWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERSERVALWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
