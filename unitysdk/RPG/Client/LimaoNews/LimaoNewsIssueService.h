#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIFMNJNCIEF;
class HDDBFAIFCGK;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ADDSUBMITTEDISSUEID_OFFSET UNITYSDK_OFFSET(0xD3B7580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xD3B6A10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3B6A70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETALLCANSUBMITISSUEDATA_OFFSET UNITYSDK_OFFSET(0xD3B7BE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETALLSHOWISSUEDATA_OFFSET UNITYSDK_OFFSET(0xD3B7750)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETTOPISSUEDATA_OFFSET UNITYSDK_OFFSET(0xD3B7A40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_HASCANSUBMITISSUE_OFFSET UNITYSDK_OFFSET(0xD3B8060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISINTERVIEWUPVOTE_OFFSET UNITYSDK_OFFSET(0xD3B1E50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUECANSHOW_OFFSET UNITYSDK_OFFSET(0xD3B76C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUECANSUBMIT_OFFSET UNITYSDK_OFFSET(0xD3B75E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUESUBMITTED_OFFSET UNITYSDK_OFFSET(0xD3B1DB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHCANSUBMITISSUEIDS_OFFSET UNITYSDK_OFFSET(0xD3B7DF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHINTERVIEWUPVOTE_OFFSET UNITYSDK_OFFSET(0xD3B7500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHSUBMITEDISSUE_OFFSET UNITYSDK_OFFSET(0xD3B6B00)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsIssueService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CanSubmitIssueIDs; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubmittedIssueIDs; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UpvoteInterviewIDs; // 0x20
		::GIFMNJNCIEF* _LimaoNewsConditionService; // 0x28
		::System::Void _ctor(::GIFMNJNCIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIFMNJNCIEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshSubmitedIssue(::Google::Protobuf::Collections::RepeatedField_1<::HDDBFAIFCGK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::HDDBFAIFCGK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHSUBMITEDISSUE_OFFSET))(this, a1);
		}

		::System::Void RefreshInterviewUpvote(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHINTERVIEWUPVOTE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInterviewUpvote(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISINTERVIEWUPVOTE_OFFSET))(this, a1);
		}

		::System::Void AddSubmittedIssueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ADDSUBMITTEDISSUEID_OFFSET))(this, a1);
		}

		::System::Boolean IsIssueSubmitted(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUESUBMITTED_OFFSET))(this, a1);
		}

		::System::Boolean IsIssueCanSubmit(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUECANSUBMIT_OFFSET))(this, a1);
		}

		::System::Boolean IsIssueCanShow(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUECANSHOW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>* GetAllShowIssueData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETALLSHOWISSUEDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueData* GetTopIssueData(::System::Boolean a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueData*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETTOPISSUEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>* GetAllCanSubmitIssueData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETALLCANSUBMITISSUEDATA_OFFSET))(this);
		}

		::System::Void RefreshCanSubmitIssueIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHCANSUBMITISSUEIDS_OFFSET))(this);
		}

		::System::Boolean HasCanSubmitIssue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_HASCANSUBMITISSUE_OFFSET))(this);
		}

	};
}
