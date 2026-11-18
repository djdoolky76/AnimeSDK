#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATESECONDNUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x142F0440)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATESECONDNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x142F0530)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_SetAntivirusRateSecondNum_TypeDefinitionIndex = 62163;

	class ChessBoard_SetAntivirusRateSecondNum
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATESECONDNUM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 numValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATESECONDNUM_INVOKE_OFFSET))(this, numValue);
		}
	};
}
