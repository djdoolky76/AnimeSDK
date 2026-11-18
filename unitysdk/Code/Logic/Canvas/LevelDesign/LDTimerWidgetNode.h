#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class AGJFDPBLDDF;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_BEGIN_OFFSET UNITYSDK_OFFSET(0x1204FCE0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_PAUSECOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x12050240)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_PAUSE_OFFSET UNITYSDK_OFFSET(0x120501C0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1204FAB0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_RESUME_OFFSET UNITYSDK_OFFSET(0x12050480)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_SHOWCOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x1204FEF0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x12050500)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12050600)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x12050640)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x12050650)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDTimerWidgetNode_TypeDefinitionIndex = 88315;

	class LDTimerWidgetNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* update; // 0xA8
		::FlowCanvas::FlowOutput* start; // 0xB0
		::FlowCanvas::FlowOutput* finish; // 0xB8
		::AGJFDPBLDDF* timer; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Single>* totalDuration; // 0xC8
		::System::Boolean pauseState; // 0xD0
		::System::Byte _padding0[0x3];
		::System::Single remaining; // 0xD4
		::System::Single remainingNormalized; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_BEGIN_OFFSET))(this, f);
		}

		::System::Void Pause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_PAUSE_OFFSET))(this, f);
		}

		::System::Void Resume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_RESUME_OFFSET))(this, f);
		}

		::System::Void ShowCountDownUI(::System::Boolean showState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_SHOWCOUNTDOWNUI_OFFSET))(this, showState);
		}

		::System::Void PauseCountDownUI(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_PAUSECOUNTDOWNUI_OFFSET))(this, pause);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_UPDATE_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__8_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__8_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__REGISTERPORTS_B__8_1_OFFSET))(this);
		}
	};
}
