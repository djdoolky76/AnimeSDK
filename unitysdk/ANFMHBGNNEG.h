#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANFMHBGNNEG;
class PJMGBLIFDFP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANFMHBGNNEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65E790)
#define ANFMHBGNNEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65EA10)
#define ANFMHBGNNEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65E150)
#define ANFMHBGNNEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65E0C0)
#define ANFMHBGNNEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65E0B0)
#define ANFMHBGNNEG_DEHEHCJIKJC_OFFSET UNITYSDK_OFFSET(0x1E65E1F0)
#define ANFMHBGNNEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65E380)
#define ANFMHBGNNEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65E210)
#define ANFMHBGNNEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65E650)
#define ANFMHBGNNEG_IMOLHOHOIHK_OFFSET UNITYSDK_OFFSET(0x1E65E200)
#define ANFMHBGNNEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E65E070)
#define ANFMHBGNNEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65E880)
#define ANFMHBGNNEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65E7F0)
#define ANFMHBGNNEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65E0A0)
#define ANFMHBGNNEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65E6A0)
#define ANFMHBGNNEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65E700)

	class ANFMHBGNNEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PJMGBLIFDFP* KBCNOOJOBLM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ANFMHBGNNEG")->GetStaticField(0x3EC40);
		}

		// static const ::System::Object KMCAAHNMCHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANFMHBGNNEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANFMHBGNNEG*))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANFMHBGNNEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ANFMHBGNNEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANFMHBGNNEG* Clone()
		{
			return ((::ANFMHBGNNEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_CLONE_OFFSET))(this);
		}

		::PJMGBLIFDFP* DEHEHCJIKJC()
		{
			return ((::PJMGBLIFDFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_DEHEHCJIKJC_OFFSET))(this);
		}

		::System::Void IMOLHOHOIHK(::PJMGBLIFDFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_IMOLHOHOIHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANFMHBGNNEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANFMHBGNNEG*))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANFMHBGNNEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANFMHBGNNEG*))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANFMHBGNNEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
