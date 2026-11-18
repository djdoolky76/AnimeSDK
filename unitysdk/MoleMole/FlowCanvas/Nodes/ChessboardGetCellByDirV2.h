#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCELLBYDIRV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x142F6C10)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCELLBYDIRV2__CTOR_OFFSET UNITYSDK_OFFSET(0x142F6EB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetCellByDirV2_TypeDefinitionIndex = 77367;

	class ChessboardGetCellByDirV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCELLBYDIRV2__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell Invoke(::MoleMole::HollowChessboard::HollowCell index, ::Share::GridDir dir, ::System::Int32 times)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Share::GridDir, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCELLBYDIRV2_INVOKE_OFFSET))(this, index, dir, times);
		}
	};
}
