#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMINIGAMECHANGERTPC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0818E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMINIGAMECHANGERTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A081B20)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardMiniGameChangeRTPC_TypeDefinitionIndex = 64898;

	class ChessBoardMiniGameChangeRTPC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMINIGAMECHANGERTPC__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMINIGAMECHANGERTPC_INVOKE_OFFSET))(this, name, value);
		}
	};
}
