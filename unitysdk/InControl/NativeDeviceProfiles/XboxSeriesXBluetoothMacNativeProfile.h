#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBED7F0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBEC830)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxSeriesXBluetoothMacNativeProfile_TypeDefinitionIndex = 42251;

	class XboxSeriesXBluetoothMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
