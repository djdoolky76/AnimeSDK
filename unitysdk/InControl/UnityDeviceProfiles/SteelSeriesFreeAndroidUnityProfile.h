#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB5900)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCB4670)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesFreeAndroidUnityProfile_TypeDefinitionIndex = 41963;

	class SteelSeriesFreeAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
