#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Network/SessionType.h"
#include "unitysdk/System/Object.h"
class AEGIPHLMNAN;
class BIKNABKBFDH;
class DBINPFBDKFL;
class EPFAOLJKOOK;
class KFPAPGJDDHN;
class KNKPLOGICFO;
class OCOAGBCDNBC;
namespace RPG::Client { class NetPacket; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class Thread; }

#define BIKNABKBFDH_AJBJLFBNJNI_OFFSET UNITYSDK_OFFSET(0x203269A0)
#define BIKNABKBFDH_APCCGOJJKEG_OFFSET UNITYSDK_OFFSET(0x20324760)
#define BIKNABKBFDH_BONIOGOFJBF_OFFSET UNITYSDK_OFFSET(0x20326AC0)
#define BIKNABKBFDH_BPDFDOEMGIL_OFFSET UNITYSDK_OFFSET(0x20325EF0)
#define BIKNABKBFDH_BPJGGDPHFGB_OFFSET UNITYSDK_OFFSET(0x20324BB0)
#define BIKNABKBFDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x20328050)
#define BIKNABKBFDH_CTOR_OFFSET UNITYSDK_OFFSET(0x20323F70)
#define BIKNABKBFDH_DIHMHAHFANF_OFFSET UNITYSDK_OFFSET(0x20325E50)
#define BIKNABKBFDH_DKINDDJHIMJ_OFFSET UNITYSDK_OFFSET(0x203255C0)
#define BIKNABKBFDH_EBJJFDKHGPG_OFFSET UNITYSDK_OFFSET(0x20327B10)
#define BIKNABKBFDH_EFGIKDOOPKN_OFFSET UNITYSDK_OFFSET(0x20325130)
#define BIKNABKBFDH_EFIGLOMGABJ_OFFSET UNITYSDK_OFFSET(0x20327140)
#define BIKNABKBFDH_EGKCLFJFGON_OFFSET UNITYSDK_OFFSET(0x203249B0)
#define BIKNABKBFDH_FIFFCFHCLEA_OFFSET UNITYSDK_OFFSET(0x20327870)
#define BIKNABKBFDH_FLIJCACKOLE_OFFSET UNITYSDK_OFFSET(0x20326B90)
#define BIKNABKBFDH_FLLPALBDPIO_OFFSET UNITYSDK_OFFSET(0x203259F0)
#define BIKNABKBFDH_GET_GATESERVERADDRESS_OFFSET UNITYSDK_OFFSET(0x20327E10)
#define BIKNABKBFDH_GGAANEMGGEN_OFFSET UNITYSDK_OFFSET(0x20324290)
#define BIKNABKBFDH_GIMGHPKNNOM_OFFSET UNITYSDK_OFFSET(0x20324180)
#define BIKNABKBFDH_GOHHNMNGILD_OFFSET UNITYSDK_OFFSET(0x20327CD0)
#define BIKNABKBFDH_HAEPGGAOKPM_OFFSET UNITYSDK_OFFSET(0x20327CC0)
#define BIKNABKBFDH_HCIFKALBGKD_OFFSET UNITYSDK_OFFSET(0x20326890)
#define BIKNABKBFDH_HEMMJKEJKMG_OFFSET UNITYSDK_OFFSET(0x203256D0)
#define BIKNABKBFDH_HIGPLDFLIGJ_OFFSET UNITYSDK_OFFSET(0x20325920)
#define BIKNABKBFDH_HIMFJLKJOIL_OFFSET UNITYSDK_OFFSET(0x20327F30)
#define BIKNABKBFDH_HMPJCMCGJDF_OFFSET UNITYSDK_OFFSET(0x20327160)
#define BIKNABKBFDH_HNKPLABAIKJ_OFFSET UNITYSDK_OFFSET(0x20327180)
#define BIKNABKBFDH_IAJCIGAEOIM_OFFSET UNITYSDK_OFFSET(0x20325040)
#define BIKNABKBFDH_ICBGLJLKGGI_OFFSET UNITYSDK_OFFSET(0x20327E30)
#define BIKNABKBFDH_IDNLJCFMBIB_OFFSET UNITYSDK_OFFSET(0x20326AD0)
#define BIKNABKBFDH_IDOCGNIBDFE_OFFSET UNITYSDK_OFFSET(0x20326000)
#define BIKNABKBFDH_IMFIDIOBMEG_OFFSET UNITYSDK_OFFSET(0x203262B0)
#define BIKNABKBFDH_JDNKBNMEGPG_OFFSET UNITYSDK_OFFSET(0x203253D0)
#define BIKNABKBFDH_JEMLKAHCCHF_OFFSET UNITYSDK_OFFSET(0x20326480)
#define BIKNABKBFDH_JFPJNDNMILO_OFFSET UNITYSDK_OFFSET(0x20328030)
#define BIKNABKBFDH_JINOGIOBNCK_OFFSET UNITYSDK_OFFSET(0x20324270)
#define BIKNABKBFDH_JJEIHJPFAMO_OFFSET UNITYSDK_OFFSET(0x20324090)
#define BIKNABKBFDH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x203263B0)
#define BIKNABKBFDH_JMMCFGGFKKD_OFFSET UNITYSDK_OFFSET(0x20325F00)
#define BIKNABKBFDH_KFIEIGCPIEP_OFFSET UNITYSDK_OFFSET(0x20325480)
#define BIKNABKBFDH_KLNHMAANCFP_OFFSET UNITYSDK_OFFSET(0x20324280)
#define BIKNABKBFDH_KOCDCPDBABF_OFFSET UNITYSDK_OFFSET(0x20324E40)
#define BIKNABKBFDH_LBNAKNBBKKP_OFFSET UNITYSDK_OFFSET(0x20324CB0)
#define BIKNABKBFDH_LIACBHBONED_OFFSET UNITYSDK_OFFSET(0x20327CE0)
#define BIKNABKBFDH_LJGNPLAAGJN_OFFSET UNITYSDK_OFFSET(0x203248E0)
#define BIKNABKBFDH_MAKJPCLNIBL_OFFSET UNITYSDK_OFFSET(0x203272C0)
#define BIKNABKBFDH_MDPICIJMNIF_OFFSET UNITYSDK_OFFSET(0x20324B00)
#define BIKNABKBFDH_NCFDENMMCOM_OFFSET UNITYSDK_OFFSET(0x20324F40)
#define BIKNABKBFDH_NPAADCPKGKC_OFFSET UNITYSDK_OFFSET(0x20324DB0)
#define BIKNABKBFDH_OAGENPKKMPI_OFFSET UNITYSDK_OFFSET(0x20327AC0)
#define BIKNABKBFDH_OCJJJMDDEBP_OFFSET UNITYSDK_OFFSET(0x203261B0)
#define BIKNABKBFDH_OMJLJFDNLIH_OFFSET UNITYSDK_OFFSET(0x203242A0)
#define BIKNABKBFDH_OOECIPDAINJ_OFFSET UNITYSDK_OFFSET(0x20327CB0)
#define BIKNABKBFDH_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x20325AA0)
#define BIKNABKBFDH_SET_GATESERVERADDRESS_OFFSET UNITYSDK_OFFSET(0x20327E20)

inline static constexpr unsigned int BIKNABKBFDH_TypeDefinitionIndex = 45026;

	class BIKNABKBFDH : public ::System::Object
	{
	public:
		::KNKPLOGICFO* OGCNOPJNHMD; // 0x10
		::DBINPFBDKFL* ODGOEMBEIJE; // 0x18
		::System::Action* LONOHDFMAGB; // 0x20
		::System::String* GIDAEFPOGHI; // 0x28
		::System::Threading::Thread* IFDDILAOHKE; // 0x30
		::System::Collections::Generic::List_1<::System::UInt16>* HKJIOCEHJBF; // 0x38
		::EPFAOLJKOOK* _GateServerAddress_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt16>* HGEIDMEBJNK; // 0x48
		::System::Action_1<::RPG::Client::NetPacket*>* DEPCPNODDIC; // 0x50
		::System::Collections::Generic::List_1<::System::UInt16>* ANBCEFKAEFC; // 0x58
		::KNKPLOGICFO* GCLONILFCLO; // 0x60
		::AEGIPHLMNAN* BPJBJAAMIKG; // 0x68
		::KFPAPGJDDHN* JKCDIDPOOKL; // 0x70
		::System::Threading::Thread* NPDDCJGGFAL; // 0x78
		::System::Collections::Concurrent::ConcurrentQueue_1<::RPG::Client::NetPacket*>* BDLAJDOCFNL; // 0x80
		::System::Boolean PDGBHKKKCGB; // 0x88
		::System::Boolean GBIHFGIGLMJ; // 0x89
		::System::Boolean IPHJLLNHKFD; // 0x8A
		static ::RPG::Client::RPGProfilerMarker** StaticGet_GJNDKIKGAPB()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "BIKNABKBFDH")->GetStaticField(0xA700);
		}

		static ::System::Func_2<::System::UInt16, ::System::String*>** StaticGet_DLHACJMNKEM()
		{
			return (::System::Func_2<::System::UInt16, ::System::String*>**)UnitySDK::FromName("", "BIKNABKBFDH")->GetStaticField(0xA708);
		}

		// static const ::System::String* OFJJKKMNOGG; // 0x0
		// static const ::System::String* KNNPDCJAAPI; // 0x0
		::System::Void _ctor(::AEGIPHLMNAN* a1, ::KFPAPGJDDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEGIPHLMNAN*, ::KFPAPGJDDHN*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIKNABKBFDH_CCTOR_OFFSET))();
		}

		::System::Void JJEIHJPFAMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_JJEIHJPFAMO_OFFSET))(this);
		}

		::System::Void JINOGIOBNCK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_JINOGIOBNCK_OFFSET))(this, a1);
		}

		::System::Void KLNHMAANCFP(::DBINPFBDKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBINPFBDKFL*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_KLNHMAANCFP_OFFSET))(this, a1);
		}

		::System::Void GGAANEMGGEN(::System::Action_1<::RPG::Client::NetPacket*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::NetPacket*>*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_GGAANEMGGEN_OFFSET))(this, a1);
		}

		static ::BIKNABKBFDH* OMJLJFDNLIH(::AEGIPHLMNAN* a1, ::OCOAGBCDNBC* a2, ::System::Boolean a3)
		{
			return ((::BIKNABKBFDH*(*)(::AEGIPHLMNAN*, ::OCOAGBCDNBC*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIKNABKBFDH_OMJLJFDNLIH_OFFSET))(a1, a2, a3);
		}

		static ::BIKNABKBFDH* EGKCLFJFGON(::AEGIPHLMNAN* a1, ::OCOAGBCDNBC* a2)
		{
			return ((::BIKNABKBFDH*(*)(::AEGIPHLMNAN*, ::OCOAGBCDNBC*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_EGKCLFJFGON_OFFSET))(a1, a2);
		}

		::System::Void APCCGOJJKEG(::System::UInt16 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + BIKNABKBFDH_APCCGOJJKEG_OFFSET))(this, a1, a2);
		}

		::System::Void LJGNPLAAGJN(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + BIKNABKBFDH_LJGNPLAAGJN_OFFSET))(this, a1);
		}

		::System::Boolean MDPICIJMNIF(::System::UInt16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + BIKNABKBFDH_MDPICIJMNIF_OFFSET))(this, a1);
		}

		::System::Void KOCDCPDBABF(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_KOCDCPDBABF_OFFSET))(this, a1);
		}

		::System::Void NCFDENMMCOM(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_NCFDENMMCOM_OFFSET))(this, a1);
		}

		::System::Single IAJCIGAEOIM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_IAJCIGAEOIM_OFFSET))(this);
		}

		::System::Boolean EFGIKDOOPKN(::EPFAOLJKOOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPFAOLJKOOK*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_EFGIKDOOPKN_OFFSET))(this, a1);
		}

		::System::Void DKINDDJHIMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_DKINDDJHIMJ_OFFSET))(this);
		}

		::System::Void HEMMJKEJKMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_HEMMJKEJKMG_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Void BPDFDOEMGIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_BPDFDOEMGIL_OFFSET))(this);
		}

		::System::Void IDOCGNIBDFE(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_IDOCGNIBDFE_OFFSET))(this, a1);
		}

		::System::Void IMFIDIOBMEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_IMFIDIOBMEG_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Boolean HCIFKALBGKD(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_HCIFKALBGKD_OFFSET))(this, a1);
		}

		::System::Void GIMGHPKNNOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_GIMGHPKNNOM_OFFSET))(this);
		}

		::System::Void OCJJJMDDEBP(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + BIKNABKBFDH_OCJJJMDDEBP_OFFSET))(this, a1);
		}

		::System::Void AJBJLFBNJNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_AJBJLFBNJNI_OFFSET))(this);
		}

		::System::Void BONIOGOFJBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIKNABKBFDH_BONIOGOFJBF_OFFSET))(this, a1);
		}

		::System::Void JEMLKAHCCHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_JEMLKAHCCHF_OFFSET))(this);
		}

		::System::Void FLIJCACKOLE(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_FLIJCACKOLE_OFFSET))(this, a1);
		}

		::System::Boolean EFIGLOMGABJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_EFIGLOMGABJ_OFFSET))(this);
		}

		::System::UInt64 IDNLJCFMBIB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_IDNLJCFMBIB_OFFSET))(this);
		}

		::System::UInt16 HMPJCMCGJDF()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_HMPJCMCGJDF_OFFSET))(this);
		}

		::System::Boolean HNKPLABAIKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_HNKPLABAIKJ_OFFSET))(this);
		}

		::System::Void HIGPLDFLIGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_HIGPLDFLIGJ_OFFSET))(this);
		}

		::System::Void FLLPALBDPIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_FLLPALBDPIO_OFFSET))(this);
		}

		::System::Void FIFFCFHCLEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_FIFFCFHCLEA_OFFSET))(this);
		}

		::System::Void OAGENPKKMPI(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_OAGENPKKMPI_OFFSET))(this, a1);
		}

		::System::Void KFIEIGCPIEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_KFIEIGCPIEP_OFFSET))(this);
		}

		::System::Void JDNKBNMEGPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_JDNKBNMEGPG_OFFSET))(this);
		}

		::System::Void EBJJFDKHGPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_EBJJFDKHGPG_OFFSET))(this);
		}

		::System::Void OOECIPDAINJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_OOECIPDAINJ_OFFSET))(this);
		}

		::System::Void HAEPGGAOKPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_HAEPGGAOKPM_OFFSET))(this);
		}

		::System::Void GOHHNMNGILD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_GOHHNMNGILD_OFFSET))(this);
		}

		::System::Void MAKJPCLNIBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_MAKJPCLNIBL_OFFSET))(this);
		}

		::System::Void JMMCFGGFKKD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIKNABKBFDH_JMMCFGGFKKD_OFFSET))(this, a1);
		}

		::System::Boolean NPAADCPKGKC(::System::UInt16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + BIKNABKBFDH_NPAADCPKGKC_OFFSET))(this, a1);
		}

		::System::Void DIHMHAHFANF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_DIHMHAHFANF_OFFSET))(this);
		}

		static ::System::String* LIACBHBONED(::System::UInt16 a1)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + BIKNABKBFDH_LIACBHBONED_OFFSET))(a1);
		}

		::EPFAOLJKOOK* get_GateServerAddress()
		{
			return ((::EPFAOLJKOOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_GET_GATESERVERADDRESS_OFFSET))(this);
		}

		::System::Void set_GateServerAddress(::EPFAOLJKOOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFAOLJKOOK*))((::PBYTE)hIl2Cpp + BIKNABKBFDH_SET_GATESERVERADDRESS_OFFSET))(this, a1);
		}

		::System::String* ICBGLJLKGGI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_ICBGLJLKGGI_OFFSET))(this);
		}

		::System::Boolean BPJGGDPHFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_BPJGGDPHFGB_OFFSET))(this);
		}

		::System::Boolean LBNAKNBBKKP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_LBNAKNBBKKP_OFFSET))(this);
		}

		::RPG::Network::SessionType HIMFJLKJOIL()
		{
			return ((::RPG::Network::SessionType(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_HIMFJLKJOIL_OFFSET))(this);
		}

		::System::Single JFPJNDNMILO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNABKBFDH_JFPJNDNMILO_OFFSET))(this);
		}

	};
