#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSF30PROWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FBC2F0)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSF30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FBB290)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSF30ProWindowsNativeProfile_TypeDefinitionIndex = 42274;

	class EightBitdoSF30ProWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSF30PROWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSF30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
