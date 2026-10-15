#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPKOOPBFEAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPKOOPBFEAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5FCA00)
#define HPKOOPBFEAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FCAA0)
#define HPKOOPBFEAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5FC6F0)
#define HPKOOPBFEAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5FC6C0)
#define HPKOOPBFEAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FC6B0)
#define HPKOOPBFEAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5FC800)
#define HPKOOPBFEAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5FC730)
#define HPKOOPBFEAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5FC960)
#define HPKOOPBFEAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5FC670)
#define HPKOOPBFEAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5FCA50)
#define HPKOOPBFEAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5FCA20)
#define HPKOOPBFEAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5FC6A0)
#define HPKOOPBFEAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5FC990)
#define HPKOOPBFEAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5FC9F0)

inline static constexpr unsigned int HPKOOPBFEAH_TypeDefinitionIndex = 27126;

	class HPKOOPBFEAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPKOOPBFEAH")->GetStaticField(0x52150);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPKOOPBFEAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKOOPBFEAH*))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKOOPBFEAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPKOOPBFEAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPKOOPBFEAH* Clone()
		{
			return ((::HPKOOPBFEAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPKOOPBFEAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKOOPBFEAH*))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPKOOPBFEAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKOOPBFEAH*))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPKOOPBFEAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
