#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FBF3C0)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FBEA20)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30MacNativeProfile_TypeDefinitionIndex = 42232;

	class EightBitdoSNES30MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
