#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_A645DF7E01867164_BAD65B4A4D4FCB14_OFFSET UNITYSDK_OFFSET(0x43C6780)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_A645DF7E01867164__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventSystem_A645DF7E01867164_TypeDefinitionIndex = 18622;

	class EventSystem_A645DF7E01867164 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* AFC35720E16339E9; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_A645DF7E01867164__CTOR_OFFSET))(this);
		}

		::System::Void BAD65B4A4D4FCB14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_A645DF7E01867164_BAD65B4A4D4FCB14_OFFSET))(this);
		}
	};
}
