#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEPDHDGCGKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEPDHDGCGKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA12730)
#define MEPDHDGCGKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA127D0)
#define MEPDHDGCGKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA12420)
#define MEPDHDGCGKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA123F0)
#define MEPDHDGCGKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA123E0)
#define MEPDHDGCGKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA12530)
#define MEPDHDGCGKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA12460)
#define MEPDHDGCGKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA12690)
#define MEPDHDGCGKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA123A0)
#define MEPDHDGCGKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA12780)
#define MEPDHDGCGKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA12750)
#define MEPDHDGCGKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA123D0)
#define MEPDHDGCGKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA126C0)
#define MEPDHDGCGKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA12720)

	class MEPDHDGCGKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MEPDHDGCGKH")->GetStaticField(0x4B520);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEPDHDGCGKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEPDHDGCGKH*))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEPDHDGCGKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MEPDHDGCGKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEPDHDGCGKH* Clone()
		{
			return ((::MEPDHDGCGKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEPDHDGCGKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEPDHDGCGKH*))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEPDHDGCGKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEPDHDGCGKH*))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEPDHDGCGKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
