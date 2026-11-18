#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D5B60)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x180D5BE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPieceStopNapEffect_TypeDefinitionIndex = 48513;

	class ChessboardPieceStopNapEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 a)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECT_INVOKE_OFFSET))(this, a);
		}
	};
}
