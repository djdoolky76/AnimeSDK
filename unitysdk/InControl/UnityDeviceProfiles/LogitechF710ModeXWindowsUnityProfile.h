#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEXWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC635790)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEXWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC634510)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ModeXWindowsUnityProfile_TypeDefinitionIndex = 42052;

	class LogitechF710ModeXWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEXWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEXWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
