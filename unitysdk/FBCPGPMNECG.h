#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBCPGPMNECG;
class HCBHBJEOCHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBCPGPMNECG_AOPEMLLGCJE_OFFSET UNITYSDK_OFFSET(0x1E3318C0)
#define FBCPGPMNECG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E331DD0)
#define FBCPGPMNECG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3320A0)
#define FBCPGPMNECG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E331850)
#define FBCPGPMNECG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3317F0)
#define FBCPGPMNECG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3317E0)
#define FBCPGPMNECG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E331A80)
#define FBCPGPMNECG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E331900)
#define FBCPGPMNECG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3318F0)
#define FBCPGPMNECG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E331C00)
#define FBCPGPMNECG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3317A0)
#define FBCPGPMNECG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E331F10)
#define FBCPGPMNECG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E331EA0)
#define FBCPGPMNECG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3318E0)
#define FBCPGPMNECG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3317D0)
#define FBCPGPMNECG_PPEFNLAPPGP_OFFSET UNITYSDK_OFFSET(0x1E3318D0)
#define FBCPGPMNECG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E331C90)
#define FBCPGPMNECG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E331CF0)

inline static constexpr unsigned int FBCPGPMNECG_TypeDefinitionIndex = 29009;

	class FBCPGPMNECG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HCBHBJEOCHL* JPOPLOGLLDP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FBCPGPMNECG")->GetStaticField(0x59070);
		}

		// static const ::System::Object IIPKAEGBLDI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBCPGPMNECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBCPGPMNECG*))((::PBYTE)hIl2Cpp + FBCPGPMNECG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCPGPMNECG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FBCPGPMNECG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBCPGPMNECG* Clone()
		{
			return ((::FBCPGPMNECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG_CLONE_OFFSET))(this);
		}

		::HCBHBJEOCHL* AOPEMLLGCJE()
		{
			return ((::HCBHBJEOCHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG_AOPEMLLGCJE_OFFSET))(this);
		}

		::System::Void PPEFNLAPPGP(::HCBHBJEOCHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + FBCPGPMNECG_PPEFNLAPPGP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBCPGPMNECG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBCPGPMNECG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBCPGPMNECG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBCPGPMNECG*))((::PBYTE)hIl2Cpp + FBCPGPMNECG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBCPGPMNECG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBCPGPMNECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBCPGPMNECG*))((::PBYTE)hIl2Cpp + FBCPGPMNECG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBCPGPMNECG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
