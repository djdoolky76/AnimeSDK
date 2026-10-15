#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDMEKAGOCND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDMEKAGOCND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF127B0)
#define PDMEKAGOCND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF12850)
#define PDMEKAGOCND_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF124A0)
#define PDMEKAGOCND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF12470)
#define PDMEKAGOCND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF12460)
#define PDMEKAGOCND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF125B0)
#define PDMEKAGOCND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF124E0)
#define PDMEKAGOCND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF12710)
#define PDMEKAGOCND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF12420)
#define PDMEKAGOCND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF12800)
#define PDMEKAGOCND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF127D0)
#define PDMEKAGOCND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF12450)
#define PDMEKAGOCND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF12740)
#define PDMEKAGOCND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF127A0)

inline static constexpr unsigned int PDMEKAGOCND_TypeDefinitionIndex = 29958;

	class PDMEKAGOCND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PDMEKAGOCND")->GetStaticField(0x37DB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDMEKAGOCND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDMEKAGOCND*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDMEKAGOCND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PDMEKAGOCND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDMEKAGOCND* Clone()
		{
			return ((::PDMEKAGOCND*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDMEKAGOCND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDMEKAGOCND*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDMEKAGOCND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDMEKAGOCND*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
