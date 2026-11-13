#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A6AD0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC6A5830)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindowsUnityProfile_TypeDefinitionIndex = 42078;

	class XboxOneWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
