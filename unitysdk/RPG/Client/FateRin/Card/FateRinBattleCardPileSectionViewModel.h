#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardPileType.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/Client/TextID.h"
class CBJILMHOMGP;
class COOONBGCCCM;
class DEGELHCLDJB;
class HLOHDPOEMDK;
class NLJLFIEPHEL;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileSectionViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinCardOwnerViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD8AA530)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD8AA5F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0xD8AB140)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0xD8AB180)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD8AAFF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD8AB1D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD8AAE70)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0xD8AAE50)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0xD8AB340)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD8AAE30)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0xD8AB1F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD8AB1E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0xD8AAE60)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0xD8AB350)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xD8AAE40)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__GETCARDMODELLIST_OFFSET UNITYSDK_OFFSET(0xD8AAC50)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0xD8AAD30)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileSectionViewModel_TypeDefinitionIndex = 83895;

	class FateRinBattleCardPileSectionViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* _OwnerVM; // 0x20
		::CBJILMHOMGP* _ShowDetailDialog_k__BackingField; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* _CardList_ReadOnly; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* _CardList; // 0x38
		::System::Int32 _MaxCount_k__BackingField; // 0x40
		::RPG::GameCore::FateRinHouguOwnerType _OwnerType_k__BackingField; // 0x44
		::RPG::Client::FateRin::Card::FateRinBattleCardPileType _Type_k__BackingField; // 0x48
		::System::Void _ctor(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1, ::RPG::GameCore::FateRinHouguOwnerType a2, ::HLOHDPOEMDK* a3, ::NLJLFIEPHEL* a4, ::DEGELHCLDJB* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType, ::RPG::GameCore::FateRinHouguOwnerType, ::HLOHDPOEMDK*, ::NLJLFIEPHEL*, ::DEGELHCLDJB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel* Create(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1, ::RPG::GameCore::FateRinHouguOwnerType a2, ::HLOHDPOEMDK* a3, ::NLJLFIEPHEL* a4, ::DEGELHCLDJB* a5)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*(*)(::RPG::Client::FateRin::Card::FateRinBattleCardPileType, ::RPG::GameCore::FateRinHouguOwnerType, ::HLOHDPOEMDK*, ::NLJLFIEPHEL*, ::DEGELHCLDJB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::COOONBGCCCM*>* _GetCardModelList(::HLOHDPOEMDK* a1, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType a2)
		{
			return ((::System::Collections::Generic::List_1<::COOONBGCCCM*>*(*)(::PVOID, ::HLOHDPOEMDK*, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__GETCARDMODELLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowDetailDialog(::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__SHOWDETAILDIALOG_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::FateRinBattleCardPileType get_Type()
		{
			return ((::RPG::Client::FateRin::Card::FateRinBattleCardPileType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_OwnerType()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_OWNERTYPE_OFFSET))(this);
		}

		::System::Void set_OwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_OWNERTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* get_CardList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_CARDLIST_OFFSET))(this);
		}

		::System::Int32 get_CurCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_CURCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_MAXCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}

		::CBJILMHOMGP* get_ShowDetailDialog()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_SHOWDETAILDIALOG_OFFSET))(this);
		}

		::System::Void set_ShowDetailDialog(::CBJILMHOMGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBJILMHOMGP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_SHOWDETAILDIALOG_OFFSET))(this, a1);
		}

	};
}
