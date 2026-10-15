#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBEKJKNCMCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBEKJKNCMCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7EDB80)
#define KBEKJKNCMCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EDE40)
#define KBEKJKNCMCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7ED700)
#define KBEKJKNCMCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7ED670)
#define KBEKJKNCMCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7ED620)
#define KBEKJKNCMCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7ED880)
#define KBEKJKNCMCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7ED760)
#define KBEKJKNCMCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7ED970)
#define KBEKJKNCMCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7ED5B0)
#define KBEKJKNCMCL_KEIPJGHDDAE_OFFSET UNITYSDK_OFFSET(0x1E7ED750)
#define KBEKJKNCMCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7EDC70)
#define KBEKJKNCMCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7EDC20)
#define KBEKJKNCMCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7ED610)
#define KBEKJKNCMCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7EDA70)
#define KBEKJKNCMCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7EDAD0)

inline static constexpr unsigned int KBEKJKNCMCL_TypeDefinitionIndex = 29312;

	class KBEKJKNCMCL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OLFDCOCLDLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KBEKJKNCMCL")->GetStaticField(0xEEA0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OJPJOANJCEE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KBEKJKNCMCL")->GetStaticField(0xEEA8);
		}

		// static const ::System::Object NPNHHIOOGOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBEKJKNCMCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBEKJKNCMCL*))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEKJKNCMCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KBEKJKNCMCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBEKJKNCMCL* Clone()
		{
			return ((::KBEKJKNCMCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KEIPJGHDDAE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_KEIPJGHDDAE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBEKJKNCMCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBEKJKNCMCL*))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBEKJKNCMCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBEKJKNCMCL*))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBEKJKNCMCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
