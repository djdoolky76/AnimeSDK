#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPMDPMECLCP;
class JJJOADIAEOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPMDPMECLCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEE6FC0)
#define IPMDPMECLCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEE72D0)
#define IPMDPMECLCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEE6A40)
#define IPMDPMECLCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEE69B0)
#define IPMDPMECLCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE69A0)
#define IPMDPMECLCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEE6C90)
#define IPMDPMECLCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEE6B10)
#define IPMDPMECLCP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FEE6B00)
#define IPMDPMECLCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEE6E10)
#define IPMDPMECLCP_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1FEE6AD0)
#define IPMDPMECLCP_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1FEE6AE0)
#define IPMDPMECLCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEE6960)
#define IPMDPMECLCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEE7140)
#define IPMDPMECLCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEE7090)
#define IPMDPMECLCP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FEE6AF0)
#define IPMDPMECLCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEE6990)
#define IPMDPMECLCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEE6E80)
#define IPMDPMECLCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEE6EE0)

inline static constexpr unsigned int IPMDPMECLCP_TypeDefinitionIndex = 35109;

	class IPMDPMECLCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JJJOADIAEOH* JEFEMOPFJOP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IPMDPMECLCP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPMDPMECLCP*>**)UnitySDK::FromName("", "IPMDPMECLCP")->GetStaticField(0x559E0);
		}

		// static const ::System::Object PIDJIHFNOKO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPMDPMECLCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPMDPMECLCP*))((::PBYTE)hIl2Cpp + IPMDPMECLCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPMDPMECLCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPMDPMECLCP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPMDPMECLCP*>*(*)())((::PBYTE)hIl2Cpp + IPMDPMECLCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPMDPMECLCP* Clone()
		{
			return ((::IPMDPMECLCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP_CLONE_OFFSET))(this);
		}

		::JJJOADIAEOH* GLPCHDFCIJF()
		{
			return ((::JJJOADIAEOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP_GLPCHDFCIJF_OFFSET))(this);
		}

		::System::Void IKHJKFLOFKI(::JJJOADIAEOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJJOADIAEOH*))((::PBYTE)hIl2Cpp + IPMDPMECLCP_IKHJKFLOFKI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPMDPMECLCP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPMDPMECLCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPMDPMECLCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPMDPMECLCP*))((::PBYTE)hIl2Cpp + IPMDPMECLCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPMDPMECLCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPMDPMECLCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPMDPMECLCP*))((::PBYTE)hIl2Cpp + IPMDPMECLCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPMDPMECLCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
