#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHITEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1A8DE8F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DE950)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardHitEvent_TypeDefinitionIndex = 52665;

	class ChessboardHitEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDHITEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDHITEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
