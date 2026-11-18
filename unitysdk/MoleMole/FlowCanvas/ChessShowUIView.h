#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessShowUIView_CanvasRTParams.h"

#define MOLEMOLE_FLOWCANVAS_CHESSSHOWUIVIEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C3830)
#define MOLEMOLE_FLOWCANVAS_CHESSSHOWUIVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x130C3CA0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessShowUIView_TypeDefinitionIndex = 86863;

	class ChessShowUIView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSSHOWUIVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams canvasRTParams)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSSHOWUIVIEW_INVOKE_OFFSET))(this, canvasRTParams);
		}
	};
}
