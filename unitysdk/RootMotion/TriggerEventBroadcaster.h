#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define ROOTMOTION_TRIGGEREVENTBROADCASTER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1F1FAB20)
#define ROOTMOTION_TRIGGEREVENTBROADCASTER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1F1FAE00)
#define ROOTMOTION_TRIGGEREVENTBROADCASTER_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1F1FAC90)
#define ROOTMOTION_TRIGGEREVENTBROADCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1FAF70)

namespace RootMotion
{
	inline static constexpr unsigned int TriggerEventBroadcaster_TypeDefinitionIndex = 36929;

	class TriggerEventBroadcaster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_TRIGGEREVENTBROADCASTER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* collider)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + ROOTMOTION_TRIGGEREVENTBROADCASTER_ONTRIGGERENTER_OFFSET))(this, collider);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* collider)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + ROOTMOTION_TRIGGEREVENTBROADCASTER_ONTRIGGERSTAY_OFFSET))(this, collider);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* collider)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + ROOTMOTION_TRIGGEREVENTBROADCASTER_ONTRIGGEREXIT_OFFSET))(this, collider);
		}
	};
}
