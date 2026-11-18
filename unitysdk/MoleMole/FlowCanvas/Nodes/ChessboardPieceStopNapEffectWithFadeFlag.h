#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECTWITHFADEFLAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x11908FA0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECTWITHFADEFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x11909050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPieceStopNapEffectWithFadeFlag_TypeDefinitionIndex = 49479;

	class ChessboardPieceStopNapEffectWithFadeFlag
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECTWITHFADEFLAG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 a, ::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECTWITHFADEFLAG_INVOKE_OFFSET))(this, a, b);
		}
	};
}
