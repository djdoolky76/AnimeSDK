#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13577E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13577F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x13577F40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DestroyEffectNode_TypeDefinitionIndex = 68676;

	class LD_DestroyEffectNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _createdEffect; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::System::Boolean isExecuted; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
