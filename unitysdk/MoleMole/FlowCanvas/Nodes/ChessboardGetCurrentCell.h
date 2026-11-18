#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCELL_INVOKE_OFFSET UNITYSDK_OFFSET(0x10401FB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x104020D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetCurrentCell_TypeDefinitionIndex = 42535;

	class ChessboardGetCurrentCell
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCELL__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell Invoke()
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCELL_INVOKE_OFFSET))(this);
		}
	};
}
