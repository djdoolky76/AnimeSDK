#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHLNNOMJPNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHLNNOMJPNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE65FB0)
#define OHLNNOMJPNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE66270)
#define OHLNNOMJPNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE65B30)
#define OHLNNOMJPNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE65AA0)
#define OHLNNOMJPNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE65A50)
#define OHLNNOMJPNH_EDJCCOIACJJ_OFFSET UNITYSDK_OFFSET(0x1DE65B80)
#define OHLNNOMJPNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE65CB0)
#define OHLNNOMJPNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE65B90)
#define OHLNNOMJPNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE65DA0)
#define OHLNNOMJPNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE659E0)
#define OHLNNOMJPNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE660A0)
#define OHLNNOMJPNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE66050)
#define OHLNNOMJPNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE65A40)
#define OHLNNOMJPNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE65EA0)
#define OHLNNOMJPNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE65F00)

	class OHLNNOMJPNH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CGEMHGGDLAN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OHLNNOMJPNH")->GetStaticField(0x1B620);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HMMCAICDHDB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OHLNNOMJPNH")->GetStaticField(0x1B628);
		}

		// static const ::System::Object ELKDOHGDGJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHLNNOMJPNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHLNNOMJPNH*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OHLNNOMJPNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHLNNOMJPNH* Clone()
		{
			return ((::OHLNNOMJPNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDJCCOIACJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_EDJCCOIACJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHLNNOMJPNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHLNNOMJPNH*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHLNNOMJPNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHLNNOMJPNH*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
