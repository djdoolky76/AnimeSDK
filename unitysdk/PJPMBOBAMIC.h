#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJPMBOBAMIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJPMBOBAMIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF84EA0)
#define PJPMBOBAMIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF85100)
#define PJPMBOBAMIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF84AB0)
#define PJPMBOBAMIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF84A70)
#define PJPMBOBAMIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF84A60)
#define PJPMBOBAMIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF84C20)
#define PJPMBOBAMIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF84B40)
#define PJPMBOBAMIC_FLABFFODLAN_OFFSET UNITYSDK_OFFSET(0x1DF84B10)
#define PJPMBOBAMIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF84D00)
#define PJPMBOBAMIC_GMGCKILGECB_OFFSET UNITYSDK_OFFSET(0x1DF84B30)
#define PJPMBOBAMIC_JFPFGJGFCGE_OFFSET UNITYSDK_OFFSET(0x1DF84B00)
#define PJPMBOBAMIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF84A20)
#define PJPMBOBAMIC_LJBBKBHMBJF_OFFSET UNITYSDK_OFFSET(0x1DF84B20)
#define PJPMBOBAMIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF84F80)
#define PJPMBOBAMIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF84F40)
#define PJPMBOBAMIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF84A50)
#define PJPMBOBAMIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF84D30)
#define PJPMBOBAMIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF84D90)

inline static constexpr unsigned int PJPMBOBAMIC_TypeDefinitionIndex = 30271;

	class PJPMBOBAMIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CBJLKLAIGPG; // 0x18
		::System::Boolean JNDBHPPKILC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PJPMBOBAMIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJPMBOBAMIC*>**)UnitySDK::FromName("", "PJPMBOBAMIC")->GetStaticField(0x31940);
		}

		// static const ::System::Object ABJLJCFPJJL; // 0x0
		// static const ::System::Object DPMPPDAIAAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJPMBOBAMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJPMBOBAMIC*))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJPMBOBAMIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJPMBOBAMIC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJPMBOBAMIC*>*(*)())((::PBYTE)hIl2Cpp + PJPMBOBAMIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJPMBOBAMIC* Clone()
		{
			return ((::PJPMBOBAMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_CLONE_OFFSET))(this);
		}

		::System::Boolean JFPFGJGFCGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_JFPFGJGFCGE_OFFSET))(this);
		}

		::System::Void FLABFFODLAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_FLABFFODLAN_OFFSET))(this, a1);
		}

		::System::UInt32 LJBBKBHMBJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_LJBBKBHMBJF_OFFSET))(this);
		}

		::System::Void GMGCKILGECB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_GMGCKILGECB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJPMBOBAMIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJPMBOBAMIC*))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJPMBOBAMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJPMBOBAMIC*))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJPMBOBAMIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
