#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHFGILEEIGA.h"
#include "unitysdk/IHFGILEEIGA_ThreadState.h"
#include "unitysdk/RPG/Client/CDN_IPV6_State.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class EGEJIOKOFOF;
class ELDOKLOMKNL;
class GBIJOMCECNK;
class GMOIFOPPCII;
class HGCEOEHGPPE;
class HGDELEAHIJO;
class HIAMBDKHMIJ;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
class OAPFEGCKDNG;
class OOAPDPLJFOJ;
namespace RPG::Client { template <typename T> class AtomicObject_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class WebException; }

#define KJHGBANLEIC_AAKADMHCPJG_OFFSET UNITYSDK_OFFSET(0x19F0D180)
#define KJHGBANLEIC_AFIKIOFOFJM_OFFSET UNITYSDK_OFFSET(0x19F12140)
#define KJHGBANLEIC_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x19F12630)
#define KJHGBANLEIC_CBAEOLEEFDA_OFFSET UNITYSDK_OFFSET(0x19F0DAC0)
#define KJHGBANLEIC_CFLEOKLLCOJ_OFFSET UNITYSDK_OFFSET(0x19F0FF00)
#define KJHGBANLEIC_CTOR_OFFSET UNITYSDK_OFFSET(0x19F16300)
#define KJHGBANLEIC_EBMHGLJEJOA_OFFSET UNITYSDK_OFFSET(0x19F0CFE0)
#define KJHGBANLEIC_EDAGOOIADCA_OFFSET UNITYSDK_OFFSET(0x19F0F910)
#define KJHGBANLEIC_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0x19F14460)
#define KJHGBANLEIC_EDHIACHJHIO_OFFSET UNITYSDK_OFFSET(0x19F12310)
#define KJHGBANLEIC_ELNBCCKEOLO_OFFSET UNITYSDK_OFFSET(0x19F0DC40)
#define KJHGBANLEIC_EMMGHDLIPOH_OFFSET UNITYSDK_OFFSET(0x19F14760)
#define KJHGBANLEIC_FBELCNOGOON_OFFSET UNITYSDK_OFFSET(0x19F0D510)
#define KJHGBANLEIC_FJNABCOGKII_OFFSET UNITYSDK_OFFSET(0x19F13F30)
#define KJHGBANLEIC_GEFEBGPFICM_OFFSET UNITYSDK_OFFSET(0x19F0D910)
#define KJHGBANLEIC_GEPDONABIOP_OFFSET UNITYSDK_OFFSET(0x19F13CB0)
#define KJHGBANLEIC_GKLEHMHPNCD_OFFSET UNITYSDK_OFFSET(0x19F0E070)
#define KJHGBANLEIC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x19F15570)
#define KJHGBANLEIC_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x19F12640)
#define KJHGBANLEIC_HGFJEIPGGFH_OFFSET UNITYSDK_OFFSET(0x19F10D00)
#define KJHGBANLEIC_ICLOCNNCPFG_OFFSET UNITYSDK_OFFSET(0x19F120D0)
#define KJHGBANLEIC_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x19F14950)
#define KJHGBANLEIC_IGBAKNGDLIE_OFFSET UNITYSDK_OFFSET(0x19F0F650)
#define KJHGBANLEIC_IOEMMBEKHGL_OFFSET UNITYSDK_OFFSET(0x19F0FC60)
#define KJHGBANLEIC_JBNPMAHBNKC_OFFSET UNITYSDK_OFFSET(0x19F0CF70)
#define KJHGBANLEIC_JCMFMKOEEJO_OFFSET UNITYSDK_OFFSET(0x19F0D1D0)
#define KJHGBANLEIC_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x19F12190)
#define KJHGBANLEIC_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0x19F12690)
#define KJHGBANLEIC_JLJENJADFMP_OFFSET UNITYSDK_OFFSET(0x19F12570)
#define KJHGBANLEIC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x19F14C70)
#define KJHGBANLEIC_KHPOIMHLELO_OFFSET UNITYSDK_OFFSET(0x19F11480)
#define KJHGBANLEIC_LHNDEANHJKB_OFFSET UNITYSDK_OFFSET(0x19F13BA0)
#define KJHGBANLEIC_LKAIFDKDHKK_OFFSET UNITYSDK_OFFSET(0x19F11A80)
#define KJHGBANLEIC_MDPOEFFMFOP_1_OFFSET UNITYSDK_OFFSET(0x19F13340)
#define KJHGBANLEIC_MDPOEFFMFOP_OFFSET UNITYSDK_OFFSET(0x19F126E0)
#define KJHGBANLEIC_MGGCEAOKMJF_OFFSET UNITYSDK_OFFSET(0x19F155C0)
#define KJHGBANLEIC_MGIMHLAOAFA_OFFSET UNITYSDK_OFFSET(0x19F152C0)
#define KJHGBANLEIC_MJEIMNFIGDH_OFFSET UNITYSDK_OFFSET(0x19F0D5C0)
#define KJHGBANLEIC_MOBAIEJFCAK_OFFSET UNITYSDK_OFFSET(0x19F100F0)
#define KJHGBANLEIC_NKMPOPFKJBC_OFFSET UNITYSDK_OFFSET(0x19F0E460)
#define KJHGBANLEIC_NMFBCDCGBHC_OFFSET UNITYSDK_OFFSET(0x19F121E0)
#define KJHGBANLEIC_NONLILINDMJ_OFFSET UNITYSDK_OFFSET(0x19F0DED0)
#define KJHGBANLEIC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x19F14000)
#define KJHGBANLEIC_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x19F14B40)
#define KJHGBANLEIC_OJHIEEGHENN_OFFSET UNITYSDK_OFFSET(0x19F0F6C0)
#define KJHGBANLEIC_OKONIMKHKEG_OFFSET UNITYSDK_OFFSET(0x19F12440)
#define KJHGBANLEIC_PEGHLINBPHI_OFFSET UNITYSDK_OFFSET(0x19F10430)
#define KJHGBANLEIC_PHBCJJBLJMA_OFFSET UNITYSDK_OFFSET(0x19F15000)
#define KJHGBANLEIC_PNIBMAJLFFP_OFFSET UNITYSDK_OFFSET(0x19F0D110)
#define KJHGBANLEIC__ONTHREADHANDLE_B__20_0_OFFSET UNITYSDK_OFFSET(0x19F16400)

inline static constexpr unsigned int KJHGBANLEIC_TypeDefinitionIndex = 60868;

	class KJHGBANLEIC : public ::IHFGILEEIGA
	{
	public:
		::ELDOKLOMKNL* BMFABNKOJOH; // 0x30
		::GBIJOMCECNK* EPANEODMDAL; // 0x38
		::Il2CppArray<::OOAPDPLJFOJ*>* OJBFHLFNFNA; // 0x40
		::HGCEOEHGPPE* LKBKDNAMNEG; // 0x48
		::JIAFOPELMJJ* GAIENNLBCMM; // 0x50
		::GMOIFOPPCII* MPADJHINEII; // 0x58
		::EGEJIOKOFOF* IOJNCJMDDOD; // 0x60
		::RPG::Client::AtomicObject_1<::System::String*>* MODHONHPBAH; // 0x68
		::ELDOKLOMKNL* LCKIMAGMGJO; // 0x70
		::System::Collections::Generic::List_1<::EGEJIOKOFOF*>* PJHMGKIGDCD; // 0x78
		::System::Int32 NNKMIKNIELL; // 0x80
		::RPG::Client::CDN_IPV6_State MLJBNLMNFLD; // 0x84
		::System::Int32 MGIKFCCCBOG; // 0x88
		::System::Byte _padding0[0x4];
		::System::Int64 GABLDCICOJJ; // 0x90
		// static const ::System::String* KLMLBIPDIHL; // 0x0
		// static const ::System::String* EDKCICLFJCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_CTOR_OFFSET))(this);
		}

		::System::Int32 JBNPMAHBNKC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_JBNPMAHBNKC_OFFSET))(this);
		}

		::System::Void EBMHGLJEJOA(::RPG::Client::CDN_IPV6_State a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CDN_IPV6_State))((::PBYTE)hIl2Cpp + KJHGBANLEIC_EBMHGLJEJOA_OFFSET))(this, a1);
		}

		::System::Void PNIBMAJLFFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_PNIBMAJLFFP_OFFSET))(this);
		}

		::System::Boolean AAKADMHCPJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_AAKADMHCPJG_OFFSET))(this);
		}

		::System::Void JCMFMKOEEJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_JCMFMKOEEJO_OFFSET))(this);
		}

		::System::Net::HttpWebRequest* FBELCNOGOON(::System::String* a1)
		{
			return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_FBELCNOGOON_OFFSET))(this, a1);
		}

		::System::Net::HttpWebRequest* MJEIMNFIGDH(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KJHGBANLEIC_MJEIMNFIGDH_OFFSET))(this, a1, a2);
		}

		::System::Net::IPEndPoint* GEFEBGPFICM(::System::Uri* a1, ::System::Net::Sockets::AddressFamily a2)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Uri*, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + KJHGBANLEIC_GEFEBGPFICM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CBAEOLEEFDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_CBAEOLEEFDA_OFFSET))(this);
		}

		::System::Void ELNBCCKEOLO(::System::Net::WebException* a1, ::OOAPDPLJFOJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebException*, ::OOAPDPLJFOJ*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_ELNBCCKEOLO_OFFSET))(this, a1, a2);
		}

		::System::Void NONLILINDMJ(::OOAPDPLJFOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOAPDPLJFOJ*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_NONLILINDMJ_OFFSET))(this, a1);
		}

		::System::Void GKLEHMHPNCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_GKLEHMHPNCD_OFFSET))(this, a1);
		}

		::System::Void NKMPOPFKJBC(::OOAPDPLJFOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOAPDPLJFOJ*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_NKMPOPFKJBC_OFFSET))(this, a1);
		}

		::System::String* IOEMMBEKHGL(::EGEJIOKOFOF* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::EGEJIOKOFOF*, ::System::Int32))((::PBYTE)hIl2Cpp + KJHGBANLEIC_IOEMMBEKHGL_OFFSET))(this, a1, a2);
		}

		::System::Boolean CFLEOKLLCOJ(::System::String* a1, ::EGEJIOKOFOF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::EGEJIOKOFOF*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_CFLEOKLLCOJ_OFFSET))(this, a1, a2);
		}

		static ::System::Void HGFJEIPGGFH(::HIAMBDKHMIJ* a1, ::OOAPDPLJFOJ* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::HIAMBDKHMIJ*, ::OOAPDPLJFOJ*, ::System::Int32))((::PBYTE)hIl2Cpp + KJHGBANLEIC_HGFJEIPGGFH_OFFSET))(a1, a2, a3);
		}

		::System::Net::HttpWebResponse* KHPOIMHLELO(::OOAPDPLJFOJ* a1, ::EGEJIOKOFOF* a2, ::System::Int32 a3, ::System::String* a4, ::System::Int64 a5)
		{
			return ((::System::Net::HttpWebResponse*(*)(::PVOID, ::OOAPDPLJFOJ*, ::EGEJIOKOFOF*, ::System::Int32, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + KJHGBANLEIC_KHPOIMHLELO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Net::HttpWebResponse* LKAIFDKDHKK(::OOAPDPLJFOJ* a1, ::EGEJIOKOFOF* a2, ::System::String* a3, ::System::Int32 a4, ::System::Int64 a5)
		{
			return ((::System::Net::HttpWebResponse*(*)(::PVOID, ::OOAPDPLJFOJ*, ::EGEJIOKOFOF*, ::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + KJHGBANLEIC_LKAIFDKDHKK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PEGHLINBPHI(::OOAPDPLJFOJ* a1, ::System::Int32 a2, ::EGEJIOKOFOF* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::OOAPDPLJFOJ*, ::System::Int32, ::EGEJIOKOFOF*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_PEGHLINBPHI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OJHIEEGHENN(::EGEJIOKOFOF* a1, ::HIAMBDKHMIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EGEJIOKOFOF*, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_OJHIEEGHENN_OFFSET))(this, a1, a2);
		}

		::System::Void EDAGOOIADCA(::EGEJIOKOFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGEJIOKOFOF*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_EDAGOOIADCA_OFFSET))(this, a1);
		}

		::System::Void MOBAIEJFCAK(::EGEJIOKOFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGEJIOKOFOF*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_MOBAIEJFCAK_OFFSET))(this, a1);
		}

		::System::String* ICLOCNNCPFG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_ICLOCNNCPFG_OFFSET))(this);
		}

		::System::Int32 AFIKIOFOFJM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_AFIKIOFOFJM_OFFSET))(this);
		}

		::System::Int32 JFNJCIIHEFA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_JFNJCIIHEFA_OFFSET))(this);
		}

		::System::Int32 NMFBCDCGBHC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_NMFBCDCGBHC_OFFSET))(this);
		}

		::System::Int32 EDHIACHJHIO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_EDHIACHJHIO_OFFSET))(this);
		}

		::System::Int32 OKONIMKHKEG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_OKONIMKHKEG_OFFSET))(this);
		}

		::System::Int64 JLJENJADFMP(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + KJHGBANLEIC_JLJENJADFMP_OFFSET))(this, a1);
		}

		::IHFGILEEIGA_ThreadState BGDKFHEBDFJ()
		{
			return ((::IHFGILEEIGA_ThreadState(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::IHFGILEEIGA_ThreadState a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHFGILEEIGA_ThreadState))((::PBYTE)hIl2Cpp + KJHGBANLEIC_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::IHFGILEEIGA_ThreadState JIFPPKNBGMH(::IHFGILEEIGA_ThreadState a1)
		{
			return ((::IHFGILEEIGA_ThreadState(*)(::PVOID, ::IHFGILEEIGA_ThreadState))((::PBYTE)hIl2Cpp + KJHGBANLEIC_JIFPPKNBGMH_OFFSET))(this, a1);
		}

		::System::Boolean IGBAKNGDLIE(::IHFGILEEIGA_ThreadState a1, ::IHFGILEEIGA_ThreadState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHFGILEEIGA_ThreadState, ::IHFGILEEIGA_ThreadState))((::PBYTE)hIl2Cpp + KJHGBANLEIC_IGBAKNGDLIE_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDPOEFFMFOP(::HGDELEAHIJO* a1, ::KGPCBBIOGLB* a2, ::CDKEBLNOEPH* a3, ::OAPFEGCKDNG* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGDELEAHIJO*, ::KGPCBBIOGLB*, ::CDKEBLNOEPH*, ::OAPFEGCKDNG*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_MDPOEFFMFOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MDPOEFFMFOP_1(::System::String* a1, ::KGPCBBIOGLB* a2, ::CDKEBLNOEPH* a3, ::OAPFEGCKDNG* a4, ::RPG::Client::ByteHash16 a5, ::System::Int64 a6, ::System::String* a7, ::System::Boolean a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::KGPCBBIOGLB*, ::CDKEBLNOEPH*, ::OAPFEGCKDNG*, ::RPG::Client::ByteHash16, ::System::Int64, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KJHGBANLEIC_MDPOEFFMFOP_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int64 LHNDEANHJKB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_LHNDEANHJKB_OFFSET))(this);
		}

		::System::Int64 GEPDONABIOP(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJHGBANLEIC_GEPDONABIOP_OFFSET))(this, a1);
		}

		::System::Boolean FJNABCOGKII(::System::String* a1, ::EGEJIOKOFOF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::EGEJIOKOFOF*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_FJNABCOGKII_OFFSET))(this, a1, a2);
		}

		::System::Boolean NPAFMEBNFOB(::HGCEOEHGPPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Boolean EMMGHDLIPOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_EMMGHDLIPOH_OFFSET))(this);
		}

		::System::Boolean IECIAPPANHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PHBCJJBLJMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_PHBCJJBLJMA_OFFSET))(this);
		}

		::System::Void MGIMHLAOAFA(::EGEJIOKOFOF* a1, ::HIAMBDKHMIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EGEJIOKOFOF*, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + KJHGBANLEIC_MGIMHLAOAFA_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::String* MGGCEAOKMJF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC_MGGCEAOKMJF_OFFSET))(this);
		}

		::System::Void _OnThreadHandle_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC__ONTHREADHANDLE_B__20_0_OFFSET))(this);
		}

	};
