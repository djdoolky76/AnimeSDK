#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS130_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1836F560)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS130_0__PLAYSUBNARRATORICONNODE_B__0_OFFSET UNITYSDK_OFFSET(0x1836F710)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS130_0__PLAYSUBNARRATORICONNODE_B__1_OFFSET UNITYSDK_OFFSET(0x1836F570)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS130_0__PLAYSUBNARRATORICONNODE_B__2_OFFSET UNITYSDK_OFFSET(0x1836F6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass130_0_TypeDefinitionIndex = 44776;

	class UIGalgamePageController___c__DisplayClass130_0 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* iconCanvasGroup; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS130_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorIconNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS130_0__PLAYSUBNARRATORICONNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorIconNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS130_0__PLAYSUBNARRATORICONNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorIconNode_b__0(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS130_0__PLAYSUBNARRATORICONNODE_B__0_OFFSET))(this, result);
		}
	};
}
