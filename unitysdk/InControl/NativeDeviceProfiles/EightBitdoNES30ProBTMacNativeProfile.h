#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROBTMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FB8E60)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROBTMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FB7DA0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProBTMacNativeProfile_TypeDefinitionIndex = 42229;

	class EightBitdoNES30ProBTMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROBTMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROBTMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
