#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMAAMKJIHNO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMAAMKJIHNO_BFCKKDBJEEJ_OFFSET UNITYSDK_OFFSET(0x1E6B2FA0)
#define IMAAMKJIHNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B3310)
#define IMAAMKJIHNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B3530)
#define IMAAMKJIHNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B2F60)
#define IMAAMKJIHNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B2F30)
#define IMAAMKJIHNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2F20)
#define IMAAMKJIHNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B3090)
#define IMAAMKJIHNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B2FC0)
#define IMAAMKJIHNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B3200)
#define IMAAMKJIHNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B2EE0)
#define IMAAMKJIHNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B33D0)
#define IMAAMKJIHNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B33A0)
#define IMAAMKJIHNO_PBKMFMDLLKJ_OFFSET UNITYSDK_OFFSET(0x1E6B2FB0)
#define IMAAMKJIHNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2F10)
#define IMAAMKJIHNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B3230)
#define IMAAMKJIHNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B3290)

	class IMAAMKJIHNO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FGDIKGKCCFN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMAAMKJIHNO")->GetStaticField(0x56A60);
		}

		// static const ::System::Object CLJJLLDPMBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMAAMKJIHNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMAAMKJIHNO*))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMAAMKJIHNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMAAMKJIHNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMAAMKJIHNO* Clone()
		{
			return ((::IMAAMKJIHNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BFCKKDBJEEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_BFCKKDBJEEJ_OFFSET))(this);
		}

		::System::Void PBKMFMDLLKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_PBKMFMDLLKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMAAMKJIHNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMAAMKJIHNO*))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMAAMKJIHNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMAAMKJIHNO*))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMAAMKJIHNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
