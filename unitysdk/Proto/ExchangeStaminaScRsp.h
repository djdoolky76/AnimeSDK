#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ExchangeStaminaScRsp; }
namespace Proto { class ItemCost; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_EXCHANGESTAMINASCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF11A0)
#define PROTO_EXCHANGESTAMINASCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF1640)
#define PROTO_EXCHANGESTAMINASCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF0D10)
#define PROTO_EXCHANGESTAMINASCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF0C70)
#define PROTO_EXCHANGESTAMINASCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF0C30)
#define PROTO_EXCHANGESTAMINASCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF0E00)
#define PROTO_EXCHANGESTAMINASCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF0DD0)
#define PROTO_EXCHANGESTAMINASCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF0EA0)
#define PROTO_EXCHANGESTAMINASCRSP_GET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1DFF0D40)
#define PROTO_EXCHANGESTAMINASCRSP_GET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1DFF0DC0)
#define PROTO_EXCHANGESTAMINASCRSP_GET_LASTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1DFF0D60)
#define PROTO_EXCHANGESTAMINASCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFF0BF0)
#define PROTO_EXCHANGESTAMINASCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF0DA0)
#define PROTO_EXCHANGESTAMINASCRSP_GET_STAMINAADD_OFFSET UNITYSDK_OFFSET(0x1DFF0D80)
#define PROTO_EXCHANGESTAMINASCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF1540)
#define PROTO_EXCHANGESTAMINASCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF1470)
#define PROTO_EXCHANGESTAMINASCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF0C20)
#define PROTO_EXCHANGESTAMINASCRSP_SET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1DFF0D50)
#define PROTO_EXCHANGESTAMINASCRSP_SET_LASTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1DFF0D70)
#define PROTO_EXCHANGESTAMINASCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF0DB0)
#define PROTO_EXCHANGESTAMINASCRSP_SET_STAMINAADD_OFFSET UNITYSDK_OFFSET(0x1DFF0D90)
#define PROTO_EXCHANGESTAMINASCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF0F30)
#define PROTO_EXCHANGESTAMINASCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF0F90)

namespace Proto
{
	inline static constexpr unsigned int ExchangeStaminaScRsp_TypeDefinitionIndex = 32042;

	class ExchangeStaminaScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* itemCostList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20
		::System::UInt32 exchangeTimes_; // 0x24
		::System::UInt32 staminaAdd_; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 lastRecoverTime_; // 0x30
		static ::Google::Protobuf::MessageParser_1<::Proto::ExchangeStaminaScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::ExchangeStaminaScRsp*>**)UnitySDK::FromName("Proto", "ExchangeStaminaScRsp")->GetStaticField(0x43AE0);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet__repeated_itemCostList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)UnitySDK::FromName("Proto", "ExchangeStaminaScRsp")->GetStaticField(0x43AE8);
		}

		// static const ::System::Object ExchangeTimesFieldNumber; // 0x0
		// static const ::System::Object LastRecoverTimeFieldNumber; // 0x0
		// static const ::System::Object StaminaAddFieldNumber; // 0x0
		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object ItemCostListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ExchangeStaminaScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ExchangeStaminaScRsp*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::ExchangeStaminaScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::ExchangeStaminaScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ExchangeStaminaScRsp* Clone()
		{
			return ((::Proto::ExchangeStaminaScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ExchangeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_EXCHANGETIMES_OFFSET))(this);
		}

		::System::Void set_ExchangeTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_SET_EXCHANGETIMES_OFFSET))(this, a1);
		}

		::System::Int64 get_LastRecoverTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_LASTRECOVERTIME_OFFSET))(this);
		}

		::System::Void set_LastRecoverTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_SET_LASTRECOVERTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_StaminaAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_STAMINAADD_OFFSET))(this);
		}

		::System::Void set_StaminaAdd(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_SET_STAMINAADD_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* get_ItemCostList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_ITEMCOSTLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::ExchangeStaminaScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ExchangeStaminaScRsp*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ExchangeStaminaScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ExchangeStaminaScRsp*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
