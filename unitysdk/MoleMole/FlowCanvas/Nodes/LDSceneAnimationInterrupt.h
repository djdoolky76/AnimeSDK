#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONINTERRUPT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16239560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONINTERRUPT__CTOR_OFFSET UNITYSDK_OFFSET(0x16239650)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONINTERRUPT__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x16239690)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSceneAnimationInterrupt_TypeDefinitionIndex = 84287;

	class LDSceneAnimationInterrupt : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* SceneDynamicKey; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONINTERRUPT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONINTERRUPT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONINTERRUPT__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
