#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
namespace UnityEngine::EventSystems { class PhysicsRaycaster_RaycastHitComparer; }

#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD144F0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CD14480)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD144E0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PhysicsRaycaster_RaycastHitComparer_TypeDefinitionIndex = 6964;

	class PhysicsRaycaster_RaycastHitComparer : public ::System::Object
	{
	public:
		static ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer** StaticGet_instance()
		{
			return (::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer**)UnitySDK::FromName("UnityEngine.EventSystems", "RaycastHitComparer")->GetStaticField(0x2B4C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

	};
}
