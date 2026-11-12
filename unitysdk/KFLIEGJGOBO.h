#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFLIEGJGOBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFLIEGJGOBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB34D60)
#define KFLIEGJGOBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB34FC0)
#define KFLIEGJGOBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB34960)
#define KFLIEGJGOBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB348D0)
#define KFLIEGJGOBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB34880)
#define KFLIEGJGOBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB34A90)
#define KFLIEGJGOBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB349A0)
#define KFLIEGJGOBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB34B80)
#define KFLIEGJGOBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB34840)
#define KFLIEGJGOBO_MDEJDACAOBM_OFFSET UNITYSDK_OFFSET(0x1FB34990)
#define KFLIEGJGOBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB34E20)
#define KFLIEGJGOBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB34DD0)
#define KFLIEGJGOBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB34870)
#define KFLIEGJGOBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB34C80)
#define KFLIEGJGOBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB34CE0)

inline static constexpr unsigned int KFLIEGJGOBO_TypeDefinitionIndex = 28686;

	class KFLIEGJGOBO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NJFHPBPCKCN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KFLIEGJGOBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFLIEGJGOBO*>**)UnitySDK::FromName("", "KFLIEGJGOBO")->GetStaticField(0xC130);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DEEBAELIMGH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KFLIEGJGOBO")->GetStaticField(0xC138);
		}

		// static const ::System::Object EBCFMNJBBMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFLIEGJGOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFLIEGJGOBO*))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLIEGJGOBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFLIEGJGOBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFLIEGJGOBO*>*(*)())((::PBYTE)hIl2Cpp + KFLIEGJGOBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFLIEGJGOBO* Clone()
		{
			return ((::KFLIEGJGOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MDEJDACAOBM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_MDEJDACAOBM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFLIEGJGOBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFLIEGJGOBO*))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFLIEGJGOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFLIEGJGOBO*))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFLIEGJGOBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
