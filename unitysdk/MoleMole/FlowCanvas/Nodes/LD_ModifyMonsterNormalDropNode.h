#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class ANCDDPFOGLP;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13579E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1357A1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__GETENTITYFIGHTERDATA_OFFSET UNITYSDK_OFFSET(0x13579FE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1357A200)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1357A490)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ModifyMonsterNormalDropNode_TypeDefinitionIndex = 81831;

	class LD_ModifyMonsterNormalDropNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _modifyNormalDrop; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _inputEntity; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isReplace; // 0xB8
		::FlowCanvas::FlowOutput* _flowOutput; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE_REGISTERPORTS_OFFSET))(this);
		}

		::ANCDDPFOGLP* _GetEntityFighterData()
		{
			return ((::ANCDDPFOGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__GETENTITYFIGHTERDATA_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__4_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__REGISTERPORTS_B__4_1_OFFSET))(this, flow);
		}
	};
}
