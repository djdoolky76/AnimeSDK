#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCDBGKJANIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCDBGKJANIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F3380)
#define KCDBGKJANIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F35A0)
#define KCDBGKJANIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F2FD0)
#define KCDBGKJANIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F2FA0)
#define KCDBGKJANIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F2F90)
#define KCDBGKJANIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F3100)
#define KCDBGKJANIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F3030)
#define KCDBGKJANIH_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E7F3020)
#define KCDBGKJANIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F3270)
#define KCDBGKJANIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F2F50)
#define KCDBGKJANIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F3440)
#define KCDBGKJANIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F3410)
#define KCDBGKJANIH_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E7F3010)
#define KCDBGKJANIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F2F80)
#define KCDBGKJANIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F32A0)
#define KCDBGKJANIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F3300)

	class KCDBGKJANIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFMHFBDKDOE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KCDBGKJANIH")->GetStaticField(0xF700);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCDBGKJANIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDBGKJANIH*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDBGKJANIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KCDBGKJANIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCDBGKJANIH* Clone()
		{
			return ((::KCDBGKJANIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCDBGKJANIH_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCDBGKJANIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCDBGKJANIH*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCDBGKJANIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDBGKJANIH*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
