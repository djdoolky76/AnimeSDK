#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/RoadRashSpeedData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingFireProjectileTargetSnapshot.h"
class CFEFOGNGCMH;
class GAOBMNLLPEM;
class GHMGGIHEHJE;
class GOJLFKNDHHA;
class JBFJOMBJIKB;
class JCHNKGMIFEI;
class KPDKCEAFBHI;
class NAJMEPONCEL;
class OPALLCKGNPE;
namespace RPG::Client::B51Racing { class B51RacingGameplayHudViewModel; }
namespace RPG::Client::B51Racing { class B51RacingQTEPerformanceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HIJPIJFOOCN_ABBOEOPBHMD_OFFSET UNITYSDK_OFFSET(0x15CEFA60)
#define HIJPIJFOOCN_ABKGELOKAJH_OFFSET UNITYSDK_OFFSET(0x15CED9C0)
#define HIJPIJFOOCN_ADFBAJLALLK_OFFSET UNITYSDK_OFFSET(0x15CEEC30)
#define HIJPIJFOOCN_AGHPPOMNFHF_OFFSET UNITYSDK_OFFSET(0x15CEC1B0)
#define HIJPIJFOOCN_AINAMMLKOKE_OFFSET UNITYSDK_OFFSET(0x15CEE0E0)
#define HIJPIJFOOCN_AKJHBHNAECA_OFFSET UNITYSDK_OFFSET(0x15CED210)
#define HIJPIJFOOCN_AOFKACNJMAF_OFFSET UNITYSDK_OFFSET(0x15CEE8E0)
#define HIJPIJFOOCN_AOHEPPNONJF_OFFSET UNITYSDK_OFFSET(0x15CEE810)
#define HIJPIJFOOCN_APKDMDHAODK_OFFSET UNITYSDK_OFFSET(0x15CEE3A0)
#define HIJPIJFOOCN_BBKLOAOGFJG_OFFSET UNITYSDK_OFFSET(0x15CEF1B0)
#define HIJPIJFOOCN_BHIHNGNAGAL_OFFSET UNITYSDK_OFFSET(0x15CEC100)
#define HIJPIJFOOCN_BMGMKGNAAJG_OFFSET UNITYSDK_OFFSET(0x15CEDF70)
#define HIJPIJFOOCN_BPIILOKGPFL_OFFSET UNITYSDK_OFFSET(0x15CED5D0)
#define HIJPIJFOOCN_CLBABOINBPC_OFFSET UNITYSDK_OFFSET(0x15CECF80)
#define HIJPIJFOOCN_CLNPKNPMNHH_OFFSET UNITYSDK_OFFSET(0x15CEE280)
#define HIJPIJFOOCN_CTOR_OFFSET UNITYSDK_OFFSET(0x15CEFAE0)
#define HIJPIJFOOCN_DENLDDOJLOC_OFFSET UNITYSDK_OFFSET(0x15CED7F0)
#define HIJPIJFOOCN_DGFPKIJNFNP_OFFSET UNITYSDK_OFFSET(0x15CEE140)
#define HIJPIJFOOCN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CEF720)
#define HIJPIJFOOCN_DJMICOHJAID_OFFSET UNITYSDK_OFFSET(0x15CED000)
#define HIJPIJFOOCN_DKAFAJBFFBI_OFFSET UNITYSDK_OFFSET(0x15CEF010)
#define HIJPIJFOOCN_DKBBKNENLEN_OFFSET UNITYSDK_OFFSET(0x15CED150)
#define HIJPIJFOOCN_EIMPDKNOCEG_OFFSET UNITYSDK_OFFSET(0x15CEF980)
#define HIJPIJFOOCN_ENALFJPIOOC_OFFSET UNITYSDK_OFFSET(0x15CEEA90)
#define HIJPIJFOOCN_FDOOPCMAAGH_OFFSET UNITYSDK_OFFSET(0x15CEDFD0)
#define HIJPIJFOOCN_FGHJNBPMKDB_OFFSET UNITYSDK_OFFSET(0x15CECF00)
#define HIJPIJFOOCN_GET_QTEPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0x15CEFA40)
#define HIJPIJFOOCN_GMHMKOJBJKG_OFFSET UNITYSDK_OFFSET(0x15CEE1A0)
#define HIJPIJFOOCN_GPKHDIJNCPH_OFFSET UNITYSDK_OFFSET(0x15CED2D0)
#define HIJPIJFOOCN_HCODJDODCCK_OFFSET UNITYSDK_OFFSET(0x15CEF3E0)
#define HIJPIJFOOCN_HDONJJPJNOD_OFFSET UNITYSDK_OFFSET(0x15CEE430)
#define HIJPIJFOOCN_HFGPLENLHEJ_OFFSET UNITYSDK_OFFSET(0x15CEC240)
#define HIJPIJFOOCN_HLDPKFGGOOF_OFFSET UNITYSDK_OFFSET(0x15CEF8B0)
#define HIJPIJFOOCN_HMMHGLLEFID_OFFSET UNITYSDK_OFFSET(0x15CEDDD0)
#define HIJPIJFOOCN_HOPAGIKMCBH_OFFSET UNITYSDK_OFFSET(0x15CED270)
#define HIJPIJFOOCN_ILBPAFKGCJM_OFFSET UNITYSDK_OFFSET(0x15CED1B0)
#define HIJPIJFOOCN_JAEHMBANHMB_OFFSET UNITYSDK_OFFSET(0x15CED570)
#define HIJPIJFOOCN_JAFHHGOAFJA_OFFSET UNITYSDK_OFFSET(0x15CEE340)
#define HIJPIJFOOCN_JALCDHJAKOI_OFFSET UNITYSDK_OFFSET(0x15CEEEF0)
#define HIJPIJFOOCN_JDDCINKPCAD_OFFSET UNITYSDK_OFFSET(0x15CEF250)
#define HIJPIJFOOCN_JGICDJAAGOB_OFFSET UNITYSDK_OFFSET(0x15CED650)
#define HIJPIJFOOCN_JLEPAHBCPPA_OFFSET UNITYSDK_OFFSET(0x15CEEAF0)
#define HIJPIJFOOCN_JMFFMLCLIMP_OFFSET UNITYSDK_OFFSET(0x15CEEFB0)
#define HIJPIJFOOCN_JPBIHIPBMKI_OFFSET UNITYSDK_OFFSET(0x15CEF310)
#define HIJPIJFOOCN_JPJOPANPDBM_OFFSET UNITYSDK_OFFSET(0x15CED720)
#define HIJPIJFOOCN_KCFLDLFJLEH_OFFSET UNITYSDK_OFFSET(0x15CEDEA0)
#define HIJPIJFOOCN_KINGGMNKALJ_OFFSET UNITYSDK_OFFSET(0x15CED380)
#define HIJPIJFOOCN_KLKJGKNJCGC_OFFSET UNITYSDK_OFFSET(0x15CEEE10)
#define HIJPIJFOOCN_KONFENELEBC_OFFSET UNITYSDK_OFFSET(0x15CEC320)
#define HIJPIJFOOCN_LCMMHKPIHFF_OFFSET UNITYSDK_OFFSET(0x15CEC6B0)
#define HIJPIJFOOCN_LFNGMHCAKPK_OFFSET UNITYSDK_OFFSET(0x15CEEC90)
#define HIJPIJFOOCN_LLKIMKFDJBH_OFFSET UNITYSDK_OFFSET(0x15CED3E0)
#define HIJPIJFOOCN_LOHIJOJGAAD_OFFSET UNITYSDK_OFFSET(0x15CEDB60)
#define HIJPIJFOOCN_MCAPLILGDBG_OFFSET UNITYSDK_OFFSET(0x15CEEB90)
#define HIJPIJFOOCN_MGNLDHGFEKI_OFFSET UNITYSDK_OFFSET(0x15CED8F0)
#define HIJPIJFOOCN_MKCAFDOCJPD_OFFSET UNITYSDK_OFFSET(0x15CEF070)
#define HIJPIJFOOCN_MKDBCGIFPKO_OFFSET UNITYSDK_OFFSET(0x15CEECF0)
#define HIJPIJFOOCN_MLIPGNJMCAB_OFFSET UNITYSDK_OFFSET(0x15CEE200)
#define HIJPIJFOOCN_NAAFONLGEKM_OFFSET UNITYSDK_OFFSET(0x15CEDC30)
#define HIJPIJFOOCN_NAANNPJGGIH_OFFSET UNITYSDK_OFFSET(0x15CECE30)
#define HIJPIJFOOCN_NAPEKHMJGHF_OFFSET UNITYSDK_OFFSET(0x15CEEF50)
#define HIJPIJFOOCN_NCJCKEMMECF_1_OFFSET UNITYSDK_OFFSET(0x15CEF650)
#define HIJPIJFOOCN_NCJCKEMMECF_OFFSET UNITYSDK_OFFSET(0x15CEF580)
#define HIJPIJFOOCN_NCOBCPGABPF_OFFSET UNITYSDK_OFFSET(0x15CEE7B0)
#define HIJPIJFOOCN_NHEPBNGLBKJ_OFFSET UNITYSDK_OFFSET(0x15CEC710)
#define HIJPIJFOOCN_NJFNBICAOOB_OFFSET UNITYSDK_OFFSET(0x15CED0F0)
#define HIJPIJFOOCN_NKFKHCCOIHH_OFFSET UNITYSDK_OFFSET(0x15CEE500)
#define HIJPIJFOOCN_OJLFDIKHGPF_OFFSET UNITYSDK_OFFSET(0x15CEDD00)
#define HIJPIJFOOCN_ONDKDLHCCAG_OFFSET UNITYSDK_OFFSET(0x15CEDA90)
#define HIJPIJFOOCN_PBAANMFKAJK_OFFSET UNITYSDK_OFFSET(0x15CEFAA0)
#define HIJPIJFOOCN_PDNLDKBJFLE_OFFSET UNITYSDK_OFFSET(0x15CEE880)
#define HIJPIJFOOCN_PGEAGALIFDK_OFFSET UNITYSDK_OFFSET(0x15CEEDB0)
#define HIJPIJFOOCN_PHKLDDKPJJE_OFFSET UNITYSDK_OFFSET(0x15CED480)
#define HIJPIJFOOCN_PKODPELGDIA_OFFSET UNITYSDK_OFFSET(0x15CED4E0)
#define HIJPIJFOOCN_PLILHCOKJNL_OFFSET UNITYSDK_OFFSET(0x15CEF4B0)
#define HIJPIJFOOCN_PMMLKAENKLB_OFFSET UNITYSDK_OFFSET(0x15CEC530)
#define HIJPIJFOOCN_SET_QTEPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0x15CEFA50)
#define HIJPIJFOOCN_TICK_OFFSET UNITYSDK_OFFSET(0x15CEC040)

inline static constexpr unsigned int HIJPIJFOOCN_TypeDefinitionIndex = 81871;

	class HIJPIJFOOCN : public ::System::Object
	{
	public:
		::GOJLFKNDHHA* PHAAEGLLEKM; // 0x10
		::CFEFOGNGCMH* FCDIHHEDEHB; // 0x18
		::OPALLCKGNPE* GAAFFPGKGKP; // 0x20
		::RPG::Client::B51Racing::B51RacingQTEPerformanceConfig* _QtePerformanceConfig_k__BackingField; // 0x28
		::JCHNKGMIFEI* OOMHHMNCNDI; // 0x30
		::JBFJOMBJIKB* DKCGMINOBKD; // 0x38
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x40
		::RPG::Client::B51Racing::RoadRashSpeedData IGNHMJONOID; // 0x48
		::System::UInt32 AJEDPBCHAGG; // 0x50
		// static const ::System::String* OPAMJNLMNON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_TICK_OFFSET))(this, a1);
		}

		::System::Single LCMMHKPIHFF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_LCMMHKPIHFF_OFFSET))(this);
		}

		::System::Void NHEPBNGLBKJ(::RPG::Client::B51Racing::B51RacingGameplayHudViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayHudViewModel*))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NHEPBNGLBKJ_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::RoadRashSpeedData NAANNPJGGIH()
		{
			return ((::RPG::Client::B51Racing::RoadRashSpeedData(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NAANNPJGGIH_OFFSET))(this);
		}

		::System::Boolean JAEHMBANHMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JAEHMBANHMB_OFFSET))(this);
		}

		::System::Boolean BPIILOKGPFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_BPIILOKGPFL_OFFSET))(this);
		}

		::NAJMEPONCEL* JGICDJAAGOB()
		{
			return ((::NAJMEPONCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JGICDJAAGOB_OFFSET))(this);
		}

		::System::Boolean JPJOPANPDBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JPJOPANPDBM_OFFSET))(this);
		}

		::System::Boolean DENLDDOJLOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_DENLDDOJLOC_OFFSET))(this);
		}

		::System::Boolean MGNLDHGFEKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_MGNLDHGFEKI_OFFSET))(this);
		}

		::System::Boolean ABKGELOKAJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_ABKGELOKAJH_OFFSET))(this);
		}

		::System::Boolean ONDKDLHCCAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_ONDKDLHCCAG_OFFSET))(this);
		}

		::System::Boolean LOHIJOJGAAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_LOHIJOJGAAD_OFFSET))(this);
		}

		::System::Boolean NAAFONLGEKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NAAFONLGEKM_OFFSET))(this);
		}

		::System::Boolean OJLFDIKHGPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_OJLFDIKHGPF_OFFSET))(this);
		}

		::System::Boolean HMMHGLLEFID(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_HMMHGLLEFID_OFFSET))(this, a1);
		}

		::System::Boolean KCFLDLFJLEH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_KCFLDLFJLEH_OFFSET))(this, a1);
		}

		::System::UInt32 BMGMKGNAAJG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_BMGMKGNAAJG_OFFSET))(this);
		}

		::System::Single AINAMMLKOKE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_AINAMMLKOKE_OFFSET))(this);
		}

		::System::UInt32 DGFPKIJNFNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_DGFPKIJNFNP_OFFSET))(this);
		}

		::System::Int32 KINGGMNKALJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_KINGGMNKALJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GMHMKOJBJKG()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_GMHMKOJBJKG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* MLIPGNJMCAB(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Single a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_MLIPGNJMCAB_OFFSET))(this, a1, a2);
		}

		::System::Int32 LLKIMKFDJBH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_LLKIMKFDJBH_OFFSET))(this);
		}

		::System::Int32 PHKLDDKPJJE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_PHKLDDKPJJE_OFFSET))(this);
		}

		::System::Boolean CLBABOINBPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_CLBABOINBPC_OFFSET))(this);
		}

		::System::Single FGHJNBPMKDB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_FGHJNBPMKDB_OFFSET))(this);
		}

		::System::Boolean CLNPKNPMNHH(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_CLNPKNPMNHH_OFFSET))(this, a1, a2);
		}

		::System::Void JAFHHGOAFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JAFHHGOAFJA_OFFSET))(this);
		}

		::System::Void APKDMDHAODK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_APKDMDHAODK_OFFSET))(this);
		}

		::UnityEngine::Transform* HDONJJPJNOD()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_HDONJJPJNOD_OFFSET))(this);
		}

		::System::Single NKFKHCCOIHH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NKFKHCCOIHH_OFFSET))(this);
		}

		::System::Single NJFNBICAOOB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NJFNBICAOOB_OFFSET))(this);
		}

		::System::Single NCOBCPGABPF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NCOBCPGABPF_OFFSET))(this);
		}

		::System::Boolean AOHEPPNONJF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_AOHEPPNONJF_OFFSET))(this, a1, a2);
		}

		::System::UInt32 PDNLDKBJFLE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_PDNLDKBJFLE_OFFSET))(this);
		}

		::System::Int32 DKBBKNENLEN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_DKBBKNENLEN_OFFSET))(this);
		}

		::System::Int32 ILBPAFKGCJM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_ILBPAFKGCJM_OFFSET))(this);
		}

		::System::Single AKJHBHNAECA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_AKJHBHNAECA_OFFSET))(this);
		}

		::System::Boolean ENALFJPIOOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_ENALFJPIOOC_OFFSET))(this);
		}

		::System::Boolean JLEPAHBCPPA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JLEPAHBCPPA_OFFSET))(this);
		}

		::System::Boolean MCAPLILGDBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_MCAPLILGDBG_OFFSET))(this);
		}

		::System::Single ADFBAJLALLK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_ADFBAJLALLK_OFFSET))(this);
		}

		::System::Single LFNGMHCAKPK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_LFNGMHCAKPK_OFFSET))(this);
		}

		::System::Single HOPAGIKMCBH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_HOPAGIKMCBH_OFFSET))(this);
		}

		::System::Boolean GPKHDIJNCPH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_GPKHDIJNCPH_OFFSET))(this, a1, a2);
		}

		::System::Boolean MKDBCGIFPKO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_MKDBCGIFPKO_OFFSET))(this, a1, a2);
		}

		::GAOBMNLLPEM* PGEAGALIFDK()
		{
			return ((::GAOBMNLLPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_PGEAGALIFDK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GAOBMNLLPEM*>* JALCDHJAKOI()
		{
			return ((::System::Collections::Generic::List_1<::GAOBMNLLPEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JALCDHJAKOI_OFFSET))(this);
		}

		::System::String* NAPEKHMJGHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NAPEKHMJGHF_OFFSET))(this);
		}

		::System::Boolean JMFFMLCLIMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JMFFMLCLIMP_OFFSET))(this);
		}

		::System::Boolean DKAFAJBFFBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_DKAFAJBFFBI_OFFSET))(this);
		}

		::System::Boolean MKCAFDOCJPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_MKCAFDOCJPD_OFFSET))(this);
		}

		::System::Boolean BBKLOAOGFJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_BBKLOAOGFJG_OFFSET))(this);
		}

		::System::Boolean JDDCINKPCAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JDDCINKPCAD_OFFSET))(this);
		}

		::System::Void JPBIHIPBMKI(::System::Collections::Generic::List_1<::RPG::Client::B51Racing::B51RacingFireProjectileTargetSnapshot>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::B51Racing::B51RacingFireProjectileTargetSnapshot>*))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_JPBIHIPBMKI_OFFSET))(this, a1);
		}

		::System::Boolean HCODJDODCCK(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_HCODJDODCCK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* PLILHCOKJNL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_PLILHCOKJNL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::B51Racing::B51RacingFireProjectileTargetSnapshot>* NCJCKEMMECF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::B51Racing::B51RacingFireProjectileTargetSnapshot>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NCJCKEMMECF_OFFSET))(this);
		}

		::System::Void NCJCKEMMECF_1(::System::Collections::Generic::List_1<::RPG::Client::B51Racing::B51RacingFireProjectileTargetSnapshot>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::B51Racing::B51RacingFireProjectileTargetSnapshot>*))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_NCJCKEMMECF_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_DISPOSE_OFFSET))(this);
		}

		::System::Void AGHPPOMNFHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_AGHPPOMNFHF_OFFSET))(this);
		}

		::System::Void KONFENELEBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_KONFENELEBC_OFFSET))(this);
		}

		::System::Void PMMLKAENKLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_PMMLKAENKLB_OFFSET))(this);
		}

		::System::Void DJMICOHJAID(::RPG::Client::B51Racing::B51RacingGameplayHudViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayHudViewModel*))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_DJMICOHJAID_OFFSET))(this, a1);
		}

		::System::UInt32 AOFKACNJMAF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_AOFKACNJMAF_OFFSET))(this);
		}

		::GHMGGIHEHJE* HLDPKFGGOOF()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_HLDPKFGGOOF_OFFSET))(this);
		}

		::CFEFOGNGCMH* BHIHNGNAGAL()
		{
			return ((::CFEFOGNGCMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_BHIHNGNAGAL_OFFSET))(this);
		}

		::System::Boolean EIMPDKNOCEG(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_EIMPDKNOCEG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingQTEPerformanceConfig* get_QtePerformanceConfig()
		{
			return ((::RPG::Client::B51Racing::B51RacingQTEPerformanceConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_GET_QTEPERFORMANCECONFIG_OFFSET))(this);
		}

		::System::Void set_QtePerformanceConfig(::RPG::Client::B51Racing::B51RacingQTEPerformanceConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingQTEPerformanceConfig*))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_SET_QTEPERFORMANCECONFIG_OFFSET))(this, a1);
		}

		::KPDKCEAFBHI* ABBOEOPBHMD()
		{
			return ((::KPDKCEAFBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_ABBOEOPBHMD_OFFSET))(this);
		}

		::KPDKCEAFBHI* PBAANMFKAJK()
		{
			return ((::KPDKCEAFBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_PBAANMFKAJK_OFFSET))(this);
		}

		::OPALLCKGNPE* PKODPELGDIA()
		{
			return ((::OPALLCKGNPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_PKODPELGDIA_OFFSET))(this);
		}

		::JCHNKGMIFEI* FDOOPCMAAGH()
		{
			return ((::JCHNKGMIFEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_FDOOPCMAAGH_OFFSET))(this);
		}

		::GOJLFKNDHHA* HFGPLENLHEJ()
		{
			return ((::GOJLFKNDHHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_HFGPLENLHEJ_OFFSET))(this);
		}

		::JBFJOMBJIKB* KLKJGKNJCGC()
		{
			return ((::JBFJOMBJIKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJPIJFOOCN_KLKJGKNJCGC_OFFSET))(this);
		}

	};
