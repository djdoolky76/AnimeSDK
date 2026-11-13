#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5FC3F0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5FBAE0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSFC30AndroidUnityProfile_TypeDefinitionIndex = 41926;

	class EightBitdoSFC30AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
