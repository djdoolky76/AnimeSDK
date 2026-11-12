#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDFB20)
#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBDFA60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XTR_G2_WindowsNativeProfile_TypeDefinitionIndex = 42300;

	class XTR_G2_WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
