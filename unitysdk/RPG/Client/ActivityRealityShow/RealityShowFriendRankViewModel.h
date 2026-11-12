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

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0xCEEEA30)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONENTRIESCHANGED_OFFSET UNITYSDK_OFFSET(0xCEEE970)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONSELECTEDTABCHANGED_OFFSET UNITYSDK_OFFSET(0xCEEE7D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_ONTABRANKSCHANGED_OFFSET UNITYSDK_OFFSET(0xCEEE890)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_ADD_TUTORIALREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEEEAF0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEF0A70)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEEC8D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEEEC80)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0xCEEEBB0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xCEEEBF0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_HASFRIENDRECORD_OFFSET UNITYSDK_OFFSET(0xCEEEC30)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0xCEEEC50)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_OPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCEEEC70)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xCEEEBD0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_SELFENTRY_OFFSET UNITYSDK_OFFSET(0xCEEEC10)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_GET_TABS_OFFSET UNITYSDK_OFFSET(0xCEEEBC0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0xCEEEA90)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONENTRIESCHANGED_OFFSET UNITYSDK_OFFSET(0xCEEE9D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONSELECTEDTABCHANGED_OFFSET UNITYSDK_OFFSET(0xCEEE830)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_ONTABRANKSCHANGED_OFFSET UNITYSDK_OFFSET(0xCEEE900)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_REMOVE_TUTORIALREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEEEB50)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xCEEEC00)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_HASFRIENDRECORD_OFFSET UNITYSDK_OFFSET(0xCEEEC40)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_ISLOADING_OFFSET UNITYSDK_OFFSET(0xCEEEC60)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xCEEEBE0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL_SET_SELFENTRY_OFFSET UNITYSDK_OFFSET(0xCEEEC20)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__APPLYBOARD_OFFSET UNITYSDK_OFFSET(0xCEEF5B0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CLEARBOARD_OFFSET UNITYSDK_OFFSET(0xCEEF500)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CREATEENTRY_OFFSET UNITYSDK_OFFSET(0xCEEFF20)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__CREATELINEUPICONPATHS_OFFSET UNITYSDK_OFFSET(0xCEF01F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__FINDINITTAB_OFFSET UNITYSDK_OFFSET(0xCEEDE50)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__GETAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xCEF0980)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__GETDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCEF08D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONACTIVITYCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCEF0180)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONOPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCEF0110)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONRANKBOARDRECEIVED_OFFSET UNITYSDK_OFFSET(0xCEEFCC0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__ONTABCLICKED_OFFSET UNITYSDK_OFFSET(0xCEEF240)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__REPORTRANKOPEN_OFFSET UNITYSDK_OFFSET(0xCEEE690)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__REQUESTRANKBOARDS_OFFSET UNITYSDK_OFFSET(0xCEED0E0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__SELECTTAB_OFFSET UNITYSDK_OFFSET(0xCEEE3C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL__SENDRANKOPENREPORT_OFFSET UNITYSDK_OFFSET(0xCEEF2E0)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowFriendRankViewModel_TypeDefinitionIndex = 84921;

	class RealityShowFriendRankViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJIKNDKJDLG*>* _Boards; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _PendingReportChallengeIDs; // 0x28
		::System::Action* OnActivityClose; // 0x30
		::MKPKHAOGJHA* _RankService; // 0x38
		::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* _SelectedTab_k__BackingField; // 0x40
		::OBJANKHLNGO* _Messenger; // 0x48
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*>* _Tabs_k__BackingField; // 0x50
		::System::Action* OnSelectedTabChanged; // 0x58
		::System::Action* OnEntriesChanged; // 0x60
		::System::Action_1<::System::UInt32>* TutorialRequested; // 0x68
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>* _Entries_k__BackingField; // 0x70
		::Sofa::Core::SimpleCommand* _OpenTutorial_k__BackingField; // 0x78
		::System::Action* OnTabRanksChanged; // 0x80
		::MINAKLCBJMO* _ActivityService; // 0x88
		::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel* _SelfEntry_k__BackingField; // 0x90
		::System::Boolean _HasFriendRecord_k__BackingField; // 0x98
		::System::Boolean _IsDisposed; // 0x99
		::System::Boolean _IsLoading_k__BackingField; // 0x9A
		::System::Byte _padding0[0x5];
		::RPG::Client::TextID _ActivityName_k__BackingField; // 0xA0
		static ::System::Collections::Generic::List_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>** StaticGet__EmptyEntries()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::ActivityRealityShow::RealityShowFriendRankEntryViewModel*>**)UnitySDK::FromName("RPG.Client.ActivityRealityShow", "RealityShowFriendRankViewModel")->GetStaticField(0x33050);
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
