#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJPAAFLHHKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJPAAFLHHKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA94370)
#define JJPAAFLHHKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA94410)
#define JJPAAFLHHKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA94060)
#define JJPAAFLHHKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA94030)
#define JJPAAFLHHKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA94020)
#define JJPAAFLHHKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA94170)
#define JJPAAFLHHKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA940A0)
#define JJPAAFLHHKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA942D0)
#define JJPAAFLHHKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA93FE0)
#define JJPAAFLHHKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA943C0)
#define JJPAAFLHHKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA94390)
#define JJPAAFLHHKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA94010)
#define JJPAAFLHHKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA94300)
#define JJPAAFLHHKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA94360)

inline static constexpr unsigned int JJPAAFLHHKC_TypeDefinitionIndex = 26457;

	class JJPAAFLHHKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JJPAAFLHHKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJPAAFLHHKC*>**)UnitySDK::FromName("", "JJPAAFLHHKC")->GetStaticField(0x50020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJPAAFLHHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJPAAFLHHKC*))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJPAAFLHHKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJPAAFLHHKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJPAAFLHHKC*>*(*)())((::PBYTE)hIl2Cpp + JJPAAFLHHKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJPAAFLHHKC* Clone()
		{
			return ((::JJPAAFLHHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJPAAFLHHKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJPAAFLHHKC*))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJPAAFLHHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJPAAFLHHKC*))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJPAAFLHHKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
