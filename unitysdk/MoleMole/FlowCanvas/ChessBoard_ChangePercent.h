#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_CHANGEPERCENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x11904110)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_CHANGEPERCENT__CTOR_OFFSET UNITYSDK_OFFSET(0x11904200)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_ChangePercent_TypeDefinitionIndex = 41759;

	class ChessBoard_ChangePercent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_CHANGEPERCENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 percent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_CHANGEPERCENT_INVOKE_OFFSET))(this, percent);
		}
	};
}
