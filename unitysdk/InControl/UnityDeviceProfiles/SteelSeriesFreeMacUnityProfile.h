#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEMACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB7CE0)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCB6A90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesFreeMacUnityProfile_TypeDefinitionIndex = 42004;

	class SteelSeriesFreeMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEMACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
