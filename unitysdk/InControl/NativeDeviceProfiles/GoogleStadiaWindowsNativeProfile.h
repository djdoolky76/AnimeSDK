#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB9FCA0)
#define INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CB9E9E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaWindowsNativeProfile_TypeDefinitionIndex = 42280;

	class GoogleStadiaWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
