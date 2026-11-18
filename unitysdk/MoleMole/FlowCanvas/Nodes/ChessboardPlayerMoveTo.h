#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETO_INVOKE_OFFSET UNITYSDK_OFFSET(0x11909070)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x119090D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPlayerMoveTo_TypeDefinitionIndex = 91066;

	class ChessboardPlayerMoveTo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index, ::System::Boolean needMoveAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETO_INVOKE_OFFSET))(this, index, needMoveAnim);
		}
	};
}
