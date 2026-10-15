#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAGFBDNFCEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAGFBDNFCEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC1200)
#define NAGFBDNFCEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC1420)
#define NAGFBDNFCEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC0E50)
#define NAGFBDNFCEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC0E20)
#define NAGFBDNFCEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC0E10)
#define NAGFBDNFCEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC0F80)
#define NAGFBDNFCEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC0EB0)
#define NAGFBDNFCEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC10F0)
#define NAGFBDNFCEP_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1EAC0EA0)
#define NAGFBDNFCEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC0DD0)
#define NAGFBDNFCEP_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1EAC0E90)
#define NAGFBDNFCEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC12C0)
#define NAGFBDNFCEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC1290)
#define NAGFBDNFCEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC0E00)
#define NAGFBDNFCEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC1120)
#define NAGFBDNFCEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC1180)

	class NAGFBDNFCEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NAGFBDNFCEP")->GetStaticField(0x5C500);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAGFBDNFCEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAGFBDNFCEP*))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGFBDNFCEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NAGFBDNFCEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAGFBDNFCEP* Clone()
		{
			return ((::NAGFBDNFCEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAGFBDNFCEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAGFBDNFCEP*))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAGFBDNFCEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAGFBDNFCEP*))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAGFBDNFCEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
