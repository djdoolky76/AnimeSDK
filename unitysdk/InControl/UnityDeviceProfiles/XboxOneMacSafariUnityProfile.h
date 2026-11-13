#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A0960)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC69F880)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacSafariUnityProfile_TypeDefinitionIndex = 42029;

	class XboxOneMacSafariUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
