#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCPKKIAJKHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCPKKIAJKHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202F7FC0)
#define NCPKKIAJKHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F8280)
#define NCPKKIAJKHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x202F7B40)
#define NCPKKIAJKHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202F7AB0)
#define NCPKKIAJKHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x202F7A60)
#define NCPKKIAJKHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202F7CC0)
#define NCPKKIAJKHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x202F7BA0)
#define NCPKKIAJKHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202F7DB0)
#define NCPKKIAJKHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202F79F0)
#define NCPKKIAJKHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202F80B0)
#define NCPKKIAJKHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202F8060)
#define NCPKKIAJKHJ_ONDBALOPNBN_OFFSET UNITYSDK_OFFSET(0x202F7B90)
#define NCPKKIAJKHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202F7A50)
#define NCPKKIAJKHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202F7EB0)
#define NCPKKIAJKHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x202F7F10)

inline static constexpr unsigned int NCPKKIAJKHJ_TypeDefinitionIndex = 29975;

	class NCPKKIAJKHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OMEOLMPNOPC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GEMKJNPCJOK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NCPKKIAJKHJ")->GetStaticField(0x5D380);
		}

		static ::Google::Protobuf::MessageParser_1<::NCPKKIAJKHJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCPKKIAJKHJ*>**)UnitySDK::FromName("", "NCPKKIAJKHJ")->GetStaticField(0x5D388);
		}

		// static const ::System::Object BPDLIKJDNFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCPKKIAJKHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPKKIAJKHJ*))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCPKKIAJKHJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCPKKIAJKHJ*>*(*)())((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCPKKIAJKHJ* Clone()
		{
			return ((::NCPKKIAJKHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ONDBALOPNBN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_ONDBALOPNBN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCPKKIAJKHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCPKKIAJKHJ*))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCPKKIAJKHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPKKIAJKHJ*))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
