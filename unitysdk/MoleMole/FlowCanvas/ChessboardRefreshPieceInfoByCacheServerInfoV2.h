#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFOV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D086D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFOV2__CTOR_OFFSET UNITYSDK_OFFSET(0x10D089A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardRefreshPieceInfoByCacheServerInfoV2_TypeDefinitionIndex = 74790;

	class ChessboardRefreshPieceInfoByCacheServerInfoV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFOV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFOV2_INVOKE_OFFSET))(this, x, y);
		}
	};
}
