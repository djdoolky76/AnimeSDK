#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAEKEIDLDCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAEKEIDLDCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B2E20)
#define BAEKEIDLDCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B30F0)
#define BAEKEIDLDCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B2A70)
#define BAEKEIDLDCI_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E7B2AE0)
#define BAEKEIDLDCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B2A40)
#define BAEKEIDLDCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B2A30)
#define BAEKEIDLDCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B2BE0)
#define BAEKEIDLDCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B2B00)
#define BAEKEIDLDCI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7B2AD0)
#define BAEKEIDLDCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B2CB0)
#define BAEKEIDLDCI_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E7B2AF0)
#define BAEKEIDLDCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B29F0)
#define BAEKEIDLDCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B2F70)
#define BAEKEIDLDCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B2F30)
#define BAEKEIDLDCI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7B2AC0)
#define BAEKEIDLDCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B2A20)
#define BAEKEIDLDCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B2CE0)
#define BAEKEIDLDCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B2D40)

	class BAEKEIDLDCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BAEKEIDLDCI")->GetStaticField(0x44C00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAEKEIDLDCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAEKEIDLDCI*))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAEKEIDLDCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BAEKEIDLDCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAEKEIDLDCI* Clone()
		{
			return ((::BAEKEIDLDCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAEKEIDLDCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAEKEIDLDCI*))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAEKEIDLDCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAEKEIDLDCI*))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAEKEIDLDCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
