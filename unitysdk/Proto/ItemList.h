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
namespace Proto { class Item; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_ITEMLIST_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E000570)
#define PROTO_ITEMLIST_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0007B0)
#define PROTO_ITEMLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFE8650)
#define PROTO_ITEMLIST_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E000160)
#define PROTO_ITEMLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE9080)
#define PROTO_ITEMLIST_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E000340)
#define PROTO_ITEMLIST_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E000200)
#define PROTO_ITEMLIST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFE8A20)
#define PROTO_ITEMLIST_GET_ITEMLIST__OFFSET UNITYSDK_OFFSET(0x1E0001F0)
#define PROTO_ITEMLIST_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E000120)
#define PROTO_ITEMLIST_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E000610)
#define PROTO_ITEMLIST_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFE90C0)
#define PROTO_ITEMLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E000150)
#define PROTO_ITEMLIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E000460)
#define PROTO_ITEMLIST_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0004C0)

namespace Proto
{
	class ItemList : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* itemList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "ItemList")->GetStaticField(0x112A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_itemList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "ItemList")->GetStaticField(0x112A8);
		}

		// static const ::System::Object ItemList_FieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ItemList* Clone()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* get_ItemList_()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_GET_ITEMLIST__OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::ItemList* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
