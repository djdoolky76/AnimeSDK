#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMGLOCNHMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFMGLOCNHMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA6F080)
#define BFMGLOCNHMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6F120)
#define BFMGLOCNHMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6ED70)
#define BFMGLOCNHMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6ED40)
#define BFMGLOCNHMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6ED30)
#define BFMGLOCNHMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6EE80)
#define BFMGLOCNHMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6EDB0)
#define BFMGLOCNHMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA6EFE0)
#define BFMGLOCNHMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6ECF0)
#define BFMGLOCNHMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA6F0D0)
#define BFMGLOCNHMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA6F0A0)
#define BFMGLOCNHMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6ED20)
#define BFMGLOCNHMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA6F010)
#define BFMGLOCNHMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA6F070)

	class BFMGLOCNHMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BFMGLOCNHMO")->GetStaticField(0x42620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFMGLOCNHMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFMGLOCNHMO*))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFMGLOCNHMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BFMGLOCNHMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFMGLOCNHMO* Clone()
		{
			return ((::BFMGLOCNHMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFMGLOCNHMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFMGLOCNHMO*))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFMGLOCNHMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFMGLOCNHMO*))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFMGLOCNHMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
