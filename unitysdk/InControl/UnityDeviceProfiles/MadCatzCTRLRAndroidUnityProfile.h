#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC63B840)
#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC63A670)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MadCatzCTRLRAndroidUnityProfile_TypeDefinitionIndex = 41944;

	class MadCatzCTRLRAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
