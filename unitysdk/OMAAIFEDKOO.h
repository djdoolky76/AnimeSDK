#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMAAIFEDKOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMAAIFEDKOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEADD80)
#define OMAAIFEDKOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEADFE0)
#define OMAAIFEDKOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEAD980)
#define OMAAIFEDKOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAD8F0)
#define OMAAIFEDKOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD8A0)
#define OMAAIFEDKOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEADAB0)
#define OMAAIFEDKOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEAD9C0)
#define OMAAIFEDKOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEADBA0)
#define OMAAIFEDKOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEAD860)
#define OMAAIFEDKOO_KMCCJAOMMFP_OFFSET UNITYSDK_OFFSET(0x1DEAD9B0)
#define OMAAIFEDKOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEADE40)
#define OMAAIFEDKOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEADDF0)
#define OMAAIFEDKOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD890)
#define OMAAIFEDKOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEADCA0)
#define OMAAIFEDKOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEADD00)

inline static constexpr unsigned int OMAAIFEDKOO_TypeDefinitionIndex = 26054;

	class OMAAIFEDKOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* COIALIHCLCD; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_PPLJIEGLCPL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OMAAIFEDKOO")->GetStaticField(0x24450);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMAAIFEDKOO")->GetStaticField(0x24458);
		}

		// static const ::System::Object DMODHJAACLC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMAAIFEDKOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMAAIFEDKOO*))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMAAIFEDKOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMAAIFEDKOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMAAIFEDKOO* Clone()
		{
			return ((::OMAAIFEDKOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KMCCJAOMMFP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_KMCCJAOMMFP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMAAIFEDKOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMAAIFEDKOO*))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMAAIFEDKOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMAAIFEDKOO*))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMAAIFEDKOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
