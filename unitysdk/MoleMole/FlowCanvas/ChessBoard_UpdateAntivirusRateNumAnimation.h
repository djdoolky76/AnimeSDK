#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_UPDATEANTIVIRUSRATENUMANIMATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7B9800)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_UPDATEANTIVIRUSRATENUMANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B9950)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_UpdateAntivirusRateNumAnimation_TypeDefinitionIndex = 82107;

	class ChessBoard_UpdateAntivirusRateNumAnimation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_UPDATEANTIVIRUSRATENUMANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_UPDATEANTIVIRUSRATENUMANIMATION_INVOKE_OFFSET))(this, enable);
		}
	};
}
