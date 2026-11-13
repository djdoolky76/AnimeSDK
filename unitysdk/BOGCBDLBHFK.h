#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOccupyType.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPhase.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPlayerAnim.h"
#include "unitysdk/RPG/Client/LittleGame/TRFTwoState.h"
#include "unitysdk/RPG/GameCore/TRFCubeType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ABMMBFKIGHO;
class AJNFKKCAJAN;
class BOGCBDLBHFK;
class CHBMLEKKNPE;
class DDHCFKKBPHF;
class EGGAPOKBOPE;
class EGMIDBKFOLB;
class ELKFMEKPEMA;
class ENNICBAOCNM;
class GAAGJOBMBHI;
class HNAGCFKIHCG;
class IGDENCPFDOI;
class IGIKAKKLNEI;
class IJJEOAHKLGK;
class JGDLPLLAHAF;
class KIDPCOMKMKJ;
class KPADJMGLFJG;
class LOCJFBNILGD;
class MJBNFKHHJHI;
class NANHNCFECGJ;
class NGADEHKILOC;
class NMEDAAEMNNP;
class NMPIOOFKEJP;
class NOFHLJCOKJP;
class OGILIJCMCKB;
class PLGNNPBFHCJ;
class PNPFAIHJMMI;
class PPBKBPHKJJD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOGCBDLBHFK_AEHFAHICDNL_OFFSET UNITYSDK_OFFSET(0x1D2BBC00)
#define BOGCBDLBHFK_AJAFCCLCEMN_OFFSET UNITYSDK_OFFSET(0x1D2BFA80)
#define BOGCBDLBHFK_ALOLDMEHHJO_OFFSET UNITYSDK_OFFSET(0x1D2BC3C0)
#define BOGCBDLBHFK_ANCIFMNMGEB_OFFSET UNITYSDK_OFFSET(0x1D2BDD90)
#define BOGCBDLBHFK_BBNEJCAMHNJ_OFFSET UNITYSDK_OFFSET(0x1D2BDBC0)
#define BOGCBDLBHFK_BDCEFFEBBFB_OFFSET UNITYSDK_OFFSET(0x1D2BFB30)
#define BOGCBDLBHFK_BDDABKKKNKO_OFFSET UNITYSDK_OFFSET(0x1D2BEA60)
#define BOGCBDLBHFK_BGLFNCDOOAI_OFFSET UNITYSDK_OFFSET(0x1D2BC360)
#define BOGCBDLBHFK_BKEEOCEAKCA_OFFSET UNITYSDK_OFFSET(0x1D2BE8F0)
#define BOGCBDLBHFK_BPHPGFNMENH_OFFSET UNITYSDK_OFFSET(0x1D2BED90)
#define BOGCBDLBHFK_BPLELDAHAOE_OFFSET UNITYSDK_OFFSET(0x1D2BCA30)
#define BOGCBDLBHFK_CBBOJKALHLO_OFFSET UNITYSDK_OFFSET(0x1D2BD080)
#define BOGCBDLBHFK_CBPEOKBBDFD_OFFSET UNITYSDK_OFFSET(0x1D2BD9A0)
#define BOGCBDLBHFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BFD20)
#define BOGCBDLBHFK_CDOEOOMACDF_OFFSET UNITYSDK_OFFSET(0x1D2BE1E0)
#define BOGCBDLBHFK_CECFODKHOJL_OFFSET UNITYSDK_OFFSET(0x1D2BDAC0)
#define BOGCBDLBHFK_CGEFOLMNCCE_OFFSET UNITYSDK_OFFSET(0x1D2BF680)
#define BOGCBDLBHFK_CKDNKOEADCM_OFFSET UNITYSDK_OFFSET(0x1D2BA310)
#define BOGCBDLBHFK_CKPFDNALHMK_OFFSET UNITYSDK_OFFSET(0x1D2BA5D0)
#define BOGCBDLBHFK_CLBBFJEKKKJ_OFFSET UNITYSDK_OFFSET(0x1D2BC2B0)
#define BOGCBDLBHFK_COPBPGBNABP_OFFSET UNITYSDK_OFFSET(0x1D2BE950)
#define BOGCBDLBHFK_CPAHLMPDKIO_OFFSET UNITYSDK_OFFSET(0x1D2BBD50)
#define BOGCBDLBHFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BFCA0)
#define BOGCBDLBHFK_DCPAPPGJJAO_OFFSET UNITYSDK_OFFSET(0x1D2BC8C0)
#define BOGCBDLBHFK_DEFCKFPEAAA_OFFSET UNITYSDK_OFFSET(0x1D2BA710)
#define BOGCBDLBHFK_DIPJLHNIFBN_OFFSET UNITYSDK_OFFSET(0x1D2BF1D0)
#define BOGCBDLBHFK_DLIMJMNHCOK_OFFSET UNITYSDK_OFFSET(0x1D2BF510)
#define BOGCBDLBHFK_DLKCANDHIHE_OFFSET UNITYSDK_OFFSET(0x1D2BEEA0)
#define BOGCBDLBHFK_DNDPHJJIKMC_OFFSET UNITYSDK_OFFSET(0x1D2BF060)
#define BOGCBDLBHFK_DNJEDNMGPKA_OFFSET UNITYSDK_OFFSET(0x1D2BAA20)
#define BOGCBDLBHFK_EACIMHGLDEK_OFFSET UNITYSDK_OFFSET(0x1D2BC690)
#define BOGCBDLBHFK_EAMNHLFKOFO_OFFSET UNITYSDK_OFFSET(0x1D2BE060)
#define BOGCBDLBHFK_EDCBFKHABOD_OFFSET UNITYSDK_OFFSET(0x1D2BD200)
#define BOGCBDLBHFK_EDCMMGACINB_OFFSET UNITYSDK_OFFSET(0x1D2BED30)
#define BOGCBDLBHFK_EJKDEPNEHCL_OFFSET UNITYSDK_OFFSET(0x1D2BD0E0)
#define BOGCBDLBHFK_EMHMIFANEID_OFFSET UNITYSDK_OFFSET(0x1D2BF840)
#define BOGCBDLBHFK_ENNFAJFAMDJ_OFFSET UNITYSDK_OFFSET(0x1D2BEC20)
#define BOGCBDLBHFK_FBMAIJIDPBP_OFFSET UNITYSDK_OFFSET(0x1D2BD370)
#define BOGCBDLBHFK_FPKGFDOEBEI_OFFSET UNITYSDK_OFFSET(0x1D2BBF40)
#define BOGCBDLBHFK_GACAHAHKLFN_OFFSET UNITYSDK_OFFSET(0x1D2BEB10)
#define BOGCBDLBHFK_GEOCPNPMCGJ_OFFSET UNITYSDK_OFFSET(0x1D2BF910)
#define BOGCBDLBHFK_GGIEJOPLJOM_OFFSET UNITYSDK_OFFSET(0x1D2BE7E0)
#define BOGCBDLBHFK_GIIJAACBEFH_OFFSET UNITYSDK_OFFSET(0x1D2BA8B0)
#define BOGCBDLBHFK_GIOCNHIIKFF_OFFSET UNITYSDK_OFFSET(0x1D2BCAE0)
#define BOGCBDLBHFK_GJCFILDFDOO_OFFSET UNITYSDK_OFFSET(0x1D2BF790)
#define BOGCBDLBHFK_GKDNCKMLGLJ_OFFSET UNITYSDK_OFFSET(0x1D2BA630)
#define BOGCBDLBHFK_GLEFPPHJBHI_OFFSET UNITYSDK_OFFSET(0x1D2BB060)
#define BOGCBDLBHFK_GMFLDEAHAHB_OFFSET UNITYSDK_OFFSET(0x1D2BDF50)
#define BOGCBDLBHFK_GMPIGOGDNHE_OFFSET UNITYSDK_OFFSET(0x1D2BBFA0)
#define BOGCBDLBHFK_HHFIBHPNMNH_OFFSET UNITYSDK_OFFSET(0x1D2BF730)
#define BOGCBDLBHFK_HIIIGLFLHFE_OFFSET UNITYSDK_OFFSET(0x1D2BCB40)
#define BOGCBDLBHFK_HLNECFAIIGC_OFFSET UNITYSDK_OFFSET(0x1D2BAEB0)
#define BOGCBDLBHFK_HOANOCKIDAB_OFFSET UNITYSDK_OFFSET(0x1D2BA090)
#define BOGCBDLBHFK_IEGLKPMBFII_OFFSET UNITYSDK_OFFSET(0x1D2BAD00)
#define BOGCBDLBHFK_IFFKHIFIKLG_OFFSET UNITYSDK_OFFSET(0x1D2BF8A0)
#define BOGCBDLBHFK_IHLBDLKBAKI_OFFSET UNITYSDK_OFFSET(0x1D2BBB50)
#define BOGCBDLBHFK_IPKEFIDJDEA_OFFSET UNITYSDK_OFFSET(0x1D2BD320)
#define BOGCBDLBHFK_JCNAEOBMNDD_OFFSET UNITYSDK_OFFSET(0x1D2BE3B0)
#define BOGCBDLBHFK_JDFHOCOMCLI_OFFSET UNITYSDK_OFFSET(0x1D2BE000)
#define BOGCBDLBHFK_JHDADLGMDOF_OFFSET UNITYSDK_OFFSET(0x1D2BAA80)
#define BOGCBDLBHFK_JJODMINIEHO_OFFSET UNITYSDK_OFFSET(0x1D2BB1C0)
#define BOGCBDLBHFK_JLMGMPKGOCB_OFFSET UNITYSDK_OFFSET(0x1D2BABF0)
#define BOGCBDLBHFK_JMAINKJLJIA_OFFSET UNITYSDK_OFFSET(0x1D2BC7A0)
#define BOGCBDLBHFK_JNOPHCOAAHL_OFFSET UNITYSDK_OFFSET(0x1D2BD5D0)
#define BOGCBDLBHFK_KCGGDHAMFIK_OFFSET UNITYSDK_OFFSET(0x1D2BEB70)
#define BOGCBDLBHFK_KCGGJNIDOEG_OFFSET UNITYSDK_OFFSET(0x1D2BD480)
#define BOGCBDLBHFK_KDMJNGMJNCH_OFFSET UNITYSDK_OFFSET(0x1D2BE5D0)
#define BOGCBDLBHFK_KIPEPLKFNPG_OFFSET UNITYSDK_OFFSET(0x1D2BF450)
#define BOGCBDLBHFK_KJJNMDLLCGI_OFFSET UNITYSDK_OFFSET(0x1D2BEA00)
#define BOGCBDLBHFK_KKCBOJBIEGM_OFFSET UNITYSDK_OFFSET(0x1D2BA030)
#define BOGCBDLBHFK_KKHBMEENGDN_OFFSET UNITYSDK_OFFSET(0x1D2BA200)
#define BOGCBDLBHFK_KLNGLFLGMKJ_OFFSET UNITYSDK_OFFSET(0x1D2BD420)
#define BOGCBDLBHFK_LAEENLIINBH_OFFSET UNITYSDK_OFFSET(0x1D2BE460)
#define BOGCBDLBHFK_LBHKJFIIHFM_OFFSET UNITYSDK_OFFSET(0x1D2BB160)
#define BOGCBDLBHFK_LFGMFOBPNEJ_OFFSET UNITYSDK_OFFSET(0x1D2BE360)
#define BOGCBDLBHFK_LJBFOCCHIJD_OFFSET UNITYSDK_OFFSET(0x1D2BE6E0)
#define BOGCBDLBHFK_LJHMOPHJHKM_OFFSET UNITYSDK_OFFSET(0x1D2BF170)
#define BOGCBDLBHFK_LKKICOMOEGH_OFFSET UNITYSDK_OFFSET(0x1D2BBE40)
#define BOGCBDLBHFK_LKLHBOCAJDI_OFFSET UNITYSDK_OFFSET(0x1D2BA520)
#define BOGCBDLBHFK_LNGCEPBGDAM_OFFSET UNITYSDK_OFFSET(0x1D2BF230)
#define BOGCBDLBHFK_LOHNNIFFPHI_OFFSET UNITYSDK_OFFSET(0x1D2BD770)
#define BOGCBDLBHFK_LPDBFNAKCDI_OFFSET UNITYSDK_OFFSET(0x1D2BFB90)
#define BOGCBDLBHFK_LPNMOGOIKBD_OFFSET UNITYSDK_OFFSET(0x1D2BC9E0)
#define BOGCBDLBHFK_MAABKIMECPO_OFFSET UNITYSDK_OFFSET(0x1D2BF3A0)
#define BOGCBDLBHFK_MBHHFIGKHBI_OFFSET UNITYSDK_OFFSET(0x1D2BD820)
#define BOGCBDLBHFK_MBLOGKEPABC_OFFSET UNITYSDK_OFFSET(0x1D2BACA0)
#define BOGCBDLBHFK_MFMHEKIEFLD_OFFSET UNITYSDK_OFFSET(0x1D2BCF80)
#define BOGCBDLBHFK_MLBPFDNKPIF_OFFSET UNITYSDK_OFFSET(0x1D2BC640)
#define BOGCBDLBHFK_NBDIDGJCJFL_OFFSET UNITYSDK_OFFSET(0x1D2BA7F0)
#define BOGCBDLBHFK_NCFHMLIBHCC_OFFSET UNITYSDK_OFFSET(0x1D2BDF00)
#define BOGCBDLBHFK_NFKFFHFDCLJ_OFFSET UNITYSDK_OFFSET(0x1D2BC740)
#define BOGCBDLBHFK_NHGOFJOOBAF_OFFSET UNITYSDK_OFFSET(0x1D2BC260)
#define BOGCBDLBHFK_NIGMAEICJOA_OFFSET UNITYSDK_OFFSET(0x1D2BDC20)
#define BOGCBDLBHFK_NMMBEGOBNNL_OFFSET UNITYSDK_OFFSET(0x1D2BEC80)
#define BOGCBDLBHFK_NNFDBJFKJFI_OFFSET UNITYSDK_OFFSET(0x1D2BD720)
#define BOGCBDLBHFK_NODIAJJFCGF_OFFSET UNITYSDK_OFFSET(0x1D2BE730)
#define BOGCBDLBHFK_NOEHPNOBEID_OFFSET UNITYSDK_OFFSET(0x1D2BCFD0)
#define BOGCBDLBHFK_NOLFGHGDKAM_OFFSET UNITYSDK_OFFSET(0x1D2BC500)
#define BOGCBDLBHFK_OBGFCCCOJPL_OFFSET UNITYSDK_OFFSET(0x1D2BD880)
#define BOGCBDLBHFK_OCHNMKLBNEM_OFFSET UNITYSDK_OFFSET(0x1D2BA2B0)
#define BOGCBDLBHFK_OCNPEAEHIEN_OFFSET UNITYSDK_OFFSET(0x1D2BBB00)
#define BOGCBDLBHFK_OEHDAOBHOEJ_OFFSET UNITYSDK_OFFSET(0x1D2BE840)
#define BOGCBDLBHFK_OEPPCFKFPMJ_OFFSET UNITYSDK_OFFSET(0x1D2BCD60)
#define BOGCBDLBHFK_OJFONCANFBD_OFFSET UNITYSDK_OFFSET(0x1D2BA840)
#define BOGCBDLBHFK_OLKJOIHHFJJ_OFFSET UNITYSDK_OFFSET(0x1D2BA3F0)
#define BOGCBDLBHFK_ONIFDHMOOPI_OFFSET UNITYSDK_OFFSET(0x1D2BFC40)
#define BOGCBDLBHFK_OPAMJLNMNOF_OFFSET UNITYSDK_OFFSET(0x1D2BBE90)
#define BOGCBDLBHFK_OPHFOHBCDNC_OFFSET UNITYSDK_OFFSET(0x1D2BEE40)
#define BOGCBDLBHFK_PACLCDGCOHN_OFFSET UNITYSDK_OFFSET(0x1D2BDB10)
#define BOGCBDLBHFK_PBEMGACHGGJ_OFFSET UNITYSDK_OFFSET(0x1D2BC100)
#define BOGCBDLBHFK_PDAAIONKIJE_OFFSET UNITYSDK_OFFSET(0x1D2BA4D0)
#define BOGCBDLBHFK_PDPCEIPLDEJ_OFFSET UNITYSDK_OFFSET(0x1D2BF4B0)
#define BOGCBDLBHFK_PHKIIAACLKK_OFFSET UNITYSDK_OFFSET(0x1D2BB0B0)
#define BOGCBDLBHFK_PINOJDJEFGH_OFFSET UNITYSDK_OFFSET(0x1D2BF0C0)
#define BOGCBDLBHFK_PJDLIBNKKNH_OFFSET UNITYSDK_OFFSET(0x1D2BB660)
#define BOGCBDLBHFK_PJOBINLEEFH_OFFSET UNITYSDK_OFFSET(0x1D2BEFB0)
#define BOGCBDLBHFK_PLFNACGPLHP_OFFSET UNITYSDK_OFFSET(0x1D2BBC60)
#define BOGCBDLBHFK_PNJAELLMFOA_OFFSET UNITYSDK_OFFSET(0x1D2BE4C0)
#define BOGCBDLBHFK_POBFCLBIOBA_OFFSET UNITYSDK_OFFSET(0x1D2BEF50)

inline static constexpr unsigned int BOGCBDLBHFK_TypeDefinitionIndex = 43601;

	class BOGCBDLBHFK : public ::Entitas::Entity
	{
	public:
		static ::NOFHLJCOKJP** StaticGet_LFGOAECAFAH()
		{
			return (::NOFHLJCOKJP**)UnitySDK::FromName("", "BOGCBDLBHFK")->GetStaticField(0x173D0);
		}

		static ::EGMIDBKFOLB** StaticGet_MGAGJJIMNIN()
		{
			return (::EGMIDBKFOLB**)UnitySDK::FromName("", "BOGCBDLBHFK")->GetStaticField(0x173D8);
		}

		static ::NANHNCFECGJ** StaticGet_NAOBGEKCLOE()
		{
			return (::NANHNCFECGJ**)UnitySDK::FromName("", "BOGCBDLBHFK")->GetStaticField(0x173E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CCTOR_OFFSET))();
		}

		::System::Boolean KKCBOJBIEGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_KKCBOJBIEGM_OFFSET))(this);
		}

		::System::Void HOANOCKIDAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_HOANOCKIDAB_OFFSET))(this, a1);
		}

		::JGDLPLLAHAF* KKHBMEENGDN()
		{
			return ((::JGDLPLLAHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_KKHBMEENGDN_OFFSET))(this);
		}

		::System::Boolean OCHNMKLBNEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OCHNMKLBNEM_OFFSET))(this);
		}

		::System::Void CKDNKOEADCM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CKDNKOEADCM_OFFSET))(this, a1);
		}

		::System::Void OLKJOIHHFJJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OLKJOIHHFJJ_OFFSET))(this, a1);
		}

		::System::Void PDAAIONKIJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PDAAIONKIJE_OFFSET))(this);
		}

		::MJBNFKHHJHI* LKLHBOCAJDI()
		{
			return ((::MJBNFKHHJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LKLHBOCAJDI_OFFSET))(this);
		}

		::System::Boolean CKPFDNALHMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CKPFDNALHMK_OFFSET))(this);
		}

		::System::Void GKDNCKMLGLJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GKDNCKMLGLJ_OFFSET))(this, a1);
		}

		::System::Void DEFCKFPEAAA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_DEFCKFPEAAA_OFFSET))(this, a1);
		}

		::System::Void NBDIDGJCJFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NBDIDGJCJFL_OFFSET))(this);
		}

		::System::Boolean OJFONCANFBD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OJFONCANFBD_OFFSET))(this);
		}

		::System::Void GIIJAACBEFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GIIJAACBEFH_OFFSET))(this, a1);
		}

		::System::Boolean DNJEDNMGPKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_DNJEDNMGPKA_OFFSET))(this);
		}

		::System::Void JHDADLGMDOF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_JHDADLGMDOF_OFFSET))(this, a1);
		}

		::GAAGJOBMBHI* JLMGMPKGOCB()
		{
			return ((::GAAGJOBMBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_JLMGMPKGOCB_OFFSET))(this);
		}

		::System::Boolean MBLOGKEPABC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_MBLOGKEPABC_OFFSET))(this);
		}

		::System::Void IEGLKPMBFII(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_IEGLKPMBFII_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HLNECFAIIGC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_HLNECFAIIGC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GLEFPPHJBHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GLEFPPHJBHI_OFFSET))(this);
		}

		::IGIKAKKLNEI* PHKIIAACLKK()
		{
			return ((::IGIKAKKLNEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PHKIIAACLKK_OFFSET))(this);
		}

		::System::Boolean LBHKJFIIHFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LBHKJFIIHFM_OFFSET))(this);
		}

		::System::Void JJODMINIEHO(::RPG::Client::LittleGame::TRFPhase a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BOGCBDLBHFK*>* a4, ::System::Collections::Generic::List_1<::BOGCBDLBHFK*>* a5, ::System::Collections::Generic::List_1<::KPADJMGLFJG*>* a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::LOCJFBNILGD* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::System::Single a17, ::System::Boolean a18, ::System::String* a19, ::System::Boolean a20, ::System::Boolean a21, ::System::Boolean a22, ::CHBMLEKKNPE* a23)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFPhase, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BOGCBDLBHFK*>*, ::System::Collections::Generic::List_1<::BOGCBDLBHFK*>*, ::System::Collections::Generic::List_1<::KPADJMGLFJG*>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::LOCJFBNILGD*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::CHBMLEKKNPE*))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_JJODMINIEHO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
		}

		::System::Void PJDLIBNKKNH(::RPG::Client::LittleGame::TRFPhase a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BOGCBDLBHFK*>* a4, ::System::Collections::Generic::List_1<::BOGCBDLBHFK*>* a5, ::System::Collections::Generic::List_1<::KPADJMGLFJG*>* a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::LOCJFBNILGD* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::System::Single a17, ::System::Boolean a18, ::System::String* a19, ::System::Boolean a20, ::System::Boolean a21, ::System::Boolean a22, ::CHBMLEKKNPE* a23)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFPhase, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BOGCBDLBHFK*>*, ::System::Collections::Generic::List_1<::BOGCBDLBHFK*>*, ::System::Collections::Generic::List_1<::KPADJMGLFJG*>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::LOCJFBNILGD*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::CHBMLEKKNPE*))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PJDLIBNKKNH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
		}

		::System::Void OCNPEAEHIEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OCNPEAEHIEN_OFFSET))(this);
		}

		::PPBKBPHKJJD* IHLBDLKBAKI()
		{
			return ((::PPBKBPHKJJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_IHLBDLKBAKI_OFFSET))(this);
		}

		::System::Boolean AEHFAHICDNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_AEHFAHICDNL_OFFSET))(this);
		}

		::System::Void PLFNACGPLHP(::System::Collections::Generic::List_1<::KIDPCOMKMKJ*>* a1, ::System::Collections::Generic::List_1<::NMEDAAEMNNP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KIDPCOMKMKJ*>*, ::System::Collections::Generic::List_1<::NMEDAAEMNNP*>*))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PLFNACGPLHP_OFFSET))(this, a1, a2);
		}

		::System::Void CPAHLMPDKIO(::System::Collections::Generic::List_1<::KIDPCOMKMKJ*>* a1, ::System::Collections::Generic::List_1<::NMEDAAEMNNP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KIDPCOMKMKJ*>*, ::System::Collections::Generic::List_1<::NMEDAAEMNNP*>*))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CPAHLMPDKIO_OFFSET))(this, a1, a2);
		}

		::System::Void LKKICOMOEGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LKKICOMOEGH_OFFSET))(this);
		}

		::PNPFAIHJMMI* OPAMJLNMNOF()
		{
			return ((::PNPFAIHJMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OPAMJLNMNOF_OFFSET))(this);
		}

		::System::Boolean FPKGFDOEBEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_FPKGFDOEBEI_OFFSET))(this);
		}

		::System::Void GMPIGOGDNHE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GMPIGOGDNHE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PBEMGACHGGJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PBEMGACHGGJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NHGOFJOOBAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NHGOFJOOBAF_OFFSET))(this);
		}

		::ENNICBAOCNM* CLBBFJEKKKJ()
		{
			return ((::ENNICBAOCNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CLBBFJEKKKJ_OFFSET))(this);
		}

		::System::Boolean BGLFNCDOOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_BGLFNCDOOAI_OFFSET))(this);
		}

		::System::Void ALOLDMEHHJO(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_ALOLDMEHHJO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NOLFGHGDKAM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NOLFGHGDKAM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MLBPFDNKPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_MLBPFDNKPIF_OFFSET))(this);
		}

		::IJJEOAHKLGK* EACIMHGLDEK()
		{
			return ((::IJJEOAHKLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_EACIMHGLDEK_OFFSET))(this);
		}

		::System::Boolean NFKFFHFDCLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NFKFFHFDCLJ_OFFSET))(this);
		}

		::System::Void JMAINKJLJIA(::System::Collections::Generic::List_1<::ELKFMEKPEMA*>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ELKFMEKPEMA*>*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_JMAINKJLJIA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DCPAPPGJJAO(::System::Collections::Generic::List_1<::ELKFMEKPEMA*>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ELKFMEKPEMA*>*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_DCPAPPGJJAO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LPNMOGOIKBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LPNMOGOIKBD_OFFSET))(this);
		}

		::EGGAPOKBOPE* BPLELDAHAOE()
		{
			return ((::EGGAPOKBOPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_BPLELDAHAOE_OFFSET))(this);
		}

		::System::Boolean GIOCNHIIKFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GIOCNHIIKFF_OFFSET))(this);
		}

		::System::Void HIIIGLFLHFE(::RPG::Client::LittleGame::TRFMoveState a1, ::System::Single a2, ::ELKFMEKPEMA* a3, ::RPG::Client::LittleGame::TRFPlayerAnim a4, ::RPG::Client::LittleGame::TRFPlayerAnim a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::UInt32 a11, ::System::UInt32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFMoveState, ::System::Single, ::ELKFMEKPEMA*, ::RPG::Client::LittleGame::TRFPlayerAnim, ::RPG::Client::LittleGame::TRFPlayerAnim, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_HIIIGLFLHFE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void OEPPCFKFPMJ(::RPG::Client::LittleGame::TRFMoveState a1, ::System::Single a2, ::ELKFMEKPEMA* a3, ::RPG::Client::LittleGame::TRFPlayerAnim a4, ::RPG::Client::LittleGame::TRFPlayerAnim a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::UInt32 a11, ::System::UInt32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFMoveState, ::System::Single, ::ELKFMEKPEMA*, ::RPG::Client::LittleGame::TRFPlayerAnim, ::RPG::Client::LittleGame::TRFPlayerAnim, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OEPPCFKFPMJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void MFMHEKIEFLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_MFMHEKIEFLD_OFFSET))(this);
		}

		::IGDENCPFDOI* NOEHPNOBEID()
		{
			return ((::IGDENCPFDOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NOEHPNOBEID_OFFSET))(this);
		}

		::System::Boolean CBBOJKALHLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CBBOJKALHLO_OFFSET))(this);
		}

		::System::Void EJKDEPNEHCL(::System::Boolean a1, ::System::Boolean a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_EJKDEPNEHCL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EDCBFKHABOD(::System::Boolean a1, ::System::Boolean a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_EDCBFKHABOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IPKEFIDJDEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_IPKEFIDJDEA_OFFSET))(this);
		}

		::OGILIJCMCKB* FBMAIJIDPBP()
		{
			return ((::OGILIJCMCKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_FBMAIJIDPBP_OFFSET))(this);
		}

		::System::Boolean KLNGLFLGMKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_KLNGLFLGMKJ_OFFSET))(this);
		}

		::System::Void KCGGJNIDOEG(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::RPG::GameCore::TRFCubeType a3, ::RPG::Client::LittleGame::TRFOccupyType a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::GameCore::TRFCubeType, ::RPG::Client::LittleGame::TRFOccupyType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_KCGGJNIDOEG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JNOPHCOAAHL(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::RPG::GameCore::TRFCubeType a3, ::RPG::Client::LittleGame::TRFOccupyType a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::GameCore::TRFCubeType, ::RPG::Client::LittleGame::TRFOccupyType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_JNOPHCOAAHL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NNFDBJFKJFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NNFDBJFKJFI_OFFSET))(this);
		}

		::AJNFKKCAJAN* LOHNNIFFPHI()
		{
			return ((::AJNFKKCAJAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LOHNNIFFPHI_OFFSET))(this);
		}

		::System::Boolean MBHHFIGKHBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_MBHHFIGKHBI_OFFSET))(this);
		}

		::System::Void OBGFCCCOJPL(::System::Boolean a1, ::System::Boolean a2, ::System::UInt32 a3, ::RPG::Client::LittleGame::TRFTwoState a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::RPG::Client::LittleGame::TRFTwoState))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OBGFCCCOJPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CBPEOKBBDFD(::System::Boolean a1, ::System::Boolean a2, ::System::UInt32 a3, ::RPG::Client::LittleGame::TRFTwoState a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::RPG::Client::LittleGame::TRFTwoState))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CBPEOKBBDFD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CECFODKHOJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CECFODKHOJL_OFFSET))(this);
		}

		::HNAGCFKIHCG* PACLCDGCOHN()
		{
			return ((::HNAGCFKIHCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PACLCDGCOHN_OFFSET))(this);
		}

		::System::Boolean BBNEJCAMHNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_BBNEJCAMHNJ_OFFSET))(this);
		}

		::System::Void NIGMAEICJOA(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::LittleGame::TRFTwoState a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::TRFTwoState, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NIGMAEICJOA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ANCIFMNMGEB(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::LittleGame::TRFTwoState a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::TRFTwoState, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_ANCIFMNMGEB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void NCFHMLIBHCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NCFHMLIBHCC_OFFSET))(this);
		}

		::NMPIOOFKEJP* GMFLDEAHAHB()
		{
			return ((::NMPIOOFKEJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GMFLDEAHAHB_OFFSET))(this);
		}

		::System::Boolean JDFHOCOMCLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_JDFHOCOMCLI_OFFSET))(this);
		}

		::System::Void EAMNHLFKOFO(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_EAMNHLFKOFO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CDOEOOMACDF(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CDOEOOMACDF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LFGMFOBPNEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LFGMFOBPNEJ_OFFSET))(this);
		}

		::DDHCFKKBPHF* JCNAEOBMNDD()
		{
			return ((::DDHCFKKBPHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_JCNAEOBMNDD_OFFSET))(this);
		}

		::System::Boolean LAEENLIINBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LAEENLIINBH_OFFSET))(this);
		}

		::System::Void PNJAELLMFOA(::NGADEHKILOC* a1, ::PLGNNPBFHCJ* a2, ::ABMMBFKIGHO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NGADEHKILOC*, ::PLGNNPBFHCJ*, ::ABMMBFKIGHO*))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PNJAELLMFOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KDMJNGMJNCH(::NGADEHKILOC* a1, ::PLGNNPBFHCJ* a2, ::ABMMBFKIGHO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NGADEHKILOC*, ::PLGNNPBFHCJ*, ::ABMMBFKIGHO*))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_KDMJNGMJNCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJBFOCCHIJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LJBFOCCHIJD_OFFSET))(this);
		}

		::PPBKBPHKJJD* NODIAJJFCGF()
		{
			return ((::PPBKBPHKJJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NODIAJJFCGF_OFFSET))(this);
		}

		::System::Boolean GGIEJOPLJOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GGIEJOPLJOM_OFFSET))(this);
		}

		::MJBNFKHHJHI* OEHDAOBHOEJ()
		{
			return ((::MJBNFKHHJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OEHDAOBHOEJ_OFFSET))(this);
		}

		::System::Boolean BKEEOCEAKCA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_BKEEOCEAKCA_OFFSET))(this);
		}

		::NMPIOOFKEJP* COPBPGBNABP()
		{
			return ((::NMPIOOFKEJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_COPBPGBNABP_OFFSET))(this);
		}

		::System::Boolean KJJNMDLLCGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_KJJNMDLLCGI_OFFSET))(this);
		}

		::DDHCFKKBPHF* BDDABKKKNKO()
		{
			return ((::DDHCFKKBPHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_BDDABKKKNKO_OFFSET))(this);
		}

		::System::Boolean GACAHAHKLFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GACAHAHKLFN_OFFSET))(this);
		}

		::GAAGJOBMBHI* KCGGDHAMFIK()
		{
			return ((::GAAGJOBMBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_KCGGDHAMFIK_OFFSET))(this);
		}

		::System::Boolean ENNFAJFAMDJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_ENNFAJFAMDJ_OFFSET))(this);
		}

		::JGDLPLLAHAF* NMMBEGOBNNL()
		{
			return ((::JGDLPLLAHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_NMMBEGOBNNL_OFFSET))(this);
		}

		::System::Boolean EDCMMGACINB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_EDCMMGACINB_OFFSET))(this);
		}

		::OGILIJCMCKB* BPHPGFNMENH()
		{
			return ((::OGILIJCMCKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_BPHPGFNMENH_OFFSET))(this);
		}

		::System::Boolean OPHFOHBCDNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_OPHFOHBCDNC_OFFSET))(this);
		}

		::ENNICBAOCNM* DLKCANDHIHE()
		{
			return ((::ENNICBAOCNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_DLKCANDHIHE_OFFSET))(this);
		}

		::System::Boolean POBFCLBIOBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_POBFCLBIOBA_OFFSET))(this);
		}

		::IGIKAKKLNEI* PJOBINLEEFH()
		{
			return ((::IGIKAKKLNEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PJOBINLEEFH_OFFSET))(this);
		}

		::System::Boolean DNDPHJJIKMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_DNDPHJJIKMC_OFFSET))(this);
		}

		::EGGAPOKBOPE* PINOJDJEFGH()
		{
			return ((::EGGAPOKBOPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PINOJDJEFGH_OFFSET))(this);
		}

		::System::Boolean LJHMOPHJHKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LJHMOPHJHKM_OFFSET))(this);
		}

		::System::Boolean DIPJLHNIFBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_DIPJLHNIFBN_OFFSET))(this);
		}

		::System::Void LNGCEPBGDAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LNGCEPBGDAM_OFFSET))(this, a1);
		}

		::IJJEOAHKLGK* MAABKIMECPO()
		{
			return ((::IJJEOAHKLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_MAABKIMECPO_OFFSET))(this);
		}

		::System::Boolean KIPEPLKFNPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_KIPEPLKFNPG_OFFSET))(this);
		}

		::System::Boolean PDPCEIPLDEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_PDPCEIPLDEJ_OFFSET))(this);
		}

		::System::Void DLIMJMNHCOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_DLIMJMNHCOK_OFFSET))(this, a1);
		}

		::AJNFKKCAJAN* CGEFOLMNCCE()
		{
			return ((::AJNFKKCAJAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_CGEFOLMNCCE_OFFSET))(this);
		}

		::System::Boolean HHFIBHPNMNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_HHFIBHPNMNH_OFFSET))(this);
		}

		::HNAGCFKIHCG* GJCFILDFDOO()
		{
			return ((::HNAGCFKIHCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GJCFILDFDOO_OFFSET))(this);
		}

		::System::Boolean EMHMIFANEID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_EMHMIFANEID_OFFSET))(this);
		}

		::System::Boolean IFFKHIFIKLG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_IFFKHIFIKLG_OFFSET))(this);
		}

		::System::Void GEOCPNPMCGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_GEOCPNPMCGJ_OFFSET))(this, a1);
		}

		::IGDENCPFDOI* AJAFCCLCEMN()
		{
			return ((::IGDENCPFDOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_AJAFCCLCEMN_OFFSET))(this);
		}

		::System::Boolean BDCEFFEBBFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_BDCEFFEBBFB_OFFSET))(this);
		}

		::PNPFAIHJMMI* LPDBFNAKCDI()
		{
			return ((::PNPFAIHJMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_LPDBFNAKCDI_OFFSET))(this);
		}

		::System::Boolean ONIFDHMOOPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGCBDLBHFK_ONIFDHMOOPI_OFFSET))(this);
		}

	};
