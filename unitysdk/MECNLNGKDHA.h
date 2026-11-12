#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MECNLNGKDHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MECNLNGKDHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD52BE0)
#define MECNLNGKDHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD52E00)
#define MECNLNGKDHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD52830)
#define MECNLNGKDHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD52800)
#define MECNLNGKDHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD527F0)
#define MECNLNGKDHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD52960)
#define MECNLNGKDHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD52890)
#define MECNLNGKDHA_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1FD52870)
#define MECNLNGKDHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD52AD0)
#define MECNLNGKDHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD527B0)
#define MECNLNGKDHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD52CA0)
#define MECNLNGKDHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD52C70)
#define MECNLNGKDHA_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1FD52880)
#define MECNLNGKDHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD527E0)
#define MECNLNGKDHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD52B00)
#define MECNLNGKDHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD52B60)

inline static constexpr unsigned int MECNLNGKDHA_TypeDefinitionIndex = 28325;

	class MECNLNGKDHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MECNLNGKDHA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MECNLNGKDHA*>**)UnitySDK::FromName("", "MECNLNGKDHA")->GetStaticField(0x50E60);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MECNLNGKDHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MECNLNGKDHA*))((::PBYTE)hIl2Cpp + MECNLNGKDHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MECNLNGKDHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MECNLNGKDHA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MECNLNGKDHA*>*(*)())((::PBYTE)hIl2Cpp + MECNLNGKDHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MECNLNGKDHA* Clone()
		{
			return ((::MECNLNGKDHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MECNLNGKDHA_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MECNLNGKDHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MECNLNGKDHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MECNLNGKDHA*))((::PBYTE)hIl2Cpp + MECNLNGKDHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MECNLNGKDHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MECNLNGKDHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MECNLNGKDHA*))((::PBYTE)hIl2Cpp + MECNLNGKDHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MECNLNGKDHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
