#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x130C3CC0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x130C3D20)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardInputEvent_TypeDefinitionIndex = 63236;

	class ChessboardInputEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
