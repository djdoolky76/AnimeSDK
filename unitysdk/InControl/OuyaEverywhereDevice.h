#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDevice.h"

#define INCONTROL_OUYAEVERYWHEREDEVICE_BEFOREATTACH_OFFSET UNITYSDK_OFFSET(0x1562C890)
#define INCONTROL_OUYAEVERYWHEREDEVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1562C620)
#define INCONTROL_OUYAEVERYWHEREDEVICE_GET_DEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x1562C600)
#define INCONTROL_OUYAEVERYWHEREDEVICE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1562C8B0)
#define INCONTROL_OUYAEVERYWHEREDEVICE_SET_DEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x1562C610)
#define INCONTROL_OUYAEVERYWHEREDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1562C8A0)

namespace InControl
{
	inline static constexpr unsigned int OuyaEverywhereDevice_TypeDefinitionIndex = 41848;

	class OuyaEverywhereDevice : public ::InControl::InputDevice
	{
	public:
		::System::Int32 _DeviceIndex_k__BackingField; // 0x198
		// static const ::System::Object LowerDeadZone; // 0x0
		// static const ::System::Object UpperDeadZone; // 0x0
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_DeviceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_GET_DEVICEINDEX_OFFSET))(this);
		}

		::System::Void set_DeviceIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_SET_DEVICEINDEX_OFFSET))(this, a1);
		}

		::System::Void BeforeAttach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_BEFOREATTACH_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_GET_ISCONNECTED_OFFSET))(this);
		}

	};
}
