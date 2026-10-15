#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCLAEGGMCFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCLAEGGMCFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E542540)
#define HCLAEGGMCFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E542760)
#define HCLAEGGMCFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E542130)
#define HCLAEGGMCFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E542100)
#define HCLAEGGMCFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5420F0)
#define HCLAEGGMCFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5422C0)
#define HCLAEGGMCFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5421C0)
#define HCLAEGGMCFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E542430)
#define HCLAEGGMCFK_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1E5421B0)
#define HCLAEGGMCFK_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1E5421A0)
#define HCLAEGGMCFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E542080)
#define HCLAEGGMCFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E542600)
#define HCLAEGGMCFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5425D0)
#define HCLAEGGMCFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5420E0)
#define HCLAEGGMCFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E542460)
#define HCLAEGGMCFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5424C0)

	class HCLAEGGMCFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJPNGCJCMEB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCLAEGGMCFK")->GetStaticField(0x30760);
		}

		// static const ::System::Object FBCFBAPNOGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCLAEGGMCFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCLAEGGMCFK*))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCLAEGGMCFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCLAEGGMCFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCLAEGGMCFK* Clone()
		{
			return ((::HCLAEGGMCFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCLAEGGMCFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCLAEGGMCFK*))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCLAEGGMCFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCLAEGGMCFK*))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCLAEGGMCFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
