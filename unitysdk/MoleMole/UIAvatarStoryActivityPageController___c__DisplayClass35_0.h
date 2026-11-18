#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEMPJCOPMDE;
namespace MoleMole { class ActivityOVABattleSpecialContext; }

#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1917AE60)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_0__ONENTERSPECIALENTRY_B__0_OFFSET UNITYSDK_OFFSET(0x1917AE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStoryActivityPageController___c__DisplayClass35_0_TypeDefinitionIndex = 83299;

	class UIAvatarStoryActivityPageController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::ActivityOVABattleSpecialContext* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterSpecialEntry_b__0(::MEMPJCOPMDE* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_0__ONENTERSPECIALENTRY_B__0_OFFSET))(this, rsp);
		}
	};
}
