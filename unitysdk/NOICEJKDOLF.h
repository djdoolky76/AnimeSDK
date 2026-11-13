#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHKGGCKICFI.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NOICEJKDOLF_CTOR_OFFSET UNITYSDK_OFFSET(0x19CE86C0)
#define NOICEJKDOLF_GET_CHILDCOMMENTIDS_OFFSET UNITYSDK_OFFSET(0x19CE86A0)
#define NOICEJKDOLF_GET_COMMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x19CE8620)
#define NOICEJKDOLF_GET_COMMENTID_OFFSET UNITYSDK_OFFSET(0x19CE85C0)
#define NOICEJKDOLF_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x19CE8680)
#define NOICEJKDOLF_GET_PARENTCOMMENTID_OFFSET UNITYSDK_OFFSET(0x19CE8660)
#define NOICEJKDOLF_GET_TALKERICONPATH_OFFSET UNITYSDK_OFFSET(0x19CE8640)
#define NOICEJKDOLF_GET_USERICONPATH_OFFSET UNITYSDK_OFFSET(0x19CE8600)
#define NOICEJKDOLF_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x19CE85E0)
#define NOICEJKDOLF_SET_CHILDCOMMENTIDS_OFFSET UNITYSDK_OFFSET(0x19CE86B0)
#define NOICEJKDOLF_SET_COMMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x19CE8630)
#define NOICEJKDOLF_SET_COMMENTID_OFFSET UNITYSDK_OFFSET(0x19CE85D0)
#define NOICEJKDOLF_SET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x19CE8690)
#define NOICEJKDOLF_SET_PARENTCOMMENTID_OFFSET UNITYSDK_OFFSET(0x19CE8670)
#define NOICEJKDOLF_SET_TALKERICONPATH_OFFSET UNITYSDK_OFFSET(0x19CE8650)
#define NOICEJKDOLF_SET_USERICONPATH_OFFSET UNITYSDK_OFFSET(0x19CE8610)
#define NOICEJKDOLF_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x19CE85F0)

inline static constexpr unsigned int NOICEJKDOLF_TypeDefinitionIndex = 77058;

	class NOICEJKDOLF : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>* _ChildCommentIds_k__BackingField; // 0x10
		::System::String* _UserIconPath_k__BackingField; // 0x18
		::System::String* _TalkerIconPath_k__BackingField; // 0x20
		::System::Boolean _IsPlayer_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::EHKGGCKICFI _CommentId_k__BackingField; // 0x2C
		::RPG::Client::TextID _CommentContent_k__BackingField; // 0x30
		::EHKGGCKICFI _ParentCommentId_k__BackingField; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _UserName_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_CTOR_OFFSET))(this);
		}

		::EHKGGCKICFI get_CommentId()
		{
			return ((::EHKGGCKICFI(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_GET_COMMENTID_OFFSET))(this);
		}

		::System::Void set_CommentId(::EHKGGCKICFI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + NOICEJKDOLF_SET_COMMENTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_UserName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_SET_USERNAME_OFFSET))(this, a1);
		}

		::System::String* get_UserIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_GET_USERICONPATH_OFFSET))(this);
		}

		::System::Void set_UserIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOICEJKDOLF_SET_USERICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CommentContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_GET_COMMENTCONTENT_OFFSET))(this);
		}

		::System::Void set_CommentContent(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_SET_COMMENTCONTENT_OFFSET))(this, a1);
		}

		::System::String* get_TalkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_GET_TALKERICONPATH_OFFSET))(this);
		}

		::System::Void set_TalkerIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOICEJKDOLF_SET_TALKERICONPATH_OFFSET))(this, a1);
		}

		::EHKGGCKICFI get_ParentCommentId()
		{
			return ((::EHKGGCKICFI(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_GET_PARENTCOMMENTID_OFFSET))(this);
		}

		::System::Void set_ParentCommentId(::EHKGGCKICFI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + NOICEJKDOLF_SET_PARENTCOMMENTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Void set_IsPlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOICEJKDOLF_SET_ISPLAYER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>* get_ChildCommentIds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICEJKDOLF_GET_CHILDCOMMENTIDS_OFFSET))(this);
		}

		::System::Void set_ChildCommentIds(::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>*))((::PBYTE)hIl2Cpp + NOICEJKDOLF_SET_CHILDCOMMENTIDS_OFFSET))(this, a1);
		}

	};
