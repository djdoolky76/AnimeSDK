#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERSERVALWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155F9CA0)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERSERVALWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155F8C40)

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
