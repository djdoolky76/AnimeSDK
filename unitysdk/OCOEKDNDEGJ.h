#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCOEKDNDEGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCOEKDNDEGJ_BNFGEEFBONC_OFFSET UNITYSDK_OFFSET(0x1DDEAF50)
#define OCOEKDNDEGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDEB2C0)
#define OCOEKDNDEGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEB4E0)
#define OCOEKDNDEGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDEAF10)
#define OCOEKDNDEGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDEAEE0)
#define OCOEKDNDEGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEAED0)
#define OCOEKDNDEGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDEB040)
#define OCOEKDNDEGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDEAF70)
#define OCOEKDNDEGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDEB1B0)
#define OCOEKDNDEGJ_GHJPMBHAEME_OFFSET UNITYSDK_OFFSET(0x1DDEAF60)
#define OCOEKDNDEGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDEAE90)
#define OCOEKDNDEGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDEB380)
#define OCOEKDNDEGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDEB350)
#define OCOEKDNDEGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDEAEC0)
#define OCOEKDNDEGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDEB1E0)
#define OCOEKDNDEGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDEB240)

inline static constexpr unsigned int OCOEKDNDEGJ_TypeDefinitionIndex = 28465;

	class OCOEKDNDEGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MIAPPDMCIGJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OCOEKDNDEGJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCOEKDNDEGJ*>**)UnitySDK::FromName("", "OCOEKDNDEGJ")->GetStaticField(0x11B60);
		}

		// static const ::System::Object NOOCDBLPJDC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCOEKDNDEGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOEKDNDEGJ*))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCOEKDNDEGJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCOEKDNDEGJ*>*(*)())((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCOEKDNDEGJ* Clone()
		{
			return ((::OCOEKDNDEGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 BNFGEEFBONC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_BNFGEEFBONC_OFFSET))(this);
		}

		::System::Void GHJPMBHAEME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_GHJPMBHAEME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCOEKDNDEGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCOEKDNDEGJ*))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCOEKDNDEGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOEKDNDEGJ*))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
