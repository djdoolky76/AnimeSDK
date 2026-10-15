#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPEBEDHMNLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPEBEDHMNLA_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E7D12A0)
#define JPEBEDHMNLA_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E7D12D0)
#define JPEBEDHMNLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D16B0)
#define JPEBEDHMNLA_CAPLHMKKINM_OFFSET UNITYSDK_OFFSET(0x1E7D1310)
#define JPEBEDHMNLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1A50)
#define JPEBEDHMNLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D1220)
#define JPEBEDHMNLA_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E7D12E0)
#define JPEBEDHMNLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D11E0)
#define JPEBEDHMNLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D11D0)
#define JPEBEDHMNLA_EBOMLPKAHPO_OFFSET UNITYSDK_OFFSET(0x1E7D1300)
#define JPEBEDHMNLA_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E7D12B0)
#define JPEBEDHMNLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D13D0)
#define JPEBEDHMNLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D1340)
#define JPEBEDHMNLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D1420)
#define JPEBEDHMNLA_IPMFBACCJNP_OFFSET UNITYSDK_OFFSET(0x1E7D1330)
#define JPEBEDHMNLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D1160)
#define JPEBEDHMNLA_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E7D12F0)
#define JPEBEDHMNLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D19A0)
#define JPEBEDHMNLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D1940)
#define JPEBEDHMNLA_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E7D12C0)
#define JPEBEDHMNLA_ONABKMNBKBL_OFFSET UNITYSDK_OFFSET(0x1E7D1320)
#define JPEBEDHMNLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D11C0)
#define JPEBEDHMNLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D1460)
#define JPEBEDHMNLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D14C0)

	class JPEBEDHMNLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLINKNMHOCI; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		::System::UInt32 OJNNHDEODJM; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x24
		::System::UInt32 ICDPONHFAJP; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPEBEDHMNLA")->GetStaticField(0xABA0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object BEINPDMEFFL; // 0x0
		// static const ::System::Object HBBDEBOANEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPEBEDHMNLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPEBEDHMNLA*))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEBEDHMNLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPEBEDHMNLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPEBEDHMNLA* Clone()
		{
			return ((::JPEBEDHMNLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 EBOMLPKAHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_EBOMLPKAHPO_OFFSET))(this);
		}

		::System::Void CAPLHMKKINM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_CAPLHMKKINM_OFFSET))(this, a1);
		}

		::System::UInt32 ONABKMNBKBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_ONABKMNBKBL_OFFSET))(this);
		}

		::System::Void IPMFBACCJNP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_IPMFBACCJNP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPEBEDHMNLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPEBEDHMNLA*))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPEBEDHMNLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPEBEDHMNLA*))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPEBEDHMNLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
