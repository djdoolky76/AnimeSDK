#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBEF70)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBBDD50)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5BluetoothWindowsNativeProfile_TypeDefinitionIndex = 42293;

	class PlayStation5BluetoothWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
