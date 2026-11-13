#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCONKJHDJL;
class CLPENACKJJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLPENACKJJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205E4970)
#define CLPENACKJJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x205E4C70)
#define CLPENACKJJE_CLONE_OFFSET UNITYSDK_OFFSET(0x205E44F0)
#define CLPENACKJJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205E4440)
#define CLPENACKJJE_CTOR_OFFSET UNITYSDK_OFFSET(0x205E43F0)
#define CLPENACKJJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205E46D0)
#define CLPENACKJJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x205E4550)
#define CLPENACKJJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205E47F0)
#define CLPENACKJJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205E4380)
#define CLPENACKJJE_KDILIJCPJJA_OFFSET UNITYSDK_OFFSET(0x205E4540)
#define CLPENACKJJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205E4AB0)
#define CLPENACKJJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205E4A10)
#define CLPENACKJJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205E43E0)
#define CLPENACKJJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205E4860)
#define CLPENACKJJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x205E48C0)

inline static constexpr unsigned int CLPENACKJJE_TypeDefinitionIndex = 25830;

	class CLPENACKJJE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* PCMEBEOHJCK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::BCCONKJHDJL*>** StaticGet_JNCJNMBBPDC()
		{
			return (::Google::Protobuf::FieldCodec_1<::BCCONKJHDJL*>**)UnitySDK::FromName("", "CLPENACKJJE")->GetStaticField(0xCFE0);
		}

		static ::Google::Protobuf::MessageParser_1<::CLPENACKJJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLPENACKJJE*>**)UnitySDK::FromName("", "CLPENACKJJE")->GetStaticField(0xCFE8);
		}

		// static const ::System::Object ONPFLOJLCEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLPENACKJJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLPENACKJJE*))((::PBYTE)hIl2Cpp + CLPENACKJJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLPENACKJJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLPENACKJJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLPENACKJJE*>*(*)())((::PBYTE)hIl2Cpp + CLPENACKJJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLPENACKJJE* Clone()
		{
			return ((::CLPENACKJJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* KDILIJCPJJA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE_KDILIJCPJJA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLPENACKJJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLPENACKJJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLPENACKJJE*))((::PBYTE)hIl2Cpp + CLPENACKJJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLPENACKJJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLPENACKJJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLPENACKJJE*))((::PBYTE)hIl2Cpp + CLPENACKJJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLPENACKJJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
