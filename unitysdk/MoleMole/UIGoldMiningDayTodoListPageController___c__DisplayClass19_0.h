#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGALFHMPJLF;
namespace MoleMole { class UIGoldMiningDayTodoListPageController; }

#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEDB30)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS19_0__DOACCESS_B__0_OFFSET UNITYSDK_OFFSET(0x16EEDB40)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS19_0__DOACCESS_B__1_OFFSET UNITYSDK_OFFSET(0x16EEDB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayTodoListPageController___c__DisplayClass19_0_TypeDefinitionIndex = 72866;

	class UIGoldMiningDayTodoListPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::AGALFHMPJLF* todoQuest; // 0x10
		::MoleMole::UIGoldMiningDayTodoListPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DoAccess_b__0(::AGALFHMPJLF* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGALFHMPJLF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS19_0__DOACCESS_B__0_OFFSET))(this, x);
		}

		::System::Void _DoAccess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS19_0__DOACCESS_B__1_OFFSET))(this);
		}
	};
}
