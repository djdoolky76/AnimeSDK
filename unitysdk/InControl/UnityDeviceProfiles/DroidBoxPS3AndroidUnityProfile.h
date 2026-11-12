#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_DROIDBOXPS3ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC20D60)
#define INCONTROL_UNITYDEVICEPROFILES_DROIDBOXPS3ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC1FB00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int DroidBoxPS3AndroidUnityProfile_TypeDefinitionIndex = 41918;

	class DroidBoxPS3AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_DROIDBOXPS3ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_DROIDBOXPS3ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
