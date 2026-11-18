#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardItemCollectPageController_TabType.h"
#include "unitysdk/System/Object.h"

class PCLDCBAFHHH;

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187C9380)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS39_0__GETRESEARCHPROGRESSCONFIGLIST_B__0_OFFSET UNITYSDK_OFFSET(0x187C9390)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController___c__DisplayClass39_0_TypeDefinitionIndex = 88081;

	class UIHollowCardItemCollectPageController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCardItemCollectPageController_TabType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetResearchProgressConfigList_b__0(::PCLDCBAFHHH* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCLDCBAFHHH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS39_0__GETRESEARCHPROGRESSCONFIGLIST_B__0_OFFSET))(this, x);
		}
	};
}
