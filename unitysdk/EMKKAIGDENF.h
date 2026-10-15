#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMKKAIGDENF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMKKAIGDENF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E5120)
#define EMKKAIGDENF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E5340)
#define EMKKAIGDENF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E4D70)
#define EMKKAIGDENF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E4D40)
#define EMKKAIGDENF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E4D30)
#define EMKKAIGDENF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E4EA0)
#define EMKKAIGDENF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E4DD0)
#define EMKKAIGDENF_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E2E4DB0)
#define EMKKAIGDENF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E5010)
#define EMKKAIGDENF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E4CF0)
#define EMKKAIGDENF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E51E0)
#define EMKKAIGDENF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E51B0)
#define EMKKAIGDENF_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E2E4DC0)
#define EMKKAIGDENF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E4D20)
#define EMKKAIGDENF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E5040)
#define EMKKAIGDENF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E50A0)

inline static constexpr unsigned int EMKKAIGDENF_TypeDefinitionIndex = 28181;

	class EMKKAIGDENF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EMKKAIGDENF")->GetStaticField(0x53C70);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMKKAIGDENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMKKAIGDENF*))((::PBYTE)hIl2Cpp + EMKKAIGDENF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKKAIGDENF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EMKKAIGDENF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMKKAIGDENF* Clone()
		{
			return ((::EMKKAIGDENF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMKKAIGDENF_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMKKAIGDENF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMKKAIGDENF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMKKAIGDENF*))((::PBYTE)hIl2Cpp + EMKKAIGDENF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMKKAIGDENF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMKKAIGDENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMKKAIGDENF*))((::PBYTE)hIl2Cpp + EMKKAIGDENF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMKKAIGDENF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
