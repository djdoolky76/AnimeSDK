#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E99D0ADA759D15E2.h"

#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_B603D012DBCCF804_E03C667100B161C9_OFFSET UNITYSDK_OFFSET(0x19D9F40)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_B603D012DBCCF804__CCTOR_OFFSET UNITYSDK_OFFSET(0x43BBD40)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_B603D012DBCCF804__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PhysicsRaycaster_B603D012DBCCF804_TypeDefinitionIndex = 18612;

	class PhysicsRaycaster_B603D012DBCCF804 : public ::System::Object
	{
	public:
		static ::UnityEngine::EventSystems::PhysicsRaycaster_B603D012DBCCF804** StaticGet_A0458A53BF9780BE()
		{
			return (::UnityEngine::EventSystems::PhysicsRaycaster_B603D012DBCCF804**)Il2CppClass::FromTypeDefinitionIndex(PhysicsRaycaster_B603D012DBCCF804_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Int32 E03C667100B161C9(::UnityEngine::E99D0ADA759D15E2 BB8C609F76620E45, ::UnityEngine::E99D0ADA759D15E2 A0A0D02932F12CFD)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::E99D0ADA759D15E2, ::UnityEngine::E99D0ADA759D15E2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_B603D012DBCCF804_E03C667100B161C9_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_B603D012DBCCF804__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_B603D012DBCCF804__CCTOR_OFFSET))();
		}
	};
}
