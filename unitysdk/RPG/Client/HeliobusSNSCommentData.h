#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BLODLKIBCIE;
namespace RPG::Client { class HeliobusSNSCommentData; }
namespace RPG::GameCore { class HeliobusCommentRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CHECKISCANREPLY_OFFSET UNITYSDK_OFFSET(0xDD55170)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDD54E00)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD54EC0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_COMMENTDAY_OFFSET UNITYSDK_OFFSET(0xDD55490)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xDD55610)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xDD55470)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ISMYCOMMENT_OFFSET UNITYSDK_OFFSET(0xDD554B0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xDD55400)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_SUBCOMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0xDD556D0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0xDD55560)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_COMMENTDAY_OFFSET UNITYSDK_OFFSET(0xDD554A0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xDD55480)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_SUBCOMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0xDD556E0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SYNCCOMMENT_OFFSET UNITYSDK_OFFSET(0xDD54ED0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA__CHECKISCOMMENTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDD55100)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSCommentData_TypeDefinitionIndex = 67590;

	class HeliobusSNSCommentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* _SubCommentDataDict_k__BackingField; // 0x10
		::RPG::GameCore::HeliobusCommentRow* _Row; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::UInt32 _CommentDay_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HeliobusSNSCommentData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::HeliobusSNSCommentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SyncComment(::BLODLKIBCIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLODLKIBCIE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SYNCCOMMENT_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsCanReply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CHECKISCANREPLY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CommentDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_COMMENTDAY_OFFSET))(this);
		}

		::System::Void set_CommentDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_COMMENTDAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMyComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ISMYCOMMENT_OFFSET))(this);
		}

		::RPG::GameCore::HeliobusCommentRow* get_Row()
		{
			return ((::RPG::GameCore::HeliobusCommentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_USERID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* get_SubCommentDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_SUBCOMMENTDATADICT_OFFSET))(this);
		}

		::System::Void set_SubCommentDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_SUBCOMMENTDATADICT_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsCommentAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA__CHECKISCOMMENTAVAILABLE_OFFSET))(this, a1);
		}

	};
}
