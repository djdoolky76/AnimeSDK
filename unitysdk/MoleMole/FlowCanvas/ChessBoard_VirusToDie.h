#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B4A6A50)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4A6B00)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A6AB0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_VirusToDie_TypeDefinitionIndex = 62023;

	class ChessBoard_VirusToDie
	{
	public:
		static ::System::String** StaticGet_StaticEventName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChessBoard_VirusToDie_TypeDefinitionIndex)->GetStaticField(0x48710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
