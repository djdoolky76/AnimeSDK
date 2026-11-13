#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class CBJILMHOMGP;
class CEEGMMCFCBG;
class DEGELHCLDJB;
class ELDKPCBCIIO;
class FNMDEKMKEKH;
class HPOCHBIJIHH;
class KIEIGGGKJOD;
class LNKGMFCMGPN;
class OBJANKHLNGO;
class PEAFBFCPFCC;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0x1E0B25C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B26A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B03F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E0B0770)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CANREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1E0B2540)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0x1E0B2560)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_INCOMINGCARD_OFFSET UNITYSDK_OFFSET(0x1E0B2520)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_REPLACECARD_OFFSET UNITYSDK_OFFSET(0x1E0B2590)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SELECTCARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0x1E0B2580)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SHOWDECKVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x1E0B25B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SKIPREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1E0B25A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET__CURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1E0B2680)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0x1E0B09A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0x1E0B2620)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CANREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1E0B2550)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0x1E0B2570)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_INCOMINGCARD_OFFSET UNITYSDK_OFFSET(0x1E0B2530)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET__CURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1E0B2690)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__FINDRECOMMENDEDCARD_OFFSET UNITYSDK_OFFSET(0x1E0B0FF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__INITCANREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1E0B0BD0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPLACECARD_OFFSET UNITYSDK_OFFSET(0x1E0B1AB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPORTREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1E0B1E40)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SELECTCARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0x1E0B1700)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SETINCOMINGCOLLECTABLECARDSEEN_OFFSET UNITYSDK_OFFSET(0x1E0B2310)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SHOWDECKVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x1E0B2480)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SKIPREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1E0B1DC0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel_TypeDefinitionIndex = 83947;

	class FateRinReplaceCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* __CurrentDeck_k__BackingField; // 0x20
		::ELDKPCBCIIO* _UIPresentService; // 0x28
		::RPG::Client::FateRin::ViewModelEventHandler* OnNotifyExit; // 0x30
		::LNKGMFCMGPN* _DeckService; // 0x38
		::CEEGMMCFCBG* _SkipReplaceCard_k__BackingField; // 0x40
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _IncomingCard_k__BackingField; // 0x48
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _CardToBeReplaced_k__BackingField; // 0x50
		::PEAFBFCPFCC* _RedDotService; // 0x58
		::KIEIGGGKJOD* _CardVmFactory; // 0x60
		::CEEGMMCFCBG* _ShowDeckViewDialog_k__BackingField; // 0x68
		::CEEGMMCFCBG* _ReplaceCard_k__BackingField; // 0x70
		::DEGELHCLDJB* _OwnerVmFactory; // 0x78
		::OBJANKHLNGO* _Messenger; // 0x80
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CanReplaceCard_k__BackingField; // 0x88
		::CBJILMHOMGP* _SelectCardToBeReplaced_k__BackingField; // 0x90
		::FNMDEKMKEKH* _CardService; // 0x98
		::HPOCHBIJIHH* _DeckRepository; // 0xA0
		::System::Boolean _HasReported; // 0xA8
		static ::Il2CppArray<::System::UInt32>** StaticGet_DefaultReplacementCardIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "FateRinReplaceCardViewModel")->GetStaticField(0x5BF70);
		}

		::System::Void _ctor(::HPOCHBIJIHH* a1, ::FNMDEKMKEKH* a2, ::LNKGMFCMGPN* a3, ::ELDKPCBCIIO* a4, ::KIEIGGGKJOD* a5, ::DEGELHCLDJB* a6, ::PEAFBFCPFCC* a7, ::OBJANKHLNGO* a8)
		{
			return ((::System::Void(*)(::PVOID, ::HPOCHBIJIHH*, ::FNMDEKMKEKH*, ::LNKGMFCMGPN*, ::ELDKPCBCIIO*, ::KIEIGGGKJOD*, ::DEGELHCLDJB*, ::PEAFBFCPFCC*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_INIT_OFFSET))(this, a1);
		}

		::System::Void _InitCanReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__INITCANREPLACECARD_OFFSET))(this);
		}

		::System::Void _SelectCardToBeReplaced(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SELECTCARDTOBEREPLACED_OFFSET))(this, a1);
		}

		::System::Void _ReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPLACECARD_OFFSET))(this);
		}

		::System::Void _SkipReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SKIPREPLACECARD_OFFSET))(this);
		}

		::System::Void _ReportReplaceCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPORTREPLACECARD_OFFSET))(this, a1);
		}

		::System::Void _SetIncomingCollectableCardSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SETINCOMINGCOLLECTABLECARDSEEN_OFFSET))(this);
		}

		::System::Void _ShowDeckViewDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SHOWDECKVIEWDIALOG_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _FindRecommendedCard(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__FINDRECOMMENDEDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* get_IncomingCard()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_INCOMINGCARD_OFFSET))(this);
		}

		::System::Void set_IncomingCard(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_INCOMINGCARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_CanReplaceCard()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CANREPLACECARD_OFFSET))(this);
		}

		::System::Void set_CanReplaceCard(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CANREPLACECARD_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* get_CardToBeReplaced()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CARDTOBEREPLACED_OFFSET))(this);
		}

		::System::Void set_CardToBeReplaced(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CARDTOBEREPLACED_OFFSET))(this, a1);
		}

		::CBJILMHOMGP* get_SelectCardToBeReplaced()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SELECTCARDTOBEREPLACED_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ReplaceCard()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_REPLACECARD_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_SkipReplaceCard()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SKIPREPLACECARD_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ShowDeckViewDialog()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SHOWDECKVIEWDIALOG_OFFSET))(this);
		}

		::System::Void add_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* get__CurrentDeck()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET__CURRENTDECK_OFFSET))(this);
		}

		::System::Void set__CurrentDeck(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET__CURRENTDECK_OFFSET))(this, a1);
		}

	};
}
