#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLOIKIFPAJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLOIKIFPAJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FD9A0)
#define CLOIKIFPAJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FDA40)
#define CLOIKIFPAJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FD690)
#define CLOIKIFPAJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FD660)
#define CLOIKIFPAJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD650)
#define CLOIKIFPAJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FD7A0)
#define CLOIKIFPAJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FD6D0)
#define CLOIKIFPAJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FD900)
#define CLOIKIFPAJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FD610)
#define CLOIKIFPAJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FD9F0)
#define CLOIKIFPAJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FD9C0)
#define CLOIKIFPAJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD640)
#define CLOIKIFPAJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FD930)
#define CLOIKIFPAJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FD990)

	class CLOIKIFPAJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CLOIKIFPAJC")->GetStaticField(0x1D880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLOIKIFPAJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLOIKIFPAJC*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CLOIKIFPAJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLOIKIFPAJC* Clone()
		{
			return ((::CLOIKIFPAJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLOIKIFPAJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLOIKIFPAJC*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLOIKIFPAJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLOIKIFPAJC*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
