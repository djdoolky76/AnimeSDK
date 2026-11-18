#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x162C7660)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO_START_OFFSET UNITYSDK_OFFSET(0x162C7740)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x162C7920)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO__START_B__3_0_OFFSET UNITYSDK_OFFSET(0x162C7960)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int PlaySummerShootingOpeningAudio_TypeDefinitionIndex = 73449;

	class PlaySummerShootingOpeningAudio : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _finish; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO_START_OFFSET))(this, flow);
		}

		::System::Void _Start_b__3_0(::System::UInt32 arg1, ::System::UInt32 arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO__START_B__3_0_OFFSET))(this, arg1, arg2);
		}
	};
}
