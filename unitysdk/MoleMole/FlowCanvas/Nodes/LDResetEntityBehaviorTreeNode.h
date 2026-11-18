#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12453F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE_ISCOULDOUTCALL_OFFSET UNITYSDK_OFFSET(0x124541E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12454230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x12454250)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE___BASE_ISCOULDOUTCALL_OFFSET UNITYSDK_OFFSET(0x124542F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDResetEntityBehaviorTreeNode_TypeDefinitionIndex = 86494;

	class LDResetEntityBehaviorTreeNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE_INVOKE_OFFSET))(this, entity);
		}

		::System::Boolean IsCouldOutCall(::FlowCanvas::FlowOutput* flow)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE_ISCOULDOUTCALL_OFFSET))(this, flow);
		}

		::System::Void _Invoke_b__0_0(::System::UInt32 u, ::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE__INVOKE_B__0_0_OFFSET))(this, u, b);
		}

		::System::Boolean __base_IsCouldOutCall(::FlowCanvas::FlowOutput* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE___BASE_ISCOULDOUTCALL_OFFSET))(this, P0);
		}
	};
}
