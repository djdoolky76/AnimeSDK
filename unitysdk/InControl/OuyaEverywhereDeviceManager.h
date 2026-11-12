#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceManager.h"

#define INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF8A90)
#define INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_ENABLE_OFFSET UNITYSDK_OFFSET(0x1CBF90B0)
#define INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CBF8D30)

namespace InControl
{
	inline static constexpr unsigned int OuyaEverywhereDeviceManager_TypeDefinitionIndex = 41849;

	class OuyaEverywhereDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		::Il2CppArray<::System::Boolean>* deviceConnected; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_UPDATE_OFFSET))(this, a1, a2);
		}

		static ::System::Void Enable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_ENABLE_OFFSET))();
		}

	};
}
