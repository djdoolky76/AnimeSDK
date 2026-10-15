#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAGLNICHNPI;
class GAJDPEBBFMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAGLNICHNPI_ADFBNDEBELO_OFFSET UNITYSDK_OFFSET(0x1DDBA500)
#define AAGLNICHNPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDBAB10)
#define AAGLNICHNPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBADE0)
#define AAGLNICHNPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBA3B0)
#define AAGLNICHNPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBA280)
#define AAGLNICHNPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBA270)
#define AAGLNICHNPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBA680)
#define AAGLNICHNPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBA510)
#define AAGLNICHNPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBA950)
#define AAGLNICHNPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDBA230)
#define AAGLNICHNPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDBAC60)
#define AAGLNICHNPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDBAB70)
#define AAGLNICHNPI_NHLEFCEKMAM_OFFSET UNITYSDK_OFFSET(0x1DDBA4F0)
#define AAGLNICHNPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBA260)
#define AAGLNICHNPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBAA20)
#define AAGLNICHNPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBAA80)

	class AAGLNICHNPI : public ::System::Object
	{
	public:
		::GAJDPEBBFMG* CCAGFEOIGIE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AAGLNICHNPI")->GetStaticField(0x36C60);
		}

		// static const ::System::Object PHNAANFIFGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAGLNICHNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAGLNICHNPI*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAGLNICHNPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AAGLNICHNPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAGLNICHNPI* Clone()
		{
			return ((::AAGLNICHNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_CLONE_OFFSET))(this);
		}

		::GAJDPEBBFMG* NHLEFCEKMAM()
		{
			return ((::GAJDPEBBFMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_NHLEFCEKMAM_OFFSET))(this);
		}

		::System::Void ADFBNDEBELO(::GAJDPEBBFMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJDPEBBFMG*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_ADFBNDEBELO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAGLNICHNPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAGLNICHNPI*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAGLNICHNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAGLNICHNPI*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
