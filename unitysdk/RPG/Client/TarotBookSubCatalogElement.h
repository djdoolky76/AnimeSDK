#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xEC6E0B0)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xEC6DE80)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xEC6DFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookSubCatalogElement_TypeDefinitionIndex = 74543;

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
