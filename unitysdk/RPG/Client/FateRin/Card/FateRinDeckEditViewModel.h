#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class BFELIBKIOKE;
class CEEGMMCFCBG;
class DEGELHCLDJB;
class ELDKPCBCIIO;
class FNMDEKMKEKH;
class IFMNCLKDLDC;
class KIEIGGGKJOD;
class KKHBPFEMLKM;
class LNKGMFCMGPN;
class OBJANKHLNGO;
class PEAFBFCPFCC;
class PFLDDDHEAJO;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class FateRinSingleDeckEditViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_ADD_ONCURRENTDECKREFRESH_OFFSET UNITYSDK_OFFSET(0xCEE4FB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_ADD_ONPAGEEXITCONFIRMED_OFFSET UNITYSDK_OFFSET(0xCEE5070)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE21A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEE3330)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_CURRENTDECKINDEX_OFFSET UNITYSDK_OFFSET(0xCEE4F70)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_DECKS_OFFSET UNITYSDK_OFFSET(0xCEE3E80)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_ISINPLOTMODE_OFFSET UNITYSDK_OFFSET(0xCEE4F90)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_TRYSAVEDECKSANDEXIT_OFFSET UNITYSDK_OFFSET(0xCEE5130)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_REMOVE_ONCURRENTDECKREFRESH_OFFSET UNITYSDK_OFFSET(0xCEE5010)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_REMOVE_ONPAGEEXITCONFIRMED_OFFSET UNITYSDK_OFFSET(0xCEE50D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_SET_CURRENTDECKINDEX_OFFSET UNITYSDK_OFFSET(0xCEE4F80)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_SET_ISINPLOTMODE_OFFSET UNITYSDK_OFFSET(0xCEE4FA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__DOSAVEDECKSANDEXIT_OFFSET UNITYSDK_OFFSET(0xCEE42F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__GETCURRENTDECKINDEX_OFFSET UNITYSDK_OFFSET(0xCEE31D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__ONCURRENTDECKCHANGE_OFFSET UNITYSDK_OFFSET(0xCEE4F00)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__TRYSAVEDECKSANDEXIT_OFFSET UNITYSDK_OFFSET(0xCEE3620)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___TRYSAVEDECKSANDEXIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xCEE5140)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinDeckEditViewModel_TypeDefinitionIndex = 81160;

	class FateRinDeckEditViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::OBJANKHLNGO* _Messenger; // 0x20
		::RPG::Client::FateRin::ViewModelEventHandler* OnCurrentDeckRefresh; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel*>* _Decks; // 0x30
		::PEAFBFCPFCC* _RedDotService; // 0x38
		::RPG::Client::FateRin::ViewModelEventHandler* OnPageExitConfirmed; // 0x40
		::LNKGMFCMGPN* _DeckService; // 0x48
		::CEEGMMCFCBG* _TrySaveDecksAndExit_k__BackingField; // 0x50
		::System::Boolean _IsInPlotMode_k__BackingField; // 0x58
		::System::Byte _padding0[0x3];
		::System::UInt32 _CurrentDeckIndex_k__BackingField; // 0x5C
		::System::Void _ctor(::KKHBPFEMLKM* a1, ::FNMDEKMKEKH* a2, ::LNKGMFCMGPN* a3, ::IFMNCLKDLDC* a4, ::PFLDDDHEAJO* a5, ::ELDKPCBCIIO* a6, ::PEAFBFCPFCC* a7, ::KIEIGGGKJOD* a8, ::DEGELHCLDJB* a9, ::OBJANKHLNGO* a10)
		{
			return ((::System::Void(*)(::PVOID, ::KKHBPFEMLKM*, ::FNMDEKMKEKH*, ::LNKGMFCMGPN*, ::IFMNCLKDLDC*, ::PFLDDDHEAJO*, ::ELDKPCBCIIO*, ::PEAFBFCPFCC*, ::KIEIGGGKJOD*, ::DEGELHCLDJB*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _TrySaveDecksAndExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__TRYSAVEDECKSANDEXIT_OFFSET))(this);
		}

		::System::Void _DoSaveDecksAndExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__DOSAVEDECKSANDEXIT_OFFSET))(this);
		}

		::System::Void _OnCurrentDeckChange(::BFELIBKIOKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFELIBKIOKE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__ONCURRENTDECKCHANGE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCurrentDeckIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__GETCURRENTDECKINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel*>* get_Decks()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_DECKS_OFFSET))(this);
		}

		::System::UInt32 get_CurrentDeckIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_CURRENTDECKINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentDeckIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_SET_CURRENTDECKINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPlotMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_ISINPLOTMODE_OFFSET))(this);
		}

		::System::Void set_IsInPlotMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_SET_ISINPLOTMODE_OFFSET))(this, a1);
		}

		::System::Void add_OnCurrentDeckRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_ADD_ONCURRENTDECKREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnCurrentDeckRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_REMOVE_ONCURRENTDECKREFRESH_OFFSET))(this, a1);
		}

		::System::Void add_OnPageExitConfirmed(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_ADD_ONPAGEEXITCONFIRMED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageExitConfirmed(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_REMOVE_ONPAGEEXITCONFIRMED_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* get_TrySaveDecksAndExit()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_TRYSAVEDECKSANDEXIT_OFFSET))(this);
		}

		::System::Void __TrySaveDecksAndExit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___TRYSAVEDECKSANDEXIT_B__2_0_OFFSET))(this);
		}

	};
}
