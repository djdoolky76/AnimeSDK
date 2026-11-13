#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E5100)
#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5E3E50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AndroidTVUnityProfile_TypeDefinitionIndex = 41913;

	class AndroidTVUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
