#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONESBLUETOOTHMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE6A40)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONESBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBE5A70)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneSBluetoothMacNativeProfile_TypeDefinitionIndex = 42249;

	class XboxOneSBluetoothMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONESBLUETOOTHMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONESBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
