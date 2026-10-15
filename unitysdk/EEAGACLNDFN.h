#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEAGACLNDFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEAGACLNDFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E263F30)
#define EEAGACLNDFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E264150)
#define EEAGACLNDFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E263B80)
#define EEAGACLNDFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E263B50)
#define EEAGACLNDFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E263B40)
#define EEAGACLNDFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E263CB0)
#define EEAGACLNDFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E263BE0)
#define EEAGACLNDFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E263E20)
#define EEAGACLNDFN_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1E263BD0)
#define EEAGACLNDFN_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1E263BC0)
#define EEAGACLNDFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E263B00)
#define EEAGACLNDFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E263FF0)
#define EEAGACLNDFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E263FC0)
#define EEAGACLNDFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E263B30)
#define EEAGACLNDFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E263E50)
#define EEAGACLNDFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E263EB0)

	class EEAGACLNDFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJPNGCJCMEB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EEAGACLNDFN")->GetStaticField(0x40F80);
		}

		// static const ::System::Object FBCFBAPNOGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEAGACLNDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEAGACLNDFN*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEAGACLNDFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EEAGACLNDFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEAGACLNDFN* Clone()
		{
			return ((::EEAGACLNDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEAGACLNDFN_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEAGACLNDFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEAGACLNDFN*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEAGACLNDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEAGACLNDFN*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
