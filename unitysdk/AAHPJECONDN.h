#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAHPJECONDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAHPJECONDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD8DB70)
#define AAHPJECONDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD8DD90)
#define AAHPJECONDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD8D7C0)
#define AAHPJECONDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD8D790)
#define AAHPJECONDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8D780)
#define AAHPJECONDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD8D8F0)
#define AAHPJECONDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD8D820)
#define AAHPJECONDN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DD8D810)
#define AAHPJECONDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD8DA60)
#define AAHPJECONDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DD8D740)
#define AAHPJECONDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD8DC30)
#define AAHPJECONDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD8DC00)
#define AAHPJECONDN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DD8D800)
#define AAHPJECONDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD8D770)
#define AAHPJECONDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD8DA90)
#define AAHPJECONDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD8DAF0)

inline static constexpr unsigned int AAHPJECONDN_TypeDefinitionIndex = 32004;

	class AAHPJECONDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AAHPJECONDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AAHPJECONDN*>**)UnitySDK::FromName("", "AAHPJECONDN")->GetStaticField(0x2E970);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAHPJECONDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPJECONDN*))((::PBYTE)hIl2Cpp + AAHPJECONDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAHPJECONDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AAHPJECONDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AAHPJECONDN*>*(*)())((::PBYTE)hIl2Cpp + AAHPJECONDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAHPJECONDN* Clone()
		{
			return ((::AAHPJECONDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAHPJECONDN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAHPJECONDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAHPJECONDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAHPJECONDN*))((::PBYTE)hIl2Cpp + AAHPJECONDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAHPJECONDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAHPJECONDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPJECONDN*))((::PBYTE)hIl2Cpp + AAHPJECONDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAHPJECONDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
