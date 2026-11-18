#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A7BD590)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BD670)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A7BD6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A7BD830)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnableBlackCurtainLate_TypeDefinitionIndex = 87833;

	class LDEnableBlackCurtainLate : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _onFinish; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::UnityEngine::AnimationCurve* curve; // 0xB8
		::System::Single duration; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__4_1(::DJDDGKFCNAJ_IGOPHLMOGAO _)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__REGISTERPORTS_B__4_1_OFFSET))(this, _);
		}
	};
}
