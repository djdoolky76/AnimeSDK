#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPCHHBHCGOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPCHHBHCGOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13ACD0)
#define CPCHHBHCGOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13AD70)
#define CPCHHBHCGOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13A9C0)
#define CPCHHBHCGOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13A990)
#define CPCHHBHCGOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13A980)
#define CPCHHBHCGOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13AAD0)
#define CPCHHBHCGOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13AA00)
#define CPCHHBHCGOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13AC30)
#define CPCHHBHCGOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E13A940)
#define CPCHHBHCGOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13AD20)
#define CPCHHBHCGOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13ACF0)
#define CPCHHBHCGOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13A970)
#define CPCHHBHCGOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13AC60)
#define CPCHHBHCGOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13ACC0)

inline static constexpr unsigned int CPCHHBHCGOO_TypeDefinitionIndex = 26653;

	class CPCHHBHCGOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPCHHBHCGOO")->GetStaticField(0x21FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPCHHBHCGOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCHHBHCGOO*))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPCHHBHCGOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPCHHBHCGOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPCHHBHCGOO* Clone()
		{
			return ((::CPCHHBHCGOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPCHHBHCGOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPCHHBHCGOO*))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPCHHBHCGOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCHHBHCGOO*))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPCHHBHCGOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
