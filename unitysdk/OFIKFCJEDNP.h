#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFIKFCJEDNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFIKFCJEDNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE1AF50)
#define OFIKFCJEDNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1B170)
#define OFIKFCJEDNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE1ABA0)
#define OFIKFCJEDNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE1AB70)
#define OFIKFCJEDNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1AB60)
#define OFIKFCJEDNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE1ACD0)
#define OFIKFCJEDNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE1AC00)
#define OFIKFCJEDNP_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1DE1ABE0)
#define OFIKFCJEDNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1AE40)
#define OFIKFCJEDNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE1AB20)
#define OFIKFCJEDNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE1B010)
#define OFIKFCJEDNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE1AFE0)
#define OFIKFCJEDNP_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1DE1ABF0)
#define OFIKFCJEDNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE1AB50)
#define OFIKFCJEDNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1AE70)
#define OFIKFCJEDNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1AED0)

inline static constexpr unsigned int OFIKFCJEDNP_TypeDefinitionIndex = 27228;

	class OFIKFCJEDNP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OFIKFCJEDNP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFIKFCJEDNP*>**)UnitySDK::FromName("", "OFIKFCJEDNP")->GetStaticField(0x16BE0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFIKFCJEDNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFIKFCJEDNP*))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFIKFCJEDNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFIKFCJEDNP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFIKFCJEDNP*>*(*)())((::PBYTE)hIl2Cpp + OFIKFCJEDNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFIKFCJEDNP* Clone()
		{
			return ((::OFIKFCJEDNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFIKFCJEDNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFIKFCJEDNP*))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFIKFCJEDNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFIKFCJEDNP*))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFIKFCJEDNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
