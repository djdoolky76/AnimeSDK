#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_VALVESTREAMINGWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBCB00)
#define INCONTROL_UNITYDEVICEPROFILES_VALVESTREAMINGWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCBB890)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int ValveStreamingWindowsUnityProfile_TypeDefinitionIndex = 42072;

	class ValveStreamingWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_VALVESTREAMINGWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_VALVESTREAMINGWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
