#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"
class BGOMIHEFHPA;
namespace RPG::Client { class HeliobusSNSCommentData; }
namespace RPG::Client { class HeliobusSNSPostData; }
namespace RPG::GameCore { class HeliobusPostRow; }
namespace RPG::GameCore { class HeliobusSpecialPostRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C5F33B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLYCOMMENT_OFFSET UNITYSDK_OFFSET(0x1C5F3FE0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLY_OFFSET UNITYSDK_OFFSET(0x1C5F3570)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C5FBFD0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FDD90)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GETCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5FD9E0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_COMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0x1C5FE470)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1C5FE4F0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C5FE390)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_IMGID_OFFSET UNITYSDK_OFFSET(0x1C5FE430)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISLIKE_OFFSET UNITYSDK_OFFSET(0x1C5FE3D0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMISSIONTYPEPOST_OFFSET UNITYSDK_OFFSET(0x1C5F3510)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMYPOST_OFFSET UNITYSDK_OFFSET(0x1C5FD2A0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISREAD_OFFSET UNITYSDK_OFFSET(0x1C5FE410)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_LIKES_OFFSET UNITYSDK_OFFSET(0x1C5FE3F0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_POSTDAY_OFFSET UNITYSDK_OFFSET(0x1C5FE3B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_READCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5FE4B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C5F3810)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_SPROW_OFFSET UNITYSDK_OFFSET(0x1C5FE320)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1C5FE450)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C5FE4D0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1C5FE490)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETLIKE_OFFSET UNITYSDK_OFFSET(0x1C5FCA00)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETREAD_OFFSET UNITYSDK_OFFSET(0x1C5FC9B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_COMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0x1C5FE480)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1C5FE500)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C5FE3A0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_IMGID_OFFSET UNITYSDK_OFFSET(0x1C5FE440)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISLIKE_OFFSET UNITYSDK_OFFSET(0x1C5FE3E0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISREAD_OFFSET UNITYSDK_OFFSET(0x1C5FE420)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_LIKES_OFFSET UNITYSDK_OFFSET(0x1C5FE400)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_POSTDAY_OFFSET UNITYSDK_OFFSET(0x1C5FE3C0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_READCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5FE4C0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1C5FE460)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C5FE4E0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1C5FE4A0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SYNCPOST_OFFSET UNITYSDK_OFFSET(0x1C5FC090)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_UPDATELIKE_OFFSET UNITYSDK_OFFSET(0x1C5FDAD0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__CHECKISCOMMENTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C5FE1A0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__GETSUBCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5FE210)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__UPDATELIKE_OFFSET UNITYSDK_OFFSET(0x1C5FDDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSPostData_TypeDefinitionIndex = 67594;

	class HeliobusSNSPostData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* _CommentDataDict_k__BackingField; // 0x10
		::RPG::GameCore::HeliobusPostRow* _Row; // 0x18
		::RPG::GameCore::HeliobusSpecialPostRow* _SpRow; // 0x20
		::System::UInt32 _PostDay_k__BackingField; // 0x28
		::System::UInt32 _Likes_k__BackingField; // 0x2C
		::RPG::GameCore::HeliobusPostType PostType; // 0x30
		::System::UInt32 _ReadCommentCount_k__BackingField; // 0x34
		::RPG::Client::TextID _Content_k__BackingField; // 0x38
		::System::UInt32 _UserID_k__BackingField; // 0x48
		::System::UInt32 _TemplateID_k__BackingField; // 0x4C
		::System::Boolean _IsRead_k__BackingField; // 0x50
		::System::Boolean _IsLike_k__BackingField; // 0x51
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID _Title_k__BackingField; // 0x58
		::System::UInt32 _ImgID_k__BackingField; // 0x68
		::System::UInt32 _ID_k__BackingField; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HeliobusSNSPostData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SyncPost(::BGOMIHEFHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGOMIHEFHPA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SYNCPOST_OFFSET))(this, a1);
		}

		::System::Void SetRead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETREAD_OFFSET))(this, a1);
		}

		::System::Void SetLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETLIKE_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsCanReply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLY_OFFSET))(this);
		}

		::System::Boolean CheckIsCanReplyComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLYCOMMENT_OFFSET))(this);
		}

		::System::UInt32 GetCommentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GETCOMMENTCOUNT_OFFSET))(this);
		}

		::System::Boolean CheckIsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISAVAILABLE_OFFSET))(this);
		}

		::System::Void UpdateLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_UPDATELIKE_OFFSET))(this);
		}

		::System::Void _UpdateLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__UPDATELIKE_OFFSET))(this);
		}

		::System::Boolean _CheckIsCommentAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__CHECKISCOMMENTAVAILABLE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSubCommentCount(::RPG::Client::HeliobusSNSCommentData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::HeliobusSNSCommentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__GETSUBCOMMENTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PostDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_POSTDAY_OFFSET))(this);
		}

		::System::Void set_PostDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_POSTDAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISLIKE_OFFSET))(this);
		}

		::System::Void set_IsLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISLIKE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Likes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_LIKES_OFFSET))(this);
		}

		::System::Void set_Likes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_LIKES_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISREAD_OFFSET))(this);
		}

		::System::Void set_IsRead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISREAD_OFFSET))(this, a1);
		}

		::System::UInt32 get_ImgID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_IMGID_OFFSET))(this);
		}

		::System::Void set_ImgID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_IMGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TemplateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TEMPLATEID_OFFSET))(this);
		}

		::System::Void set_TemplateID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TEMPLATEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* get_CommentDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_COMMENTDATADICT_OFFSET))(this);
		}

		::System::Void set_CommentDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_COMMENTDATADICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_USERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReadCommentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_READCOMMENTCOUNT_OFFSET))(this);
		}

		::System::Void set_ReadCommentCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_READCOMMENTCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_CONTENT_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeliobusPostRow* get_Row()
		{
			return ((::RPG::GameCore::HeliobusPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::HeliobusSpecialPostRow* get_SpRow()
		{
			return ((::RPG::GameCore::HeliobusSpecialPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_SPROW_OFFSET))(this);
		}

		::System::Boolean get_IsMyPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMYPOST_OFFSET))(this);
		}

		::System::Boolean get_IsMissionTypePost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMISSIONTYPEPOST_OFFSET))(this);
		}

	};
}
