#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRAMAZONUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC63A580)
#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC639310)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MadCatzCTRLRAmazonUnityProfile_TypeDefinitionIndex = 41905;

	class MadCatzCTRLRAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRAMAZONUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
