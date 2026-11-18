#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace MoleMole { class UILaunchPageController; }
namespace System { class Action; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173F2500)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__PLAYKOREAAGELIMIT_B__1_OFFSET UNITYSDK_OFFSET(0x173F2510)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c__DisplayClass18_0_TypeDefinitionIndex = 49585;

	class UILaunchPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UILaunchPageController* __4__this; // 0x10
		::System::Action* next; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayKoreaAgeLimit_b__1(::DGDNKBFMHME* playerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__PLAYKOREAAGELIMIT_B__1_OFFSET))(this, playerHelper);
		}
	};
}
