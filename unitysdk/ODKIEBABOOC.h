#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCMHLOEGFBM;
class ODKIEBABOOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ODKIEBABOOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE1EF90)
#define ODKIEBABOOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1F290)
#define ODKIEBABOOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE1EB70)
#define ODKIEBABOOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE1EAC0)
#define ODKIEBABOOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1EA70)
#define ODKIEBABOOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE1ECF0)
#define ODKIEBABOOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE1EBB0)
#define ODKIEBABOOC_FHAEBLMDIMP_OFFSET UNITYSDK_OFFSET(0x1DE1EBA0)
#define ODKIEBABOOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1EE10)
#define ODKIEBABOOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE1EA30)
#define ODKIEBABOOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE1F0D0)
#define ODKIEBABOOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE1F030)
#define ODKIEBABOOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE1EA60)
#define ODKIEBABOOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1EE80)
#define ODKIEBABOOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1EEE0)

inline static constexpr unsigned int ODKIEBABOOC_TypeDefinitionIndex = 31161;

	class ODKIEBABOOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DCMHLOEGFBM*>* BOKFIANMKIL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ODKIEBABOOC")->GetStaticField(0x13B40);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LHKAOAOLKJG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ODKIEBABOOC")->GetStaticField(0x13B48);
		}

		// static const ::System::Object EGALCIGKMFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ODKIEBABOOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODKIEBABOOC*))((::PBYTE)hIl2Cpp + ODKIEBABOOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODKIEBABOOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ODKIEBABOOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ODKIEBABOOC* Clone()
		{
			return ((::ODKIEBABOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DCMHLOEGFBM*>* FHAEBLMDIMP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DCMHLOEGFBM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC_FHAEBLMDIMP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODKIEBABOOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ODKIEBABOOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODKIEBABOOC*))((::PBYTE)hIl2Cpp + ODKIEBABOOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ODKIEBABOOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ODKIEBABOOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODKIEBABOOC*))((::PBYTE)hIl2Cpp + ODKIEBABOOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ODKIEBABOOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
