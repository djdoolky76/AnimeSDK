#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class BookletLuaPanelParam; }

#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_CMBIMEIDLCK_OFFSET UNITYSDK_OFFSET(0xE1A4C00)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE1A4DA0)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xE1A4B50)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xE1A4CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookEpilogueElement_TypeDefinitionIndex = 72458;

	class TarotBookEpilogueElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* CMBIMEIDLCK()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_CMBIMEIDLCK_OFFSET))(this);
		}

	};
}
