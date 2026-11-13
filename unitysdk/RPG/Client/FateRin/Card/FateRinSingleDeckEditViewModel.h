#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/LNKGMFCMGPN_EFAGJLNFDHM.h"
class BFELIBKIOKE;
class CAMAJOHGKPC;
class CBJILMHOMGP;
class CEEGMMCFCBG;
class DEGELHCLDJB;
class ELDKPCBCIIO;
class EOPFDKJOBIO;
class FNMDEKMKEKH;
class IFMNCLKDLDC;
class KIEIGGGKJOD;
class KKHBPFEMLKM;
class LNKGMFCMGPN;
class OBJANKHLNGO;
class PEAFBFCPFCC;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckSectionViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ADD_ONCURRENTDECKREFRESH_OFFSET UNITYSDK_OFFSET(0x1E0B7640)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A8850)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E0A91F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GETMODIFYPARAM_OFFSET UNITYSDK_OFFSET(0x1E0AAAA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDMASTERCARDS_OFFSET UNITYSDK_OFFSET(0x1E0B74E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDNEUTRALCARDS_OFFSET UNITYSDK_OFFSET(0x1E0B7500)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDSERVANTCARDS_OFFSET UNITYSDK_OFFSET(0x1E0B74F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ALLSELECTEDCARDS_OFFSET UNITYSDK_OFFSET(0x1E0B7400)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_CLICKCARD_OFFSET UNITYSDK_OFFSET(0x1E0B7700)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_DECK_OFFSET UNITYSDK_OFFSET(0x1E0B74D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ISCURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1E0B7600)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ISINPLOTMODE_OFFSET UNITYSDK_OFFSET(0x1E0B7620)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDMASTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0B7510)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDNEUTRALCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0B75B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDSERVANTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0B7560)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SETCURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1E0B7730)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SHOWDECKPREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x1E0B7710)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_TRYAPPLYRECOMMENDDECK_OFFSET UNITYSDK_OFFSET(0x1E0B7720)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ISFULLYSELECTED_OFFSET UNITYSDK_OFFSET(0x1E0A9C00)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E0AAA00)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_REMOVE_ONCURRENTDECKREFRESH_OFFSET UNITYSDK_OFFSET(0x1E0B76A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_SET_ISCURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1E0B7610)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_SET_ISINPLOTMODE_OFFSET UNITYSDK_OFFSET(0x1E0B7630)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__CREATEACQUIREDLISTFROMOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1E0B2C80)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__DISPOSEACQUIREDLIST_OFFSET UNITYSDK_OFFSET(0x1E0B34D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__DOAPPLYRECOMMENDDECK_OFFSET UNITYSDK_OFFSET(0x1E0B6AC0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__FILLLISTTOHASHSET_OFFSET UNITYSDK_OFFSET(0x1E0B5F90)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__GETSELECTEDCARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1E0B6D80)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__GETSELECTEDSETBYCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1E0B49A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__INITSELECTEDSETS_OFFSET UNITYSDK_OFFSET(0x1E0B32F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ISMODIFIED_G__ISSECTIONMODIFIED_4_0_OFFSET UNITYSDK_OFFSET(0x1E0B3A90)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONCARDCLICK_OFFSET UNITYSDK_OFFSET(0x1E0B41D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONCURRENTDECKCHANGE_OFFSET UNITYSDK_OFFSET(0x1E0B7440)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONPREVIEWDIALOGCHANGECONFIRM_OFFSET UNITYSDK_OFFSET(0x1E0B5E90)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHALLSELECTEDCARDS_OFFSET UNITYSDK_OFFSET(0x1E0B3400)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHSELECTEDSTATEBYHASHSET_OFFSET UNITYSDK_OFFSET(0x1E0B3380)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHSELECTEDSTATEOFLISTBYHASHSET_OFFSET UNITYSDK_OFFSET(0x1E0B6490)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__SETCURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1E0B4F70)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__SHOWDECKPREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x1E0B4A60)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__TRYAPPLYRECOMMENDDECK_OFFSET UNITYSDK_OFFSET(0x1E0B4DE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___INITSELECTEDSETS_G__FILLSECTIONTOHASHSET_11_0_OFFSET UNITYSDK_OFFSET(0x1E0B51E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___REFRESHALLSELECTEDCARDS_G__FILLSELECTEDCARDSTORESULTLIST_12_0_OFFSET UNITYSDK_OFFSET(0x1E0B5770)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___TRYAPPLYRECOMMENDDECK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1E0B7740)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinSingleDeckEditViewModel_TypeDefinitionIndex = 83953;

	class FateRinSingleDeckEditViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SelectedServantCards; // 0x20
		::IFMNCLKDLDC* _DeckRecommendService; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _AllSelectedCards; // 0x30
		::RPG::Client::FateRin::ViewModelEventHandler* OnCurrentDeckRefresh; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SelectedMasterCards; // 0x40
		::LNKGMFCMGPN* _DeckService; // 0x48
		::CEEGMMCFCBG* _ShowDeckPreviewDialog_k__BackingField; // 0x50
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _AcquiredNeutralCards_k__BackingField; // 0x58
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* _Deck_k__BackingField; // 0x60
		::OBJANKHLNGO* _Messenger; // 0x68
		::CBJILMHOMGP* _ClickCard_k__BackingField; // 0x70
		::PEAFBFCPFCC* _RedDotService; // 0x78
		::CEEGMMCFCBG* _SetCurrentDeck_k__BackingField; // 0x80
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _AcquiredMasterCards_k__BackingField; // 0x88
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SelectedNeutralCards; // 0x90
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _AcquiredServantCards_k__BackingField; // 0x98
		::CEEGMMCFCBG* _TryApplyRecommendDeck_k__BackingField; // 0xA0
		::ELDKPCBCIIO* _UIPresentService; // 0xA8
		::System::Boolean _IsCurrentDeck_k__BackingField; // 0xB0
		::System::Boolean _IsInPlotMode_k__BackingField; // 0xB1
		::System::Void _ctor(::EOPFDKJOBIO* a1, ::System::Boolean a2, ::KKHBPFEMLKM* a3, ::FNMDEKMKEKH* a4, ::LNKGMFCMGPN* a5, ::IFMNCLKDLDC* a6, ::ELDKPCBCIIO* a7, ::PEAFBFCPFCC* a8, ::KIEIGGGKJOD* a9, ::DEGELHCLDJB* a10, ::OBJANKHLNGO* a11)
		{
			return ((::System::Void(*)(::PVOID, ::EOPFDKJOBIO*, ::System::Boolean, ::KKHBPFEMLKM*, ::FNMDEKMKEKH*, ::LNKGMFCMGPN*, ::IFMNCLKDLDC*, ::ELDKPCBCIIO*, ::PEAFBFCPFCC*, ::KIEIGGGKJOD*, ::DEGELHCLDJB*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		static ::System::Void _DisposeAcquiredList(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__DISPOSEACQUIREDLIST_OFFSET))(a1);
		}

		::System::Boolean IsFullySelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ISFULLYSELECTED_OFFSET))(this);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ISMODIFIED_OFFSET))(this);
		}

		::LNKGMFCMGPN_EFAGJLNFDHM GetModifyParam()
		{
			return ((::LNKGMFCMGPN_EFAGJLNFDHM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GETMODIFYPARAM_OFFSET))(this);
		}

		::System::Void _OnCardClick(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONCARDCLICK_OFFSET))(this, a1);
		}

		::System::Void _ShowDeckPreviewDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__SHOWDECKPREVIEWDIALOG_OFFSET))(this);
		}

		::System::Void _TryApplyRecommendDeck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__TRYAPPLYRECOMMENDDECK_OFFSET))(this);
		}

		::System::Void _SetCurrentDeck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__SETCURRENTDECK_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CreateAcquiredListFromOwnerType(::RPG::GameCore::FateRinHouguOwnerType a1, ::KKHBPFEMLKM* a2, ::KIEIGGGKJOD* a3)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::KKHBPFEMLKM*, ::KIEIGGGKJOD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__CREATEACQUIREDLISTFROMOWNERTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitSelectedSets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__INITSELECTEDSETS_OFFSET))(this);
		}

		::System::Void _RefreshAllSelectedCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHALLSELECTEDCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetSelectedSetByCardOwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__GETSELECTEDSETBYCARDOWNERTYPE_OFFSET))(this, a1);
		}

		::System::Void _OnPreviewDialogChangeConfirm(::CAMAJOHGKPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAMAJOHGKPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONPREVIEWDIALOGCHANGECONFIRM_OFFSET))(this, a1);
		}

		::System::Void _RefreshSelectedStateByHashSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHSELECTEDSTATEBYHASHSET_OFFSET))(this);
		}

		::System::Void _DoApplyRecommendDeck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__DOAPPLYRECOMMENDDECK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetSelectedCardIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__GETSELECTEDCARDIDLIST_OFFSET))(this);
		}

		::System::Void _OnCurrentDeckChange(::BFELIBKIOKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFELIBKIOKE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONCURRENTDECKCHANGE_OFFSET))(this, a1);
		}

		::System::Void _FillListToHashSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__FILLLISTTOHASHSET_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshSelectedStateOfListByHashSet(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHSELECTEDSTATEOFLISTBYHASHSET_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* get_Deck()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_DECK_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_AcquiredMasterCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDMASTERCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_AcquiredServantCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDSERVANTCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_AcquiredNeutralCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDNEUTRALCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_AllSelectedCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ALLSELECTEDCARDS_OFFSET))(this);
		}

		::System::Int32 get_SelectedMasterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDMASTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SelectedServantCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDSERVANTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SelectedNeutralCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDNEUTRALCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentDeck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ISCURRENTDECK_OFFSET))(this);
		}

		::System::Void set_IsCurrentDeck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_SET_ISCURRENTDECK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPlotMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ISINPLOTMODE_OFFSET))(this);
		}

		::System::Void set_IsInPlotMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_SET_ISINPLOTMODE_OFFSET))(this, a1);
		}

		::System::Void add_OnCurrentDeckRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ADD_ONCURRENTDECKREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnCurrentDeckRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_REMOVE_ONCURRENTDECKREFRESH_OFFSET))(this, a1);
		}

		::CBJILMHOMGP* get_ClickCard()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_CLICKCARD_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ShowDeckPreviewDialog()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SHOWDECKPREVIEWDIALOG_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_TryApplyRecommendDeck()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_TRYAPPLYRECOMMENDDECK_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_SetCurrentDeck()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SETCURRENTDECK_OFFSET))(this);
		}

		static ::System::Boolean _IsModified_g__IsSectionModified_4_0(::RPG::Client::FateRin::Card::IFateRinCardDeckSectionViewModel* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::Card::IFateRinCardDeckSectionViewModel*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ISMODIFIED_G__ISSECTIONMODIFIED_4_0_OFFSET))(a1, a2);
		}

		::System::Void __TryApplyRecommendDeck_b__8_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___TRYAPPLYRECOMMENDDECK_B__8_0_OFFSET))(this, a1);
		}

		static ::System::Void __InitSelectedSets_g__FillSectionToHashSet_11_0(::RPG::Client::FateRin::Card::IFateRinCardDeckSectionViewModel* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::FateRin::Card::IFateRinCardDeckSectionViewModel*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___INITSELECTEDSETS_G__FILLSECTIONTOHASHSET_11_0_OFFSET))(a1, a2);
		}

		::System::Void __RefreshAllSelectedCards_g__FillSelectedCardsToResultList_12_0(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___REFRESHALLSELECTEDCARDS_G__FILLSELECTEDCARDSTORESULTLIST_12_0_OFFSET))(this, a1, a2);
		}

	};
}
