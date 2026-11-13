#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FCED20)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FCDB70)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ModeDMacNativeProfile_TypeDefinitionIndex = 42236;

	class LogitechF710ModeDMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
