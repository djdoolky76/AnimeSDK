#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNHBDMIDFCL_DEIPGMEPNLM.h"
#include "unitysdk/System/Object.h"
class BNHBDMIDFCL;
class JAAJAPNFMGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNHBDMIDFCL_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E033A60)
#define BNHBDMIDFCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E033F70)
#define BNHBDMIDFCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0343D0)
#define BNHBDMIDFCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E033A30)
#define BNHBDMIDFCL_CMHDBLJHHFG_OFFSET UNITYSDK_OFFSET(0x1E033A90)
#define BNHBDMIDFCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E033940)
#define BNHBDMIDFCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E033930)
#define BNHBDMIDFCL_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E033A70)
#define BNHBDMIDFCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E033AD0)
#define BNHBDMIDFCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E033AA0)
#define BNHBDMIDFCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E033CC0)
#define BNHBDMIDFCL_IBHBPNPJAJF_OFFSET UNITYSDK_OFFSET(0x1E033A10)
#define BNHBDMIDFCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0338F0)
#define BNHBDMIDFCL_KHEBJAOLBAK_OFFSET UNITYSDK_OFFSET(0x1E033A80)
#define BNHBDMIDFCL_LNNCLELFOFE_OFFSET UNITYSDK_OFFSET(0x1E0339D0)
#define BNHBDMIDFCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0341B0)
#define BNHBDMIDFCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E034070)
#define BNHBDMIDFCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E033920)
#define BNHBDMIDFCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E033E30)
#define BNHBDMIDFCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E033E90)

	class BNHBDMIDFCL : public ::System::Object
	{
	public:
		::System::Object* NDKLOHHIEKF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::BNHBDMIDFCL_DEIPGMEPNLM PNEGFILEAFE; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BNHBDMIDFCL")->GetStaticField(0x52690);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object IJDMJGPNJOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNHBDMIDFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNHBDMIDFCL*))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNHBDMIDFCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BNHBDMIDFCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNHBDMIDFCL* Clone()
		{
			return ((::BNHBDMIDFCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::JAAJAPNFMGO* LNNCLELFOFE()
		{
			return ((::JAAJAPNFMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_LNNCLELFOFE_OFFSET))(this);
		}

		::System::Void IBHBPNPJAJF(::JAAJAPNFMGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAAJAPNFMGO*))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_IBHBPNPJAJF_OFFSET))(this, a1);
		}

		::BNHBDMIDFCL_DEIPGMEPNLM KHEBJAOLBAK()
		{
			return ((::BNHBDMIDFCL_DEIPGMEPNLM(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_KHEBJAOLBAK_OFFSET))(this);
		}

		::System::Void CMHDBLJHHFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_CMHDBLJHHFG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNHBDMIDFCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNHBDMIDFCL*))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNHBDMIDFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNHBDMIDFCL*))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNHBDMIDFCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
