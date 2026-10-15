#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDEGAHHANMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDEGAHHANMF_AHNNKOCDHBF_OFFSET UNITYSDK_OFFSET(0x1E25DF90)
#define EDEGAHHANMF_BCNGLPKIIHB_OFFSET UNITYSDK_OFFSET(0x1E25DF50)
#define EDEGAHHANMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E25E350)
#define EDEGAHHANMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25E6F0)
#define EDEGAHHANMF_CLFINCFOMEH_OFFSET UNITYSDK_OFFSET(0x1E25DF80)
#define EDEGAHHANMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E25DED0)
#define EDEGAHHANMF_CNEONILAEOM_OFFSET UNITYSDK_OFFSET(0x1E25DFA0)
#define EDEGAHHANMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E25DE90)
#define EDEGAHHANMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25DE80)
#define EDEGAHHANMF_DAMPJPPJGGM_OFFSET UNITYSDK_OFFSET(0x1E25DF70)
#define EDEGAHHANMF_EBINHIOFPKA_OFFSET UNITYSDK_OFFSET(0x1E25DFB0)
#define EDEGAHHANMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E25E080)
#define EDEGAHHANMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E25DFF0)
#define EDEGAHHANMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E25E0D0)
#define EDEGAHHANMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E25DE10)
#define EDEGAHHANMF_KKKAJELGNKM_OFFSET UNITYSDK_OFFSET(0x1E25DF60)
#define EDEGAHHANMF_LBDCPCGAJEK_OFFSET UNITYSDK_OFFSET(0x1E25DFC0)
#define EDEGAHHANMF_MDLDBNFPFIP_OFFSET UNITYSDK_OFFSET(0x1E25DFE0)
#define EDEGAHHANMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E25E640)
#define EDEGAHHANMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E25E5E0)
#define EDEGAHHANMF_MHOECGBMJNN_OFFSET UNITYSDK_OFFSET(0x1E25DFD0)
#define EDEGAHHANMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E25DE70)
#define EDEGAHHANMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E25E100)
#define EDEGAHHANMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E25E160)

	class EDEGAHHANMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMMHIAMHFBA; // 0x18
		::System::UInt32 KMGIJHAGCAA; // 0x1C
		::System::UInt32 MPBIDPDMNBM; // 0x20
		::System::UInt32 HMEFJLFDJKN; // 0x24
		::System::UInt32 OMMJIOHIKIA; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EDEGAHHANMF")->GetStaticField(0x40370);
		}

		// static const ::System::Object GJAHLKHGAEC; // 0x0
		// static const ::System::Object FKPPFLJCKGG; // 0x0
		// static const ::System::Object LPADEFFJDDP; // 0x0
		// static const ::System::Object HMAAIMGEPJC; // 0x0
		// static const ::System::Object FBDPPHCEAED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDEGAHHANMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDEGAHHANMF*))((::PBYTE)hIl2Cpp + EDEGAHHANMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDEGAHHANMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EDEGAHHANMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDEGAHHANMF* Clone()
		{
			return ((::EDEGAHHANMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_CLONE_OFFSET))(this);
		}

		::System::UInt32 BCNGLPKIIHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_BCNGLPKIIHB_OFFSET))(this);
		}

		::System::Void KKKAJELGNKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDEGAHHANMF_KKKAJELGNKM_OFFSET))(this, a1);
		}

		::System::UInt32 DAMPJPPJGGM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_DAMPJPPJGGM_OFFSET))(this);
		}

		::System::Void CLFINCFOMEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDEGAHHANMF_CLFINCFOMEH_OFFSET))(this, a1);
		}

		::System::UInt32 AHNNKOCDHBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_AHNNKOCDHBF_OFFSET))(this);
		}

		::System::Void CNEONILAEOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDEGAHHANMF_CNEONILAEOM_OFFSET))(this, a1);
		}

		::System::UInt32 EBINHIOFPKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_EBINHIOFPKA_OFFSET))(this);
		}

		::System::Void LBDCPCGAJEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDEGAHHANMF_LBDCPCGAJEK_OFFSET))(this, a1);
		}

		::System::UInt32 MHOECGBMJNN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_MHOECGBMJNN_OFFSET))(this);
		}

		::System::Void MDLDBNFPFIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDEGAHHANMF_MDLDBNFPFIP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDEGAHHANMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDEGAHHANMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDEGAHHANMF*))((::PBYTE)hIl2Cpp + EDEGAHHANMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDEGAHHANMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDEGAHHANMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDEGAHHANMF*))((::PBYTE)hIl2Cpp + EDEGAHHANMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDEGAHHANMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
