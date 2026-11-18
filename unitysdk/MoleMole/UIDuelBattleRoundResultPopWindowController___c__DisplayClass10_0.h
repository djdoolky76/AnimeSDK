#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNCBJICOFMC_AHMMACKMLKP;
namespace MoleMole { class UIDuelBattleRoundResultPopWindowContext; }
namespace MoleMole { class UIDuelBattleRoundResultPopWindowController; }

#define MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB88E0)
#define MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__ONFADEPLAYFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x19FB88F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleRoundResultPopWindowController___c__DisplayClass10_0_TypeDefinitionIndex = 47177;

	class UIDuelBattleRoundResultPopWindowController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDuelBattleRoundResultPopWindowContext* context; // 0x10
		::MoleMole::UIDuelBattleRoundResultPopWindowController* __4__this; // 0x18
		::DNCBJICOFMC_AHMMACKMLKP* starView; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnFadePlayFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__ONFADEPLAYFINISH_B__0_OFFSET))(this);
		}
	};
}
