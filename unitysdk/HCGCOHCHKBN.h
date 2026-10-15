#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGCOHCHKBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MonopolyActionResult; }
namespace System { class Object; }
namespace System { class String; }

#define HCGCOHCHKBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E53B930)
#define HCGCOHCHKBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53BC30)
#define HCGCOHCHKBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E53B510)
#define HCGCOHCHKBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53B460)
#define HCGCOHCHKBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53B410)
#define HCGCOHCHKBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E53B690)
#define HCGCOHCHKBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E53B550)
#define HCGCOHCHKBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E53B7B0)
#define HCGCOHCHKBN_GJIABKFPMHA_OFFSET UNITYSDK_OFFSET(0x1E53B540)
#define HCGCOHCHKBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E53B3D0)
#define HCGCOHCHKBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E53BA70)
#define HCGCOHCHKBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E53B9D0)
#define HCGCOHCHKBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E53B400)
#define HCGCOHCHKBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E53B820)
#define HCGCOHCHKBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E53B880)

inline static constexpr unsigned int HCGCOHCHKBN_TypeDefinitionIndex = 31095;

	class HCGCOHCHKBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>* JPEABLNMMOE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HCGCOHCHKBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCGCOHCHKBN*>**)UnitySDK::FromName("", "HCGCOHCHKBN")->GetStaticField(0x2FC20);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::MonopolyActionResult*>** StaticGet_KPOCELGJEDD()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::MonopolyActionResult*>**)UnitySDK::FromName("", "HCGCOHCHKBN")->GetStaticField(0x2FC28);
		}

		// static const ::System::Object KKLFCGBGMDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCGCOHCHKBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGCOHCHKBN*))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGCOHCHKBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCGCOHCHKBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCGCOHCHKBN*>*(*)())((::PBYTE)hIl2Cpp + HCGCOHCHKBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCGCOHCHKBN* Clone()
		{
			return ((::HCGCOHCHKBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>* GJIABKFPMHA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_GJIABKFPMHA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCGCOHCHKBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCGCOHCHKBN*))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCGCOHCHKBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGCOHCHKBN*))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCGCOHCHKBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
