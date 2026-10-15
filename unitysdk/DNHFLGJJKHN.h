#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNHFLGJJKHN;
class NMEGIPHFFDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNHFLGJJKHN_BGAPBAMMAGK_OFFSET UNITYSDK_OFFSET(0x1E1F63D0)
#define DNHFLGJJKHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F6820)
#define DNHFLGJJKHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6BB0)
#define DNHFLGJJKHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F6390)
#define DNHFLGJJKHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F62A0)
#define DNHFLGJJKHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6220)
#define DNHFLGJJKHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F6410)
#define DNHFLGJJKHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F63E0)
#define DNHFLGJJKHN_GCKCAEMBDNN_OFFSET UNITYSDK_OFFSET(0x1E1F63C0)
#define DNHFLGJJKHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F6560)
#define DNHFLGJJKHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F61E0)
#define DNHFLGJJKHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F69B0)
#define DNHFLGJJKHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F6900)
#define DNHFLGJJKHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6210)
#define DNHFLGJJKHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F66E0)
#define DNHFLGJJKHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F6740)

	class DNHFLGJJKHN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* OJFJBMMAHEJ; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* MEHJIOPJEIP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_CNCBDIFDGOJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DNHFLGJJKHN")->GetStaticField(0x40430);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GCHJHCOKFGD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DNHFLGJJKHN")->GetStaticField(0x40438);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DNHFLGJJKHN")->GetStaticField(0x40440);
		}

		// static const ::System::Object FPMLDEAOLBC; // 0x0
		// static const ::System::Object CMOMAELPCOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNHFLGJJKHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNHFLGJJKHN*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DNHFLGJJKHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNHFLGJJKHN* Clone()
		{
			return ((::DNHFLGJJKHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* GCKCAEMBDNN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_GCKCAEMBDNN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* BGAPBAMMAGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_BGAPBAMMAGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNHFLGJJKHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNHFLGJJKHN*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNHFLGJJKHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNHFLGJJKHN*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
