#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardRhythmMoveInputHandler_JudgeResult.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATEJUDGERESULT_INVOKE_OFFSET UNITYSDK_OFFSET(0x103FEB70)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATEJUDGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x103FECA0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_RhythmMoveUpdateJudgeResult_TypeDefinitionIndex = 82004;

	class ChessBoard_RhythmMoveUpdateJudgeResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATEJUDGERESULT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult JudgeResult)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATEJUDGERESULT_INVOKE_OFFSET))(this, JudgeResult);
		}
	};
}
