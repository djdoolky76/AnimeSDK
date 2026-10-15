#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGHEJOMOAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBGHEJOMOAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C8240)
#define JBGHEJOMOAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C8460)
#define JBGHEJOMOAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C7E90)
#define JBGHEJOMOAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C7E60)
#define JBGHEJOMOAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C7E50)
#define JBGHEJOMOAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C7FC0)
#define JBGHEJOMOAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C7EF0)
#define JBGHEJOMOAL_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E6C7ED0)
#define JBGHEJOMOAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C8130)
#define JBGHEJOMOAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C7E10)
#define JBGHEJOMOAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C8300)
#define JBGHEJOMOAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C82D0)
#define JBGHEJOMOAL_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E6C7EE0)
#define JBGHEJOMOAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C7E40)
#define JBGHEJOMOAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C8160)
#define JBGHEJOMOAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C81C0)

inline static constexpr unsigned int JBGHEJOMOAL_TypeDefinitionIndex = 28163;

	class JBGHEJOMOAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JBGHEJOMOAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JBGHEJOMOAL*>**)UnitySDK::FromName("", "JBGHEJOMOAL")->GetStaticField(0x592E0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBGHEJOMOAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBGHEJOMOAL*))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBGHEJOMOAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JBGHEJOMOAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JBGHEJOMOAL*>*(*)())((::PBYTE)hIl2Cpp + JBGHEJOMOAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBGHEJOMOAL* Clone()
		{
			return ((::JBGHEJOMOAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBGHEJOMOAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBGHEJOMOAL*))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBGHEJOMOAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBGHEJOMOAL*))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBGHEJOMOAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
