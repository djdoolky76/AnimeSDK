#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class ActivityDemoTrialContext; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C253B0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS87_0__ONAVATARSCROLLVIEWCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x19C253C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass87_0_TypeDefinitionIndex = 58549;

	class UIGachaPageController___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::MoleMole::ActivityDemoTrialContext* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAvatarScrollViewClick_b__0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS87_0__ONAVATARSCROLLVIEWCLICK_B__0_OFFSET))(this, msg);
		}
	};
}
