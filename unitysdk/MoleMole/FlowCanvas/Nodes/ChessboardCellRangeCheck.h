#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCELLRANGECHECK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E2360)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCELLRANGECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E2800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCellRangeCheck_TypeDefinitionIndex = 71086;

	class ChessboardCellRangeCheck
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCELLRANGECHECK__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 predictIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCELLRANGECHECK_INVOKE_OFFSET))(this, predictIndex);
		}
	};
}
