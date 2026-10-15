#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGDHGALEOIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGDHGALEOIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA718C0)
#define BGDHGALEOIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA71B20)
#define BGDHGALEOIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA714C0)
#define BGDHGALEOIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA71430)
#define BGDHGALEOIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA713E0)
#define BGDHGALEOIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA715F0)
#define BGDHGALEOIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA71500)
#define BGDHGALEOIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA716E0)
#define BGDHGALEOIK_IKJJPNBBGBF_OFFSET UNITYSDK_OFFSET(0x1EA714F0)
#define BGDHGALEOIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA713A0)
#define BGDHGALEOIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA71980)
#define BGDHGALEOIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA71930)
#define BGDHGALEOIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA713D0)
#define BGDHGALEOIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA717E0)
#define BGDHGALEOIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA71840)

inline static constexpr unsigned int BGDHGALEOIK_TypeDefinitionIndex = 33249;

	class BGDHGALEOIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BOCBMHFJIGB; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_DDOEGHLGBHL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BGDHGALEOIK")->GetStaticField(0x42900);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGDHGALEOIK")->GetStaticField(0x42908);
		}

		// static const ::System::Object AGFFNBFBHDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGDHGALEOIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGDHGALEOIK*))((::PBYTE)hIl2Cpp + BGDHGALEOIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGDHGALEOIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGDHGALEOIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGDHGALEOIK* Clone()
		{
			return ((::BGDHGALEOIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IKJJPNBBGBF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK_IKJJPNBBGBF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGDHGALEOIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGDHGALEOIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGDHGALEOIK*))((::PBYTE)hIl2Cpp + BGDHGALEOIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGDHGALEOIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGDHGALEOIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGDHGALEOIK*))((::PBYTE)hIl2Cpp + BGDHGALEOIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGDHGALEOIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
