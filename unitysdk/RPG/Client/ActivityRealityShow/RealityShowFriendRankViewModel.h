#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class BJIKNDKJDLG;
class EBHGHFIKCOD;
class KLIEPBLDOHF;
class MINAKLCBJMO;
class MKPKHAOGJHA;
class OBJANKHLNGO;
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::ActivityRealityShow { class RealityShowFriendRankEntryViewModel; }
namespace RPG::Client::ActivityRealityShow { class RealityShowFriendRankTabViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0x1DCB1650)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONENTRIESCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCB1590)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONSELECTEDTABCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCB13F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONTABRANKSCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCB14B0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_TUTORIALREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCB1730)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB36B0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAF4F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DCB18C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x1DCB17F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1DCB1830)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_HASFRIENDRECORD_OFFSET UNITYSDK_OFFSET(0x1DCB1870)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1DCB1890)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_OPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1DCB18B0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0x1DCB1810)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_SELFENTRY_OFFSET UNITYSDK_OFFSET(0x1DCB1850)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_TABS_OFFSET UNITYSDK_OFFSET(0x1DCB1800)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0x1DCB16C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONENTRIESCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCB15F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONSELECTEDTABCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCB1450)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONTABRANKSCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCB1520)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_TUTORIALREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCB1790)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1DCB1840)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_HASFRIENDRECORD_OFFSET UNITYSDK_OFFSET(0x1DCB1880)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1DCB18A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0x1DCB1820)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_SELFENTRY_OFFSET UNITYSDK_OFFSET(0x1DCB1860)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__APPLYBOARD_OFFSET UNITYSDK_OFFSET(0x1DCB21F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CLEARBOARD_OFFSET UNITYSDK_OFFSET(0x1DCB2140)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CREATEENTRY_OFFSET UNITYSDK_OFFSET(0x1DCB2B60)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CREATELINEUPICONPATHS_OFFSET UNITYSDK_OFFSET(0x1DCB2E30)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__FINDINITTAB_OFFSET UNITYSDK_OFFSET(0x1DCB0A70)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__GETAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x1DCB35C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__GETDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1DCB3510)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONACTIVITYCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DCB2DC0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONOPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1DCB2D50)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONRANKBOARDRECEIVED_OFFSET UNITYSDK_OFFSET(0x1DCB2900)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONTABCLICKED_OFFSET UNITYSDK_OFFSET(0x1DCB1E80)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__REPORTRANKOPEN_OFFSET UNITYSDK_OFFSET(0x1DCB12B0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__REQUESTRANKBOARDS_OFFSET UNITYSDK_OFFSET(0x1DCAFD00)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__SELECTTAB_OFFSET UNITYSDK_OFFSET(0x1DCB0FE0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__SENDRANKOPENREPORT_OFFSET UNITYSDK_OFFSET(0x1DCB1F20)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowFriendRankViewModel_TypeDefinitionIndex = 84920;

	class RealityShowFriendRankViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJIKNDKJDLG*>* _Boards; // 0x20
		::OBJANKHLNGO* _Messenger; // 0x28
		::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* _SelectedTab_k__BackingField; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*>* _Tabs_k__BackingField; // 0x38
		::System::Action* OnEntriesChanged; // 0x40
		::Sofa::Core::SimpleCommand* _OpenTutorial_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _PendingReportChallengeIDs; // 0x50
		::System::Action* OnSelectedTabChanged; // 0x58
		::MINAKLCBJMO* _ActivityService; // 0x60
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>* _Entries_k__BackingField; // 0x68
		::System::Action_1<::System::UInt32>* TutorialRequested; // 0x70
		::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel* _SelfEntry_k__BackingField; // 0x78
		::System::Action* OnActivityClose; // 0x80
		::System::Action* OnTabRanksChanged; // 0x88
		::MKPKHAOGJHA* _RankService; // 0x90
		::RPG::Client::TextID _ActivityName_k__BackingField; // 0x98
		::System::Boolean _IsLoading_k__BackingField; // 0xA8
		::System::Boolean _IsDisposed; // 0xA9
		::System::Boolean _HasFriendRecord_k__BackingField; // 0xAA
		static ::System::Collections::Generic::List_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>** StaticGet__EmptyEntries()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>**)UnitySDK::FromName("RPG.Client.ActivityRealityShow", "RealityShowFriendRankViewModel")->GetStaticField(0x3B130);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*>* a2, ::RPG::Client::TextID a3, ::MKPKHAOGJHA* a4, ::MINAKLCBJMO* a5, ::OBJANKHLNGO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*>*, ::RPG::Client::TextID, ::MKPKHAOGJHA*, ::MINAKLCBJMO*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_CCTOR_OFFSET))();
		}

		::System::Void add_OnSelectedTabChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONSELECTEDTABCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSelectedTabChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONSELECTEDTABCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnTabRanksChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONTABRANKSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTabRanksChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONTABRANKSCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnEntriesChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONENTRIESCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEntriesChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONENTRIESCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnActivityClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONACTIVITYCLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnActivityClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONACTIVITYCLOSE_OFFSET))(this, a1);
		}

		::System::Void add_TutorialRequested(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_TUTORIALREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_TutorialRequested(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_TUTORIALREQUESTED_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ActivityName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ACTIVITYNAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*>* get_Tabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_TABS_OFFSET))(this);
		}

		::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* get_SelectedTab()
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_SELECTEDTAB_OFFSET))(this);
		}

		::System::Void set_SelectedTab(::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_SELECTEDTAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ENTRIES_OFFSET))(this);
		}

		::System::Void set_Entries(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_ENTRIES_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel* get_SelfEntry()
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_SELFENTRY_OFFSET))(this);
		}

		::System::Void set_SelfEntry(::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_SELFENTRY_OFFSET))(this, a1);
		}

		::System::Boolean get_HasFriendRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_HASFRIENDRECORD_OFFSET))(this);
		}

		::System::Void set_HasFriendRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_HASFRIENDRECORD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ISLOADING_OFFSET))(this);
		}

		::System::Void set_IsLoading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_ISLOADING_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OpenTutorial()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_OPENTUTORIAL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* _FindInitTab(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__FINDINITTAB_OFFSET))(this, a1);
		}

		::System::Void _OnTabClicked(::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONTABCLICKED_OFFSET))(this, a1);
		}

		::System::Void _ReportRankOpen(::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__REPORTRANKOPEN_OFFSET))(this, a1);
		}

		::System::Void _SendRankOpenReport(::System::UInt32 a1, ::BJIKNDKJDLG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::BJIKNDKJDLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__SENDRANKOPENREPORT_OFFSET))(this, a1, a2);
		}

		::System::Void _SelectTab(::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__SELECTTAB_OFFSET))(this, a1);
		}

		::System::Void _RequestRankBoards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__REQUESTRANKBOARDS_OFFSET))(this);
		}

		::System::Void _OnRankBoardReceived(::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* a1, ::BJIKNDKJDLG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*, ::BJIKNDKJDLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONRANKBOARDRECEIVED_OFFSET))(this, a1, a2);
		}

		::System::Void _ApplyBoard(::BJIKNDKJDLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJIKNDKJDLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__APPLYBOARD_OFFSET))(this, a1);
		}

		::System::Void _ClearBoard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CLEARBOARD_OFFSET))(this, a1);
		}

		::System::Void _OnOpenTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONOPENTUTORIAL_OFFSET))(this);
		}

		::System::Void _OnActivityCloseMessage(::KLIEPBLDOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIEPBLDOHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONACTIVITYCLOSEMESSAGE_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel* _CreateEntry(::EBHGHFIKCOD* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*(*)(::EBHGHFIKCOD*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CREATEENTRY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::PlayerBriefDisplayData* _GetDisplayData(::EBHGHFIKCOD* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::EBHGHFIKCOD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__GETDISPLAYDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* _CreateLineupIconPaths(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CREATELINEUPICONPATHS_OFFSET))(a1);
		}

		static ::System::String* _GetAvatarIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__GETAVATARICONPATH_OFFSET))(a1);
		}

	};
}
