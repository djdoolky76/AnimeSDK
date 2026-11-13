#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SWITCHPROCONTROLLERMFINATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x156113D0)
#define INCONTROL_NATIVEDEVICEPROFILES_SWITCHPROCONTROLLERMFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x156100E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SwitchProControllerMFiNativeProfile_TypeDefinitionIndex = 42225;

	class SwitchProControllerMFiNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SWITCHPROCONTROLLERMFINATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SWITCHPROCONTROLLERMFINATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
