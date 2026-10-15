#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDFNPICGCGI;
class OBNEOHHDAIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBNEOHHDAIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBB3510)
#define OBNEOHHDAIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB3760)
#define OBNEOHHDAIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBB2EF0)
#define OBNEOHHDAIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBB2E80)
#define OBNEOHHDAIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB2E70)
#define OBNEOHHDAIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBB3100)
#define OBNEOHHDAIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBB2F90)
#define OBNEOHHDAIP_FBGPEBEBMCO_OFFSET UNITYSDK_OFFSET(0x1EBB2F70)
#define OBNEOHHDAIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBB33D0)
#define OBNEOHHDAIP_HFHILNGKLCO_OFFSET UNITYSDK_OFFSET(0x1EBB2F80)
#define OBNEOHHDAIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBB2E30)
#define OBNEOHHDAIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBB35E0)
#define OBNEOHHDAIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBB3570)
#define OBNEOHHDAIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBB2E60)
#define OBNEOHHDAIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBB3420)
#define OBNEOHHDAIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBB3480)

	class OBNEOHHDAIP : public ::System::Object
	{
	public:
		::JDFNPICGCGI* MMJCOIEAHOL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OBNEOHHDAIP")->GetStaticField(0x10D50);
		}

		// static const ::System::Object BJNICFPAPKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBNEOHHDAIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBNEOHHDAIP*))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBNEOHHDAIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OBNEOHHDAIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBNEOHHDAIP* Clone()
		{
			return ((::OBNEOHHDAIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_CLONE_OFFSET))(this);
		}

		::JDFNPICGCGI* FBGPEBEBMCO()
		{
			return ((::JDFNPICGCGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_FBGPEBEBMCO_OFFSET))(this);
		}

		::System::Void HFHILNGKLCO(::JDFNPICGCGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDFNPICGCGI*))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_HFHILNGKLCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBNEOHHDAIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBNEOHHDAIP*))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBNEOHHDAIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBNEOHHDAIP*))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBNEOHHDAIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
