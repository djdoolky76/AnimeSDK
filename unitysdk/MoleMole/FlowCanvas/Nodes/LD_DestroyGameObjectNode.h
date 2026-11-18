#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYGAMEOBJECTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11913730)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYGAMEOBJECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11913820)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYGAMEOBJECTNODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x11913860)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DestroyGameObjectNode_TypeDefinitionIndex = 85657;

	class LD_DestroyGameObjectNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::UnityEngine::GameObject*>* _inputObject; // 0xB0
		::System::Boolean isExecuted; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYGAMEOBJECTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYGAMEOBJECTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYGAMEOBJECTNODE__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
