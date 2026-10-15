#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/Client/TextID.h"
class CBJILMHOMGP;
class DEGELHCLDJB;
class FNMDEKMKEKH;
class HKAJMEMCBLC;
class KIEIGGGKJOD;
namespace RPG::Client::FateRin::Card { class IFateRinCardOwnerViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEEE940)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ACQUIREDCOUNT_OFFSET UNITYSDK_OFFSET(0xCEEF550)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ALLCOUNT_OFFSET UNITYSDK_OFFSET(0xCEEF570)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_CARDVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCEEF710)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCEEF5C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCEEF280)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0xCEEF260)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0xCEEF750)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0xCEEF400)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_REFRESHACQUIRE_OFFSET UNITYSDK_OFFSET(0xCEEEEE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_ACQUIREDCOUNT_OFFSET UNITYSDK_OFFSET(0xCEEF560)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0xCEEF270)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0xCEEF760)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL__ONSHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0xCEEF160)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xCEEF770)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardOwnerViewModel_TypeDefinitionIndex = 81179;

	class FateRinHandbookCardOwnerViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CardViewModelList_ReadOnly; // 0x20
		::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* _OwnerVM; // 0x28
		::CBJILMHOMGP* _ShowDetailDialog_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CardViewModelList; // 0x38
		::RPG::GameCore::FateRinHouguOwnerType _OwnerType_k__BackingField; // 0x40
		::System::Int32 _AcquiredCount_k__BackingField; // 0x44
		::System::Void _ctor(::RPG::GameCore::FateRinHouguOwnerType a1, ::FNMDEKMKEKH* a2, ::KIEIGGGKJOD* a3, ::DEGELHCLDJB* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::FNMDEKMKEKH*, ::KIEIGGGKJOD*, ::DEGELHCLDJB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RefreshAcquire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_REFRESHACQUIRE_OFFSET))(this);
		}

		::System::Void _OnShowDetailDialog(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL__ONSHOWDETAILDIALOG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_OwnerType()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_OWNERTYPE_OFFSET))(this);
		}

		::System::Void set_OwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_OWNERTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}

		::System::Int32 get_AcquiredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ACQUIREDCOUNT_OFFSET))(this);
		}

		::System::Void set_AcquiredCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_ACQUIREDCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_AllCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ALLCOUNT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_CardViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_CARDVIEWMODELLIST_OFFSET))(this);
		}

		::CBJILMHOMGP* get_ShowDetailDialog()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_SHOWDETAILDIALOG_OFFSET))(this);
		}

		::System::Void set_ShowDetailDialog(::CBJILMHOMGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBJILMHOMGP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_SHOWDETAILDIALOG_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__0_0(::HKAJMEMCBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
}
