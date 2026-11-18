#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8DE9A0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DEC60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardRefreshPieceInfoByCacheServerInfo_TypeDefinitionIndex = 75306;

	class ChessboardRefreshPieceInfoByCacheServerInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 pieceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO_INVOKE_OFFSET))(this, pieceIndex);
		}
	};
}
