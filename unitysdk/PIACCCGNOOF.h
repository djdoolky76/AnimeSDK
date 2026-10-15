#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIACCCGNOOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIACCCGNOOF_BAODMKIEFJB_OFFSET UNITYSDK_OFFSET(0x1DF3FC10)
#define PIACCCGNOOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF3FF70)
#define PIACCCGNOOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF40190)
#define PIACCCGNOOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF3FBC0)
#define PIACCCGNOOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF3FB90)
#define PIACCCGNOOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3FB80)
#define PIACCCGNOOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF3FCF0)
#define PIACCCGNOOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF3FC20)
#define PIACCCGNOOF_GEFKFCHHKII_OFFSET UNITYSDK_OFFSET(0x1DF3FC00)
#define PIACCCGNOOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF3FE60)
#define PIACCCGNOOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF3FB40)
#define PIACCCGNOOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF40030)
#define PIACCCGNOOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF40000)
#define PIACCCGNOOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF3FB70)
#define PIACCCGNOOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF3FE90)
#define PIACCCGNOOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF3FEF0)

inline static constexpr unsigned int PIACCCGNOOF_TypeDefinitionIndex = 33269;

	class PIACCCGNOOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IOBJJKGNBLF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PIACCCGNOOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIACCCGNOOF*>**)UnitySDK::FromName("", "PIACCCGNOOF")->GetStaticField(0x40510);
		}

		// static const ::System::Object ELMAAKPCAON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIACCCGNOOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIACCCGNOOF*))((::PBYTE)hIl2Cpp + PIACCCGNOOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIACCCGNOOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIACCCGNOOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIACCCGNOOF*>*(*)())((::PBYTE)hIl2Cpp + PIACCCGNOOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIACCCGNOOF* Clone()
		{
			return ((::PIACCCGNOOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEFKFCHHKII()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF_GEFKFCHHKII_OFFSET))(this);
		}

		::System::Void BAODMKIEFJB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIACCCGNOOF_BAODMKIEFJB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIACCCGNOOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIACCCGNOOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIACCCGNOOF*))((::PBYTE)hIl2Cpp + PIACCCGNOOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIACCCGNOOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIACCCGNOOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIACCCGNOOF*))((::PBYTE)hIl2Cpp + PIACCCGNOOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIACCCGNOOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
