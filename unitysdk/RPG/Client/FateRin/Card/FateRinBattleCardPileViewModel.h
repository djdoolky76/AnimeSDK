#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardPileType.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class DEGELHCLDJB;
class EAHCLJPMCIG;
class HLOHDPOEMDK;
class NLJLFIEPHEL;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileTypeViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCEDBA10)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDB260)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_GET_OPENTYPE_OFFSET UNITYSDK_OFFSET(0xCEDBC40)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_GET_PILETYPEVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCEDBC00)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_SET_OPENTYPE_OFFSET UNITYSDK_OFFSET(0xCEDBC50)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCEDBBC0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileViewModel_TypeDefinitionIndex = 81123;

	class FateRinBattleCardPileViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileTypeViewModel*>* _PileTypeViewModelList; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileTypeViewModel*>* _PileTypeViewModelList_ReadOnly; // 0x28
		::HLOHDPOEMDK* _CardGameModel; // 0x30
		::DEGELHCLDJB* _OwnerFactory; // 0x38
		::NLJLFIEPHEL* _CardVmFactory; // 0x40
		::OBJANKHLNGO* _Messenger; // 0x48
		::RPG::Client::FateRin::Card::FateRinBattleCardPileType _OpenType_k__BackingField; // 0x50
		::System::Void _ctor(::EAHCLJPMCIG* a1, ::NLJLFIEPHEL* a2, ::DEGELHCLDJB* a3, ::OBJANKHLNGO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::EAHCLJPMCIG*, ::NLJLFIEPHEL*, ::DEGELHCLDJB*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileTypeViewModel*>* get_PileTypeViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileTypeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_GET_PILETYPEVIEWMODELLIST_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::FateRinBattleCardPileType get_OpenType()
		{
			return ((::RPG::Client::FateRin::Card::FateRinBattleCardPileType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_GET_OPENTYPE_OFFSET))(this);
		}

		::System::Void set_OpenType(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_SET_OPENTYPE_OFFSET))(this, a1);
		}

	};
}
