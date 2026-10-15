#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardPileType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class DEGELHCLDJB;
class HLOHDPOEMDK;
class NLJLFIEPHEL;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileSectionViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE36A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xCEE3B10)

namespace RPG::Client::FateRin::Card
{
	class FateRinBattleCardPileTypeViewModel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::HLOHDPOEMDK* cardGameModel; // 0x10
		::NLJLFIEPHEL* cardVmFactory; // 0x18
		::DEGELHCLDJB* ownerFactory; // 0x20
		::RPG::Client::FateRin::Card::FateRinBattleCardPileType type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel* __ctor_b__1(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET))(this, a1);
		}

	};
}
