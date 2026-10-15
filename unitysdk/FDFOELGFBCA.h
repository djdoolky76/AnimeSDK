#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACAKOLCGDLL;
class BAEDIBFGLDE;
class FDFOELGFBCA;
class ICABANFEIHJ;
class IILBDJMKELG;
class OMPLEKGNLBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDFOELGFBCA_AIGILDPGFJG_OFFSET UNITYSDK_OFFSET(0x1E357160)
#define FDFOELGFBCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E357980)
#define FDFOELGFBCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3581F0)
#define FDFOELGFBCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3570C0)
#define FDFOELGFBCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E356EB0)
#define FDFOELGFBCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E356EA0)
#define FDFOELGFBCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3571E0)
#define FDFOELGFBCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3571B0)
#define FDFOELGFBCA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3571A0)
#define FDFOELGFBCA_FCEIAKGDLPK_OFFSET UNITYSDK_OFFSET(0x1E357140)
#define FDFOELGFBCA_FIICLILNAAK_OFFSET UNITYSDK_OFFSET(0x1E357100)
#define FDFOELGFBCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E357560)
#define FDFOELGFBCA_HGFCFJEPHGI_OFFSET UNITYSDK_OFFSET(0x1E357120)
#define FDFOELGFBCA_HNMFBCKHPMN_OFFSET UNITYSDK_OFFSET(0x1E357130)
#define FDFOELGFBCA_IGIJCGCHJGJ_OFFSET UNITYSDK_OFFSET(0x1E357180)
#define FDFOELGFBCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E356E60)
#define FDFOELGFBCA_JMDEKPKGMPO_OFFSET UNITYSDK_OFFSET(0x1E3570F0)
#define FDFOELGFBCA_LMHEGKGBDAH_OFFSET UNITYSDK_OFFSET(0x1E357110)
#define FDFOELGFBCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E357E80)
#define FDFOELGFBCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E357B30)
#define FDFOELGFBCA_NLOBJIJGDJJ_OFFSET UNITYSDK_OFFSET(0x1E357150)
#define FDFOELGFBCA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E357190)
#define FDFOELGFBCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E356E90)
#define FDFOELGFBCA_PGGALPPPIIP_OFFSET UNITYSDK_OFFSET(0x1E357170)
#define FDFOELGFBCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3576D0)
#define FDFOELGFBCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E357730)

inline static constexpr unsigned int FDFOELGFBCA_TypeDefinitionIndex = 28019;

	class FDFOELGFBCA : public ::System::Object
	{
	public:
		::ACAKOLCGDLL* KLFCPIGONKK; // 0x10
		::BAEDIBFGLDE* FMBFAHNJKHD; // 0x18
		::ICABANFEIHJ* OAGOPNEBKBE; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::IILBDJMKELG* HJBBLAIFBNC; // 0x30
		::OMPLEKGNLBC* ODLCJNLKAOG; // 0x38
		::System::UInt32 NAEACGPKNNH; // 0x40
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FDFOELGFBCA")->GetStaticField(0x5B480);
		}

		// static const ::System::Object PJFGHNOMFMA; // 0x0
		// static const ::System::Object BJDBFCMCLIA; // 0x0
		// static const ::System::Object AKKIGEDLCIA; // 0x0
		// static const ::System::Object JLKJGLNPIIE; // 0x0
		// static const ::System::Object PLPBHDDEAPB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDFOELGFBCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDFOELGFBCA*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFOELGFBCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FDFOELGFBCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDFOELGFBCA* Clone()
		{
			return ((::FDFOELGFBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_CLONE_OFFSET))(this);
		}

		::OMPLEKGNLBC* JMDEKPKGMPO()
		{
			return ((::OMPLEKGNLBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_JMDEKPKGMPO_OFFSET))(this);
		}

		::System::Void FIICLILNAAK(::OMPLEKGNLBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPLEKGNLBC*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_FIICLILNAAK_OFFSET))(this, a1);
		}

		::IILBDJMKELG* LMHEGKGBDAH()
		{
			return ((::IILBDJMKELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_LMHEGKGBDAH_OFFSET))(this);
		}

		::System::Void HGFCFJEPHGI(::IILBDJMKELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILBDJMKELG*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_HGFCFJEPHGI_OFFSET))(this, a1);
		}

		::ACAKOLCGDLL* HNMFBCKHPMN()
		{
			return ((::ACAKOLCGDLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_HNMFBCKHPMN_OFFSET))(this);
		}

		::System::Void FCEIAKGDLPK(::ACAKOLCGDLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACAKOLCGDLL*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_FCEIAKGDLPK_OFFSET))(this, a1);
		}

		::BAEDIBFGLDE* NLOBJIJGDJJ()
		{
			return ((::BAEDIBFGLDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_NLOBJIJGDJJ_OFFSET))(this);
		}

		::System::Void AIGILDPGFJG(::BAEDIBFGLDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAEDIBFGLDE*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_AIGILDPGFJG_OFFSET))(this, a1);
		}

		::ICABANFEIHJ* PGGALPPPIIP()
		{
			return ((::ICABANFEIHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_PGGALPPPIIP_OFFSET))(this);
		}

		::System::Void IGIJCGCHJGJ(::ICABANFEIHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICABANFEIHJ*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_IGIJCGCHJGJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDFOELGFBCA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDFOELGFBCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDFOELGFBCA*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDFOELGFBCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDFOELGFBCA*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDFOELGFBCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
