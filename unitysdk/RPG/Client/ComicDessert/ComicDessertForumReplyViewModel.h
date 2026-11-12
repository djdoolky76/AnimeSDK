#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD504A30)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_COMMENTCONTENT_OFFSET UNITYSDK_OFFSET(0xD504AB0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_COMMENTID_OFFSET UNITYSDK_OFFSET(0xD504A70)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xD504AD0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_PARENTCOMMENTID_OFFSET UNITYSDK_OFFSET(0xD504A80)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_TALKERICONPATH_OFFSET UNITYSDK_OFFSET(0xD504AC0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_USERICONPATH_OFFSET UNITYSDK_OFFSET(0xD504AA0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0xD504A90)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertForumReplyViewModel_TypeDefinitionIndex = 77114;

	class ComicDessertForumReplyViewModel : public ::System::Object
	{
	public:
		::System::String* _UserIconPath_k__BackingField; // 0x10
		::System::String* _TalkerIconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _UserName_k__BackingField; // 0x20
		::RPG::Client::TextID _CommentContent_k__BackingField; // 0x30
		::System::UInt32 _CommentId_k__BackingField; // 0x40
		::System::Boolean _IsPlayer_k__BackingField; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 _ParentCommentId_k__BackingField; // 0x48
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TextID a3, ::System::String* a4, ::RPG::Client::TextID a5, ::System::String* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TextID, ::System::String*, ::RPG::Client::TextID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 get_CommentId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_COMMENTID_OFFSET))(this);
		}

		::System::UInt32 get_ParentCommentId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_PARENTCOMMENTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_UserName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_USERNAME_OFFSET))(this);
		}

		::System::String* get_UserIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_USERICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CommentContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_COMMENTCONTENT_OFFSET))(this);
		}

		::System::String* get_TalkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_TALKERICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTFORUMREPLYVIEWMODEL_GET_ISPLAYER_OFFSET))(this);
		}

	};
}
