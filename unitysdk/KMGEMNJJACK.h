#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIDFCGLODFB;
class KMGEMNJJACK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMGEMNJJACK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E899730)
#define KMGEMNJJACK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E899B10)
#define KMGEMNJJACK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E899380)
#define KMGEMNJJACK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E899280)
#define KMGEMNJJACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E899210)
#define KMGEMNJJACK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E899400)
#define KMGEMNJJACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8993D0)
#define KMGEMNJJACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E899550)
#define KMGEMNJJACK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8991D0)
#define KMGEMNJJACK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E899900)
#define KMGEMNJJACK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E899810)
#define KMGEMNJJACK_PAJFAANOKNF_OFFSET UNITYSDK_OFFSET(0x1E8993B0)
#define KMGEMNJJACK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E899200)
#define KMGEMNJJACK_PIPLJLGAGEI_OFFSET UNITYSDK_OFFSET(0x1E8993C0)
#define KMGEMNJJACK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8995E0)
#define KMGEMNJJACK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E899640)

inline static constexpr unsigned int KMGEMNJJACK_TypeDefinitionIndex = 31022;

	class KMGEMNJJACK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* CHHJEOACGKJ; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* MNGCHFFDKMJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KMGEMNJJACK")->GetStaticField(0x22340);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NCDKEKEGKPJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KMGEMNJJACK")->GetStaticField(0x22348);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DFMHGFKKIDC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KMGEMNJJACK")->GetStaticField(0x22350);
		}

		// static const ::System::Object FOIBKINLOLG; // 0x0
		// static const ::System::Object IJLFJGEHMMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMGEMNJJACK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMGEMNJJACK*))((::PBYTE)hIl2Cpp + KMGEMNJJACK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMGEMNJJACK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KMGEMNJJACK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMGEMNJJACK* Clone()
		{
			return ((::KMGEMNJJACK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* PAJFAANOKNF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK_PAJFAANOKNF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* PIPLJLGAGEI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK_PIPLJLGAGEI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMGEMNJJACK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMGEMNJJACK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGEMNJJACK*))((::PBYTE)hIl2Cpp + KMGEMNJJACK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMGEMNJJACK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMGEMNJJACK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMGEMNJJACK*))((::PBYTE)hIl2Cpp + KMGEMNJJACK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMGEMNJJACK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
