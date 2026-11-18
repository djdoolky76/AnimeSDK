#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPLAYER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E2190)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E2330)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetChessEntityAsPlayer_TypeDefinitionIndex = 87409;

	class HackerGameSetChessEntityAsPlayer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPLAYER_INVOKE_OFFSET))(this, chessEntity);
		}
	};
}
