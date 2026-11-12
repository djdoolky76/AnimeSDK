#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_MACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF970)
#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBDF8B0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XTR_G2_MacNativeProfile_TypeDefinitionIndex = 42246;

	class XTR_G2_MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_MACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
