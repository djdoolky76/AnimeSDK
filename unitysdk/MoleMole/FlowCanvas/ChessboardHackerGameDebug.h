#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x13562E50)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x13562EB0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardHackerGameDebug_TypeDefinitionIndex = 66116;

	class ChessboardHackerGameDebug
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
