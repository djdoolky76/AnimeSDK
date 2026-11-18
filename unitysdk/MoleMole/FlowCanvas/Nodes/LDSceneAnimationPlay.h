#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONPLAY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x130D02A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x130D0410)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONPLAY__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x130D0450)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSceneAnimationPlay_TypeDefinitionIndex = 62258;

	class LDSceneAnimationPlay : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsLoop; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* AnimationStartFrame; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* SceneDynamicKey; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* AnimationEndFrame; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsResume; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONPLAY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONPLAY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEANIMATIONPLAY__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
