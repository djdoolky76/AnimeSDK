#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A8E9210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E92F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A8E9330)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDIsStoryMode_TypeDefinitionIndex = 83286;

	class LDIsStoryMode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* trueOutput; // 0xA8
		::FlowCanvas::FlowOutput* falseOutput; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::FlowInput* input; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
