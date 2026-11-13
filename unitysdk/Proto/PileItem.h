#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_PILEITEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202177A0)
#define PROTO_PILEITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x20217A70)
#define PROTO_PILEITEM_CLONE_OFFSET UNITYSDK_OFFSET(0x202173F0)
#define PROTO_PILEITEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202173C0)
#define PROTO_PILEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x202173B0)
#define PROTO_PILEITEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20217560)
#define PROTO_PILEITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20217480)
#define PROTO_PILEITEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20217630)
#define PROTO_PILEITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x20217440)
#define PROTO_PILEITEM_GET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x20217460)
#define PROTO_PILEITEM_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x20217370)
#define PROTO_PILEITEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202178F0)
#define PROTO_PILEITEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202178B0)
#define PROTO_PILEITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202173A0)
#define PROTO_PILEITEM_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x20217450)
#define PROTO_PILEITEM_SET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x20217470)
#define PROTO_PILEITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20217660)
#define PROTO_PILEITEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x202176C0)

namespace Proto
{
	inline static constexpr unsigned int PileItem_TypeDefinitionIndex = 28363;

	class PileItem : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 itemId_; // 0x18
		::System::UInt32 itemNum_; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::Proto::PileItem*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PileItem*>**)UnitySDK::FromName("Proto", "PileItem")->GetStaticField(0x13E20);
		}

		// static const ::System::Object ItemIdFieldNumber; // 0x0
		// static const ::System::Object ItemNumFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PileItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PileItem*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::PileItem*>*(*)())((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PileItem* Clone()
		{
			return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GET_ITEMNUM_OFFSET))(this);
		}

		::System::Void set_ItemNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_SET_ITEMNUM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::PileItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PileItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
