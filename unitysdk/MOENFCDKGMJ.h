#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOENFCDKGMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOENFCDKGMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAA7130)
#define MOENFCDKGMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA7350)
#define MOENFCDKGMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAA6D20)
#define MOENFCDKGMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAA6CF0)
#define MOENFCDKGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA6CE0)
#define MOENFCDKGMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAA6EB0)
#define MOENFCDKGMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAA6DB0)
#define MOENFCDKGMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAA7020)
#define MOENFCDKGMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAA6C70)
#define MOENFCDKGMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAA71F0)
#define MOENFCDKGMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAA71C0)
#define MOENFCDKGMJ_NCOKKJBNOHA_OFFSET UNITYSDK_OFFSET(0x1EAA6DA0)
#define MOENFCDKGMJ_PBDCPINNEHB_OFFSET UNITYSDK_OFFSET(0x1EAA6D90)
#define MOENFCDKGMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAA6CD0)
#define MOENFCDKGMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAA7050)
#define MOENFCDKGMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAA70B0)

	class MOENFCDKGMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFKCJLGPJIF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MOENFCDKGMJ")->GetStaticField(0x5A2E0);
		}

		// static const ::System::Object OAAJLFDLHMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOENFCDKGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOENFCDKGMJ*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MOENFCDKGMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOENFCDKGMJ* Clone()
		{
			return ((::MOENFCDKGMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 PBDCPINNEHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_PBDCPINNEHB_OFFSET))(this);
		}

		::System::Void NCOKKJBNOHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_NCOKKJBNOHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOENFCDKGMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOENFCDKGMJ*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOENFCDKGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOENFCDKGMJ*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
