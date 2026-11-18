#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/GridDir.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1622F0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1622F160)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityMove_TypeDefinitionIndex = 77973;

	class ChessboardChessEntityMove
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::Share::GridDir dir, ::System::Int32 distance)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::Share::GridDir, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVE_INVOKE_OFFSET))(this, chessEntity, dir, distance);
		}
	};
}
