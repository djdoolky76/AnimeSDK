#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEGNNJGLFJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEGNNJGLFJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF4E60)
#define NEGNNJGLFJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF50C0)
#define NEGNNJGLFJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF4A60)
#define NEGNNJGLFJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF49D0)
#define NEGNNJGLFJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF4980)
#define NEGNNJGLFJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF4B90)
#define NEGNNJGLFJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF4AA0)
#define NEGNNJGLFJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF4C80)
#define NEGNNJGLFJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF4940)
#define NEGNNJGLFJP_JNPLBLHMIPP_OFFSET UNITYSDK_OFFSET(0x1EAF4A90)
#define NEGNNJGLFJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF4F20)
#define NEGNNJGLFJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF4ED0)
#define NEGNNJGLFJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF4970)
#define NEGNNJGLFJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF4D80)
#define NEGNNJGLFJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF4DE0)

inline static constexpr unsigned int NEGNNJGLFJP_TypeDefinitionIndex = 27319;

	class NEGNNJGLFJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBCCLPMCMKP; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_LIFAFKEPHIB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NEGNNJGLFJP")->GetStaticField(0x5DCC0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEGNNJGLFJP")->GetStaticField(0x5DCC8);
		}

		// static const ::System::Object PBEGNMKHBOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEGNNJGLFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEGNNJGLFJP*))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEGNNJGLFJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEGNNJGLFJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEGNNJGLFJP* Clone()
		{
			return ((::NEGNNJGLFJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JNPLBLHMIPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_JNPLBLHMIPP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEGNNJGLFJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEGNNJGLFJP*))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEGNNJGLFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEGNNJGLFJP*))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEGNNJGLFJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
