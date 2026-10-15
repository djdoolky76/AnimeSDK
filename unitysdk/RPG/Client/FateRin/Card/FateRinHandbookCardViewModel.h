#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinHandbookCardTabType.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/ValueTuple_2.h"
class CBJILMHOMGP;
class CEEGMMCFCBG;
class DEGELHCLDJB;
class FLNAHDFJBBA;
class FNMDEKMKEKH;
class KIEIGGGKJOD;
class KJCPCOELJAG;
class OBJANKHLNGO;
class PEAFBFCPFCC;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardOwnerViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardTabViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ADD_ONTABCHANGE_OFFSET UNITYSDK_OFFSET(0xCEF17C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCEF0170)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEEF850)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEF0B70)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GETCURTABCARDOWNERLIST_OFFSET UNITYSDK_OFFSET(0xCEF0BD0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_ALLTABVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCEF1760)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_CURTABREPORTNAME_OFFSET UNITYSDK_OFFSET(0xCEF18A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SELECTTABACTION_OFFSET UNITYSDK_OFFSET(0xCEF17A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0xCEF1880)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_REMOVE_ONTABCHANGE_OFFSET UNITYSDK_OFFSET(0xCEF1820)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SELECTTABACTION_OFFSET UNITYSDK_OFFSET(0xCEF17B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0xCEF1890)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__GETCARDVIEWMODELLISTBYTABOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xCEF0E30)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONCARDUNLOCKEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xCEF1610)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSELECTTAB_OFFSET UNITYSDK_OFFSET(0xCEF1670)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0xCEF16F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHTABVIEWMODELSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xCEF13A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCEF0280)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardViewModel_TypeDefinitionIndex = 81189;

	class FateRinHandbookCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::CEEGMMCFCBG* _SetHandbookFuncSeen_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* _AllTabViewModelList; // 0x28
		::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* _CurSelectedTabVM; // 0x30
		::RPG::Client::FateRin::ViewModelEventHandler* OnTabChange; // 0x38
		::PEAFBFCPFCC* _RedDotService; // 0x40
		::CBJILMHOMGP* _SelectTabAction_k__BackingField; // 0x48
		::OBJANKHLNGO* _Messenger; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* _AllCardOwnerViewModelList; // 0x58
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* _AllTabViewModelList_ReadOnly; // 0x60
		::KIEIGGGKJOD* _CardVmFactory; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::FateRin::Card::FateRinHandbookCardTabType, ::RPG::GameCore::FateRinHouguOwnerType>, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*>* _CardOwnerViewModelCacheDict; // 0x70
		::FNMDEKMKEKH* _CardService; // 0x78
		::FLNAHDFJBBA* _TabVmFactory; // 0x80
		::System::Void _ctor(::FNMDEKMKEKH* a1, ::KIEIGGGKJOD* a2, ::FLNAHDFJBBA* a3, ::DEGELHCLDJB* a4, ::PEAFBFCPFCC* a5, ::OBJANKHLNGO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::FNMDEKMKEKH*, ::KIEIGGGKJOD*, ::FLNAHDFJBBA*, ::DEGELHCLDJB*, ::PEAFBFCPFCC*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* GetCurTabCardOwnerList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GETCURTABCARDOWNERLIST_OFFSET))(this);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::System::Void _RefreshTabViewModelSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHTABVIEWMODELSELECTSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* _GetCardViewModelListByTabOwnerType(::RPG::Client::FateRin::Card::FateRinHandbookCardTabType a1, ::RPG::GameCore::FateRinHouguOwnerType a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinHandbookCardTabType, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__GETCARDVIEWMODELLISTBYTABOWNERTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCardUnlockedMessage(::KJCPCOELJAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJCPCOELJAG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONCARDUNLOCKEDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnSelectTab(::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSELECTTAB_OFFSET))(this, a1);
		}

		::System::Void _OnSetHandbookFuncSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSETHANDBOOKFUNCSEEN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* get_AllTabViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_ALLTABVIEWMODELLIST_OFFSET))(this);
		}

		::CBJILMHOMGP* get_SelectTabAction()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SELECTTABACTION_OFFSET))(this);
		}

		::System::Void set_SelectTabAction(::CBJILMHOMGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBJILMHOMGP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SELECTTABACTION_OFFSET))(this, a1);
		}

		::System::Void add_OnTabChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ADD_ONTABCHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnTabChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_REMOVE_ONTABCHANGE_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* get_SetHandbookFuncSeen()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SETHANDBOOKFUNCSEEN_OFFSET))(this);
		}

		::System::Void set_SetHandbookFuncSeen(::CEEGMMCFCBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEEGMMCFCBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SETHANDBOOKFUNCSEEN_OFFSET))(this, a1);
		}

		::System::String* get_CurTabReportName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_CURTABREPORTNAME_OFFSET))(this);
		}

	};
}
