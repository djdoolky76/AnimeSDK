#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D7540)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE_ISCOULDOUTCALL_OFFSET UNITYSDK_OFFSET(0x139D7820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x139D7870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x139D7890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE___BASE_ISCOULDOUTCALL_OFFSET UNITYSDK_OFFSET(0x139D7930)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangeBehaviorTreeNode_TypeDefinitionIndex = 69504;

	class LDChangeBehaviorTreeNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* behaviorTreePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE_INVOKE_OFFSET))(this, entity, behaviorTreePath);
		}

		::System::Boolean IsCouldOutCall(::FlowCanvas::FlowOutput* output)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE_ISCOULDOUTCALL_OFFSET))(this, output);
		}

		::System::Void _Invoke_b__0_0(::System::UInt32 u, ::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE__INVOKE_B__0_0_OFFSET))(this, u, b);
		}

		::System::Boolean __base_IsCouldOutCall(::FlowCanvas::FlowOutput* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEBEHAVIORTREENODE___BASE_ISCOULDOUTCALL_OFFSET))(this, P0);
		}
	};
}
