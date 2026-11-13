#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC80E0)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC6F30)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeDMacNativeProfile_TypeDefinitionIndex = 42234;

	class LogitechF310ModeDMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
