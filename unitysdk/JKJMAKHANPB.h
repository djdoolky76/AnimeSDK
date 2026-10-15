#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKJMAKHANPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKJMAKHANPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E76D540)
#define JKJMAKHANPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76D780)
#define JKJMAKHANPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E76D040)
#define JKJMAKHANPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E76D000)
#define JKJMAKHANPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76CFF0)
#define JKJMAKHANPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E76D1F0)
#define JKJMAKHANPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E76D0F0)
#define JKJMAKHANPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E76D390)
#define JKJMAKHANPB_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1E76D090)
#define JKJMAKHANPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E76CFB0)
#define JKJMAKHANPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E76D5F0)
#define JKJMAKHANPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E76D5B0)
#define JKJMAKHANPB_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1E76D0A0)
#define JKJMAKHANPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E76CFE0)
#define JKJMAKHANPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E76D450)
#define JKJMAKHANPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E76D4B0)

inline static constexpr unsigned int JKJMAKHANPB_TypeDefinitionIndex = 32020;

	class JKJMAKHANPB : public ::System::Object
	{
	public:
		::System::String* JDOJAMHCAJD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JKJMAKHANPB")->GetStaticField(0x65EA0);
		}

		// static const ::System::Object DBKOHLFBPNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKJMAKHANPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKJMAKHANPB*))((::PBYTE)hIl2Cpp + JKJMAKHANPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKJMAKHANPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JKJMAKHANPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKJMAKHANPB* Clone()
		{
			return ((::JKJMAKHANPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB_CLONE_OFFSET))(this);
		}

		::System::String* HIGMHCHDPDL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB_HIGMHCHDPDL_OFFSET))(this);
		}

		::System::Void MJDLJPBICHP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JKJMAKHANPB_MJDLJPBICHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKJMAKHANPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKJMAKHANPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKJMAKHANPB*))((::PBYTE)hIl2Cpp + JKJMAKHANPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKJMAKHANPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKJMAKHANPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKJMAKHANPB*))((::PBYTE)hIl2Cpp + JKJMAKHANPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKJMAKHANPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
