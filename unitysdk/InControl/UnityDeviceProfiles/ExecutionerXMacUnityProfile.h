#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC601BF0)
#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC600960)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int ExecutionerXMacUnityProfile_TypeDefinitionIndex = 41988;

	class ExecutionerXMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
