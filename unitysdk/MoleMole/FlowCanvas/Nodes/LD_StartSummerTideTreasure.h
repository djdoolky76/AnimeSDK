#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE_PLAY_OFFSET UNITYSDK_OFFSET(0x16243010)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16242F50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE__CTOR_OFFSET UNITYSDK_OFFSET(0x162432F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartSummerTideTreasure_TypeDefinitionIndex = 67170;

	class LD_StartSummerTideTreasure : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Play(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE_PLAY_OFFSET))(this, f);
		}
	};
}
