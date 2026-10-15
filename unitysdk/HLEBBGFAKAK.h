#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLEBBGFAKAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLEBBGFAKAK_ABABAIDAEOK_OFFSET UNITYSDK_OFFSET(0x1E5BB580)
#define HLEBBGFAKAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5BB8F0)
#define HLEBBGFAKAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BBB10)
#define HLEBBGFAKAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5BB540)
#define HLEBBGFAKAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BB510)
#define HLEBBGFAKAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB500)
#define HLEBBGFAKAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5BB670)
#define HLEBBGFAKAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5BB5A0)
#define HLEBBGFAKAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5BB7E0)
#define HLEBBGFAKAK_JFHIGHMLFMG_OFFSET UNITYSDK_OFFSET(0x1E5BB590)
#define HLEBBGFAKAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5BB4C0)
#define HLEBBGFAKAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BB9B0)
#define HLEBBGFAKAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BB980)
#define HLEBBGFAKAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB4F0)
#define HLEBBGFAKAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5BB810)
#define HLEBBGFAKAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5BB870)

inline static constexpr unsigned int HLEBBGFAKAK_TypeDefinitionIndex = 33429;

	class HLEBBGFAKAK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FMPAACGCABH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLEBBGFAKAK")->GetStaticField(0x478D0);
		}

		// static const ::System::Object LECDPNEBBOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLEBBGFAKAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLEBBGFAKAK*))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEBBGFAKAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLEBBGFAKAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLEBBGFAKAK* Clone()
		{
			return ((::HLEBBGFAKAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_CLONE_OFFSET))(this);
		}

		::System::UInt32 ABABAIDAEOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_ABABAIDAEOK_OFFSET))(this);
		}

		::System::Void JFHIGHMLFMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_JFHIGHMLFMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLEBBGFAKAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLEBBGFAKAK*))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLEBBGFAKAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLEBBGFAKAK*))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLEBBGFAKAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
