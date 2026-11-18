#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x12B2F080)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B2F130)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2F0E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_TrapTimeOut_TypeDefinitionIndex = 72087;

	class ChessBoard_TrapTimeOut
	{
	public:
		static ::System::String** StaticGet_StaticEventName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChessBoard_TrapTimeOut_TypeDefinitionIndex)->GetStaticField(0x3BE30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
