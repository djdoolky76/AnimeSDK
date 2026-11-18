#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x130C3630)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x130C36E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x130C3690)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_AntivirusTimeOut_TypeDefinitionIndex = 83375;

	class ChessBoard_AntivirusTimeOut
	{
	public:
		static ::System::String** StaticGet_StaticEventName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChessBoard_AntivirusTimeOut_TypeDefinitionIndex)->GetStaticField(0x34880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
