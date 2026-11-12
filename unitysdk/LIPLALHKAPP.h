#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJILMHOMGP;
class CEEGMMCFCBG;
class FIEDGBPNHMN;
class PEKFHPMIPDD;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class Subject_1; }
namespace RPG::Client::Ui::Samples { class FriendChatContactVM; }
namespace RPG::Client::Ui::Samples { class FriendChatTabViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIPLALHKAPP_ADD_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xBF79730)
#define LIPLALHKAPP_ADOJAMKCNJA_OFFSET UNITYSDK_OFFSET(0xBF77970)
#define LIPLALHKAPP_BALOALIEEDB_OFFSET UNITYSDK_OFFSET(0xBF79670)
#define LIPLALHKAPP_BBFBBPNENAC_OFFSET UNITYSDK_OFFSET(0xBF773D0)
#define LIPLALHKAPP_CDLDOMCAGBI_OFFSET UNITYSDK_OFFSET(0xBF79430)
#define LIPLALHKAPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF77C90)
#define LIPLALHKAPP_GET_CONTACTS_OFFSET UNITYSDK_OFFSET(0xBF79000)
#define LIPLALHKAPP_GET_FIRSTONLINECONTACT_OFFSET UNITYSDK_OFFSET(0xBF77950)
#define LIPLALHKAPP_GET_ISPAMCHATENABLED_OFFSET UNITYSDK_OFFSET(0xBF78FC0)
#define LIPLALHKAPP_GET_ISPAMCHATLLMENABLED_OFFSET UNITYSDK_OFFSET(0xBF78FD0)
#define LIPLALHKAPP_GET_ISPAMSELECTED_OFFSET UNITYSDK_OFFSET(0xBF79030)
#define LIPLALHKAPP_GET_ISSENDPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0xBF79060)
#define LIPLALHKAPP_GET_SELECTEDCONTACT_OFFSET UNITYSDK_OFFSET(0xBF77960)
#define LIPLALHKAPP_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xBF79010)
#define LIPLALHKAPP_GET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xBF79020)
#define LIPLALHKAPP_GET_SUBTITLETEXTID_OFFSET UNITYSDK_OFFSET(0xBF79040)
#define LIPLALHKAPP_GET_TABS_OFFSET UNITYSDK_OFFSET(0xBF78FF0)
#define LIPLALHKAPP_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xBF79050)
#define LIPLALHKAPP_GET_TOPBARVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBF78FE0)
#define LIPLALHKAPP_GET_UISTATENAME_OFFSET UNITYSDK_OFFSET(0xBF79070)
#define LIPLALHKAPP_HCCAFKMBHOE_OFFSET UNITYSDK_OFFSET(0xBF795B0)
#define LIPLALHKAPP_KBIMIGPFKFE_OFFSET UNITYSDK_OFFSET(0xBF77750)
#define LIPLALHKAPP_KLDDBBDIEMA_OFFSET UNITYSDK_OFFSET(0xBF79140)
#define LIPLALHKAPP_LDFHCDCIPBK_OFFSET UNITYSDK_OFFSET(0xBF79080)
#define LIPLALHKAPP_LKFFDJHELBL_OFFSET UNITYSDK_OFFSET(0xBF77790)
#define LIPLALHKAPP_MAJPICOIKAK_OFFSET UNITYSDK_OFFSET(0xBF792C0)
#define LIPLALHKAPP_NBICGPMJBHO_OFFSET UNITYSDK_OFFSET(0xBF794F0)
#define LIPLALHKAPP_NJHJMCAOCBC_OFFSET UNITYSDK_OFFSET(0xBF79200)
#define LIPLALHKAPP_REMOVE_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xBF79790)
#define LIPLALHKAPP__GET_ONEXITCOMMAND_B__58_0_OFFSET UNITYSDK_OFFSET(0xBF79BB0)
#define LIPLALHKAPP__GET_ONNEXTTABCOMMAND_B__55_0_OFFSET UNITYSDK_OFFSET(0xBF799D0)
#define LIPLALHKAPP__GET_ONPREVIOUSTABCOMMAND_B__52_0_OFFSET UNITYSDK_OFFSET(0xBF797F0)
#define LIPLALHKAPP__GET_REMOVELASTCONTACTCOMMAND_B__70_0_OFFSET UNITYSDK_OFFSET(0xBF79DE0)
#define LIPLALHKAPP__GET_RENAMEFIRSTCONTACTCOMMAND_B__64_0_OFFSET UNITYSDK_OFFSET(0xBF79BD0)
#define LIPLALHKAPP__GET_SCROLLTOLASTCONTACTCOMMAND_B__73_0_OFFSET UNITYSDK_OFFSET(0xBF79E70)

inline static constexpr unsigned int LIPLALHKAPP_TypeDefinitionIndex = 75573;

	class LIPLALHKAPP : public ::System::Object
	{
	public:
		::R3::Subject_1<::System::Int32>* DKKGMPPEGNI; // 0x10
		::R3::Observable_1<::System::Boolean>* _IsSendPanelVisible_k__BackingField; // 0x18
		::Sofa::Core::SimpleCommand* LJGHCLANIEB; // 0x20
		::R3::Observable_1<::System::String*>* _TitleText_k__BackingField; // 0x28
		::PEKFHPMIPDD* LPEGKFBPJOI; // 0x30
		::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* _Tabs_k__BackingField; // 0x38
		::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* _SelectedContact_k__BackingField; // 0x40
		::Sofa::Core::SimpleCommand* FJAHLMCIIJM; // 0x48
		::R3::ReactiveProperty_1<::System::Int32>* _SelectedTabIndex_k__BackingField; // 0x50
		::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* _SelectedTab_k__BackingField; // 0x58
		::R3::Observable_1<::System::String*>* _SubTitleTextID_k__BackingField; // 0x60
		::Sofa::Core::SimpleCommand* BJLGNMENHAA; // 0x68
		::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* _FirstOnlineContact_k__BackingField; // 0x70
		::System::Action* ExitRequested; // 0x78
		::Sofa::Core::SimpleCommand* LINLNGALPHK; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* CJMFBDCOJGK; // 0x88
		::Sofa::Core::SimpleCommand* PHAKDIJILEK; // 0x90
		::R3::ReactiveProperty_1<::System::String*>* _UiStateName_k__BackingField; // 0x98
		::FIEDGBPNHMN* _TopBarViewModel_k__BackingField; // 0xA0
		::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* _Contacts_k__BackingField; // 0xA8
		::R3::Observable_1<::System::Boolean>* _IsPamSelected_k__BackingField; // 0xB0
		::PEKFHPMIPDD* ENNBEOPCEHG; // 0xB8
		::Sofa::Core::SimpleCommand* GFFLPAOPOHA; // 0xC0
		::System::Boolean _IsPamChatLLMEnabled_k__BackingField; // 0xC8
		::System::Boolean _IsPamChatEnabled_k__BackingField; // 0xC9
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LIPLALHKAPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BBFBBPNENAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_BBFBBPNENAC_OFFSET))(this);
		}

		::R3::Observable_1<::System::Int32>* KBIMIGPFKFE()
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_KBIMIGPFKFE_OFFSET))(this);
		}

		::System::Void LKFFDJHELBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_LKFFDJHELBL_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* get_FirstOnlineContact()
		{
			return ((::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_FIRSTONLINECONTACT_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* get_SelectedContact()
		{
			return ((::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_SELECTEDCONTACT_OFFSET))(this);
		}

		::System::Void ADOJAMKCNJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_ADOJAMKCNJA_OFFSET))(this);
		}

		::System::Boolean get_IsPamChatEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_ISPAMCHATENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsPamChatLLMEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_ISPAMCHATLLMENABLED_OFFSET))(this);
		}

		::FIEDGBPNHMN* get_TopBarViewModel()
		{
			return ((::FIEDGBPNHMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_TOPBARVIEWMODEL_OFFSET))(this);
		}

		::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* get_Tabs()
		{
			return ((::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_TABS_OFFSET))(this);
		}

		::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* get_Contacts()
		{
			return ((::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_CONTACTS_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Int32>* get_SelectedTabIndex()
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_SELECTEDTABINDEX_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* get_SelectedTab()
		{
			return ((::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_SELECTEDTAB_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* get_IsPamSelected()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_ISPAMSELECTED_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* get_SubTitleTextID()
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_SUBTITLETEXTID_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* get_TitleText()
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_TITLETEXT_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* get_IsSendPanelVisible()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_ISSENDPANELVISIBLE_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_UiStateName()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_GET_UISTATENAME_OFFSET))(this);
		}

		::CEEGMMCFCBG* LDFHCDCIPBK()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_LDFHCDCIPBK_OFFSET))(this);
		}

		::CBJILMHOMGP* KLDDBBDIEMA()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_KLDDBBDIEMA_OFFSET))(this);
		}

		::CEEGMMCFCBG* NJHJMCAOCBC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_NJHJMCAOCBC_OFFSET))(this);
		}

		::CBJILMHOMGP* MAJPICOIKAK()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_MAJPICOIKAK_OFFSET))(this);
		}

		::CEEGMMCFCBG* CDLDOMCAGBI()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_CDLDOMCAGBI_OFFSET))(this);
		}

		::CEEGMMCFCBG* NBICGPMJBHO()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_NBICGPMJBHO_OFFSET))(this);
		}

		::CEEGMMCFCBG* HCCAFKMBHOE()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_HCCAFKMBHOE_OFFSET))(this);
		}

		::CEEGMMCFCBG* BALOALIEEDB()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP_BALOALIEEDB_OFFSET))(this);
		}

		::System::Void add_ExitRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LIPLALHKAPP_ADD_EXITREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_ExitRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LIPLALHKAPP_REMOVE_EXITREQUESTED_OFFSET))(this, a1);
		}

		::System::Void _get_OnPreviousTabCommand_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP__GET_ONPREVIOUSTABCOMMAND_B__52_0_OFFSET))(this);
		}

		::System::Void _get_OnNextTabCommand_b__55_0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIPLALHKAPP__GET_ONNEXTTABCOMMAND_B__55_0_OFFSET))(this, a1);
		}

		::System::Void _get_OnExitCommand_b__58_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP__GET_ONEXITCOMMAND_B__58_0_OFFSET))(this);
		}

		::System::Void _get_RenameFirstContactCommand_b__64_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP__GET_RENAMEFIRSTCONTACTCOMMAND_B__64_0_OFFSET))(this);
		}

		::System::Void _get_RemoveLastContactCommand_b__70_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP__GET_REMOVELASTCONTACTCOMMAND_B__70_0_OFFSET))(this);
		}

		::System::Void _get_ScrollToLastContactCommand_b__73_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPLALHKAPP__GET_SCROLLTOLASTCONTACTCOMMAND_B__73_0_OFFSET))(this);
		}

	};
