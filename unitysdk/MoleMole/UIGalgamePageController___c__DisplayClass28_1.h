#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace MoleMole::GalGame { class GalgameArgueNPCEnterAction; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180A3540)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__5_OFFSET UNITYSDK_OFFSET(0x180A3550)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__6_OFFSET UNITYSDK_OFFSET(0x180A37B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__7_OFFSET UNITYSDK_OFFSET(0x180A38B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass28_1_TypeDefinitionIndex = 44763;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::MoleMole::GalGame::GalgameArgueNPCEnterAction* enterAction; // 0x20
		::System::Int32 locationKey; // 0x28
		::MoleMole::GalGame::GalNPCLocation location; // 0x2C
		::System::Int32 currStageNodeIdx; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueNPCEnterActions_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__5_OFFSET))(this);
		}

		::System::Void _PlayArgueNPCEnterActions_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__6_OFFSET))(this);
		}

		::System::Void _PlayArgueNPCEnterActions_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__7_OFFSET))(this);
		}
	};
}
