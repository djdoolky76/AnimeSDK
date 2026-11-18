#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFOAHPEEBGI.h"
#include "unitysdk/JMKLPPGLKJJ.h"
#include "unitysdk/LPDBAPHAKMH.h"
#include "unitysdk/NJAJNLNKDHF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVRBossBattleInfoPageController; }

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167EF600)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_0__GOSINGLEPLAYREAL_B__1_OFFSET UNITYSDK_OFFSET(0x167EF610)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_0__GOSINGLEPLAYREAL_G__CONTINUE_0_OFFSET UNITYSDK_OFFSET(0x167EF620)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass54_0_TypeDefinitionIndex = 50394;

	class UIVRBossBattleInfoPageController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::MoleMole::UIVRBossBattleInfoPageController* __4__this; // 0x10
		::NJAJNLNKDHF battleTypeData; // 0x18
		::JMKLPPGLKJJ rewardBuffGameTag; // 0x30
		::LPDBAPHAKMH type; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_0__GOSINGLEPLAYREAL_B__1_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_g__Continue_0(::BFOAHPEEBGI noReward)
		{
			return ((::System::Void(*)(::PVOID, ::BFOAHPEEBGI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_0__GOSINGLEPLAYREAL_G__CONTINUE_0_OFFSET))(this, noReward);
		}
	};
}
