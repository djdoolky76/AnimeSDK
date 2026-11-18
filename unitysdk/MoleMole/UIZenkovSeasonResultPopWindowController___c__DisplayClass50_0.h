#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;

#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13B42980)
#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__REFRESHMEDALRANK_B__0_OFFSET UNITYSDK_OFFSET(0x13B42990)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonResultPopWindowController___c__DisplayClass50_0_TypeDefinitionIndex = 49154;

	class UIZenkovSeasonResultPopWindowController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Int32 medalGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshMedalRank_b__0(::DJPEEJFNCHL* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__REFRESHMEDALRANK_B__0_OFFSET))(this, m);
		}
	};
}
