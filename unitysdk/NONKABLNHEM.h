#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NONKABLNHEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NONKABLNHEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB63700)
#define NONKABLNHEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB63920)
#define NONKABLNHEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB632F0)
#define NONKABLNHEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB632C0)
#define NONKABLNHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB632B0)
#define NONKABLNHEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB63480)
#define NONKABLNHEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB63380)
#define NONKABLNHEM_FKOAKEAIONC_OFFSET UNITYSDK_OFFSET(0x1EB63370)
#define NONKABLNHEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB635F0)
#define NONKABLNHEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB63240)
#define NONKABLNHEM_JOJBKFBPCNP_OFFSET UNITYSDK_OFFSET(0x1EB63360)
#define NONKABLNHEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB637C0)
#define NONKABLNHEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB63790)
#define NONKABLNHEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB632A0)
#define NONKABLNHEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB63620)
#define NONKABLNHEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB63680)

inline static constexpr unsigned int NONKABLNHEM_TypeDefinitionIndex = 28623;

	class NONKABLNHEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDEKDEJDCP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NONKABLNHEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NONKABLNHEM*>**)UnitySDK::FromName("", "NONKABLNHEM")->GetStaticField(0xC190);
		}

		// static const ::System::Object CHIJOPBIANF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NONKABLNHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NONKABLNHEM*))((::PBYTE)hIl2Cpp + NONKABLNHEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NONKABLNHEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NONKABLNHEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NONKABLNHEM*>*(*)())((::PBYTE)hIl2Cpp + NONKABLNHEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NONKABLNHEM* Clone()
		{
			return ((::NONKABLNHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 JOJBKFBPCNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM_JOJBKFBPCNP_OFFSET))(this);
		}

		::System::Void FKOAKEAIONC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NONKABLNHEM_FKOAKEAIONC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NONKABLNHEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NONKABLNHEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NONKABLNHEM*))((::PBYTE)hIl2Cpp + NONKABLNHEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NONKABLNHEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NONKABLNHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NONKABLNHEM*))((::PBYTE)hIl2Cpp + NONKABLNHEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NONKABLNHEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
