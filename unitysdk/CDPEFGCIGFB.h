#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDPEFGCIGFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDPEFGCIGFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E08CC70)
#define CDPEFGCIGFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08CD10)
#define CDPEFGCIGFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E08C960)
#define CDPEFGCIGFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E08C930)
#define CDPEFGCIGFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08C920)
#define CDPEFGCIGFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E08CA70)
#define CDPEFGCIGFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E08C9A0)
#define CDPEFGCIGFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E08CBD0)
#define CDPEFGCIGFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E08C8E0)
#define CDPEFGCIGFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E08CCC0)
#define CDPEFGCIGFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E08CC90)
#define CDPEFGCIGFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E08C910)
#define CDPEFGCIGFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E08CC00)
#define CDPEFGCIGFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E08CC60)

	class CDPEFGCIGFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDPEFGCIGFB")->GetStaticField(0xFF60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDPEFGCIGFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDPEFGCIGFB*))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDPEFGCIGFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDPEFGCIGFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDPEFGCIGFB* Clone()
		{
			return ((::CDPEFGCIGFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDPEFGCIGFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDPEFGCIGFB*))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDPEFGCIGFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDPEFGCIGFB*))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDPEFGCIGFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
