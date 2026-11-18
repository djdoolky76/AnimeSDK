#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleCollisionEvent.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_ONPARTICLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1EB7E0B0)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7DD40)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EB7DEF0)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EB7DFD0)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7E310)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EB7E360)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1EB7E370)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0x1EB7E380)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_3_OFFSET UNITYSDK_OFFSET(0x1EB7E3C0)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_4_OFFSET UNITYSDK_OFFSET(0x1EB7E420)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParticleCollision2DEvents_TypeDefinitionIndex = 30421;

	class ParticleCollision2DEvents
	{
	public:
		::UnityEngine::Collider2D* receiver; // 0xC0
		::UnityEngine::ParticleSystem* particle; // 0xC8
		::FlowCanvas::FlowOutput* onCollision; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* collisionEvents; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnParticleCollision(::ParadoxNotion::EventData_1<::UnityEngine::GameObject*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::GameObject*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_ONPARTICLECOLLISION_OFFSET))(this, msg);
		}

		::UnityEngine::Collider2D* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* _RegisterPorts_b__4_1()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_2_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_3_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_4()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_4_OFFSET))(this);
		}
	};
}
