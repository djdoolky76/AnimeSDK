#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJLJFPBKPII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJLJFPBKPII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF7DBD0)
#define PJLJFPBKPII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7DEA0)
#define PJLJFPBKPII_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF7D820)
#define PJLJFPBKPII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF7D7F0)
#define PJLJFPBKPII_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7D7E0)
#define PJLJFPBKPII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF7D990)
#define PJLJFPBKPII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF7D8B0)
#define PJLJFPBKPII_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1DF7D890)
#define PJLJFPBKPII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF7DA60)
#define PJLJFPBKPII_IPFBNDCHFEF_OFFSET UNITYSDK_OFFSET(0x1DF7D880)
#define PJLJFPBKPII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF7D7A0)
#define PJLJFPBKPII_LDBCEEPAELL_OFFSET UNITYSDK_OFFSET(0x1DF7D870)
#define PJLJFPBKPII_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1DF7D8A0)
#define PJLJFPBKPII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7DD20)
#define PJLJFPBKPII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF7DCE0)
#define PJLJFPBKPII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF7D7D0)
#define PJLJFPBKPII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7DA90)
#define PJLJFPBKPII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF7DAF0)

	class PJLJFPBKPII : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 NAJINDCEHMM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PJLJFPBKPII")->GetStaticField(0x1C700);
		}

		// static const ::System::Object JOBMICAKNHM; // 0x0
		// static const ::System::Object EAEDBOGGHCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJLJFPBKPII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLJFPBKPII*))((::PBYTE)hIl2Cpp + PJLJFPBKPII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLJFPBKPII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PJLJFPBKPII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJLJFPBKPII* Clone()
		{
			return ((::PJLJFPBKPII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII_CLONE_OFFSET))(this);
		}

		::System::UInt32 LDBCEEPAELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII_LDBCEEPAELL_OFFSET))(this);
		}

		::System::Void IPFBNDCHFEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJLJFPBKPII_IPFBNDCHFEF_OFFSET))(this, a1);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJLJFPBKPII_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJLJFPBKPII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJLJFPBKPII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJLJFPBKPII*))((::PBYTE)hIl2Cpp + PJLJFPBKPII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJLJFPBKPII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJLJFPBKPII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLJFPBKPII*))((::PBYTE)hIl2Cpp + PJLJFPBKPII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJLJFPBKPII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
