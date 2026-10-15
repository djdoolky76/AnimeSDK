#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class BookletLuaPanelParam; }

#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_CMBIMEIDLCK_OFFSET UNITYSDK_OFFSET(0xE1ADFB0)
#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE1AE150)
#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xE1ADF00)
#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xE1AE070)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookCharacterElement_TypeDefinitionIndex = 72457;

	class TarotBookCharacterElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* CMBIMEIDLCK()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_CMBIMEIDLCK_OFFSET))(this);
		}

	};
}
