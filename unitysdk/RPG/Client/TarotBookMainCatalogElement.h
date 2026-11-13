#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class BookletLuaPanelParam; }

#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_CMBIMEIDLCK_OFFSET UNITYSDK_OFFSET(0x1ACA82C0)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA8F90)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1ACA8210)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACA8E00)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookMainCatalogElement_TypeDefinitionIndex = 74540;

	class TarotBookMainCatalogElement
	{
	public:
		// static const ::System::Object FirstChapterListBeginIndex; // 0x0
		// static const ::System::Object FirstChapterListEndIndex; // 0x0
		// static const ::System::Object SecondChapterListBeginIndex; // 0x0
		// static const ::System::Object SecondChapterListEndIndex; // 0x0
		// static const ::System::Object SpecialChapterIndex; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* CMBIMEIDLCK()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_CMBIMEIDLCK_OFFSET))(this);
		}

	};
}
