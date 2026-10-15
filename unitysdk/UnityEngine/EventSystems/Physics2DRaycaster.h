#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/PhysicsRaycaster.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D4800)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1F4D4820)

namespace UnityEngine::EventSystems
{
	class Physics2DRaycaster : public ::UnityEngine::EventSystems::PhysicsRaycaster
	{
	public:
		::Il2CppArray<::UnityEngine::RaycastHit2D>* m_Hits; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_CTOR_OFFSET))(this);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_RAYCAST_OFFSET))(this, a1, a2);
		}

	};
}
