#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class ENGKPGFGGLM;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ADDLISTENHPABILITY_OFFSET UNITYSDK_OFFSET(0x180DD2B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x180DD420)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x180DD190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x180DE1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x180DD820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x180DD880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0x180DD240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONPROPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x180DD8F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x180DC9D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_START_OFFSET UNITYSDK_OFFSET(0x180DCB70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x180DD620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x180DD110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x180DE520)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x180DE560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x180DE5B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x180DE5C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenMonsterHpChangeNode_TypeDefinitionIndex = 56056;

	class LDListenMonsterHpChangeNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Single>* highToValuePercnetInput; // 0xB0
		::FlowCanvas::FlowOutput* onHighToValueOutPut; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* lowToValuePercentInput; // 0xC0
		::UnityEngine::Coroutine* coroutine; // 0xC8
		::FlowCanvas::FlowOutput* onLowToValueOutPut; // 0xD0
		::FlowCanvas::FlowOutput* outPut; // 0xD8
		::System::Boolean isStart; // 0xE0
		::System::Boolean bindEvent; // 0xE1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_START_OFFSET))(this);
		}

		::System::Void OnHostChanged(::System::UInt32 hostPeerID, ::System::Boolean isNewHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONHOSTCHANGED_OFFSET))(this, hostPeerID, isNewHost);
		}

		::System::Void EntityOnReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ENTITYONREADY_OFFSET))(this, entity);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void AddListenHpAbility(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ADDLISTENHPABILITY_OFFSET))(this, entity);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WaitAuthorityNotifyCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET))(this);
		}

		::System::Void OnPropValueChange(::MoleMole::Battle::Entity* monster, ::System::Double oldValue, ::System::Double newValue, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONPROPVALUECHANGE_OFFSET))(this, monster, oldValue, newValue, max);
		}

		::System::Void OnEvent(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONEVENT_OFFSET))(this, evt);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__REGISTERPORTS_B__9_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
