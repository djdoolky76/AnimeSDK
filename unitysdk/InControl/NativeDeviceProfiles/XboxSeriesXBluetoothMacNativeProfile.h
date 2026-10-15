#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA64A50)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA63A90)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxSeriesXBluetoothMacNativeProfile_TypeDefinitionIndex = 41276;

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
