#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDAHFLMBAAB;
class IHMMNILOINC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHMMNILOINC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7FD400)
#define IHMMNILOINC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7FD6C0)
#define IHMMNILOINC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7FCDA0)
#define IHMMNILOINC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7FCD10)
#define IHMMNILOINC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FCD00)
#define IHMMNILOINC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7FCFD0)
#define IHMMNILOINC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7FCE60)
#define IHMMNILOINC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7FD2A0)
#define IHMMNILOINC_INHEFJIHHKD_OFFSET UNITYSDK_OFFSET(0x1F7FCE40)
#define IHMMNILOINC_JBKPGAMNPNC_OFFSET UNITYSDK_OFFSET(0x1F7FCE50)
#define IHMMNILOINC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7FCCC0)
#define IHMMNILOINC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7FD530)
#define IHMMNILOINC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7FD460)
#define IHMMNILOINC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7FCCF0)
#define IHMMNILOINC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7FD310)
#define IHMMNILOINC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7FD370)

inline static constexpr unsigned int IHMMNILOINC_TypeDefinitionIndex = 31746;

	class IHMMNILOINC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HDAHFLMBAAB* PJMDEGAGOJF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IHMMNILOINC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IHMMNILOINC*>**)UnitySDK::FromName("", "IHMMNILOINC")->GetStaticField(0x46710);
		}

		// static const ::System::Object GCDNPAGONIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHMMNILOINC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHMMNILOINC*))((::PBYTE)hIl2Cpp + IHMMNILOINC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHMMNILOINC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IHMMNILOINC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IHMMNILOINC*>*(*)())((::PBYTE)hIl2Cpp + IHMMNILOINC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHMMNILOINC* Clone()
		{
			return ((::IHMMNILOINC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC_CLONE_OFFSET))(this);
		}

		::HDAHFLMBAAB* INHEFJIHHKD()
		{
			return ((::HDAHFLMBAAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC_INHEFJIHHKD_OFFSET))(this);
		}

		::System::Void JBKPGAMNPNC(::HDAHFLMBAAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDAHFLMBAAB*))((::PBYTE)hIl2Cpp + IHMMNILOINC_JBKPGAMNPNC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHMMNILOINC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHMMNILOINC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHMMNILOINC*))((::PBYTE)hIl2Cpp + IHMMNILOINC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHMMNILOINC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHMMNILOINC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHMMNILOINC*))((::PBYTE)hIl2Cpp + IHMMNILOINC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHMMNILOINC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
