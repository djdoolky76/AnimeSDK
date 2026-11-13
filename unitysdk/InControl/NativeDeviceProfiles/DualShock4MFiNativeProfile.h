#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FB7C20)
#define INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FB6940)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int DualShock4MFiNativeProfile_TypeDefinitionIndex = 42224;

	class DualShock4MFiNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
