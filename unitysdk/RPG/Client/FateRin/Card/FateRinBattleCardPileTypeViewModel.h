#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardPileType.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class COOONBGCCCM;
class DEGELHCLDJB;
class HLOHDPOEMDK;
class NLJLFIEPHEL;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileSectionViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE3220)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCEE37B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_SECTIONVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCEE39C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_TABICONPATH_OFFSET UNITYSDK_OFFSET(0xCEE3910)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCEE3790)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xCEE37A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL__GETCARDMODELLIST_OFFSET UNITYSDK_OFFSET(0xCEE36B0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileTypeViewModel_TypeDefinitionIndex = 81120;

	class FateRinBattleCardPileTypeViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>* _SectionViewModelList_ReadOnly; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>* _SectionViewModelList; // 0x28
		::RPG::Client::FateRin::Card::FateRinBattleCardPileType _Type_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1, ::HLOHDPOEMDK* a2, ::NLJLFIEPHEL* a3, ::DEGELHCLDJB* a4, ::OBJANKHLNGO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType, ::HLOHDPOEMDK*, ::NLJLFIEPHEL*, ::DEGELHCLDJB*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::COOONBGCCCM*>* _GetCardModelList(::HLOHDPOEMDK* a1, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType a2)
		{
			return ((::System::Collections::Generic::List_1<::COOONBGCCCM*>*(*)(::PVOID, ::HLOHDPOEMDK*, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL__GETCARDMODELLIST_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Card::FateRinBattleCardPileType get_Type()
		{
			return ((::RPG::Client::FateRin::Card::FateRinBattleCardPileType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_TabIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_TABICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>* get_SectionViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_SECTIONVIEWMODELLIST_OFFSET))(this);
		}

	};
}
