#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EILNMPEFGOM.h"
#include "unitysdk/System/Object.h"
class FCOENPKOEBP;
class JBCHHGDHKIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCOENPKOEBP_AFDBLMGBHDJ_OFFSET UNITYSDK_OFFSET(0x1E34F980)
#define FCOENPKOEBP_AKCGHIOECFE_OFFSET UNITYSDK_OFFSET(0x1E34F9B0)
#define FCOENPKOEBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E34FE30)
#define FCOENPKOEBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E350330)
#define FCOENPKOEBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E34F840)
#define FCOENPKOEBP_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E34F920)
#define FCOENPKOEBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E34F7A0)
#define FCOENPKOEBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34F790)
#define FCOENPKOEBP_EONHEFPCCAJ_OFFSET UNITYSDK_OFFSET(0x1E34F9D0)
#define FCOENPKOEBP_EPEFNNDEPLH_OFFSET UNITYSDK_OFFSET(0x1E34F990)
#define FCOENPKOEBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E34FA80)
#define FCOENPKOEBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E34F9E0)
#define FCOENPKOEBP_FBMICLGHCBD_OFFSET UNITYSDK_OFFSET(0x1E34F9A0)
#define FCOENPKOEBP_GAIOMJHMJKJ_OFFSET UNITYSDK_OFFSET(0x1E34F960)
#define FCOENPKOEBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E34FAF0)
#define FCOENPKOEBP_GPLCPLHKDNM_OFFSET UNITYSDK_OFFSET(0x1E34F9C0)
#define FCOENPKOEBP_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E34F930)
#define FCOENPKOEBP_IOJANECFHCD_OFFSET UNITYSDK_OFFSET(0x1E34F970)
#define FCOENPKOEBP_IONLEMBGMHH_OFFSET UNITYSDK_OFFSET(0x1E34F950)
#define FCOENPKOEBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E34F720)
#define FCOENPKOEBP_KNCKGIKIAPF_OFFSET UNITYSDK_OFFSET(0x1E34F940)
#define FCOENPKOEBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E350220)
#define FCOENPKOEBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E350120)
#define FCOENPKOEBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E34F780)
#define FCOENPKOEBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E34FB60)
#define FCOENPKOEBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E34FBC0)

inline static constexpr unsigned int FCOENPKOEBP_TypeDefinitionIndex = 28580;

	class FCOENPKOEBP : public ::System::Object
	{
	public:
		::JBCHHGDHKIG* JDFDDMABKGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::EILNMPEFGOM DJHNBHFKLLH; // 0x20
		::System::UInt32 FDBGHKCJPMA; // 0x24
		::System::UInt32 KJAENGKDFJD; // 0x28
		::System::UInt32 KHNMADKENHN; // 0x2C
		::System::UInt32 BPHNGKADNFE; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FCOENPKOEBP")->GetStaticField(0x5AE00);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object EPDEJFFDDOD; // 0x0
		// static const ::System::Object KKMJAGKHOBC; // 0x0
		// static const ::System::Object FLDOFDJBLJB; // 0x0
		// static const ::System::Object CMDHAFJBKJF; // 0x0
		// static const ::System::Object PAEMCFNIGNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCOENPKOEBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCOENPKOEBP*))((::PBYTE)hIl2Cpp + FCOENPKOEBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOENPKOEBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FCOENPKOEBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCOENPKOEBP* Clone()
		{
			return ((::FCOENPKOEBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCOENPKOEBP_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::EILNMPEFGOM KNCKGIKIAPF()
		{
			return ((::EILNMPEFGOM(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_KNCKGIKIAPF_OFFSET))(this);
		}

		::System::Void IONLEMBGMHH(::EILNMPEFGOM a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILNMPEFGOM))((::PBYTE)hIl2Cpp + FCOENPKOEBP_IONLEMBGMHH_OFFSET))(this, a1);
		}

		::System::UInt32 GAIOMJHMJKJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_GAIOMJHMJKJ_OFFSET))(this);
		}

		::System::Void IOJANECFHCD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCOENPKOEBP_IOJANECFHCD_OFFSET))(this, a1);
		}

		::System::UInt32 AFDBLMGBHDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_AFDBLMGBHDJ_OFFSET))(this);
		}

		::System::Void EPEFNNDEPLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCOENPKOEBP_EPEFNNDEPLH_OFFSET))(this, a1);
		}

		::System::UInt32 FBMICLGHCBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_FBMICLGHCBD_OFFSET))(this);
		}

		::System::Void AKCGHIOECFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCOENPKOEBP_AKCGHIOECFE_OFFSET))(this, a1);
		}

		::JBCHHGDHKIG* GPLCPLHKDNM()
		{
			return ((::JBCHHGDHKIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_GPLCPLHKDNM_OFFSET))(this);
		}

		::System::Void EONHEFPCCAJ(::JBCHHGDHKIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBCHHGDHKIG*))((::PBYTE)hIl2Cpp + FCOENPKOEBP_EONHEFPCCAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCOENPKOEBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCOENPKOEBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCOENPKOEBP*))((::PBYTE)hIl2Cpp + FCOENPKOEBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCOENPKOEBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCOENPKOEBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCOENPKOEBP*))((::PBYTE)hIl2Cpp + FCOENPKOEBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCOENPKOEBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
