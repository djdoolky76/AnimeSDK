#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHPBJOMBCAD;
class CAGKEDMHEOI;
class HKOEAOPNEAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKOEAOPNEAC_AGFMEMAFGLD_OFFSET UNITYSDK_OFFSET(0x1E5B8000)
#define HKOEAOPNEAC_BFMICIHHHGC_OFFSET UNITYSDK_OFFSET(0x1E5B8050)
#define HKOEAOPNEAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B8690)
#define HKOEAOPNEAC_CCKNINEEKME_OFFSET UNITYSDK_OFFSET(0x1E5B7FD0)
#define HKOEAOPNEAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B8C20)
#define HKOEAOPNEAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B7F80)
#define HKOEAOPNEAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B7E90)
#define HKOEAOPNEAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B7E50)
#define HKOEAOPNEAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B80B0)
#define HKOEAOPNEAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B8080)
#define HKOEAOPNEAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B8230)
#define HKOEAOPNEAC_HBABBFCLDKE_OFFSET UNITYSDK_OFFSET(0x1E5B8030)
#define HKOEAOPNEAC_HKBEDBLOGNG_OFFSET UNITYSDK_OFFSET(0x1E5B7FF0)
#define HKOEAOPNEAC_HPINGLJIHBA_OFFSET UNITYSDK_OFFSET(0x1E5B8010)
#define HKOEAOPNEAC_HPKLLBDMLPM_OFFSET UNITYSDK_OFFSET(0x1E5B7FB0)
#define HKOEAOPNEAC_IFLBKLLIMJD_OFFSET UNITYSDK_OFFSET(0x1E5B7FE0)
#define HKOEAOPNEAC_JEBKNOFPMAO_OFFSET UNITYSDK_OFFSET(0x1E5B8020)
#define HKOEAOPNEAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B7E10)
#define HKOEAOPNEAC_JLNBOHHMPPN_OFFSET UNITYSDK_OFFSET(0x1E5B8040)
#define HKOEAOPNEAC_LAJGLJJMFHC_OFFSET UNITYSDK_OFFSET(0x1E5B7FC0)
#define HKOEAOPNEAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B8A80)
#define HKOEAOPNEAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B8950)
#define HKOEAOPNEAC_NJFPENOEDGB_OFFSET UNITYSDK_OFFSET(0x1E5B8060)
#define HKOEAOPNEAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B7E40)
#define HKOEAOPNEAC_PILHNEAMBHP_OFFSET UNITYSDK_OFFSET(0x1E5B8070)
#define HKOEAOPNEAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B8320)
#define HKOEAOPNEAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B8380)

inline static constexpr unsigned int HKOEAOPNEAC_TypeDefinitionIndex = 33445;

	class HKOEAOPNEAC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BHPBJOMBCAD*>* KJMLEHKABDD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CAGKEDMHEOI* NFBCNLGAOAA; // 0x20
		::System::Boolean BMHMEHNINKO; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 AKJOBKNLANJ; // 0x2C
		::System::UInt32 NHJBIDODLCJ; // 0x30
		::System::UInt32 GBKNMBNDIHK; // 0x34
		::System::UInt32 GNKLGGAGGGB; // 0x38
		static ::Google::Protobuf::FieldCodec** StaticGet_MOKPPOEOKEG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HKOEAOPNEAC")->GetStaticField(0x46600);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HKOEAOPNEAC")->GetStaticField(0x46608);
		}

		// static const ::System::Object DEEAJLIMKMH; // 0x0
		// static const ::System::Object IPGOEALBBKG; // 0x0
		// static const ::System::Object AMHDJJHLOKD; // 0x0
		// static const ::System::Object JGIANHDINMM; // 0x0
		// static const ::System::Object PCKHOBBGKHE; // 0x0
		// static const ::System::Object PLELNGBGGFF; // 0x0
		// static const ::System::Object DBPKJJJJOBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKOEAOPNEAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKOEAOPNEAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HKOEAOPNEAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKOEAOPNEAC* Clone()
		{
			return ((::HKOEAOPNEAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 HPKLLBDMLPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_HPKLLBDMLPM_OFFSET))(this);
		}

		::System::Void LAJGLJJMFHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_LAJGLJJMFHC_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* CCKNINEEKME()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_CCKNINEEKME_OFFSET))(this);
		}

		::System::Void IFLBKLLIMJD(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_IFLBKLLIMJD_OFFSET))(this, a1);
		}

		::System::UInt32 HKBEDBLOGNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_HKBEDBLOGNG_OFFSET))(this);
		}

		::System::Void AGFMEMAFGLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_AGFMEMAFGLD_OFFSET))(this, a1);
		}

		::System::UInt32 HPINGLJIHBA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_HPINGLJIHBA_OFFSET))(this);
		}

		::System::Void JEBKNOFPMAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_JEBKNOFPMAO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BHPBJOMBCAD*>* HBABBFCLDKE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BHPBJOMBCAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_HBABBFCLDKE_OFFSET))(this);
		}

		::System::Boolean JLNBOHHMPPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_JLNBOHHMPPN_OFFSET))(this);
		}

		::System::Void BFMICIHHHGC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_BFMICIHHHGC_OFFSET))(this, a1);
		}

		::System::UInt32 NJFPENOEDGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_NJFPENOEDGB_OFFSET))(this);
		}

		::System::Void PILHNEAMBHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_PILHNEAMBHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKOEAOPNEAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKOEAOPNEAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKOEAOPNEAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
