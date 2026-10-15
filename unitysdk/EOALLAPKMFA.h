#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOALLAPKMFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOALLAPKMFA_AONEFDOPGDC_OFFSET UNITYSDK_OFFSET(0x1E2F6430)
#define EOALLAPKMFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2F6990)
#define EOALLAPKMFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6C20)
#define EOALLAPKMFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2F63E0)
#define EOALLAPKMFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2F6340)
#define EOALLAPKMFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F62E0)
#define EOALLAPKMFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2F6540)
#define EOALLAPKMFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2F64A0)
#define EOALLAPKMFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2F6670)
#define EOALLAPKMFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2F62A0)
#define EOALLAPKMFA_LAEEMPOIHOK_OFFSET UNITYSDK_OFFSET(0x1E2F6490)
#define EOALLAPKMFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2F6B20)
#define EOALLAPKMFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2F6AB0)
#define EOALLAPKMFA_NOJOEJIFAGC_OFFSET UNITYSDK_OFFSET(0x1E2F6440)
#define EOALLAPKMFA_OCMELHDBILD_OFFSET UNITYSDK_OFFSET(0x1E2F6410)
#define EOALLAPKMFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2F62D0)
#define EOALLAPKMFA_PNLHBBDAGKE_OFFSET UNITYSDK_OFFSET(0x1E2F6420)
#define EOALLAPKMFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2F67F0)
#define EOALLAPKMFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2F6850)

inline static constexpr unsigned int EOALLAPKMFA_TypeDefinitionIndex = 34133;

	class EOALLAPKMFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* GBEOKDKOKKG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKIMBAJGANG; // 0x20
		::System::UInt32 EEJENIBCKFC; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_NGJOKJCBILD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EOALLAPKMFA")->GetStaticField(0x54A00);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EOALLAPKMFA")->GetStaticField(0x54A08);
		}

		// static const ::System::Object CDDFKHMGIKC; // 0x0
		// static const ::System::Object NPGGEJCIEND; // 0x0
		// static const ::System::Object CIPHCNGGHJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOALLAPKMFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOALLAPKMFA*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOALLAPKMFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EOALLAPKMFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOALLAPKMFA* Clone()
		{
			return ((::EOALLAPKMFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCMELHDBILD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_OCMELHDBILD_OFFSET))(this);
		}

		::System::Void PNLHBBDAGKE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOALLAPKMFA_PNLHBBDAGKE_OFFSET))(this, a1);
		}

		::System::String* AONEFDOPGDC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_AONEFDOPGDC_OFFSET))(this);
		}

		::System::Void NOJOEJIFAGC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_NOJOEJIFAGC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAEEMPOIHOK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_LAEEMPOIHOK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOALLAPKMFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOALLAPKMFA*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOALLAPKMFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOALLAPKMFA*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
