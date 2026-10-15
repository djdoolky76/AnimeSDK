#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCONKJHDJL;
class CLPENACKJJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLPENACKJJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FE1D0)
#define CLPENACKJJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FE4D0)
#define CLPENACKJJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FDD50)
#define CLPENACKJJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FDCA0)
#define CLPENACKJJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FDC50)
#define CLPENACKJJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FDF30)
#define CLPENACKJJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FDDB0)
#define CLPENACKJJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FE050)
#define CLPENACKJJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FDBE0)
#define CLPENACKJJE_KDILIJCPJJA_OFFSET UNITYSDK_OFFSET(0x1E0FDDA0)
#define CLPENACKJJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FE310)
#define CLPENACKJJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FE270)
#define CLPENACKJJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FDC40)
#define CLPENACKJJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FE0C0)
#define CLPENACKJJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FE120)

inline static constexpr unsigned int CLPENACKJJE_TypeDefinitionIndex = 25352;

	class CLPENACKJJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* PCMEBEOHJCK; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_JNCJNMBBPDC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CLPENACKJJE")->GetStaticField(0x11370);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CLPENACKJJE")->GetStaticField(0x11378);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CLPENACKJJE_JJGHOBBFNJD_OFFSET))();
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
