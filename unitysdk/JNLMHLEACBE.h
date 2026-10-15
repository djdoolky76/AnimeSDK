#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNLMHLEACBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JNLMHLEACBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E799820)
#define JNLMHLEACBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E799A80)
#define JNLMHLEACBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E799420)
#define JNLMHLEACBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E799390)
#define JNLMHLEACBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E799340)
#define JNLMHLEACBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E799550)
#define JNLMHLEACBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E799460)
#define JNLMHLEACBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E799640)
#define JNLMHLEACBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E799300)
#define JNLMHLEACBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7998E0)
#define JNLMHLEACBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E799890)
#define JNLMHLEACBE_OKDOJFKNAKF_OFFSET UNITYSDK_OFFSET(0x1E799450)
#define JNLMHLEACBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E799330)
#define JNLMHLEACBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E799740)
#define JNLMHLEACBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7997A0)

inline static constexpr unsigned int JNLMHLEACBE_TypeDefinitionIndex = 26040;

	class JNLMHLEACBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MBPMCOPILAL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JNLMHLEACBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JNLMHLEACBE*>**)UnitySDK::FromName("", "JNLMHLEACBE")->GetStaticField(0x6C990);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NJHCNJONPJC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JNLMHLEACBE")->GetStaticField(0x6C998);
		}

		// static const ::System::Object LEBHJNCNOEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JNLMHLEACBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNLMHLEACBE*))((::PBYTE)hIl2Cpp + JNLMHLEACBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNLMHLEACBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JNLMHLEACBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JNLMHLEACBE*>*(*)())((::PBYTE)hIl2Cpp + JNLMHLEACBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JNLMHLEACBE* Clone()
		{
			return ((::JNLMHLEACBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OKDOJFKNAKF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE_OKDOJFKNAKF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNLMHLEACBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JNLMHLEACBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JNLMHLEACBE*))((::PBYTE)hIl2Cpp + JNLMHLEACBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JNLMHLEACBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JNLMHLEACBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNLMHLEACBE*))((::PBYTE)hIl2Cpp + JNLMHLEACBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JNLMHLEACBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
