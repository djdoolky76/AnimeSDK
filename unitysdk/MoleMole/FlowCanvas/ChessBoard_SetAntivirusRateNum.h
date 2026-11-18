#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C3720)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x130C3810)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_SetAntivirusRateNum_TypeDefinitionIndex = 59020;

	class ChessBoard_SetAntivirusRateNum
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATENUM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 numValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATENUM_INVOKE_OFFSET))(this, numValue);
		}
	};
}
