#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Graph.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ADD_ONROOTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4056D0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1E4058D0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_BASENODETYPE_OFFSET UNITYSDK_OFFSET(0x1E405870)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_CANACCEPTVARIABLEDROPS_OFFSET UNITYSDK_OFFSET(0x1E4058E0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_ISTREE_OFFSET UNITYSDK_OFFSET(0x1E4058C0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_REQUIRESAGENT_OFFSET UNITYSDK_OFFSET(0x1E4058A0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_REQUIRESPRIMENODE_OFFSET UNITYSDK_OFFSET(0x1E4058B0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_ROOTSTATUS_OFFSET UNITYSDK_OFFSET(0x1E4057F0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ONDERIVEDDATADESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E405630)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ONDERIVEDDATASERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E4055C0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1E4058F0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ONGRAPHUPDATE_OFFSET UNITYSDK_OFFSET(0x1E405980)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_REMOVE_ONROOTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1E405760)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_SET_ROOTSTATUS_OFFSET UNITYSDK_OFFSET(0x1E405800)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_TICK_OFFSET UNITYSDK_OFFSET(0x1E405A30)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E405B30)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BehaviourTree_TypeDefinitionIndex = 30103;

	class BehaviourTree : public ::NodeCanvas::Framework::Graph
	{
	public:
		static ::System::Action_2<::NodeCanvas::BehaviourTrees::BehaviourTree*, ::NodeCanvas::Framework::Status>** StaticGet_onRootStatusChanged()
		{
			return (::System::Action_2<::NodeCanvas::BehaviourTrees::BehaviourTree*, ::NodeCanvas::Framework::Status>**)Il2CppClass::FromTypeDefinitionIndex(BehaviourTree_TypeDefinitionIndex)->GetStaticField(0x26850);
		}
		::System::Boolean repeat; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Single updateInterval; // 0xC4
		::System::Single intervalCounter; // 0xC8
		::NodeCanvas::Framework::Status _rootStatus; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE__CTOR_OFFSET))(this);
		}

		::System::Object* OnDerivedDataSerialization()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ONDERIVEDDATASERIALIZATION_OFFSET))(this);
		}

		::System::Void OnDerivedDataDeserialization(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ONDERIVEDDATADESERIALIZATION_OFFSET))(this, data);
		}

		static ::System::Void add_onRootStatusChanged(::System::Action_2<::NodeCanvas::BehaviourTrees::BehaviourTree*, ::NodeCanvas::Framework::Status>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::NodeCanvas::BehaviourTrees::BehaviourTree*, ::NodeCanvas::Framework::Status>*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ADD_ONROOTSTATUSCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_onRootStatusChanged(::System::Action_2<::NodeCanvas::BehaviourTrees::BehaviourTree*, ::NodeCanvas::Framework::Status>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::NodeCanvas::BehaviourTrees::BehaviourTree*, ::NodeCanvas::Framework::Status>*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_REMOVE_ONROOTSTATUSCHANGED_OFFSET))(value);
		}

		::NodeCanvas::Framework::Status get_rootStatus()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_ROOTSTATUS_OFFSET))(this);
		}

		::System::Void set_rootStatus(::NodeCanvas::Framework::Status value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Status))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_SET_ROOTSTATUS_OFFSET))(this, value);
		}

		::System::Type* get_baseNodeType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_BASENODETYPE_OFFSET))(this);
		}

		::System::Boolean get_requiresAgent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_REQUIRESAGENT_OFFSET))(this);
		}

		::System::Boolean get_requiresPrimeNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_REQUIRESPRIMENODE_OFFSET))(this);
		}

		::System::Boolean get_isTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_ISTREE_OFFSET))(this);
		}

		::System::Boolean get_allowBlackboardOverrides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET))(this);
		}

		::System::Boolean get_canAcceptVariableDrops()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_GET_CANACCEPTVARIABLEDROPS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_ONGRAPHUPDATE_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status Tick(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_TICK_OFFSET))(this, agent, blackboard);
		}
	};
}
