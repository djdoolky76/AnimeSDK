#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x103FF850)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x103FF8B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardTranslationEvent_TypeDefinitionIndex = 86666;

	class ChessboardTranslationEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
