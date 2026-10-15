#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBJMLKNLEPD;
class GECCJHDOCKH;
class HPHJPOIBGLC;
class JGOFJDOCOMK;
class JIONEELJGCC;
class KJFAEHKEFCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBJMLKNLEPD_AADHAHIOLFJ_OFFSET UNITYSDK_OFFSET(0x1E42D6B0)
#define GBJMLKNLEPD_AHLBHPPFNIL_OFFSET UNITYSDK_OFFSET(0x1E42D6D0)
#define GBJMLKNLEPD_BGPJPHLGIDJ_OFFSET UNITYSDK_OFFSET(0x1E42D6C0)
#define GBJMLKNLEPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42DE30)
#define GBJMLKNLEPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42E2E0)
#define GBJMLKNLEPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42D610)
#define GBJMLKNLEPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42D410)
#define GBJMLKNLEPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42D400)
#define GBJMLKNLEPD_DNJMJGODFAC_OFFSET UNITYSDK_OFFSET(0x1E42D660)
#define GBJMLKNLEPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42D760)
#define GBJMLKNLEPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42D700)
#define GBJMLKNLEPD_FEMPHDLPBEC_OFFSET UNITYSDK_OFFSET(0x1E42D680)
#define GBJMLKNLEPD_FHIJNCMEHHO_OFFSET UNITYSDK_OFFSET(0x1E42D670)
#define GBJMLKNLEPD_FPLKNEKJPBM_OFFSET UNITYSDK_OFFSET(0x1E42D690)
#define GBJMLKNLEPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42DAE0)
#define GBJMLKNLEPD_HJDMIEGFNGG_OFFSET UNITYSDK_OFFSET(0x1E42D6E0)
#define GBJMLKNLEPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42D390)
#define GBJMLKNLEPD_JLHPCNDEKCI_OFFSET UNITYSDK_OFFSET(0x1E42D6A0)
#define GBJMLKNLEPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42E170)
#define GBJMLKNLEPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42DF60)
#define GBJMLKNLEPD_MILCKJGPCKE_OFFSET UNITYSDK_OFFSET(0x1E42D6F0)
#define GBJMLKNLEPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42D3F0)
#define GBJMLKNLEPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42DBD0)
#define GBJMLKNLEPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42DC30)

	class GBJMLKNLEPD : public ::System::Object
	{
	public:
		::GECCJHDOCKH* KJKJJIJHHEB; // 0x10
		::KJFAEHKEFCD* AIBBBMCIFGI; // 0x18
		::JIONEELJGCC* CFCGBNECFNE; // 0x20
		::JGOFJDOCOMK* OONFHBOIFLL; // 0x28
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x30
		::HPHJPOIBGLC* PCDLAHKNPPF; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GBJMLKNLEPD")->GetStaticField(0xD210);
		}

		// static const ::System::Object BFMFEOMPNDB; // 0x0
		// static const ::System::Object LFKEOKDFJCB; // 0x0
		// static const ::System::Object OMEAPOEFNNG; // 0x0
		// static const ::System::Object ONONHEPBPGO; // 0x0
		// static const ::System::Object BNHPDDNHOEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBJMLKNLEPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJMLKNLEPD*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBJMLKNLEPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GBJMLKNLEPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBJMLKNLEPD* Clone()
		{
			return ((::GBJMLKNLEPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_CLONE_OFFSET))(this);
		}

		::HPHJPOIBGLC* DNJMJGODFAC()
		{
			return ((::HPHJPOIBGLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_DNJMJGODFAC_OFFSET))(this);
		}

		::System::Void FHIJNCMEHHO(::HPHJPOIBGLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPHJPOIBGLC*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_FHIJNCMEHHO_OFFSET))(this, a1);
		}

		::JIONEELJGCC* FEMPHDLPBEC()
		{
			return ((::JIONEELJGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_FEMPHDLPBEC_OFFSET))(this);
		}

		::System::Void FPLKNEKJPBM(::JIONEELJGCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIONEELJGCC*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_FPLKNEKJPBM_OFFSET))(this, a1);
		}

		::JGOFJDOCOMK* JLHPCNDEKCI()
		{
			return ((::JGOFJDOCOMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_JLHPCNDEKCI_OFFSET))(this);
		}

		::System::Void AADHAHIOLFJ(::JGOFJDOCOMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGOFJDOCOMK*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_AADHAHIOLFJ_OFFSET))(this, a1);
		}

		::GECCJHDOCKH* BGPJPHLGIDJ()
		{
			return ((::GECCJHDOCKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_BGPJPHLGIDJ_OFFSET))(this);
		}

		::System::Void AHLBHPPFNIL(::GECCJHDOCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GECCJHDOCKH*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_AHLBHPPFNIL_OFFSET))(this, a1);
		}

		::KJFAEHKEFCD* HJDMIEGFNGG()
		{
			return ((::KJFAEHKEFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_HJDMIEGFNGG_OFFSET))(this);
		}

		::System::Void MILCKJGPCKE(::KJFAEHKEFCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFAEHKEFCD*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_MILCKJGPCKE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBJMLKNLEPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBJMLKNLEPD*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBJMLKNLEPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJMLKNLEPD*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBJMLKNLEPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
