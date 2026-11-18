#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalGameNPCEnterAction; }
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS538_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1893CDD0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS538_0__PLAYNPCENTERACTIONS_B__4_OFFSET UNITYSDK_OFFSET(0x1893CFF0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS538_0__PLAYNPCENTERACTIONS_B__5_OFFSET UNITYSDK_OFFSET(0x1893D0D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS538_0__PLAYNPCENTERACTIONS_G__APPLYPOSENFACIALWHENENTER_2_OFFSET UNITYSDK_OFFSET(0x1893CDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass538_0_TypeDefinitionIndex = 44786;

	class UIGalgamePageController___c__DisplayClass538_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x10
		::MoleMole::GalGame::GalGameNPCEnterAction* enterAction; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20
		::System::Int32 currStageNodeIdx; // 0x28
		::MoleMole::GalGame::GalNPCLocation location; // 0x2C
		::System::Int32 locationKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS538_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_g__ApplyPoseNFacialWhenEnter_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS538_0__PLAYNPCENTERACTIONS_G__APPLYPOSENFACIALWHENENTER_2_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS538_0__PLAYNPCENTERACTIONS_B__4_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS538_0__PLAYNPCENTERACTIONS_B__5_OFFSET))(this);
		}
	};
}
