#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIOGDHEFOGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIOGDHEFOGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E972AC0)
#define LIOGDHEFOGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E972B60)
#define LIOGDHEFOGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9727B0)
#define LIOGDHEFOGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E972780)
#define LIOGDHEFOGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E972770)
#define LIOGDHEFOGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9728C0)
#define LIOGDHEFOGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9727F0)
#define LIOGDHEFOGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E972A20)
#define LIOGDHEFOGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E972730)
#define LIOGDHEFOGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E972B10)
#define LIOGDHEFOGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E972AE0)
#define LIOGDHEFOGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E972760)
#define LIOGDHEFOGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E972A50)
#define LIOGDHEFOGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E972AB0)

	class LIOGDHEFOGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LIOGDHEFOGD")->GetStaticField(0x45D80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIOGDHEFOGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIOGDHEFOGD*))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIOGDHEFOGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LIOGDHEFOGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIOGDHEFOGD* Clone()
		{
			return ((::LIOGDHEFOGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIOGDHEFOGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIOGDHEFOGD*))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIOGDHEFOGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIOGDHEFOGD*))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIOGDHEFOGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
