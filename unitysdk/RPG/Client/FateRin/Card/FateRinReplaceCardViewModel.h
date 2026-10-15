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

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0xCEEC8E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEEC9E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEEA720)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEEAAA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CANREPLACECARD_OFFSET UNITYSDK_OFFSET(0xCEEC860)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0xCEEC880)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_INCOMINGCARD_OFFSET UNITYSDK_OFFSET(0xCEEC840)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_REPLACECARD_OFFSET UNITYSDK_OFFSET(0xCEEC8B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SELECTCARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0xCEEC8A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SHOWDECKVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0xCEEC8D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SKIPREPLACECARD_OFFSET UNITYSDK_OFFSET(0xCEEC8C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET__CURRENTDECK_OFFSET UNITYSDK_OFFSET(0xCEEC9C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xCEEACD0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0xCEEC950)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CANREPLACECARD_OFFSET UNITYSDK_OFFSET(0xCEEC870)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0xCEEC890)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_INCOMINGCARD_OFFSET UNITYSDK_OFFSET(0xCEEC850)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET__CURRENTDECK_OFFSET UNITYSDK_OFFSET(0xCEEC9D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__FINDRECOMMENDEDCARD_OFFSET UNITYSDK_OFFSET(0xCEEB320)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__INITCANREPLACECARD_OFFSET UNITYSDK_OFFSET(0xCEEAF00)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPLACECARD_OFFSET UNITYSDK_OFFSET(0xCEEBDE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPORTREPLACECARD_OFFSET UNITYSDK_OFFSET(0xCEEC170)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SELECTCARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0xCEEBA30)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SETINCOMINGCOLLECTABLECARDSEEN_OFFSET UNITYSDK_OFFSET(0xCEEC630)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SHOWDECKVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0xCEEC7A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SKIPREPLACECARD_OFFSET UNITYSDK_OFFSET(0xCEEC0F0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel_TypeDefinitionIndex = 81167;

	class FateRinReplaceCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::CEEGMMCFCBG* _ReplaceCard_k__BackingField; // 0x20
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _IncomingCard_k__BackingField; // 0x28
		::DEGELHCLDJB* _OwnerVmFactory; // 0x30
		::ELDKPCBCIIO* _UIPresentService; // 0x38
		::LNKGMFCMGPN* _DeckService; // 0x40
		::PEAFBFCPFCC* _RedDotService; // 0x48
		::HPOCHBIJIHH* _DeckRepository; // 0x50
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _CardToBeReplaced_k__BackingField; // 0x58
		::FNMDEKMKEKH* _CardService; // 0x60
		::CEEGMMCFCBG* _SkipReplaceCard_k__BackingField; // 0x68
		::OBJANKHLNGO* _Messenger; // 0x70
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CanReplaceCard_k__BackingField; // 0x78
		::CBJILMHOMGP* _SelectCardToBeReplaced_k__BackingField; // 0x80
		::CEEGMMCFCBG* _ShowDeckViewDialog_k__BackingField; // 0x88
		::KIEIGGGKJOD* _CardVmFactory; // 0x90
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* __CurrentDeck_k__BackingField; // 0x98
		::RPG::Client::FateRin::ViewModelEventHandler* OnNotifyExit; // 0xA0
		::System::Boolean _HasReported; // 0xA8
		static ::Il2CppArray<::System::UInt32>** StaticGet_DefaultReplacementCardIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "FateRinReplaceCardViewModel")->GetStaticField(0x55150);
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
