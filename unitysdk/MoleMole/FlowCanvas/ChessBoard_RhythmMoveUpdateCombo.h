#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATECOMBO_INVOKE_OFFSET UNITYSDK_OFFSET(0x103FEA60)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATECOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x103FEB50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_RhythmMoveUpdateCombo_TypeDefinitionIndex = 83048;

	class ChessBoard_RhythmMoveUpdateCombo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATECOMBO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 combo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATECOMBO_INVOKE_OFFSET))(this, combo);
		}
	};
}
