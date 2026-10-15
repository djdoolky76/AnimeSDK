#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGMDACIPFHL;
class PELFPKFFFBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PELFPKFFFBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1C490)
#define PELFPKFFFBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1C810)
#define PELFPKFFFBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1BFD0)
#define PELFPKFFFBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1BF10)
#define PELFPKFFFBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1BEC0)
#define PELFPKFFFBO_EFLKFHJLFAD_OFFSET UNITYSDK_OFFSET(0x1DF1C020)
#define PELFPKFFFBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1C180)
#define PELFPKFFFBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1C030)
#define PELFPKFFFBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF1C010)
#define PELFPKFFFBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1C2B0)
#define PELFPKFFFBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1BE80)
#define PELFPKFFFBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1C640)
#define PELFPKFFFBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1C5A0)
#define PELFPKFFFBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF1C000)
#define PELFPKFFFBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1BEB0)
#define PELFPKFFFBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1C320)
#define PELFPKFFFBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1C380)

	class PELFPKFFFBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LGMDACIPFHL*>* LNJJJFBFJAH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PELFPKFFFBO")->GetStaticField(0x39F40);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_ALLBNEOBGNC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PELFPKFFFBO")->GetStaticField(0x39F48);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JCALNIODLLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PELFPKFFFBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PELFPKFFFBO*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PELFPKFFFBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PELFPKFFFBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PELFPKFFFBO* Clone()
		{
			return ((::PELFPKFFFBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PELFPKFFFBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGMDACIPFHL*>* EFLKFHJLFAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGMDACIPFHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_EFLKFHJLFAD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PELFPKFFFBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PELFPKFFFBO*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PELFPKFFFBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PELFPKFFFBO*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
