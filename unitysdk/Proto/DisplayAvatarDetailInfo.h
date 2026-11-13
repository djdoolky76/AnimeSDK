#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIFAPHOCGKL;
class JIEOLMHJJGF;
class MLCPGAGPBDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_DISPLAYAVATARDETAILINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4BE8A0)
#define PROTO_DISPLAYAVATARDETAILINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4BF2F0)
#define PROTO_DISPLAYAVATARDETAILINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4BDDF0)
#define PROTO_DISPLAYAVATARDETAILINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4BDCB0)
#define PROTO_DISPLAYAVATARDETAILINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BDBF0)
#define PROTO_DISPLAYAVATARDETAILINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4BDFC0)
#define PROTO_DISPLAYAVATARDETAILINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4BDF90)
#define PROTO_DISPLAYAVATARDETAILINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4BE1B0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1F4BDF20)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1F4BDE60)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x1F4BDED0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1F4BDEB0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1F4BDE40)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1F4BDF40)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EXRANKIDLIST_OFFSET UNITYSDK_OFFSET(0x1F4BDF80)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1F4BDF60)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F4BDBB0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x1F4BDE20)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1F4BDE80)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1F4BDF00)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_RELICLIST_OFFSET UNITYSDK_OFFSET(0x1F4BDEF0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_SKILLTREELIST_OFFSET UNITYSDK_OFFSET(0x1F4BDEA0)
#define PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4BF040)
#define PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4BEE50)
#define PROTO_DISPLAYAVATARDETAILINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4BDBE0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1F4BDF30)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1F4BDE70)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x1F4BDEE0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1F4BDEC0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1F4BDE50)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_EXP_OFFSET UNITYSDK_OFFSET(0x1F4BDF50)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1F4BDF70)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x1F4BDE30)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1F4BDE90)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1F4BDF10)
#define PROTO_DISPLAYAVATARDETAILINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4BE380)
#define PROTO_DISPLAYAVATARDETAILINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4BE3E0)

namespace Proto
{
	inline static constexpr unsigned int DisplayAvatarDetailInfo_TypeDefinitionIndex = 29475;

	class DisplayAvatarDetailInfo : public ::System::Object
	{
	public:
		::MLCPGAGPBDL* equipment_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DIFAPHOCGKL*>* skilltreeList_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* exRankIdList_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::JIEOLMHJJGF*>* relicList_; // 0x30
		::System::UInt32 rank_; // 0x38
		::System::UInt32 promotion_; // 0x3C
		::System::UInt32 avatarId_; // 0x40
		::System::UInt32 dressedSkinId_; // 0x44
		::System::UInt32 enhancedId_; // 0x48
		::System::UInt32 avatarType_; // 0x4C
		::System::UInt32 exp_; // 0x50
		::System::UInt32 level_; // 0x54
		::System::UInt32 pos_; // 0x58
		static ::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>**)UnitySDK::FromName("Proto", "DisplayAvatarDetailInfo")->GetStaticField(0x22DB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_exRankIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("Proto", "DisplayAvatarDetailInfo")->GetStaticField(0x22DB8);
		}

		static ::Google::Protobuf::FieldCodec_1<::DIFAPHOCGKL*>** StaticGet__repeated_skilltreeList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::DIFAPHOCGKL*>**)UnitySDK::FromName("Proto", "DisplayAvatarDetailInfo")->GetStaticField(0x22DC0);
		}

		static ::Google::Protobuf::FieldCodec_1<::JIEOLMHJJGF*>** StaticGet__repeated_relicList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::JIEOLMHJJGF*>**)UnitySDK::FromName("Proto", "DisplayAvatarDetailInfo")->GetStaticField(0x22DC8);
		}

		// static const ::System::Object PosFieldNumber; // 0x0
		// static const ::System::Object EquipmentFieldNumber; // 0x0
		// static const ::System::Object AvatarTypeFieldNumber; // 0x0
		// static const ::System::Object PromotionFieldNumber; // 0x0
		// static const ::System::Object SkilltreeListFieldNumber; // 0x0
		// static const ::System::Object EnhancedIdFieldNumber; // 0x0
		// static const ::System::Object DressedSkinIdFieldNumber; // 0x0
		// static const ::System::Object RelicListFieldNumber; // 0x0
		// static const ::System::Object RankFieldNumber; // 0x0
		// static const ::System::Object AvatarIdFieldNumber; // 0x0
		// static const ::System::Object ExpFieldNumber; // 0x0
		// static const ::System::Object LevelFieldNumber; // 0x0
		// static const ::System::Object ExRankIdListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>*(*)())((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::DisplayAvatarDetailInfo* Clone()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Pos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_POS_OFFSET))(this, a1);
		}

		::MLCPGAGPBDL* get_Equipment()
		{
			return ((::MLCPGAGPBDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EQUIPMENT_OFFSET))(this);
		}

		::System::Void set_Equipment(::MLCPGAGPBDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLCPGAGPBDL*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_EQUIPMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_PROMOTION_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DIFAPHOCGKL*>* get_SkilltreeList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DIFAPHOCGKL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_SKILLTREELIST_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_ENHANCEDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DressedSkinId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_DRESSEDSKINID_OFFSET))(this);
		}

		::System::Void set_DressedSkinId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_DRESSEDSKINID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JIEOLMHJJGF*>* get_RelicList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JIEOLMHJJGF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_RELICLIST_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_EXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_LEVEL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_ExRankIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EXRANKIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
