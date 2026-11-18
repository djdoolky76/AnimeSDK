#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECEV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C6090)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x130C6200)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetCurrentChessPieceV2_TypeDefinitionIndex = 69150;

	class ChessboardGetCurrentChessPieceV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECEV2__CTOR_OFFSET))(this);
		}

		::MoleMole::Vector2Int Invoke()
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECEV2_INVOKE_OFFSET))(this);
		}
	};
}
