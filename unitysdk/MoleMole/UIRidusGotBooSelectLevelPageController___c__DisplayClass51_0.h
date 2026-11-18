#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFEKBBCCCFE;
namespace MoleMole { class UIRidusGotBooSelectLevelPageController; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D481D0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__ONSELECTTAB_B__0_OFFSET UNITYSDK_OFFSET(0x15D481E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass51_0_TypeDefinitionIndex = 77082;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooSelectLevelPageController* __4__this; // 0x10
		::System::Int32 intLevelType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSelectTab_b__0(::MFEKBBCCCFE* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFEKBBCCCFE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS51_0__ONSELECTTAB_B__0_OFFSET))(this, x);
		}
	};
}
