#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC695370)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC693FF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MacChromeUnityProfile_TypeDefinitionIndex = 42024;

	class Xbox360MacChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
