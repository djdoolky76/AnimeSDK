#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESHOWLOWTIMEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x1245F0C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESHOWLOWTIMEANIMATION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1245F000)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESHOWLOWTIMEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1245F260)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SummerTideTreasureShowLowTimeAnimation_TypeDefinitionIndex = 90694;

	class LD_SummerTideTreasureShowLowTimeAnimation : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESHOWLOWTIMEANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESHOWLOWTIMEANIMATION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Play(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESHOWLOWTIMEANIMATION_PLAY_OFFSET))(this, f);
		}
	};
}
