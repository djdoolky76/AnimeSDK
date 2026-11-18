#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMOVEEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x130C3D70)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x130C3DD0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardMoveEvent_TypeDefinitionIndex = 70878;

	class ChessboardMoveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMOVEEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMOVEEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
