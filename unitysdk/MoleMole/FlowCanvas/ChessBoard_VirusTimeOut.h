#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x10D07C10)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D07CC0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D07C70)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_VirusTimeOut_TypeDefinitionIndex = 77353;

	class ChessBoard_VirusTimeOut
	{
	public:
		static ::System::String** StaticGet_StaticEventName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChessBoard_VirusTimeOut_TypeDefinitionIndex)->GetStaticField(0x388F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
