#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI_PROCESS_OFFSET UNITYSDK_OFFSET(0x130CFFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x130CFEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI__CTOR_OFFSET UNITYSDK_OFFSET(0x130D0230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x130D0270)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReplaceGlobalAI_TypeDefinitionIndex = 69023;

	class LDReplaceGlobalAI : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* paramInput; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
