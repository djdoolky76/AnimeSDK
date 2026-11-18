#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/GridDir.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D07F20)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10D08050)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardInputAction_TypeDefinitionIndex = 82776;

	class ChessboardInputAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::Share::GridDir MoveDir)
		{
			return ((::System::Void(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTACTION_INVOKE_OFFSET))(this, MoveDir);
		}
	};
}
