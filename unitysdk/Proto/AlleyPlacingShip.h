#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBBPDLPAIPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class AlleyPlacingShip; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_ALLEYPLACINGSHIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4B79B0)
#define PROTO_ALLEYPLACINGSHIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4B7D30)
#define PROTO_ALLEYPLACINGSHIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4B7490)
#define PROTO_ALLEYPLACINGSHIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4B73D0)
#define PROTO_ALLEYPLACINGSHIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B7380)
#define PROTO_ALLEYPLACINGSHIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4B76A0)
#define PROTO_ALLEYPLACINGSHIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4B7510)
#define PROTO_ALLEYPLACINGSHIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4B77D0)
#define PROTO_ALLEYPLACINGSHIP_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0x1F4B7500)
#define PROTO_ALLEYPLACINGSHIP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F4B7310)
#define PROTO_ALLEYPLACINGSHIP_GET_SHIPID_OFFSET UNITYSDK_OFFSET(0x1F4B74E0)
#define PROTO_ALLEYPLACINGSHIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4B7B60)
#define PROTO_ALLEYPLACINGSHIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4B7AC0)
#define PROTO_ALLEYPLACINGSHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4B7370)
#define PROTO_ALLEYPLACINGSHIP_SET_SHIPID_OFFSET UNITYSDK_OFFSET(0x1F4B74F0)
#define PROTO_ALLEYPLACINGSHIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4B7840)
#define PROTO_ALLEYPLACINGSHIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4B78A0)

namespace Proto
{
	inline static constexpr unsigned int AlleyPlacingShip_TypeDefinitionIndex = 26741;

	class AlleyPlacingShip : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CBBPDLPAIPL*>* goodsList_; // 0x18
		::System::UInt32 shipId_; // 0x20
		static ::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>**)UnitySDK::FromName("Proto", "AlleyPlacingShip")->GetStaticField(0x4DE60);
		}

		static ::Google::Protobuf::FieldCodec_1<::CBBPDLPAIPL*>** StaticGet__repeated_goodsList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::CBBPDLPAIPL*>**)UnitySDK::FromName("Proto", "AlleyPlacingShip")->GetStaticField(0x4DE68);
		}

		// static const ::System::Object ShipIdFieldNumber; // 0x0
		// static const ::System::Object GoodsListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::AlleyPlacingShip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::AlleyPlacingShip* Clone()
		{
			return ((::Proto::AlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ShipId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_SHIPID_OFFSET))(this);
		}

		::System::Void set_ShipId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_SET_SHIPID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CBBPDLPAIPL*>* get_GoodsList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CBBPDLPAIPL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_GOODSLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::AlleyPlacingShip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::AlleyPlacingShip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
