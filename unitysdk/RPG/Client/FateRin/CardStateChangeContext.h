#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BattleAddCardReason.h"
#include "unitysdk/RPG/Client/FateRin/CardStateChangeReason.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_CARDSTATECHANGECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFAB30)

namespace RPG::Client::FateRin
{
	class CardStateChangeContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>* AddedCards; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>* HandSnapshot; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>* AffectedCards; // 0x20
		::System::Int32 DiscardPileVisualOffset; // 0x28
		::RPG::Client::FateRin::CardStateChangeReason Reason; // 0x2C
		::RPG::Client::FateRin::BattleAddCardReason AddCardReason; // 0x30
		::RPG::GameCore::FateRinCardPileType FromPile; // 0x34
		::RPG::GameCore::FateRinCardPileType ToPile; // 0x36
		::System::Int32 DrawPileVisualOffset; // 0x38
		::System::Void _ctor(::RPG::Client::FateRin::CardStateChangeReason a1, ::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4, ::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>* a5, ::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>* a6, ::RPG::Client::FateRin::BattleAddCardReason a7, ::System::Int32 a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CardStateChangeReason, ::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>*, ::System::Collections::Generic::IReadOnlyList_1<::COOONBGCCCM*>*, ::RPG::Client::FateRin::BattleAddCardReason, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARDSTATECHANGECONTEXT_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

	};
}
