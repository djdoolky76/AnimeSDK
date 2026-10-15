#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAKNAOBLJGJ;
class MGOLOIGOAMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGOLOIGOAMB_BHDPANMBCOI_OFFSET UNITYSDK_OFFSET(0x1EA2AB00)
#define MGOLOIGOAMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2B0C0)
#define MGOLOIGOAMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2B3F0)
#define MGOLOIGOAMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2AA40)
#define MGOLOIGOAMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2A9D0)
#define MGOLOIGOAMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2A9C0)
#define MGOLOIGOAMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2ACB0)
#define MGOLOIGOAMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2AB10)
#define MGOLOIGOAMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2AF80)
#define MGOLOIGOAMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2A950)
#define MGOLOIGOAMB_KANJLKEAAGC_OFFSET UNITYSDK_OFFSET(0x1EA2AAF0)
#define MGOLOIGOAMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2B220)
#define MGOLOIGOAMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2B120)
#define MGOLOIGOAMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2A9B0)
#define MGOLOIGOAMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2AFD0)
#define MGOLOIGOAMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2B030)

inline static constexpr unsigned int MGOLOIGOAMB_TypeDefinitionIndex = 34770;

	class MGOLOIGOAMB : public ::System::Object
	{
	public:
		::EAKNAOBLJGJ* OBDNOGCHHPE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MGOLOIGOAMB")->GetStaticField(0x4FF50);
		}

		// static const ::System::Object BMAAAJJCGIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGOLOIGOAMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGOLOIGOAMB*))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGOLOIGOAMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MGOLOIGOAMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGOLOIGOAMB* Clone()
		{
			return ((::MGOLOIGOAMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_CLONE_OFFSET))(this);
		}

		::EAKNAOBLJGJ* KANJLKEAAGC()
		{
			return ((::EAKNAOBLJGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_KANJLKEAAGC_OFFSET))(this);
		}

		::System::Void BHDPANMBCOI(::EAKNAOBLJGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAKNAOBLJGJ*))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_BHDPANMBCOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGOLOIGOAMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGOLOIGOAMB*))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGOLOIGOAMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGOLOIGOAMB*))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGOLOIGOAMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
