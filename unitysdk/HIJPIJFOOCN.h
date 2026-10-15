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

#define HIJPIJFOOCN_ABBOEOPBHMD_OFFSET UNITYSDK_OFFSET(0x15CE3000)
#define HIJPIJFOOCN_ABKGELOKAJH_OFFSET UNITYSDK_OFFSET(0x15CE0FC0)
#define HIJPIJFOOCN_ADFBAJLALLK_OFFSET UNITYSDK_OFFSET(0x15CE21F0)
#define HIJPIJFOOCN_AGHPPOMNFHF_OFFSET UNITYSDK_OFFSET(0x15CDF7A0)
#define HIJPIJFOOCN_AINAMMLKOKE_OFFSET UNITYSDK_OFFSET(0x15CE16E0)
#define HIJPIJFOOCN_AKJHBHNAECA_OFFSET UNITYSDK_OFFSET(0x15CE0810)
#define HIJPIJFOOCN_AOFKACNJMAF_OFFSET UNITYSDK_OFFSET(0x15CE1EA0)
#define HIJPIJFOOCN_AOHEPPNONJF_OFFSET UNITYSDK_OFFSET(0x15CE1DD0)
#define HIJPIJFOOCN_APKDMDHAODK_OFFSET UNITYSDK_OFFSET(0x15CE19A0)
#define HIJPIJFOOCN_BBKLOAOGFJG_OFFSET UNITYSDK_OFFSET(0x15CE2770)
#define HIJPIJFOOCN_BHIHNGNAGAL_OFFSET UNITYSDK_OFFSET(0x15CDF6F0)
#define HIJPIJFOOCN_BMGMKGNAAJG_OFFSET UNITYSDK_OFFSET(0x15CE1570)
#define HIJPIJFOOCN_BPIILOKGPFL_OFFSET UNITYSDK_OFFSET(0x15CE0BD0)
#define HIJPIJFOOCN_CLBABOINBPC_OFFSET UNITYSDK_OFFSET(0x15CE0580)
#define HIJPIJFOOCN_CLNPKNPMNHH_OFFSET UNITYSDK_OFFSET(0x15CE1880)
#define HIJPIJFOOCN_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE3080)
#define HIJPIJFOOCN_DENLDDOJLOC_OFFSET UNITYSDK_OFFSET(0x15CE0DF0)
#define HIJPIJFOOCN_DGFPKIJNFNP_OFFSET UNITYSDK_OFFSET(0x15CE1740)
#define HIJPIJFOOCN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CE2CE0)
#define HIJPIJFOOCN_DJMICOHJAID_OFFSET UNITYSDK_OFFSET(0x15CE0600)
#define HIJPIJFOOCN_DKAFAJBFFBI_OFFSET UNITYSDK_OFFSET(0x15CE25D0)
#define HIJPIJFOOCN_DKBBKNENLEN_OFFSET UNITYSDK_OFFSET(0x15CE0750)
#define HIJPIJFOOCN_EIMPDKNOCEG_OFFSET UNITYSDK_OFFSET(0x15CE2F20)
#define HIJPIJFOOCN_ENALFJPIOOC_OFFSET UNITYSDK_OFFSET(0x15CE2050)
#define HIJPIJFOOCN_FDOOPCMAAGH_OFFSET UNITYSDK_OFFSET(0x15CE15D0)
#define HIJPIJFOOCN_FGHJNBPMKDB_OFFSET UNITYSDK_OFFSET(0x15CE0500)
#define HIJPIJFOOCN_GET_QTEPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0x15CE2FE0)
#define HIJPIJFOOCN_GMHMKOJBJKG_OFFSET UNITYSDK_OFFSET(0x15CE17A0)
#define HIJPIJFOOCN_GPKHDIJNCPH_OFFSET UNITYSDK_OFFSET(0x15CE08D0)
#define HIJPIJFOOCN_HCODJDODCCK_OFFSET UNITYSDK_OFFSET(0x15CE29A0)
#define HIJPIJFOOCN_HDONJJPJNOD_OFFSET UNITYSDK_OFFSET(0x15CE1A20)
#define HIJPIJFOOCN_HFGPLENLHEJ_OFFSET UNITYSDK_OFFSET(0x15CDF830)
#define HIJPIJFOOCN_HLDPKFGGOOF_OFFSET UNITYSDK_OFFSET(0x15CE2E50)
#define HIJPIJFOOCN_HMMHGLLEFID_OFFSET UNITYSDK_OFFSET(0x15CE13D0)
#define HIJPIJFOOCN_HOPAGIKMCBH_OFFSET UNITYSDK_OFFSET(0x15CE0870)
#define HIJPIJFOOCN_ILBPAFKGCJM_OFFSET UNITYSDK_OFFSET(0x15CE07B0)
#define HIJPIJFOOCN_JAEHMBANHMB_OFFSET UNITYSDK_OFFSET(0x15CE0B70)
#define HIJPIJFOOCN_JAFHHGOAFJA_OFFSET UNITYSDK_OFFSET(0x15CE1940)
#define HIJPIJFOOCN_JALCDHJAKOI_OFFSET UNITYSDK_OFFSET(0x15CE24B0)
#define HIJPIJFOOCN_JDDCINKPCAD_OFFSET UNITYSDK_OFFSET(0x15CE2810)
#define HIJPIJFOOCN_JGICDJAAGOB_OFFSET UNITYSDK_OFFSET(0x15CE0C50)
#define HIJPIJFOOCN_JLEPAHBCPPA_OFFSET UNITYSDK_OFFSET(0x15CE20B0)
#define HIJPIJFOOCN_JMFFMLCLIMP_OFFSET UNITYSDK_OFFSET(0x15CE2570)
#define HIJPIJFOOCN_JPBIHIPBMKI_OFFSET UNITYSDK_OFFSET(0x15CE28D0)
#define HIJPIJFOOCN_JPJOPANPDBM_OFFSET UNITYSDK_OFFSET(0x15CE0D20)
#define HIJPIJFOOCN_KCFLDLFJLEH_OFFSET UNITYSDK_OFFSET(0x15CE14A0)
#define HIJPIJFOOCN_KINGGMNKALJ_OFFSET UNITYSDK_OFFSET(0x15CE0980)
#define HIJPIJFOOCN_KLKJGKNJCGC_OFFSET UNITYSDK_OFFSET(0x15CE23D0)
#define HIJPIJFOOCN_KONFENELEBC_OFFSET UNITYSDK_OFFSET(0x15CDF910)
#define HIJPIJFOOCN_LCMMHKPIHFF_OFFSET UNITYSDK_OFFSET(0x15CDFCB0)
#define HIJPIJFOOCN_LFNGMHCAKPK_OFFSET UNITYSDK_OFFSET(0x15CE2250)
#define HIJPIJFOOCN_LLKIMKFDJBH_OFFSET UNITYSDK_OFFSET(0x15CE09E0)
#define HIJPIJFOOCN_LOHIJOJGAAD_OFFSET UNITYSDK_OFFSET(0x15CE1160)
#define HIJPIJFOOCN_MCAPLILGDBG_OFFSET UNITYSDK_OFFSET(0x15CE2150)
#define HIJPIJFOOCN_MGNLDHGFEKI_OFFSET UNITYSDK_OFFSET(0x15CE0EF0)
#define HIJPIJFOOCN_MKCAFDOCJPD_OFFSET UNITYSDK_OFFSET(0x15CE2630)
#define HIJPIJFOOCN_MKDBCGIFPKO_OFFSET UNITYSDK_OFFSET(0x15CE22B0)
#define HIJPIJFOOCN_MLIPGNJMCAB_OFFSET UNITYSDK_OFFSET(0x15CE1800)
#define HIJPIJFOOCN_NAAFONLGEKM_OFFSET UNITYSDK_OFFSET(0x15CE1230)
#define HIJPIJFOOCN_NAANNPJGGIH_OFFSET UNITYSDK_OFFSET(0x15CE0430)
#define HIJPIJFOOCN_NAPEKHMJGHF_OFFSET UNITYSDK_OFFSET(0x15CE2510)
#define HIJPIJFOOCN_NCJCKEMMECF_1_OFFSET UNITYSDK_OFFSET(0x15CE2C10)
#define HIJPIJFOOCN_NCJCKEMMECF_OFFSET UNITYSDK_OFFSET(0x15CE2B40)
#define HIJPIJFOOCN_NCOBCPGABPF_OFFSET UNITYSDK_OFFSET(0x15CE1D70)
#define HIJPIJFOOCN_NHEPBNGLBKJ_OFFSET UNITYSDK_OFFSET(0x15CDFD10)
#define HIJPIJFOOCN_NJFNBICAOOB_OFFSET UNITYSDK_OFFSET(0x15CE06F0)
#define HIJPIJFOOCN_NKFKHCCOIHH_OFFSET UNITYSDK_OFFSET(0x15CE1AF0)
#define HIJPIJFOOCN_OJLFDIKHGPF_OFFSET UNITYSDK_OFFSET(0x15CE1300)
#define HIJPIJFOOCN_ONDKDLHCCAG_OFFSET UNITYSDK_OFFSET(0x15CE1090)
#define HIJPIJFOOCN_PBAANMFKAJK_OFFSET UNITYSDK_OFFSET(0x15CE3040)
#define HIJPIJFOOCN_PDNLDKBJFLE_OFFSET UNITYSDK_OFFSET(0x15CE1E40)
#define HIJPIJFOOCN_PGEAGALIFDK_OFFSET UNITYSDK_OFFSET(0x15CE2370)
#define HIJPIJFOOCN_PHKLDDKPJJE_OFFSET UNITYSDK_OFFSET(0x15CE0A80)
#define HIJPIJFOOCN_PKODPELGDIA_OFFSET UNITYSDK_OFFSET(0x15CE0AE0)
#define HIJPIJFOOCN_PLILHCOKJNL_OFFSET UNITYSDK_OFFSET(0x15CE2A70)
#define HIJPIJFOOCN_PMMLKAENKLB_OFFSET UNITYSDK_OFFSET(0x15CDFB20)
#define HIJPIJFOOCN_SET_QTEPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0x15CE2FF0)
#define HIJPIJFOOCN_TICK_OFFSET UNITYSDK_OFFSET(0x15CDF630)

inline static constexpr unsigned int HIJPIJFOOCN_TypeDefinitionIndex = 81870;

	class HIJPIJFOOCN : public ::System::Object
	{
	public:
		::OPALLCKGNPE* GAAFFPGKGKP; // 0x10
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x18
		::JBFJOMBJIKB* DKCGMINOBKD; // 0x20
		::GOJLFKNDHHA* PHAAEGLLEKM; // 0x28
		::JCHNKGMIFEI* OOMHHMNCNDI; // 0x30
		::RPG::Client::B51Racing::B51RacingQTEPerformanceConfig* _QtePerformanceConfig_k__BackingField; // 0x38
		::CFEFOGNGCMH* FCDIHHEDEHB; // 0x40
		::System::UInt32 AJEDPBCHAGG; // 0x48
		::RPG::Client::B51Racing::RoadRashSpeedData IGNHMJONOID; // 0x4C
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
