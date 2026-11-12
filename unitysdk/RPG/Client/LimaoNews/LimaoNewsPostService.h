#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIFMNJNCIEF;
class LDGFEEFHNKH;
class PBLBAAMLNLH;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::LimaoNews { class LimaoNewsCommentViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }
namespace RPG::Client::LimaoNews { class LimaoNewsStateTagViewModel; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CLEARNEW_OFFSET UNITYSDK_OFFSET(0xDE13190)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CREATECOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE135C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xDDFBD80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDFC510)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETALLCANSUBMITPOSTS_OFFSET UNITYSDK_OFFSET(0xDE12C80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETALLSHOWPOSTS_OFFSET UNITYSDK_OFFSET(0xDE127F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETNEWPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0xDE12EE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETORCREATEPOSTDATA_OFFSET UNITYSDK_OFFSET(0xDE12670)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETPOSTSTATETAGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE13480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETTOPCANSUBMITPOSTDATA_OFFSET UNITYSDK_OFFSET(0xDE12B00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GOTOPOSTTRACKSURVEYMISSION_OFFSET UNITYSDK_OFFSET(0xDE13410)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_HASCANSUBMITPOST_OFFSET UNITYSDK_OFFSET(0xDE12E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISCANSHOWQUICKPOSTSUBMIT_OFFSET UNITYSDK_OFFSET(0xDE13F30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISNEWPOST_OFFSET UNITYSDK_OFFSET(0xDE13060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANGOTOSURVEY_OFFSET UNITYSDK_OFFSET(0xDE13380)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANREPLAY_OFFSET UNITYSDK_OFFSET(0xDE132F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xDE12A70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0xDE14050)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ONCHANGEPOST_OFFSET UNITYSDK_OFFSET(0xDDFE780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_RECORDPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0xDE13FD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHCANSUBMITPOSTIDS_OFFSET UNITYSDK_OFFSET(0xDDFE810)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHPOSTUPVOTE_OFFSET UNITYSDK_OFFSET(0xDE00BE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOSTS_OFFSET UNITYSDK_OFFSET(0xDE00500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOST_OFFSET UNITYSDK_OFFSET(0xDE00A00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REMOVEPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0xDE125E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_SETCOMMENTTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0xDE13D80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_TRYGETPOSTDATA_OFFSET UNITYSDK_OFFSET(0xDE14180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__GETCOMMENTSTATEROW_OFFSET UNITYSDK_OFFSET(0xDE13C90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__GETPOSTDATA_OFFSET UNITYSDK_OFFSET(0xDE140B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostService_TypeDefinitionIndex = 83113;

	class LimaoNewsPostService : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LocalChangeStatePostIDs; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService* _SurveyService; // 0x18
		::GIFMNJNCIEF* _ConditionService; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>* _AllPostDatas; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _CanSubmitPostIDs; // 0x30
		::System::Void _ctor(::GIFMNJNCIEF* a1, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GIFMNJNCIEF*, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshSubmittedPosts(::Google::Protobuf::Collections::RepeatedField_1<::PBLBAAMLNLH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::PBLBAAMLNLH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOSTS_OFFSET))(this, a1);
		}

		::System::Void OnChangePost(::PBLBAAMLNLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBLBAAMLNLH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ONCHANGEPOST_OFFSET))(this, a1);
		}

		::System::Void RefreshSubmittedPost(::PBLBAAMLNLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBLBAAMLNLH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOST_OFFSET))(this, a1);
		}

		::System::Void RefreshPostUpvote(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHPOSTUPVOTE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>* GetAllShowPosts(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETALLSHOWPOSTS_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostData* GetTopCanSubmitPostData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETTOPCANSUBMITPOSTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>* GetAllCanSubmitPosts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETALLCANSUBMITPOSTS_OFFSET))(this);
		}

		::System::Void RefreshCanSubmitPostIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHCANSUBMITPOSTIDS_OFFSET))(this);
		}

		::System::Boolean HasCanSubmitPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_HASCANSUBMITPOST_OFFSET))(this);
		}

		::System::Boolean IsPostCanSubmit(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANSUBMIT_OFFSET))(this, a1);
		}

		::System::Int32 GetNewPostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETNEWPOSTCOUNT_OFFSET))(this);
		}

		::System::Boolean IsNewPost(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISNEWPOST_OFFSET))(this, a1);
		}

		::System::Void ClearNew(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CLEARNEW_OFFSET))(this, a1);
		}

		::System::Boolean IsPostCanReplay(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANREPLAY_OFFSET))(this, a1);
		}

		::System::Boolean IsPostCanGotoSurvey(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANGOTOSURVEY_OFFSET))(this, a1);
		}

		::System::Void GotoPostTrackSurveyMission(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GOTOPOSTTRACKSURVEYMISSION_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel* GetPostStateTagViewModel(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETPOSTSTATETAGVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* CreateCommentViewModels(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CREATECOMMENTVIEWMODELS_OFFSET))(this, a1);
		}

		::System::Void SetCommentToNextState(::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_SETCOMMENTTONEXTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsCanShowQuickPostSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISCANSHOWQUICKPOSTSUBMIT_OFFSET))(this);
		}

		::System::Void RecordPostLocalChangeState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_RECORDPOSTLOCALCHANGESTATE_OFFSET))(this, a1);
		}

		::System::Void RemovePostLocalChangeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REMOVEPOSTLOCALCHANGESTATE_OFFSET))(this);
		}

		::System::Boolean IsPostLocalChangeState(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTLOCALCHANGESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostData* GetOrCreatePostData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETORCREATEPOSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostData* TryGetPostData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_TRYGETPOSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostData* _GetPostData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__GETPOSTDATA_OFFSET))(this, a1);
		}

		::LDGFEEFHNKH* _GetCommentStateRow(::System::UInt32 a1)
		{
			return ((::LDGFEEFHNKH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__GETCOMMENTSTATEROW_OFFSET))(this, a1);
		}

	};
}
