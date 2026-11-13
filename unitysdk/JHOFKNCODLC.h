#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHOFKNCODLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHOFKNCODLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204B1990)
#define JHOFKNCODLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x204B1A30)
#define JHOFKNCODLC_CLONE_OFFSET UNITYSDK_OFFSET(0x204B1680)
#define JHOFKNCODLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204B1650)
#define JHOFKNCODLC_CTOR_OFFSET UNITYSDK_OFFSET(0x204B1640)
#define JHOFKNCODLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204B1790)
#define JHOFKNCODLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x204B16C0)
#define JHOFKNCODLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204B18F0)
#define JHOFKNCODLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204B1600)
#define JHOFKNCODLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204B19E0)
#define JHOFKNCODLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204B19B0)
#define JHOFKNCODLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204B1630)
#define JHOFKNCODLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204B1920)
#define JHOFKNCODLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x204B1980)

inline static constexpr unsigned int JHOFKNCODLC_TypeDefinitionIndex = 28998;

	class JHOFKNCODLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JHOFKNCODLC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHOFKNCODLC*>**)UnitySDK::FromName("", "JHOFKNCODLC")->GetStaticField(0x60800);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHOFKNCODLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHOFKNCODLC*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHOFKNCODLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHOFKNCODLC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHOFKNCODLC*>*(*)())((::PBYTE)hIl2Cpp + JHOFKNCODLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHOFKNCODLC* Clone()
		{
			return ((::JHOFKNCODLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHOFKNCODLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHOFKNCODLC*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHOFKNCODLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHOFKNCODLC*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
