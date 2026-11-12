#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB90750)
#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CB8FE60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicWindowsNativeProfile_TypeDefinitionIndex = 42272;

	class BuffaloClassicWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
