#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIFPPBCFBBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIFPPBCFBBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6895A0)
#define IIFPPBCFBBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6897C0)
#define IIFPPBCFBBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6891F0)
#define IIFPPBCFBBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6891C0)
#define IIFPPBCFBBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6891B0)
#define IIFPPBCFBBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E689320)
#define IIFPPBCFBBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E689250)
#define IIFPPBCFBBC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E689240)
#define IIFPPBCFBBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E689490)
#define IIFPPBCFBBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E689170)
#define IIFPPBCFBBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E689660)
#define IIFPPBCFBBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E689630)
#define IIFPPBCFBBC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E689230)
#define IIFPPBCFBBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6891A0)
#define IIFPPBCFBBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6894C0)
#define IIFPPBCFBBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E689520)

inline static constexpr unsigned int IIFPPBCFBBC_TypeDefinitionIndex = 29595;

	class IIFPPBCFBBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IIFPPBCFBBC")->GetStaticField(0x50660);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIFPPBCFBBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIFPPBCFBBC*))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIFPPBCFBBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IIFPPBCFBBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIFPPBCFBBC* Clone()
		{
			return ((::IIFPPBCFBBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIFPPBCFBBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIFPPBCFBBC*))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIFPPBCFBBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIFPPBCFBBC*))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIFPPBCFBBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
