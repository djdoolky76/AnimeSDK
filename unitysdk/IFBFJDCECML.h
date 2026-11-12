#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceBubbleState.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceAnimState.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/CIAENAKKAAP.h"
#include "unitysdk/CNLEEFGEKFB.h"
#include "unitysdk/IDJCEFPNPMM.h"
#include "unitysdk/RPG/MVector3.h"
class BBLFDCMINFP;
class BPDKJKJGECM;
class CANFFHPKHGB;
class CKEIGJNHMDN;
class DHNPDHKLIAN;
class ENDBKLKOBFP;
class FBLEGIOPMKG;
class FDHFGKLGEBC;
class FLJEGMGCIOG;
class GEMFBMOKLDM;
class ICNLEDIBDIE;
class IFBOFKLBBKO;
class IPFEAOONHGI;
class JBAENELAKOL;
class JJGBKDLGDFN;
class KAJJEJMHCGD;
class KOPCPKCPPIF;
class MLNKKMBGFNO;
class OAJLLHGOPMH;
class OIKDLNCBPFM;
class OLEDBOBEPKP;
class PEDHHCKCEMN;
class PGMPJKHCHPH;
class POPHFMPBKJL;
namespace RPG::GameCore { class CakeRaceCatAIConfig; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFBFJDCECML_AHNOPHIBEBL_OFFSET UNITYSDK_OFFSET(0x1D817A10)
#define IFBFJDCECML_AKFCAFIHLFE_OFFSET UNITYSDK_OFFSET(0x1D8175F0)
#define IFBFJDCECML_ANJNJGMBHGM_OFFSET UNITYSDK_OFFSET(0x1D814940)
#define IFBFJDCECML_ANPFJJHMLIG_OFFSET UNITYSDK_OFFSET(0x1D8157D0)
#define IFBFJDCECML_APIDCHNFPBF_OFFSET UNITYSDK_OFFSET(0x1D81A200)
#define IFBFJDCECML_BCDPJKLJLLG_OFFSET UNITYSDK_OFFSET(0x1D817A60)
#define IFBFJDCECML_BCEDPIAIFOA_OFFSET UNITYSDK_OFFSET(0x1D8195B0)
#define IFBFJDCECML_BCJIKOLCHLI_OFFSET UNITYSDK_OFFSET(0x1D8159F0)
#define IFBFJDCECML_BHBOOBBMIBM_OFFSET UNITYSDK_OFFSET(0x1D818180)
#define IFBFJDCECML_BHILFKPAKFK_OFFSET UNITYSDK_OFFSET(0x1D817110)
#define IFBFJDCECML_BNGKAIKPNDN_OFFSET UNITYSDK_OFFSET(0x1D819C50)
#define IFBFJDCECML_CBFKFHJJPJB_OFFSET UNITYSDK_OFFSET(0x1D7E8500)
#define IFBFJDCECML_CCBKPJIJGFH_OFFSET UNITYSDK_OFFSET(0x1D818D30)
#define IFBFJDCECML_CECCDFLJCDK_OFFSET UNITYSDK_OFFSET(0x1D817B10)
#define IFBFJDCECML_CFCLAMGAPDA_OFFSET UNITYSDK_OFFSET(0x1D817830)
#define IFBFJDCECML_CGAICDPBEJE_OFFSET UNITYSDK_OFFSET(0x1D819DC0)
#define IFBFJDCECML_CJLKLHCJHDL_OFFSET UNITYSDK_OFFSET(0x1D8154A0)
#define IFBFJDCECML_CNINMMLHJOB_OFFSET UNITYSDK_OFFSET(0x1D819550)
#define IFBFJDCECML_CNJKGEODPMD_OFFSET UNITYSDK_OFFSET(0x1D819070)
#define IFBFJDCECML_CPDGPBMJEFO_OFFSET UNITYSDK_OFFSET(0x1D819CB0)
#define IFBFJDCECML_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81AB00)
#define IFBFJDCECML_DHIOEPHDABP_OFFSET UNITYSDK_OFFSET(0x1D816320)
#define IFBFJDCECML_DHKFMPFJMML_OFFSET UNITYSDK_OFFSET(0x1D7E9CC0)
#define IFBFJDCECML_DHNIHJJCKJJ_OFFSET UNITYSDK_OFFSET(0x1D81A490)
#define IFBFJDCECML_DJLLKPGCOLK_OFFSET UNITYSDK_OFFSET(0x1D7E85B0)
#define IFBFJDCECML_DLBEJONCODM_OFFSET UNITYSDK_OFFSET(0x1D816950)
#define IFBFJDCECML_DMEDLCMMIJA_OFFSET UNITYSDK_OFFSET(0x1D816D70)
#define IFBFJDCECML_EAKAIEHHNIN_OFFSET UNITYSDK_OFFSET(0x1D816A50)
#define IFBFJDCECML_EBPHKJOKNML_OFFSET UNITYSDK_OFFSET(0x1D8173B0)
#define IFBFJDCECML_EDLKEPLFJJH_OFFSET UNITYSDK_OFFSET(0x1D819740)
#define IFBFJDCECML_EELBJCCGAPG_OFFSET UNITYSDK_OFFSET(0x1D8198D0)
#define IFBFJDCECML_EJJNAPDBIOD_OFFSET UNITYSDK_OFFSET(0x1D818D80)
#define IFBFJDCECML_EJKGEDPKJMB_OFFSET UNITYSDK_OFFSET(0x1D81A820)
#define IFBFJDCECML_EKGGLMJMBPP_OFFSET UNITYSDK_OFFSET(0x1D81A770)
#define IFBFJDCECML_ELJLGMMFHJO_OFFSET UNITYSDK_OFFSET(0x1D819E70)
#define IFBFJDCECML_EMAGLAOLPGN_OFFSET UNITYSDK_OFFSET(0x1D817F10)
#define IFBFJDCECML_EOIMBBFNKPP_OFFSET UNITYSDK_OFFSET(0x1D819920)
#define IFBFJDCECML_FAAPKMJABLF_OFFSET UNITYSDK_OFFSET(0x1D8177D0)
#define IFBFJDCECML_FBLNHEOFAHM_OFFSET UNITYSDK_OFFSET(0x1D815F30)
#define IFBFJDCECML_FCCAABINBPI_OFFSET UNITYSDK_OFFSET(0x1D819450)
#define IFBFJDCECML_FCNEADIOKLG_OFFSET UNITYSDK_OFFSET(0x1D816760)
#define IFBFJDCECML_FDNOODPLNJN_OFFSET UNITYSDK_OFFSET(0x1D817C90)
#define IFBFJDCECML_FEIIOBNFKPE_OFFSET UNITYSDK_OFFSET(0x1D817B70)
#define IFBFJDCECML_FFAFFPOFCOD_OFFSET UNITYSDK_OFFSET(0x1D8160D0)
#define IFBFJDCECML_FJMGGGLICMI_OFFSET UNITYSDK_OFFSET(0x1D81A150)
#define IFBFJDCECML_FMBGAKEIDNM_OFFSET UNITYSDK_OFFSET(0x1D816DD0)
#define IFBFJDCECML_FMHBDAOIDED_OFFSET UNITYSDK_OFFSET(0x1D8169A0)
#define IFBFJDCECML_FODBMMCKAEN_OFFSET UNITYSDK_OFFSET(0x1D816CC0)
#define IFBFJDCECML_FPDOLHAAOAP_OFFSET UNITYSDK_OFFSET(0x1D817400)
#define IFBFJDCECML_GFAKPCBFIPB_OFFSET UNITYSDK_OFFSET(0x1D819C00)
#define IFBFJDCECML_GFIEDKHFKLH_OFFSET UNITYSDK_OFFSET(0x1D817260)
#define IFBFJDCECML_GGHKAFNDDMC_OFFSET UNITYSDK_OFFSET(0x1D817EB0)
#define IFBFJDCECML_GHMIFBNLNCF_OFFSET UNITYSDK_OFFSET(0x1D8191D0)
#define IFBFJDCECML_GJHGECDHPBA_OFFSET UNITYSDK_OFFSET(0x1D819ED0)
#define IFBFJDCECML_GLOEAANACKC_OFFSET UNITYSDK_OFFSET(0x1D816510)
#define IFBFJDCECML_HBFMLNPBFHD_OFFSET UNITYSDK_OFFSET(0x1D819310)
#define IFBFJDCECML_HFKCDLKCIDB_OFFSET UNITYSDK_OFFSET(0x1D816410)
#define IFBFJDCECML_HHODBJKLPPE_OFFSET UNITYSDK_OFFSET(0x1D81A990)
#define IFBFJDCECML_HJEJLOOHAMB_OFFSET UNITYSDK_OFFSET(0x1D819A40)
#define IFBFJDCECML_HKFMJNBGJJN_OFFSET UNITYSDK_OFFSET(0x1D817510)
#define IFBFJDCECML_HMIDFNDMBHF_OFFSET UNITYSDK_OFFSET(0x1D817920)
#define IFBFJDCECML_ICCLLKEKJAI_OFFSET UNITYSDK_OFFSET(0x1D7E8110)
#define IFBFJDCECML_ICFIJBKPCLB_OFFSET UNITYSDK_OFFSET(0x1D8190C0)
#define IFBFJDCECML_IHKGGIGNDNH_OFFSET UNITYSDK_OFFSET(0x1D81A260)
#define IFBFJDCECML_IJPMNELJFMK_OFFSET UNITYSDK_OFFSET(0x1D8170B0)
#define IFBFJDCECML_IMDEGAKJDCL_OFFSET UNITYSDK_OFFSET(0x1D818A70)
#define IFBFJDCECML_JAHHEFIBNCP_OFFSET UNITYSDK_OFFSET(0x1D8176D0)
#define IFBFJDCECML_JBDMAPFHOKC_OFFSET UNITYSDK_OFFSET(0x1D815D30)
#define IFBFJDCECML_JBOHAAPLNBH_OFFSET UNITYSDK_OFFSET(0x1D815C80)
#define IFBFJDCECML_JDKNCHCDILO_OFFSET UNITYSDK_OFFSET(0x1D8161D0)
#define IFBFJDCECML_JEELDBPDANA_OFFSET UNITYSDK_OFFSET(0x1D8194A0)
#define IFBFJDCECML_JFPNDGAKHGH_OFFSET UNITYSDK_OFFSET(0x1D817E00)
#define IFBFJDCECML_JGBCFENHOKC_OFFSET UNITYSDK_OFFSET(0x1D81A8E0)
#define IFBFJDCECML_JJEBFNCKJMH_OFFSET UNITYSDK_OFFSET(0x1D816C70)
#define IFBFJDCECML_JJFLDOCFJEB_OFFSET UNITYSDK_OFFSET(0x1D81A090)
#define IFBFJDCECML_JJIDDMGBEFA_OFFSET UNITYSDK_OFFSET(0x1D81A0F0)
#define IFBFJDCECML_JKHHGEGICFK_OFFSET UNITYSDK_OFFSET(0x1D819170)
#define IFBFJDCECML_JNCLKLPFHCA_OFFSET UNITYSDK_OFFSET(0x1D8158F0)
#define IFBFJDCECML_JNJDNMKHOKB_OFFSET UNITYSDK_OFFSET(0x1D8153F0)
#define IFBFJDCECML_JOLAKHJELPG_OFFSET UNITYSDK_OFFSET(0x1D81A540)
#define IFBFJDCECML_KAGINNPKNBD_OFFSET UNITYSDK_OFFSET(0x1D819D60)
#define IFBFJDCECML_KBJMHPDNHDN_OFFSET UNITYSDK_OFFSET(0x1D81A310)
#define IFBFJDCECML_KCJHAOEEFID_OFFSET UNITYSDK_OFFSET(0x1D815500)
#define IFBFJDCECML_KDNBHFNECHN_OFFSET UNITYSDK_OFFSET(0x1D818750)
#define IFBFJDCECML_KEDCHDMNPEB_OFFSET UNITYSDK_OFFSET(0x1D81A370)
#define IFBFJDCECML_KIMHJBBKEIA_OFFSET UNITYSDK_OFFSET(0x1D81A5A0)
#define IFBFJDCECML_KJICGILHCIE_OFFSET UNITYSDK_OFFSET(0x1D81A710)
#define IFBFJDCECML_KLFICMLOPFP_OFFSET UNITYSDK_OFFSET(0x1D817DB0)
#define IFBFJDCECML_KLOKABEPKLL_OFFSET UNITYSDK_OFFSET(0x1D8186A0)
#define IFBFJDCECML_KLOMNHLKBHF_OFFSET UNITYSDK_OFFSET(0x1D816B90)
#define IFBFJDCECML_KPOMPJKIABD_OFFSET UNITYSDK_OFFSET(0x1D815A50)
#define IFBFJDCECML_LGJBHKPACNH_OFFSET UNITYSDK_OFFSET(0x1D816230)
#define IFBFJDCECML_LGNBLEGCCNF_OFFSET UNITYSDK_OFFSET(0x1D818E90)
#define IFBFJDCECML_LKKPLKINALG_OFFSET UNITYSDK_OFFSET(0x1D816FB0)
#define IFBFJDCECML_LLABPCOHEAC_OFFSET UNITYSDK_OFFSET(0x1D818650)
#define IFBFJDCECML_LNHFBFEGHMN_OFFSET UNITYSDK_OFFSET(0x1D819B20)
#define IFBFJDCECML_LOMJJNCMJMK_OFFSET UNITYSDK_OFFSET(0x1D81A880)
#define IFBFJDCECML_LOOGPJDLFDF_OFFSET UNITYSDK_OFFSET(0x1D81A650)
#define IFBFJDCECML_MACNKBNNGJP_OFFSET UNITYSDK_OFFSET(0x1D81A420)
#define IFBFJDCECML_MAHHEEIDNJP_OFFSET UNITYSDK_OFFSET(0x1D81A6B0)
#define IFBFJDCECML_MCGDMLNJDIB_OFFSET UNITYSDK_OFFSET(0x1D816120)
#define IFBFJDCECML_MDAALJICLKI_OFFSET UNITYSDK_OFFSET(0x1D8187B0)
#define IFBFJDCECML_MDJGIJJIBPN_OFFSET UNITYSDK_OFFSET(0x1D815D90)
#define IFBFJDCECML_MENOFPHKCNC_OFFSET UNITYSDK_OFFSET(0x1D816EC0)
#define IFBFJDCECML_MFEIHOKGBHK_OFFSET UNITYSDK_OFFSET(0x1D817000)
#define IFBFJDCECML_MJEBCONHELC_OFFSET UNITYSDK_OFFSET(0x1D818130)
#define IFBFJDCECML_MLBDBGHGPKK_OFFSET UNITYSDK_OFFSET(0x1D817720)
#define IFBFJDCECML_MOBBFEJHBGC_OFFSET UNITYSDK_OFFSET(0x1D815940)
#define IFBFJDCECML_MOGJGDNCCIP_OFFSET UNITYSDK_OFFSET(0x1D818F80)
#define IFBFJDCECML_MPFHAHKJGAH_OFFSET UNITYSDK_OFFSET(0x1D7E8060)
#define IFBFJDCECML_NBKEIKMILGM_OFFSET UNITYSDK_OFFSET(0x1D818020)
#define IFBFJDCECML_NDGFLFPMEDK_OFFSET UNITYSDK_OFFSET(0x1D815B40)
#define IFBFJDCECML_NFAGACIGBLA_OFFSET UNITYSDK_OFFSET(0x1D816AB0)
#define IFBFJDCECML_NJKLKOEEEFP_OFFSET UNITYSDK_OFFSET(0x1D818230)
#define IFBFJDCECML_NMHDPJHFMNC_OFFSET UNITYSDK_OFFSET(0x1D81A9F0)
#define IFBFJDCECML_NPDNEEPHEKN_OFFSET UNITYSDK_OFFSET(0x1D816460)
#define IFBFJDCECML_OFCHBCNPEJK_OFFSET UNITYSDK_OFFSET(0x1D816570)
#define IFBFJDCECML_OHCMDGILICO_OFFSET UNITYSDK_OFFSET(0x1D819F80)
#define IFBFJDCECML_OJBGCKNPFCK_OFFSET UNITYSDK_OFFSET(0x1D818290)
#define IFBFJDCECML_OJCKIBJEMJP_OFFSET UNITYSDK_OFFSET(0x1D818470)
#define IFBFJDCECML_OLBMDCLCCFF_OFFSET UNITYSDK_OFFSET(0x1D818E30)
#define IFBFJDCECML_OMOMDOGFIIC_OFFSET UNITYSDK_OFFSET(0x1D7F5740)
#define IFBFJDCECML_PALCLHHCPFI_OFFSET UNITYSDK_OFFSET(0x1D8174B0)
#define IFBFJDCECML_PBBNLMJBLAK_OFFSET UNITYSDK_OFFSET(0x1D819FE0)
#define IFBFJDCECML_PFDPDJIBELB_OFFSET UNITYSDK_OFFSET(0x1D81AAA0)
#define IFBFJDCECML_PMEOBHLMABH_OFFSET UNITYSDK_OFFSET(0x1D815C30)
#define IFBFJDCECML_PNNECJKJBOA_OFFSET UNITYSDK_OFFSET(0x1D8199D0)

inline static constexpr unsigned int IFBFJDCECML_TypeDefinitionIndex = 37943;

	class IFBFJDCECML : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CTOR_OFFSET))(this);
		}

		::FBLEGIOPMKG* JNJDNMKHOKB()
		{
			return ((::FBLEGIOPMKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JNJDNMKHOKB_OFFSET))(this);
		}

		::System::Boolean CJLKLHCJHDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CJLKLHCJHDL_OFFSET))(this);
		}

		::System::Void KCJHAOEEFID(::RPG::GameCore::CakeRaceAIState a1, ::System::UInt32 a2, ::FDHFGKLGEBC* a3, ::IFBOFKLBBKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAIState, ::System::UInt32, ::FDHFGKLGEBC*, ::IFBOFKLBBKO*))((::PBYTE)hIl2Cpp + IFBFJDCECML_KCJHAOEEFID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ANPFJJHMLIG(::RPG::GameCore::CakeRaceAIState a1, ::System::UInt32 a2, ::FDHFGKLGEBC* a3, ::IFBOFKLBBKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAIState, ::System::UInt32, ::FDHFGKLGEBC*, ::IFBOFKLBBKO*))((::PBYTE)hIl2Cpp + IFBFJDCECML_ANPFJJHMLIG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JNCLKLPFHCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JNCLKLPFHCA_OFFSET))(this);
		}

		::MLNKKMBGFNO* MOBBFEJHBGC()
		{
			return ((::MLNKKMBGFNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_MOBBFEJHBGC_OFFSET))(this);
		}

		::System::Boolean BCJIKOLCHLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_BCJIKOLCHLI_OFFSET))(this);
		}

		::System::Void KPOMPJKIABD(::FLJEGMGCIOG* a1, ::BPDKJKJGECM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FLJEGMGCIOG*, ::BPDKJKJGECM*))((::PBYTE)hIl2Cpp + IFBFJDCECML_KPOMPJKIABD_OFFSET))(this, a1, a2);
		}

		::System::Void NDGFLFPMEDK(::FLJEGMGCIOG* a1, ::BPDKJKJGECM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FLJEGMGCIOG*, ::BPDKJKJGECM*))((::PBYTE)hIl2Cpp + IFBFJDCECML_NDGFLFPMEDK_OFFSET))(this, a1, a2);
		}

		::System::Void PMEOBHLMABH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_PMEOBHLMABH_OFFSET))(this);
		}

		::JJGBKDLGDFN* JBOHAAPLNBH()
		{
			return ((::JJGBKDLGDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JBOHAAPLNBH_OFFSET))(this);
		}

		::System::Boolean JBDMAPFHOKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JBDMAPFHOKC_OFFSET))(this);
		}

		::System::Void MDJGIJJIBPN(::System::Int32 a1, ::CIAENAKKAAP a2, ::System::Int32 a3, ::System::Int32 a4, ::CNLEEFGEKFB a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CIAENAKKAAP, ::System::Int32, ::System::Int32, ::CNLEEFGEKFB, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_MDJGIJJIBPN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void FBLNHEOFAHM(::System::Int32 a1, ::CIAENAKKAAP a2, ::System::Int32 a3, ::System::Int32 a4, ::CNLEEFGEKFB a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CIAENAKKAAP, ::System::Int32, ::System::Int32, ::CNLEEFGEKFB, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_FBLNHEOFAHM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void FFAFFPOFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_FFAFFPOFCOD_OFFSET))(this);
		}

		::CKEIGJNHMDN* MCGDMLNJDIB()
		{
			return ((::CKEIGJNHMDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_MCGDMLNJDIB_OFFSET))(this);
		}

		::System::Boolean JDKNCHCDILO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JDKNCHCDILO_OFFSET))(this);
		}

		::System::Void LGJBHKPACNH(::System::Int32 a1, ::RPG::GameCore::CakeRaceCatAIConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCatAIConfig*))((::PBYTE)hIl2Cpp + IFBFJDCECML_LGJBHKPACNH_OFFSET))(this, a1, a2);
		}

		::System::Void DHIOEPHDABP(::System::Int32 a1, ::RPG::GameCore::CakeRaceCatAIConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCatAIConfig*))((::PBYTE)hIl2Cpp + IFBFJDCECML_DHIOEPHDABP_OFFSET))(this, a1, a2);
		}

		::System::Void HFKCDLKCIDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_HFKCDLKCIDB_OFFSET))(this);
		}

		::PEDHHCKCEMN* NPDNEEPHEKN()
		{
			return ((::PEDHHCKCEMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_NPDNEEPHEKN_OFFSET))(this);
		}

		::System::Boolean GLOEAANACKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_GLOEAANACKC_OFFSET))(this);
		}

		::System::Void OFCHBCNPEJK(::RPG::GameCore::CakeRaceMoveState a1, ::System::Boolean a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::System::UInt32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState, ::System::Boolean, ::RPG::MVector3, ::RPG::MVector3, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_OFCHBCNPEJK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void FCNEADIOKLG(::RPG::GameCore::CakeRaceMoveState a1, ::System::Boolean a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::System::UInt32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState, ::System::Boolean, ::RPG::MVector3, ::RPG::MVector3, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_FCNEADIOKLG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void DLBEJONCODM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_DLBEJONCODM_OFFSET))(this);
		}

		::GEMFBMOKLDM* FMHBDAOIDED()
		{
			return ((::GEMFBMOKLDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_FMHBDAOIDED_OFFSET))(this);
		}

		::System::Boolean EAKAIEHHNIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_EAKAIEHHNIN_OFFSET))(this);
		}

		::System::Void NFAGACIGBLA(::RPG::GameCore::CakeRaceAnimState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAnimState))((::PBYTE)hIl2Cpp + IFBFJDCECML_NFAGACIGBLA_OFFSET))(this, a1);
		}

		::System::Void KLOMNHLKBHF(::RPG::GameCore::CakeRaceAnimState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAnimState))((::PBYTE)hIl2Cpp + IFBFJDCECML_KLOMNHLKBHF_OFFSET))(this, a1);
		}

		::System::Void JJEBFNCKJMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JJEBFNCKJMH_OFFSET))(this);
		}

		::ICNLEDIBDIE* FODBMMCKAEN()
		{
			return ((::ICNLEDIBDIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_FODBMMCKAEN_OFFSET))(this);
		}

		::System::Boolean DMEDLCMMIJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_DMEDLCMMIJA_OFFSET))(this);
		}

		::System::Void FMBGAKEIDNM(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceProperty, ::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceProperty>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceProperty, ::System::Int32>*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceProperty>*))((::PBYTE)hIl2Cpp + IFBFJDCECML_FMBGAKEIDNM_OFFSET))(this, a1, a2);
		}

		::System::Void MENOFPHKCNC(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceProperty, ::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceProperty>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceProperty, ::System::Int32>*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceProperty>*))((::PBYTE)hIl2Cpp + IFBFJDCECML_MENOFPHKCNC_OFFSET))(this, a1, a2);
		}

		::System::Void LKKPLKINALG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_LKKPLKINALG_OFFSET))(this);
		}

		::OIKDLNCBPFM* MFEIHOKGBHK()
		{
			return ((::OIKDLNCBPFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_MFEIHOKGBHK_OFFSET))(this);
		}

		::System::Boolean IJPMNELJFMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_IJPMNELJFMK_OFFSET))(this);
		}

		::System::Void BHILFKPAKFK(::KAJJEJMHCGD* a1, ::KAJJEJMHCGD* a2, ::KAJJEJMHCGD* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::KAJJEJMHCGD*, ::KAJJEJMHCGD*, ::KAJJEJMHCGD*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_BHILFKPAKFK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GFIEDKHFKLH(::KAJJEJMHCGD* a1, ::KAJJEJMHCGD* a2, ::KAJJEJMHCGD* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::KAJJEJMHCGD*, ::KAJJEJMHCGD*, ::KAJJEJMHCGD*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_GFIEDKHFKLH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EBPHKJOKNML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_EBPHKJOKNML_OFFSET))(this);
		}

		::OLEDBOBEPKP* FPDOLHAAOAP()
		{
			return ((::OLEDBOBEPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_FPDOLHAAOAP_OFFSET))(this);
		}

		::System::Boolean PALCLHHCPFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_PALCLHHCPFI_OFFSET))(this);
		}

		::System::Void HKFMJNBGJJN(::System::Collections::Generic::List_1<::RPG::MVector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + IFBFJDCECML_HKFMJNBGJJN_OFFSET))(this, a1);
		}

		::System::Void AKFCAFIHLFE(::System::Collections::Generic::List_1<::RPG::MVector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + IFBFJDCECML_AKFCAFIHLFE_OFFSET))(this, a1);
		}

		::System::Void JAHHEFIBNCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JAHHEFIBNCP_OFFSET))(this);
		}

		::DHNPDHKLIAN* MLBDBGHGPKK()
		{
			return ((::DHNPDHKLIAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_MLBDBGHGPKK_OFFSET))(this);
		}

		::System::Boolean FAAPKMJABLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_FAAPKMJABLF_OFFSET))(this);
		}

		::System::Void CFCLAMGAPDA(::RPG::GameCore::CakeRaceCellType a1, ::RPG::GameCore::CakeRaceRegionCellConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceRegionCellConfig*))((::PBYTE)hIl2Cpp + IFBFJDCECML_CFCLAMGAPDA_OFFSET))(this, a1, a2);
		}

		::System::Void HMIDFNDMBHF(::RPG::GameCore::CakeRaceCellType a1, ::RPG::GameCore::CakeRaceRegionCellConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceRegionCellConfig*))((::PBYTE)hIl2Cpp + IFBFJDCECML_HMIDFNDMBHF_OFFSET))(this, a1, a2);
		}

		::System::Void AHNOPHIBEBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_AHNOPHIBEBL_OFFSET))(this);
		}

		::IPFEAOONHGI* BCDPJKLJLLG()
		{
			return ((::IPFEAOONHGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_BCDPJKLJLLG_OFFSET))(this);
		}

		::System::Boolean CECCDFLJCDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CECCDFLJCDK_OFFSET))(this);
		}

		::System::Void FEIIOBNFKPE(::System::Int32 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IFBFJDCECML_FEIIOBNFKPE_OFFSET))(this, a1, a2);
		}

		::System::Void FDNOODPLNJN(::System::Int32 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IFBFJDCECML_FDNOODPLNJN_OFFSET))(this, a1, a2);
		}

		::System::Void KLFICMLOPFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_KLFICMLOPFP_OFFSET))(this);
		}

		::CANFFHPKHGB* JFPNDGAKHGH()
		{
			return ((::CANFFHPKHGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JFPNDGAKHGH_OFFSET))(this);
		}

		::System::Boolean GGHKAFNDDMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_GGHKAFNDDMC_OFFSET))(this);
		}

		::System::Void EMAGLAOLPGN(::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_EMAGLAOLPGN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBKEIKMILGM(::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_NBKEIKMILGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MJEBCONHELC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_MJEBCONHELC_OFFSET))(this);
		}

		::BBLFDCMINFP* BHBOOBBMIBM()
		{
			return ((::BBLFDCMINFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_BHBOOBBMIBM_OFFSET))(this);
		}

		::System::Boolean NJKLKOEEEFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_NJKLKOEEEFP_OFFSET))(this);
		}

		::System::Void OJBGCKNPFCK(::System::Int32 a1, ::IDJCEFPNPMM a2, ::System::Int32 a3, ::System::Int32 a4, ::CNLEEFGEKFB a5, ::CNLEEFGEKFB a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IDJCEFPNPMM, ::System::Int32, ::System::Int32, ::CNLEEFGEKFB, ::CNLEEFGEKFB, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_OJBGCKNPFCK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OJCKIBJEMJP(::System::Int32 a1, ::IDJCEFPNPMM a2, ::System::Int32 a3, ::System::Int32 a4, ::CNLEEFGEKFB a5, ::CNLEEFGEKFB a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IDJCEFPNPMM, ::System::Int32, ::System::Int32, ::CNLEEFGEKFB, ::CNLEEFGEKFB, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_OJCKIBJEMJP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void LLABPCOHEAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_LLABPCOHEAC_OFFSET))(this);
		}

		::POPHFMPBKJL* KLOKABEPKLL()
		{
			return ((::POPHFMPBKJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_KLOKABEPKLL_OFFSET))(this);
		}

		::System::Boolean KDNBHFNECHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_KDNBHFNECHN_OFFSET))(this);
		}

		::System::Void MDAALJICLKI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::CakeRaceCurveType a6, ::RPG::GameCore::FloatCurve* a7, ::RPG::MVector3 a8, ::RPG::MVector3 a9, ::RPG::MVector3 a10, ::System::Boolean a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::CakeRaceCurveType, ::RPG::GameCore::FloatCurve*, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_MDAALJICLKI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void IMDEGAKJDCL(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::CakeRaceCurveType a6, ::RPG::GameCore::FloatCurve* a7, ::RPG::MVector3 a8, ::RPG::MVector3 a9, ::RPG::MVector3 a10, ::System::Boolean a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::CakeRaceCurveType, ::RPG::GameCore::FloatCurve*, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_IMDEGAKJDCL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void CCBKPJIJGFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CCBKPJIJGFH_OFFSET))(this);
		}

		::KOPCPKCPPIF* EJJNAPDBIOD()
		{
			return ((::KOPCPKCPPIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_EJJNAPDBIOD_OFFSET))(this);
		}

		::System::Boolean OLBMDCLCCFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_OLBMDCLCCFF_OFFSET))(this);
		}

		::System::Void LGNBLEGCCNF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IFBFJDCECML_LGNBLEGCCNF_OFFSET))(this, a1, a2);
		}

		::System::Void MOGJGDNCCIP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IFBFJDCECML_MOGJGDNCCIP_OFFSET))(this, a1, a2);
		}

		::System::Void CNJKGEODPMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CNJKGEODPMD_OFFSET))(this);
		}

		::ENDBKLKOBFP* ICFIJBKPCLB()
		{
			return ((::ENDBKLKOBFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_ICFIJBKPCLB_OFFSET))(this);
		}

		::System::Boolean JKHHGEGICFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JKHHGEGICFK_OFFSET))(this);
		}

		::System::Void GHMIFBNLNCF(::RPG::GameCore::CakeRacePickupItemConfig* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::UInt64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRacePickupItemConfig*, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + IFBFJDCECML_GHMIFBNLNCF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HBFMLNPBFHD(::RPG::GameCore::CakeRacePickupItemConfig* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::UInt64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRacePickupItemConfig*, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + IFBFJDCECML_HBFMLNPBFHD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FCCAABINBPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_FCCAABINBPI_OFFSET))(this);
		}

		::JBAENELAKOL* JEELDBPDANA()
		{
			return ((::JBAENELAKOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JEELDBPDANA_OFFSET))(this);
		}

		::System::Boolean CNINMMLHJOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CNINMMLHJOB_OFFSET))(this);
		}

		::System::Void BCEDPIAIFOA(::System::Int32 a1, ::RPG::MVector3 a2, ::System::Int32 a3, ::CNLEEFGEKFB a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector3, ::System::Int32, ::CNLEEFGEKFB, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_BCEDPIAIFOA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EDLKEPLFJJH(::System::Int32 a1, ::RPG::MVector3 a2, ::System::Int32 a3, ::CNLEEFGEKFB a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector3, ::System::Int32, ::CNLEEFGEKFB, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFBFJDCECML_EDLKEPLFJJH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EELBJCCGAPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_EELBJCCGAPG_OFFSET))(this);
		}

		::PGMPJKHCHPH* EOIMBBFNKPP()
		{
			return ((::PGMPJKHCHPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_EOIMBBFNKPP_OFFSET))(this);
		}

		::System::Boolean PNNECJKJBOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_PNNECJKJBOA_OFFSET))(this);
		}

		::System::Void HJEJLOOHAMB(::OAJLLHGOPMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAJLLHGOPMH*))((::PBYTE)hIl2Cpp + IFBFJDCECML_HJEJLOOHAMB_OFFSET))(this, a1);
		}

		::System::Void LNHFBFEGHMN(::OAJLLHGOPMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAJLLHGOPMH*))((::PBYTE)hIl2Cpp + IFBFJDCECML_LNHFBFEGHMN_OFFSET))(this, a1);
		}

		::System::Void GFAKPCBFIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_GFAKPCBFIPB_OFFSET))(this);
		}

		::FBLEGIOPMKG* DJLLKPGCOLK()
		{
			return ((::FBLEGIOPMKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_DJLLKPGCOLK_OFFSET))(this);
		}

		::System::Boolean BNGKAIKPNDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_BNGKAIKPNDN_OFFSET))(this);
		}

		::GEMFBMOKLDM* CPDGPBMJEFO()
		{
			return ((::GEMFBMOKLDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CPDGPBMJEFO_OFFSET))(this);
		}

		::System::Boolean KAGINNPKNBD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_KAGINNPKNBD_OFFSET))(this);
		}

		::MLNKKMBGFNO* CGAICDPBEJE()
		{
			return ((::MLNKKMBGFNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CGAICDPBEJE_OFFSET))(this);
		}

		::System::Boolean ELJLGMMFHJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_ELJLGMMFHJO_OFFSET))(this);
		}

		::JJGBKDLGDFN* GJHGECDHPBA()
		{
			return ((::JJGBKDLGDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_GJHGECDHPBA_OFFSET))(this);
		}

		::System::Boolean OHCMDGILICO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_OHCMDGILICO_OFFSET))(this);
		}

		::CANFFHPKHGB* PBBNLMJBLAK()
		{
			return ((::CANFFHPKHGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_PBBNLMJBLAK_OFFSET))(this);
		}

		::System::Boolean JJFLDOCFJEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JJFLDOCFJEB_OFFSET))(this);
		}

		::CKEIGJNHMDN* OMOMDOGFIIC()
		{
			return ((::CKEIGJNHMDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_OMOMDOGFIIC_OFFSET))(this);
		}

		::System::Boolean JJIDDMGBEFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JJIDDMGBEFA_OFFSET))(this);
		}

		::OIKDLNCBPFM* MPFHAHKJGAH()
		{
			return ((::OIKDLNCBPFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_MPFHAHKJGAH_OFFSET))(this);
		}

		::System::Boolean ANJNJGMBHGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_ANJNJGMBHGM_OFFSET))(this);
		}

		::OLEDBOBEPKP* FJMGGGLICMI()
		{
			return ((::OLEDBOBEPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_FJMGGGLICMI_OFFSET))(this);
		}

		::System::Boolean APIDCHNFPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_APIDCHNFPBF_OFFSET))(this);
		}

		::DHNPDHKLIAN* IHKGGIGNDNH()
		{
			return ((::DHNPDHKLIAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_IHKGGIGNDNH_OFFSET))(this);
		}

		::System::Boolean KBJMHPDNHDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_KBJMHPDNHDN_OFFSET))(this);
		}

		::PGMPJKHCHPH* KEDCHDMNPEB()
		{
			return ((::PGMPJKHCHPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_KEDCHDMNPEB_OFFSET))(this);
		}

		::System::Boolean MACNKBNNGJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_MACNKBNNGJP_OFFSET))(this);
		}

		::BBLFDCMINFP* DHNIHJJCKJJ()
		{
			return ((::BBLFDCMINFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_DHNIHJJCKJJ_OFFSET))(this);
		}

		::System::Boolean JOLAKHJELPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JOLAKHJELPG_OFFSET))(this);
		}

		::POPHFMPBKJL* KIMHJBBKEIA()
		{
			return ((::POPHFMPBKJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_KIMHJBBKEIA_OFFSET))(this);
		}

		::System::Boolean LOOGPJDLFDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_LOOGPJDLFDF_OFFSET))(this);
		}

		::PEDHHCKCEMN* CBFKFHJJPJB()
		{
			return ((::PEDHHCKCEMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_CBFKFHJJPJB_OFFSET))(this);
		}

		::System::Boolean MAHHEEIDNJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_MAHHEEIDNJP_OFFSET))(this);
		}

		::KOPCPKCPPIF* DHKFMPFJMML()
		{
			return ((::KOPCPKCPPIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_DHKFMPFJMML_OFFSET))(this);
		}

		::System::Boolean KJICGILHCIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_KJICGILHCIE_OFFSET))(this);
		}

		::ENDBKLKOBFP* EKGGLMJMBPP()
		{
			return ((::ENDBKLKOBFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_EKGGLMJMBPP_OFFSET))(this);
		}

		::System::Boolean EJKGEDPKJMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_EJKGEDPKJMB_OFFSET))(this);
		}

		::ICNLEDIBDIE* ICCLLKEKJAI()
		{
			return ((::ICNLEDIBDIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_ICCLLKEKJAI_OFFSET))(this);
		}

		::System::Boolean LOMJJNCMJMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_LOMJJNCMJMK_OFFSET))(this);
		}

		::JBAENELAKOL* JGBCFENHOKC()
		{
			return ((::JBAENELAKOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_JGBCFENHOKC_OFFSET))(this);
		}

		::System::Boolean HHODBJKLPPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_HHODBJKLPPE_OFFSET))(this);
		}

		::IPFEAOONHGI* NMHDPJHFMNC()
		{
			return ((::IPFEAOONHGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_NMHDPJHFMNC_OFFSET))(this);
		}

		::System::Boolean PFDPDJIBELB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBFJDCECML_PFDPDJIBELB_OFFSET))(this);
		}

	};
