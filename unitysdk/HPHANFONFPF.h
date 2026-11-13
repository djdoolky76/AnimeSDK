#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPHANFONFPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPHANFONFPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2004C4C0)
#define HPHANFONFPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x2004C6E0)
#define HPHANFONFPF_CLONE_OFFSET UNITYSDK_OFFSET(0x2004C110)
#define HPHANFONFPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2004C0E0)
#define HPHANFONFPF_CTOR_OFFSET UNITYSDK_OFFSET(0x2004C0D0)
#define HPHANFONFPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2004C240)
#define HPHANFONFPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2004C170)
#define HPHANFONFPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2004C3B0)
#define HPHANFONFPF_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x2004C150)
#define HPHANFONFPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2004C090)
#define HPHANFONFPF_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x2004C160)
#define HPHANFONFPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2004C580)
#define HPHANFONFPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2004C550)
#define HPHANFONFPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2004C0C0)
#define HPHANFONFPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2004C3E0)
#define HPHANFONFPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x2004C440)

inline static constexpr unsigned int HPHANFONFPF_TypeDefinitionIndex = 31308;

	class HPHANFONFPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BHFEEGICLMK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HPHANFONFPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPHANFONFPF*>**)UnitySDK::FromName("", "HPHANFONFPF")->GetStaticField(0x3FA00);
		}

		// static const ::System::Object OEMNIDFIJEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPHANFONFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPHANFONFPF*))((::PBYTE)hIl2Cpp + HPHANFONFPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHANFONFPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPHANFONFPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPHANFONFPF*>*(*)())((::PBYTE)hIl2Cpp + HPHANFONFPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPHANFONFPF* Clone()
		{
			return ((::HPHANFONFPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF_CLONE_OFFSET))(this);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPHANFONFPF_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPHANFONFPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPHANFONFPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPHANFONFPF*))((::PBYTE)hIl2Cpp + HPHANFONFPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPHANFONFPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPHANFONFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPHANFONFPF*))((::PBYTE)hIl2Cpp + HPHANFONFPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPHANFONFPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
