#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class Object; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER_INPUT_OFFSET UNITYSDK_OFFSET(0x1A8E33B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A8E31B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E39C0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER__REGISTERPORTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1A8E3A00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardRhythmMoveInputHandler_TypeDefinitionIndex = 76444;

	class ChessboardRhythmMoveInputHandler : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* nextJudgeTime; // 0xA8
		::FlowCanvas::FlowOutput* normal; // 0xB0
		::FlowCanvas::FlowOutput* perfect; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* normalTolerance; // 0xC0
		::FlowCanvas::FlowOutput* miss; // 0xC8
		::FlowCanvas::FlowInput* input; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Single>* preJudgeTime; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Single>* judgeOffsetTime; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Single>* perfectTolerance; // 0xE8
		::FlowCanvas::ValueOutput_1<::System::Object*>* judgeResult; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Single>* currentTime; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Input(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER_INPUT_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__12_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER__REGISTERPORTS_B__12_0_OFFSET))(this, f);
		}
	};
}
