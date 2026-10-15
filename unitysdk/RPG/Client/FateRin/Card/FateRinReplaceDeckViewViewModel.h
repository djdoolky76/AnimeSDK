#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class DEGELHCLDJB;
class FNMDEKMKEKH;
class HPOCHBIJIHH;
class KIEIGGGKJOD;
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF5550)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEF56E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_GET_DECK_OFFSET UNITYSDK_OFFSET(0xCEF5810)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_SET_DECK_OFFSET UNITYSDK_OFFSET(0xCEF5820)

namespace RPG::Client::FateRin::Card
{
	class FateRinReplaceDeckViewViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* _Deck_k__BackingField; // 0x20
		::System::Void _ctor(::HPOCHBIJIHH* a1, ::FNMDEKMKEKH* a2, ::KIEIGGGKJOD* a3, ::DEGELHCLDJB* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HPOCHBIJIHH*, ::FNMDEKMKEKH*, ::KIEIGGGKJOD*, ::DEGELHCLDJB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* get_Deck()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_GET_DECK_OFFSET))(this);
		}

		::System::Void set_Deck(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_SET_DECK_OFFSET))(this, a1);
		}

	};
}
