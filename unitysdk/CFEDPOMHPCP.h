#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAPIIEJHLMP.h"
#include "unitysdk/System/Object.h"
class CFEDPOMHPCP;
class LDLCMMOPKNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFEDPOMHPCP_ABBBIBDBKCF_OFFSET UNITYSDK_OFFSET(0x1E09FE70)
#define CFEDPOMHPCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A05D0)
#define CFEDPOMHPCP_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E09FE40)
#define CFEDPOMHPCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A0B40)
#define CFEDPOMHPCP_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1E09FEA0)
#define CFEDPOMHPCP_CKIBCLAENCA_OFFSET UNITYSDK_OFFSET(0x1E09FEE0)
#define CFEDPOMHPCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E09FDA0)
#define CFEDPOMHPCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E09FD10)
#define CFEDPOMHPCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09FD00)
#define CFEDPOMHPCP_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E09FE50)
#define CFEDPOMHPCP_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E09FF20)
#define CFEDPOMHPCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A0090)
#define CFEDPOMHPCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E09FF40)
#define CFEDPOMHPCP_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E09FF30)
#define CFEDPOMHPCP_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E09FF00)
#define CFEDPOMHPCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A01C0)
#define CFEDPOMHPCP_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E09FE80)
#define CFEDPOMHPCP_HACDHJEHEMI_OFFSET UNITYSDK_OFFSET(0x1E09FED0)
#define CFEDPOMHPCP_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1E09FEB0)
#define CFEDPOMHPCP_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E09FE90)
#define CFEDPOMHPCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E09FCC0)
#define CFEDPOMHPCP_JNBHINBDOFD_OFFSET UNITYSDK_OFFSET(0x1E09FEF0)
#define CFEDPOMHPCP_KMPBBCMENFH_OFFSET UNITYSDK_OFFSET(0x1E09FEC0)
#define CFEDPOMHPCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A0A00)
#define CFEDPOMHPCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A0940)
#define CFEDPOMHPCP_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E09FF10)
#define CFEDPOMHPCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E09FCF0)
#define CFEDPOMHPCP_PIMILCAEBBM_OFFSET UNITYSDK_OFFSET(0x1E09FE60)
#define CFEDPOMHPCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A0210)
#define CFEDPOMHPCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A0270)

inline static constexpr unsigned int CFEDPOMHPCP_TypeDefinitionIndex = 28161;

	class CFEDPOMHPCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LDLCMMOPKNG* ODEBGOBLILD; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x20
		::System::UInt32 NBFPOGFBMFE; // 0x24
		::System::UInt32 GJJDLFJNHFJ; // 0x28
		::System::UInt32 NLJHLLLBKLM; // 0x2C
		::System::UInt32 NOMDEJJPCMH; // 0x30
		::System::Boolean LCEECJCHNNO; // 0x34
		::System::Byte _padding0[0x3];
		::IAPIIEJHLMP MLKEFHFKKDK; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CFEDPOMHPCP")->GetStaticField(0x12D80);
		}

		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object OFHFGNBKKKI; // 0x0
		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object LBJEIIOOEOK; // 0x0
		// static const ::System::Object MIGBHKHLKLN; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object GCDEHDAKDHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFEDPOMHPCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFEDPOMHPCP*))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEDPOMHPCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CFEDPOMHPCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFEDPOMHPCP* Clone()
		{
			return ((::CFEDPOMHPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean PIMILCAEBBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_PIMILCAEBBM_OFFSET))(this);
		}

		::System::Void ABBBIBDBKCF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_ABBBIBDBKCF_OFFSET))(this, a1);
		}

		::LDLCMMOPKNG* GPCIDCAANHB()
		{
			return ((::LDLCMMOPKNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::LDLCMMOPKNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDLCMMOPKNG*))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::IAPIIEJHLMP KMPBBCMENFH()
		{
			return ((::IAPIIEJHLMP(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_KMPBBCMENFH_OFFSET))(this);
		}

		::System::Void HACDHJEHEMI(::IAPIIEJHLMP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAPIIEJHLMP))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_HACDHJEHEMI_OFFSET))(this, a1);
		}

		::System::UInt32 CKIBCLAENCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_CKIBCLAENCA_OFFSET))(this);
		}

		::System::Void JNBHINBDOFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_JNBHINBDOFD_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFEDPOMHPCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFEDPOMHPCP*))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFEDPOMHPCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFEDPOMHPCP*))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFEDPOMHPCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
