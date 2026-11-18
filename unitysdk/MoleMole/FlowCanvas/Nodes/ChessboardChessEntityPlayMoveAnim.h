#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/GridDir.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYPLAYMOVEANIM_INVOKE_OFFSET UNITYSDK_OFFSET(0x10401EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYPLAYMOVEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x10401F20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityPlayMoveAnim_TypeDefinitionIndex = 64104;

	class ChessboardChessEntityPlayMoveAnim
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYPLAYMOVEANIM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::Share::GridDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYPLAYMOVEANIM_INVOKE_OFFSET))(this, chessEntity, dir);
		}
	};
}
