#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class BookletLuaPanelParam; }

#define RPG_CLIENT_TAROTBOOKCOVERELEMENT_CMBIMEIDLCK_OFFSET UNITYSDK_OFFSET(0x1C5C4990)
#define RPG_CLIENT_TAROTBOOKCOVERELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C4B30)
#define RPG_CLIENT_TAROTBOOKCOVERELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1C5C48E0)
#define RPG_CLIENT_TAROTBOOKCOVERELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1C5C4A50)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookCoverElement_TypeDefinitionIndex = 74536;

	class TarotBookCoverElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT_CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* CMBIMEIDLCK()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT_CMBIMEIDLCK_OFFSET))(this);
		}

	};
}
