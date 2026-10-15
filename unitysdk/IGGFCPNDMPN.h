#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGGFCPNDMPN_PNFKLAFDNKB.h"
#include "unitysdk/System/Object.h"
class IGGFCPNDMPN;
class LJGKDEKCHPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGGFCPNDMPN_BFLEBNKKFGP_OFFSET UNITYSDK_OFFSET(0x1E64BC10)
#define IGGFCPNDMPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64C420)
#define IGGFCPNDMPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64CA80)
#define IGGFCPNDMPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64BCD0)
#define IGGFCPNDMPN_COEMAKMBPOK_OFFSET UNITYSDK_OFFSET(0x1E64BBB0)
#define IGGFCPNDMPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64BA30)
#define IGGFCPNDMPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64BA20)
#define IGGFCPNDMPN_DDEGOJEDLIH_OFFSET UNITYSDK_OFFSET(0x1E64BD20)
#define IGGFCPNDMPN_EMCBAEIEOKC_OFFSET UNITYSDK_OFFSET(0x1E64BCA0)
#define IGGFCPNDMPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E64BDA0)
#define IGGFCPNDMPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64BD40)
#define IGGFCPNDMPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64C100)
#define IGGFCPNDMPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E64B9B0)
#define IGGFCPNDMPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64C810)
#define IGGFCPNDMPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64C5E0)
#define IGGFCPNDMPN_MIBMHCBNBJE_OFFSET UNITYSDK_OFFSET(0x1E64BD30)
#define IGGFCPNDMPN_MKNNJJOBOOI_OFFSET UNITYSDK_OFFSET(0x1E64BC20)
#define IGGFCPNDMPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64BA10)
#define IGGFCPNDMPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64C220)
#define IGGFCPNDMPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64C280)

	class IGGFCPNDMPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* KCLJDCMCFBN; // 0x18
		::IGGFCPNDMPN_PNFKLAFDNKB CPOCIIDPIML; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGGFCPNDMPN")->GetStaticField(0x4AF80);
		}

		// static const ::System::Object NLNLEBNIOOL; // 0x0
		// static const ::System::Object JCALOOGHAJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGGFCPNDMPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGGFCPNDMPN*))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGGFCPNDMPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGGFCPNDMPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGGFCPNDMPN* Clone()
		{
			return ((::IGGFCPNDMPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_CLONE_OFFSET))(this);
		}

		::LJGKDEKCHPJ* COEMAKMBPOK()
		{
			return ((::LJGKDEKCHPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_COEMAKMBPOK_OFFSET))(this);
		}

		::System::Void BFLEBNKKFGP(::LJGKDEKCHPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJGKDEKCHPJ*))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_BFLEBNKKFGP_OFFSET))(this, a1);
		}

		::System::UInt32 MKNNJJOBOOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_MKNNJJOBOOI_OFFSET))(this);
		}

		::System::Void EMCBAEIEOKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_EMCBAEIEOKC_OFFSET))(this, a1);
		}

		::IGGFCPNDMPN_PNFKLAFDNKB DDEGOJEDLIH()
		{
			return ((::IGGFCPNDMPN_PNFKLAFDNKB(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_DDEGOJEDLIH_OFFSET))(this);
		}

		::System::Void MIBMHCBNBJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_MIBMHCBNBJE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGGFCPNDMPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGGFCPNDMPN*))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGGFCPNDMPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGGFCPNDMPN*))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGGFCPNDMPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
