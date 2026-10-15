#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
class DEGELHCLDJB;
class HKAJMEMCBLC;
class KIEIGGGKJOD;
namespace RPG::Client::FateRin::Card { class IFateRinCardOwnerViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE5F70)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEE63D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_GET_CARDS_OFFSET UNITYSDK_OFFSET(0xCEE6790)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xCEE6770)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xCEE6780)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_TRYREMOVECARD_OFFSET UNITYSDK_OFFSET(0xCEE6660)

namespace RPG::Client::FateRin::Card
{
	class FateRinCardDeckSectionViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* _Owner_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _Cards; // 0x28
		::System::Void _ctor(::RPG::GameCore::FateRinHouguOwnerType a1, ::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* a2, ::KIEIGGGKJOD* a3, ::DEGELHCLDJB* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*, ::KIEIGGGKJOD*, ::DEGELHCLDJB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean TryRemoveCard(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_TRYREMOVECARD_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* get_Owner()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_Cards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL_GET_CARDS_OFFSET))(this);
		}

	};
}
