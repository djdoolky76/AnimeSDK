#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCPAJELJLGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCPAJELJLGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE1A190)
#define OCPAJELJLGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1A460)
#define OCPAJELJLGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE19DE0)
#define OCPAJELJLGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE19DB0)
#define OCPAJELJLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE19DA0)
#define OCPAJELJLGE_EMBPPNMPKAB_OFFSET UNITYSDK_OFFSET(0x1DE19E40)
#define OCPAJELJLGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE19F50)
#define OCPAJELJLGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE19E70)
#define OCPAJELJLGE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE19E60)
#define OCPAJELJLGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1A020)
#define OCPAJELJLGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE19D60)
#define OCPAJELJLGE_KBDKDPLNPIM_OFFSET UNITYSDK_OFFSET(0x1DE19E30)
#define OCPAJELJLGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE1A2E0)
#define OCPAJELJLGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE1A2A0)
#define OCPAJELJLGE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE19E50)
#define OCPAJELJLGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE19D90)
#define OCPAJELJLGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1A050)
#define OCPAJELJLGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1A0B0)

inline static constexpr unsigned int OCPAJELJLGE_TypeDefinitionIndex = 31980;

	class OCPAJELJLGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FCJCPAFKJCA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OCPAJELJLGE")->GetStaticField(0x134F0);
		}

		// static const ::System::Object HAGOIANMDEM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCPAJELJLGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPAJELJLGE*))((::PBYTE)hIl2Cpp + OCPAJELJLGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCPAJELJLGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OCPAJELJLGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCPAJELJLGE* Clone()
		{
			return ((::OCPAJELJLGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDKDPLNPIM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE_KBDKDPLNPIM_OFFSET))(this);
		}

		::System::Void EMBPPNMPKAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCPAJELJLGE_EMBPPNMPKAB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCPAJELJLGE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCPAJELJLGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCPAJELJLGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPAJELJLGE*))((::PBYTE)hIl2Cpp + OCPAJELJLGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCPAJELJLGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCPAJELJLGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPAJELJLGE*))((::PBYTE)hIl2Cpp + OCPAJELJLGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCPAJELJLGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
