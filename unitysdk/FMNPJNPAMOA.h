#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMNPJNPAMOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMNPJNPAMOA_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E3E9EB0)
#define FMNPJNPAMOA_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E3E9EC0)
#define FMNPJNPAMOA_AKOANBIJAJF_OFFSET UNITYSDK_OFFSET(0x1E3E9EE0)
#define FMNPJNPAMOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3EA240)
#define FMNPJNPAMOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EA510)
#define FMNPJNPAMOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E9E40)
#define FMNPJNPAMOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E9E10)
#define FMNPJNPAMOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9E00)
#define FMNPJNPAMOA_DACHJFHAJNL_OFFSET UNITYSDK_OFFSET(0x1E3E9ED0)
#define FMNPJNPAMOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3EA000)
#define FMNPJNPAMOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E9EF0)
#define FMNPJNPAMOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3EA0D0)
#define FMNPJNPAMOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E9D90)
#define FMNPJNPAMOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3EA390)
#define FMNPJNPAMOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3EA350)
#define FMNPJNPAMOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9DF0)
#define FMNPJNPAMOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3EA100)
#define FMNPJNPAMOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3EA160)

	class FMNPJNPAMOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CCDKBDHODBE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FMNPJNPAMOA")->GetStaticField(0x606C0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object FOHKHKNPPDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMNPJNPAMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMNPJNPAMOA*))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMNPJNPAMOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FMNPJNPAMOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMNPJNPAMOA* Clone()
		{
			return ((::FMNPJNPAMOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 DACHJFHAJNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_DACHJFHAJNL_OFFSET))(this);
		}

		::System::Void AKOANBIJAJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_AKOANBIJAJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMNPJNPAMOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMNPJNPAMOA*))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMNPJNPAMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMNPJNPAMOA*))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMNPJNPAMOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
