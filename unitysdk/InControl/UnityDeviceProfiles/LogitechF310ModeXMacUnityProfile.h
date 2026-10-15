#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD0480)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BACF1B0)

namespace InControl::UnityDeviceProfiles
{
	class LogitechF310ModeXMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
