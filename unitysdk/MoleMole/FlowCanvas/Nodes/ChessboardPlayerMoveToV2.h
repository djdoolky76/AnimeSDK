#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/GridDir.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETOV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4AA8C0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETOV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AAB10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPlayerMoveToV2_TypeDefinitionIndex = 68702;

	class ChessboardPlayerMoveToV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETOV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::Share::GridDir a)
		{
			return ((::System::Void(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETOV2_INVOKE_OFFSET))(this, a);
		}
	};
}
