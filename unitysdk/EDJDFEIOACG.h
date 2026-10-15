#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDJDFEIOACG;
class IKCDOOFJDKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDJDFEIOACG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E260750)
#define EDJDFEIOACG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E260A90)
#define EDJDFEIOACG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E260130)
#define EDJDFEIOACG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2600C0)
#define EDJDFEIOACG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2600B0)
#define EDJDFEIOACG_EOBKNHHFEAB_OFFSET UNITYSDK_OFFSET(0x1E2601C0)
#define EDJDFEIOACG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E260340)
#define EDJDFEIOACG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2601D0)
#define EDJDFEIOACG_GDMPEALDBPH_OFFSET UNITYSDK_OFFSET(0x1E2601B0)
#define EDJDFEIOACG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E260610)
#define EDJDFEIOACG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E260070)
#define EDJDFEIOACG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2608C0)
#define EDJDFEIOACG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2607B0)
#define EDJDFEIOACG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2600A0)
#define EDJDFEIOACG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E260660)
#define EDJDFEIOACG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2606C0)

	class EDJDFEIOACG : public ::System::Object
	{
	public:
		::IKCDOOFJDKO* DBBOMOKJNGE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EDJDFEIOACG")->GetStaticField(0x407A0);
		}

		// static const ::System::Object EMGPBNAFCPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDJDFEIOACG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJDFEIOACG*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDJDFEIOACG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EDJDFEIOACG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDJDFEIOACG* Clone()
		{
			return ((::EDJDFEIOACG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_CLONE_OFFSET))(this);
		}

		::IKCDOOFJDKO* GDMPEALDBPH()
		{
			return ((::IKCDOOFJDKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_GDMPEALDBPH_OFFSET))(this);
		}

		::System::Void EOBKNHHFEAB(::IKCDOOFJDKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCDOOFJDKO*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_EOBKNHHFEAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDJDFEIOACG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDJDFEIOACG*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDJDFEIOACG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJDFEIOACG*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
