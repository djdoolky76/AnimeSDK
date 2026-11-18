#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BBB70)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BBC90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessEntityIndex_TypeDefinitionIndex = 70005;

	class ChessboardGetChessEntityIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYINDEX_INVOKE_OFFSET))(this, chessEntity);
		}
	};
}
