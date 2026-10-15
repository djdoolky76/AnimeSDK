#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENCGCAOLBLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENCGCAOLBLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E94E0)
#define ENCGCAOLBLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9700)
#define ENCGCAOLBLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E9130)
#define ENCGCAOLBLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E9100)
#define ENCGCAOLBLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E90F0)
#define ENCGCAOLBLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E9260)
#define ENCGCAOLBLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E9190)
#define ENCGCAOLBLC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2E9180)
#define ENCGCAOLBLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E93D0)
#define ENCGCAOLBLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E90B0)
#define ENCGCAOLBLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E95A0)
#define ENCGCAOLBLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E9570)
#define ENCGCAOLBLC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2E9170)
#define ENCGCAOLBLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E90E0)
#define ENCGCAOLBLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E9400)
#define ENCGCAOLBLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E9460)

inline static constexpr unsigned int ENCGCAOLBLC_TypeDefinitionIndex = 30582;

	class ENCGCAOLBLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ENCGCAOLBLC")->GetStaticField(0x542D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENCGCAOLBLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENCGCAOLBLC*))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENCGCAOLBLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ENCGCAOLBLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENCGCAOLBLC* Clone()
		{
			return ((::ENCGCAOLBLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENCGCAOLBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENCGCAOLBLC*))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENCGCAOLBLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENCGCAOLBLC*))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENCGCAOLBLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
