#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMIFOPAPNNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMIFOPAPNNI_AHENLDGEOHF_OFFSET UNITYSDK_OFFSET(0x1DFAB6C0)
#define PMIFOPAPNNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFABA30)
#define PMIFOPAPNNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFABC90)
#define PMIFOPAPNNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFAB640)
#define PMIFOPAPNNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFAB600)
#define PMIFOPAPNNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAB5F0)
#define PMIFOPAPNNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFAB7B0)
#define PMIFOPAPNNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFAB6D0)
#define PMIFOPAPNNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFAB890)
#define PMIFOPAPNNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFAB5B0)
#define PMIFOPAPNNI_KAPAPCJDGCK_OFFSET UNITYSDK_OFFSET(0x1DFAB6B0)
#define PMIFOPAPNNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFABB10)
#define PMIFOPAPNNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFABAD0)
#define PMIFOPAPNNI_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1DFAB6A0)
#define PMIFOPAPNNI_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1DFAB690)
#define PMIFOPAPNNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFAB5E0)
#define PMIFOPAPNNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFAB8C0)
#define PMIFOPAPNNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFAB920)

inline static constexpr unsigned int PMIFOPAPNNI_TypeDefinitionIndex = 26719;

	class PMIFOPAPNNI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean JKDNNGJGOOP; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ABPDPMHFFNN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PMIFOPAPNNI")->GetStaticField(0x4D940);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object MGGBILOBELA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMIFOPAPNNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMIFOPAPNNI*))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMIFOPAPNNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PMIFOPAPNNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMIFOPAPNNI* Clone()
		{
			return ((::PMIFOPAPNNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean KAPAPCJDGCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_KAPAPCJDGCK_OFFSET))(this);
		}

		::System::Void AHENLDGEOHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_AHENLDGEOHF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMIFOPAPNNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMIFOPAPNNI*))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMIFOPAPNNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMIFOPAPNNI*))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMIFOPAPNNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
