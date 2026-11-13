#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3WINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC666910)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC665600)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3WindowsUnityProfile_TypeDefinitionIndex = 42066;

	class PlayStation3WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3WINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
