#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB7EC0)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1ACB7C90)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACB7DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookSubCatalogElement_TypeDefinitionIndex = 74542;

	class TarotBookSubCatalogElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

	};
}
