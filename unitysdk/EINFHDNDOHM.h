#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EINFHDNDOHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EINFHDNDOHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2ACD20)
#define EINFHDNDOHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2ACF40)
#define EINFHDNDOHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2AC970)
#define EINFHDNDOHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2AC940)
#define EINFHDNDOHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC930)
#define EINFHDNDOHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2ACAA0)
#define EINFHDNDOHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2AC9D0)
#define EINFHDNDOHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2ACC10)
#define EINFHDNDOHM_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E2AC9C0)
#define EINFHDNDOHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2AC8F0)
#define EINFHDNDOHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2ACDE0)
#define EINFHDNDOHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2ACDB0)
#define EINFHDNDOHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC920)
#define EINFHDNDOHM_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E2AC9B0)
#define EINFHDNDOHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2ACC40)
#define EINFHDNDOHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2ACCA0)

inline static constexpr unsigned int EINFHDNDOHM_TypeDefinitionIndex = 27655;

	class EINFHDNDOHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EINFHDNDOHM")->GetStaticField(0x49F60);
		}

		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EINFHDNDOHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EINFHDNDOHM*))((::PBYTE)hIl2Cpp + EINFHDNDOHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EINFHDNDOHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EINFHDNDOHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EINFHDNDOHM* Clone()
		{
			return ((::EINFHDNDOHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EINFHDNDOHM_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EINFHDNDOHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EINFHDNDOHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EINFHDNDOHM*))((::PBYTE)hIl2Cpp + EINFHDNDOHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EINFHDNDOHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EINFHDNDOHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EINFHDNDOHM*))((::PBYTE)hIl2Cpp + EINFHDNDOHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EINFHDNDOHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
