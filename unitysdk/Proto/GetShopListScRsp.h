#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class GetShopListScRsp; }
namespace Proto { class Shop; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_GETSHOPLISTSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF93F0)
#define PROTO_GETSHOPLISTSCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF9820)
#define PROTO_GETSHOPLISTSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF8EB0)
#define PROTO_GETSHOPLISTSCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF8E10)
#define PROTO_GETSHOPLISTSCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8DD0)
#define PROTO_GETSHOPLISTSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF9090)
#define PROTO_GETSHOPLISTSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF8F30)
#define PROTO_GETSHOPLISTSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF91C0)
#define PROTO_GETSHOPLISTSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFF8D90)
#define PROTO_GETSHOPLISTSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF8EF0)
#define PROTO_GETSHOPLISTSCRSP_GET_SHOPLIST_OFFSET UNITYSDK_OFFSET(0x1DFF8EE0)
#define PROTO_GETSHOPLISTSCRSP_GET_SHOPTYPE_OFFSET UNITYSDK_OFFSET(0x1DFF8F10)
#define PROTO_GETSHOPLISTSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF9640)
#define PROTO_GETSHOPLISTSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF9590)
#define PROTO_GETSHOPLISTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8DC0)
#define PROTO_GETSHOPLISTSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF8F00)
#define PROTO_GETSHOPLISTSCRSP_SET_SHOPTYPE_OFFSET UNITYSDK_OFFSET(0x1DFF8F20)
#define PROTO_GETSHOPLISTSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF9230)
#define PROTO_GETSHOPLISTSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF9290)

namespace Proto
{
	inline static constexpr unsigned int GetShopListScRsp_TypeDefinitionIndex = 34177;

	class GetShopListScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Shop*>* shopList_; // 0x18
		::System::UInt32 retcode_; // 0x20
		::System::UInt32 shopType_; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_shopList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetShopListScRsp")->GetStaticField(0x24350);
		}

		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "GetShopListScRsp")->GetStaticField(0x24358);
		}

		// static const ::System::Object ShopListFieldNumber; // 0x0
		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object ShopTypeFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetShopListScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetShopListScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetShopListScRsp* Clone()
		{
			return ((::Proto::GetShopListScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Shop*>* get_ShopList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::Shop*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GET_SHOPLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GET_SHOPTYPE_OFFSET))(this);
		}

		::System::Void set_ShopType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_SET_SHOPTYPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetShopListScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetShopListScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetShopListScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetShopListScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
