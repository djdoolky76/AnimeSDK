#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKGLCLFLAKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKGLCLFLAKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A0DD0)
#define IKGLCLFLAKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0E70)
#define IKGLCLFLAKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A0A70)
#define IKGLCLFLAKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A0A40)
#define IKGLCLFLAKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0A30)
#define IKGLCLFLAKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A0BD0)
#define IKGLCLFLAKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A0AE0)
#define IKGLCLFLAKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A0D30)
#define IKGLCLFLAKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A09C0)
#define IKGLCLFLAKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A0E20)
#define IKGLCLFLAKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A0DF0)
#define IKGLCLFLAKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0A20)
#define IKGLCLFLAKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A0D60)
#define IKGLCLFLAKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A0DC0)

	class IKGLCLFLAKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IKGLCLFLAKO")->GetStaticField(0x55530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKGLCLFLAKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKGLCLFLAKO*))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKGLCLFLAKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IKGLCLFLAKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKGLCLFLAKO* Clone()
		{
			return ((::IKGLCLFLAKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKGLCLFLAKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKGLCLFLAKO*))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKGLCLFLAKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKGLCLFLAKO*))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKGLCLFLAKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
