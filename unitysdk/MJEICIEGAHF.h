#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDCAPBNPOOK.h"
#include "unitysdk/System/Object.h"
class MJEICIEGAHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJEICIEGAHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA46700)
#define MJEICIEGAHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA46A80)
#define MJEICIEGAHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA461D0)
#define MJEICIEGAHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA46140)
#define MJEICIEGAHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA460F0)
#define MJEICIEGAHF_EJMLNLJAPCK_OFFSET UNITYSDK_OFFSET(0x1EA46240)
#define MJEICIEGAHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA46380)
#define MJEICIEGAHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA46250)
#define MJEICIEGAHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA46470)
#define MJEICIEGAHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA46080)
#define MJEICIEGAHF_KMNDKEPNHLC_OFFSET UNITYSDK_OFFSET(0x1EA46220)
#define MJEICIEGAHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA468A0)
#define MJEICIEGAHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA46850)
#define MJEICIEGAHF_NBJENBHGDBC_OFFSET UNITYSDK_OFFSET(0x1EA46230)
#define MJEICIEGAHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA460E0)
#define MJEICIEGAHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA46570)
#define MJEICIEGAHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA465D0)

	class MJEICIEGAHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MFKHLAPFKHB; // 0x18
		::JDCAPBNPOOK OLKEPHJAPFL; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_FOGGOPGEFHM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MJEICIEGAHF")->GetStaticField(0x55590);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MJEICIEGAHF")->GetStaticField(0x55598);
		}

		// static const ::System::Object FIPIBHCBHJC; // 0x0
		// static const ::System::Object ALGFBEOFHBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJEICIEGAHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJEICIEGAHF*))((::PBYTE)hIl2Cpp + MJEICIEGAHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEICIEGAHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MJEICIEGAHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJEICIEGAHF* Clone()
		{
			return ((::MJEICIEGAHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF_CLONE_OFFSET))(this);
		}

		::JDCAPBNPOOK KMNDKEPNHLC()
		{
			return ((::JDCAPBNPOOK(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF_KMNDKEPNHLC_OFFSET))(this);
		}

		::System::Void NBJENBHGDBC(::JDCAPBNPOOK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDCAPBNPOOK))((::PBYTE)hIl2Cpp + MJEICIEGAHF_NBJENBHGDBC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJMLNLJAPCK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF_EJMLNLJAPCK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJEICIEGAHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJEICIEGAHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJEICIEGAHF*))((::PBYTE)hIl2Cpp + MJEICIEGAHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJEICIEGAHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJEICIEGAHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJEICIEGAHF*))((::PBYTE)hIl2Cpp + MJEICIEGAHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJEICIEGAHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
