#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEDJDBAJGHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEDJDBAJGHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDEA460)
#define AEDJDBAJGHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEA500)
#define AEDJDBAJGHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDEA150)
#define AEDJDBAJGHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDEA120)
#define AEDJDBAJGHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEA110)
#define AEDJDBAJGHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDEA260)
#define AEDJDBAJGHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDEA190)
#define AEDJDBAJGHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDEA3C0)
#define AEDJDBAJGHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDEA0D0)
#define AEDJDBAJGHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDEA4B0)
#define AEDJDBAJGHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDEA480)
#define AEDJDBAJGHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDEA100)
#define AEDJDBAJGHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDEA3F0)
#define AEDJDBAJGHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDEA450)

	class AEDJDBAJGHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AEDJDBAJGHH")->GetStaticField(0x2C440);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEDJDBAJGHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEDJDBAJGHH*))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEDJDBAJGHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AEDJDBAJGHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEDJDBAJGHH* Clone()
		{
			return ((::AEDJDBAJGHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEDJDBAJGHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEDJDBAJGHH*))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEDJDBAJGHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEDJDBAJGHH*))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEDJDBAJGHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
