#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GENERICBLACKBERRYUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC41FF0)
#define INCONTROL_UNITYDEVICEPROFILES_GENERICBLACKBERRYUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC40D70)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GenericBlackBerryUnityProfile_TypeDefinitionIndex = 42014;

	class GenericBlackBerryUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICBLACKBERRYUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICBLACKBERRYUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
