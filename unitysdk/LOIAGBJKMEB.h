#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOIAGBJKMEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOIAGBJKMEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C03C0)
#define LOIAGBJKMEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C0460)
#define LOIAGBJKMEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C00B0)
#define LOIAGBJKMEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C0080)
#define LOIAGBJKMEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C0070)
#define LOIAGBJKMEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C01C0)
#define LOIAGBJKMEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C00F0)
#define LOIAGBJKMEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C0320)
#define LOIAGBJKMEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C0030)
#define LOIAGBJKMEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C0410)
#define LOIAGBJKMEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C03E0)
#define LOIAGBJKMEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C0060)
#define LOIAGBJKMEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C0350)
#define LOIAGBJKMEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C03B0)

	class LOIAGBJKMEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LOIAGBJKMEB")->GetStaticField(0x51D60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOIAGBJKMEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOIAGBJKMEB*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LOIAGBJKMEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOIAGBJKMEB* Clone()
		{
			return ((::LOIAGBJKMEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOIAGBJKMEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOIAGBJKMEB*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOIAGBJKMEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOIAGBJKMEB*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
