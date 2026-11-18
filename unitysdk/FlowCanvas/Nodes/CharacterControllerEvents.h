#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class ControllerColliderHit; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E7A9210)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1E7A9960)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1E7A9130)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E7A95F0)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1E7A97A0)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1E7A9880)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A99F0)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E7A9A40)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_1_OFFSET UNITYSDK_OFFSET(0x1E7A9A50)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_2_OFFSET UNITYSDK_OFFSET(0x1E7A9A80)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_3_OFFSET UNITYSDK_OFFSET(0x1E7A9AB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CharacterControllerEvents_TypeDefinitionIndex = 29448;

	class CharacterControllerEvents
	{
	public:
		::Il2CppArray<::System::Boolean>* wasGroundedMulti; // 0xC0
		::FlowCanvas::FlowOutput* onGrounded; // 0xC8
		::UnityEngine::CharacterController* receiver; // 0xD0
		::UnityEngine::ControllerColliderHit* hitInfo; // 0xD8
		::FlowCanvas::FlowOutput* onUnGrounded; // 0xE0
		::FlowCanvas::FlowOutput* onHit; // 0xE8
		::System::Boolean wasGrounded; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnControllerColliderHit(::ParadoxNotion::EventData_1<::UnityEngine::ControllerColliderHit*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::ControllerColliderHit*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, msg);
		}

		::UnityEngine::CharacterController* _RegisterPorts_b__9_0()
		{
			return ((::UnityEngine::CharacterController*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__9_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__9_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_2_OFFSET))(this);
		}

		::UnityEngine::ControllerColliderHit* _RegisterPorts_b__9_3()
		{
			return ((::UnityEngine::ControllerColliderHit*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_3_OFFSET))(this);
		}
	};
}
