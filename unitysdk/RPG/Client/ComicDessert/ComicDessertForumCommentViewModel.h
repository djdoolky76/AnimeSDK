#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ComicDessert { class ComicDessertForumReplyViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD5045E0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_COMMENTCONTENT_OFFSET UNITYSDK_OFFSET(0xD504650)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_COMMENTID_OFFSET UNITYSDK_OFFSET(0xD504620)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xD504670)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_REPLIES_OFFSET UNITYSDK_OFFSET(0xD504680)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_TALKERICONPATH_OFFSET UNITYSDK_OFFSET(0xD504660)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_USERICONPATH_OFFSET UNITYSDK_OFFSET(0xD504640)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0xD504630)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertForumCommentViewModel_TypeDefinitionIndex = 77113;

	class ComicDessertForumCommentViewModel : public ::System::Object
	{
	public:
		::System::String* _UserIconPath_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*>* _Replies_k__BackingField; // 0x18
		::System::String* _TalkerIconPath_k__BackingField; // 0x20
		::RPG::Client::TextID _UserName_k__BackingField; // 0x28
		::RPG::Client::TextID _CommentContent_k__BackingField; // 0x38
		::System::Boolean _IsPlayer_k__BackingField; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 _CommentId_k__BackingField; // 0x4C
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TextID a2, ::System::String* a3, ::RPG::Client::TextID a4, ::System::String* a5, ::System::Boolean a6, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::System::String*, ::RPG::Client::TextID, ::System::String*, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 get_CommentId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_COMMENTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_UserName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_USERNAME_OFFSET))(this);
		}

		::System::String* get_UserIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_USERICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CommentContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_COMMENTCONTENT_OFFSET))(this);
		}

		::System::String* get_TalkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_TALKERICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*>* get_Replies()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMCOMMENTVIEWMODEL_GET_REPLIES_OFFSET))(this);
		}

	};
}
