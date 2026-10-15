#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGKJMBBJCNC_CLJLEOOPAHH.h"
#include "unitysdk/System/Object.h"
class AGKJMBBJCNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGKJMBBJCNC_AIPAJJEPMFI_OFFSET UNITYSDK_OFFSET(0x1E12D6B0)
#define AGKJMBBJCNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12DB00)
#define AGKJMBBJCNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12DE50)
#define AGKJMBBJCNC_CEFHKJMKGJA_OFFSET UNITYSDK_OFFSET(0x1E12D650)
#define AGKJMBBJCNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12D680)
#define AGKJMBBJCNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12D510)
#define AGKJMBBJCNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12D500)
#define AGKJMBBJCNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E12D700)
#define AGKJMBBJCNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E12D6D0)
#define AGKJMBBJCNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12D900)
#define AGKJMBBJCNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12D4C0)
#define AGKJMBBJCNC_LGCFPGJHFOA_OFFSET UNITYSDK_OFFSET(0x1E12D6C0)
#define AGKJMBBJCNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12DCD0)
#define AGKJMBBJCNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12DC10)
#define AGKJMBBJCNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12D4F0)
#define AGKJMBBJCNC_PGLMCGFIHFH_OFFSET UNITYSDK_OFFSET(0x1E12D5D0)
#define AGKJMBBJCNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12D9A0)
#define AGKJMBBJCNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12DA00)

	class AGKJMBBJCNC : public ::System::Object
	{
	public:
		::System::Object* DLKDEIKKHDH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::AGKJMBBJCNC_CLJLEOOPAHH NHPGOFIJNNB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AGKJMBBJCNC")->GetStaticField(0x30940);
		}

		// static const ::System::Object KJAPCNNNKHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGKJMBBJCNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGKJMBBJCNC*))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGKJMBBJCNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AGKJMBBJCNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGKJMBBJCNC* Clone()
		{
			return ((::AGKJMBBJCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGLMCGFIHFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_PGLMCGFIHFH_OFFSET))(this);
		}

		::System::Void CEFHKJMKGJA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_CEFHKJMKGJA_OFFSET))(this, a1);
		}

		::AGKJMBBJCNC_CLJLEOOPAHH AIPAJJEPMFI()
		{
			return ((::AGKJMBBJCNC_CLJLEOOPAHH(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_AIPAJJEPMFI_OFFSET))(this);
		}

		::System::Void LGCFPGJHFOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_LGCFPGJHFOA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGKJMBBJCNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGKJMBBJCNC*))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGKJMBBJCNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGKJMBBJCNC*))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGKJMBBJCNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
