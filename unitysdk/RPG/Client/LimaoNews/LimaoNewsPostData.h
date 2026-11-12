#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostDisplayTag.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostSubmitType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class ENBMOAFGKCG;
class JFILEJFAMPN;
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }
namespace RPG::Client::LimaoNews { class LimaoNewsUserData; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_CREATENEXTSTATEPOST_OFFSET UNITYSDK_OFFSET(0xDE0A6A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDE0A630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDE0A690)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_CANSUBMITCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0xDE0AA20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_COMICPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDE0B100)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_COMMENTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE0BB20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDE0ABE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_DISPLAYSURVEYTYPEDATA_OFFSET UNITYSDK_OFFSET(0xDE0B810)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_GOTOSURVEYID_OFFSET UNITYSDK_OFFSET(0xDE0AF20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_HEADCOUNT_OFFSET UNITYSDK_OFFSET(0xDE0BA80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_ISSUBMITTED_OFFSET UNITYSDK_OFFSET(0xDE0A9C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_ISUPVOTE_OFFSET UNITYSDK_OFFSET(0xDE0AA00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0xDE0ACA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_NEXTSTATEID_OFFSET UNITYSDK_OFFSET(0xDE0A7B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_PICTUREPATH_OFFSET UNITYSDK_OFFSET(0xDE0B5A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_POSTID_OFFSET UNITYSDK_OFFSET(0xDE0A960)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_POSTTYPE_OFFSET UNITYSDK_OFFSET(0xDE0B060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_REPLYCOMMENTID_OFFSET UNITYSDK_OFFSET(0xDE0ADE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_REPLYFINISHCONDITIONIDLIST_OFFSET UNITYSDK_OFFSET(0xDE0AE80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xDE0AD40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_STATEID_OFFSET UNITYSDK_OFFSET(0xDE0A9A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_SUBMITTEDSORTID_OFFSET UNITYSDK_OFFSET(0xDE0A9E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_SUBMITTEDUSERID_OFFSET UNITYSDK_OFFSET(0xDE0A980)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_SUBMITTYPE_OFFSET UNITYSDK_OFFSET(0xDE0AFC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xDE0AB20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_URL_OFFSET UNITYSDK_OFFSET(0xDE0B920)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0xDE0B650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xDE0B1A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_NEEDSHOWTAG_OFFSET UNITYSDK_OFFSET(0xDE0BBF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_REFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0xDE0A910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xDE0A850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_ISSUBMITTED_OFFSET UNITYSDK_OFFSET(0xDE0A9D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_ISUPVOTE_OFFSET UNITYSDK_OFFSET(0xDE0AA10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_POSTID_OFFSET UNITYSDK_OFFSET(0xDE0A970)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_STATEID_OFFSET UNITYSDK_OFFSET(0xDE0A9B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_SUBMITTEDSORTID_OFFSET UNITYSDK_OFFSET(0xDE0A9F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_SUBMITTEDUSERID_OFFSET UNITYSDK_OFFSET(0xDE0A990)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA__GETDISPLAYSURVEYTYPEDATA_OFFSET UNITYSDK_OFFSET(0xDE0B860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA__GETPOSTROW_OFFSET UNITYSDK_OFFSET(0xDE0AAC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA__GETPOSTSTATEROW_OFFSET UNITYSDK_OFFSET(0xDE0BA10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA__GETUSERDATA_OFFSET UNITYSDK_OFFSET(0xDE0B6A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostData_TypeDefinitionIndex = 83075;

	class LimaoNewsPostData : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* _SurveyTypeData; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsUserData* _UserData; // 0x18
		::System::Boolean _IsSubmitted_k__BackingField; // 0x20
		::System::Boolean _IsUpvote_k__BackingField; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 _StateID_k__BackingField; // 0x24
		::System::UInt32 _PostID_k__BackingField; // 0x28
		::System::UInt32 _SubmittedUserID_k__BackingField; // 0x2C
		::System::UInt32 _SubmittedSortID_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPostData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPostData* CreateNextStatePost(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_CREATENEXTSTATEPOST_OFFSET))(a1);
		}

		::System::Void Refresh(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_REFRESH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RefreshUpvote(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_REFRESHUPVOTE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_POSTID_OFFSET))(this);
		}

		::System::Void set_PostID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_POSTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubmittedUserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_SUBMITTEDUSERID_OFFSET))(this);
		}

		::System::Void set_SubmittedUserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_SUBMITTEDUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_STATEID_OFFSET))(this);
		}

		::System::Void set_StateID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_STATEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSubmitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_ISSUBMITTED_OFFSET))(this);
		}

		::System::Void set_IsSubmitted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_ISSUBMITTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubmittedSortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_SUBMITTEDSORTID_OFFSET))(this);
		}

		::System::Void set_SubmittedSortID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_SUBMITTEDSORTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUpvote()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_ISUPVOTE_OFFSET))(this);
		}

		::System::Void set_IsUpvote(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_SET_ISUPVOTE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_CanSubmitConditionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_CANSUBMITCONDITIONIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_LocationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_LOCATIONID_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_ReplyCommentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_REPLYCOMMENTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ReplyFinishConditionIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_REPLYFINISHCONDITIONIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_GoToSurveyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_GOTOSURVEYID_OFFSET))(this);
		}

		::RPG::GameCore::LimaoNewsPostSubmitType get_SubmitType()
		{
			return ((::RPG::GameCore::LimaoNewsPostSubmitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_SUBMITTYPE_OFFSET))(this);
		}

		::RPG::GameCore::LimaoNewsPostType get_PostType()
		{
			return ((::RPG::GameCore::LimaoNewsPostType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_POSTTYPE_OFFSET))(this);
		}

		::System::String* get_ComicPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_COMICPREFABPATH_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_VIDEOID_OFFSET))(this);
		}

		::System::String* get_PicturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_PICTUREPATH_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* get_UserData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_USERDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* get_DisplaySurveyTypeData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_DISPLAYSURVEYTYPEDATA_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_URL_OFFSET))(this);
		}

		::System::UInt32 get_NextStateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_NEXTSTATEID_OFFSET))(this);
		}

		::System::UInt32 get_HeadCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_HEADCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CommentIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_GET_COMMENTIDLIST_OFFSET))(this);
		}

		::System::Boolean NeedShowTag(::RPG::GameCore::LimaoNewsPostDisplayTag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LimaoNewsPostDisplayTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA_NEEDSHOWTAG_OFFSET))(this, a1);
		}

		::JFILEJFAMPN* _GetPostRow()
		{
			return ((::JFILEJFAMPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA__GETPOSTROW_OFFSET))(this);
		}

		::ENBMOAFGKCG* _GetPostStateRow()
		{
			return ((::ENBMOAFGKCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA__GETPOSTSTATEROW_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* _GetUserData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA__GETUSERDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* _GetDisplaySurveyTypeData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDATA__GETDISPLAYSURVEYTYPEDATA_OFFSET))(this);
		}

	};
}
