#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ECameraMode.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EImpactForbidReason.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashBlueFireSource.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/BJHNJIPKPHN.h"
#include "unitysdk/EPCHCFOEJNL.h"
#include "unitysdk/GHMJNBPDMKL.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/AICarRuntimeState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EngineCurves.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartLine.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartPoint.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ABODKGPJMLO;
class AFEBAJLJMMK;
class BAHEINMHOAC;
class BJIACBNKCCJ;
class CCLFKMFJLPB;
class CEGFCKKCEHM;
class CKHFKFPPANI;
class CNCNFGFMKLN;
class DDILGBNCFNM;
class DLAPDGELEPN;
class EGDNALHEHJD;
class ENEIHJJPNPI;
class FGKKEIBIPDL;
class FNFGDHDIHHM;
class GILFCOGNOCB;
class GOCDHLDEGEJ;
class HIEJMKLPBFC;
class HPMECOPBDBE;
class IKALAIILPEK;
class ILLGBAOOJNL;
class JDPOALIDGNK;
class JOMHKKNICMN;
class KEJFFGDKDJL;
class KIEKDHMNFFK;
class KKPIINMGOMA;
class LGJACOFLLHN;
class LIBEBAKBAOM;
class LJAIOGHEIBA;
class MJHPMAOIGPN;
class NAJMEPONCEL;
class NFKBBGEFJIN;
class NGCFJDEBCGH;
class NLJPKPAIILH;
class NNJDEIOOHOA;
class OADEJAABALE;
class OEAJBKAIPKB;
class PGEMELICKOP;
class PLFMKIDHJEB;
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class RoadRashGameModifierConfig; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define GHMGGIHEHJE_AAMPILKFOAM_OFFSET UNITYSDK_OFFSET(0x1CAAACE0)
#define GHMGGIHEHJE_ADPIEAANLEI_OFFSET UNITYSDK_OFFSET(0x1CAAA2F0)
#define GHMGGIHEHJE_AEFIALALGBJ_OFFSET UNITYSDK_OFFSET(0x1CAA7430)
#define GHMGGIHEHJE_AFMFBBFLKBD_OFFSET UNITYSDK_OFFSET(0x1CAAADF0)
#define GHMGGIHEHJE_AHPIEBCHAHM_OFFSET UNITYSDK_OFFSET(0x1CAAB350)
#define GHMGGIHEHJE_AIBPDNOHHMD_OFFSET UNITYSDK_OFFSET(0x1CAAB010)
#define GHMGGIHEHJE_AJGCDBJENID_OFFSET UNITYSDK_OFFSET(0x1CAA8170)
#define GHMGGIHEHJE_APIHLNMLAJG_OFFSET UNITYSDK_OFFSET(0x1CAAABD0)
#define GHMGGIHEHJE_BBAGJNNGAHL_OFFSET UNITYSDK_OFFSET(0x1CAA5F50)
#define GHMGGIHEHJE_BBGLOFEAAKP_OFFSET UNITYSDK_OFFSET(0x1CAA2950)
#define GHMGGIHEHJE_BBOHIFAOBAN_OFFSET UNITYSDK_OFFSET(0x1CAA4190)
#define GHMGGIHEHJE_BDCPPBOIDHL_OFFSET UNITYSDK_OFFSET(0x1CAA3BF0)
#define GHMGGIHEHJE_BENHPKNNIGE_OFFSET UNITYSDK_OFFSET(0x1CAA5130)
#define GHMGGIHEHJE_BEOBOEPOAFO_OFFSET UNITYSDK_OFFSET(0x1CAAA570)
#define GHMGGIHEHJE_BPNKFPAEDIP_OFFSET UNITYSDK_OFFSET(0x1CAA91B0)
#define GHMGGIHEHJE_CBMMGBFNJOJ_OFFSET UNITYSDK_OFFSET(0x1CAA6280)
#define GHMGGIHEHJE_CEKPHDEINIO_OFFSET UNITYSDK_OFFSET(0x1CAA3E20)
#define GHMGGIHEHJE_CGEDCIFOJIE_OFFSET UNITYSDK_OFFSET(0x1CAA4FD0)
#define GHMGGIHEHJE_CIDBHAMLAFM_OFFSET UNITYSDK_OFFSET(0x1CAA8E10)
#define GHMGGIHEHJE_CJMAMCABEAL_OFFSET UNITYSDK_OFFSET(0x1CAA5940)
#define GHMGGIHEHJE_CKFNHLGBLID_OFFSET UNITYSDK_OFFSET(0x1CAA8110)
#define GHMGGIHEHJE_CKIDLDKPGAI_OFFSET UNITYSDK_OFFSET(0x1CAA82C0)
#define GHMGGIHEHJE_CPDFBNHHKDG_OFFSET UNITYSDK_OFFSET(0x1CAA2BE0)
#define GHMGGIHEHJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAAB8A0)
#define GHMGGIHEHJE_DFCMGJJOLBJ_OFFSET UNITYSDK_OFFSET(0x1CAA3180)
#define GHMGGIHEHJE_DGKOPKFJGOF_OFFSET UNITYSDK_OFFSET(0x1CAA9910)
#define GHMGGIHEHJE_DLHDMLLFDAC_OFFSET UNITYSDK_OFFSET(0x1CAA8570)
#define GHMGGIHEHJE_DNHJGKKOJJC_OFFSET UNITYSDK_OFFSET(0x1CAAA460)
#define GHMGGIHEHJE_DNILGBILJDP_OFFSET UNITYSDK_OFFSET(0x1CAA2C40)
#define GHMGGIHEHJE_DOKJNFOGDGE_OFFSET UNITYSDK_OFFSET(0x1CAA6230)
#define GHMGGIHEHJE_EADAPEMOEPM_OFFSET UNITYSDK_OFFSET(0x1CAA24F0)
#define GHMGGIHEHJE_EALEIOPBJCM_OFFSET UNITYSDK_OFFSET(0x1CAAB2F0)
#define GHMGGIHEHJE_EBJJJIIEBOC_OFFSET UNITYSDK_OFFSET(0x1CAAB510)
#define GHMGGIHEHJE_EDDNDBKJMFI_OFFSET UNITYSDK_OFFSET(0x1CAA3900)
#define GHMGGIHEHJE_EEOLCMOLLGD_OFFSET UNITYSDK_OFFSET(0x1CAA7590)
#define GHMGGIHEHJE_EHFIOLAILLI_OFFSET UNITYSDK_OFFSET(0x1CAA55F0)
#define GHMGGIHEHJE_EHINHBPJLCN_OFFSET UNITYSDK_OFFSET(0x1CAA4EE0)
#define GHMGGIHEHJE_EJIADBHOJGC_OFFSET UNITYSDK_OFFSET(0x1CAA92B0)
#define GHMGGIHEHJE_EJPGPJDCFDJ_OFFSET UNITYSDK_OFFSET(0x1CAAA950)
#define GHMGGIHEHJE_EKEFPDFCNOM_OFFSET UNITYSDK_OFFSET(0x1CAA49C0)
#define GHMGGIHEHJE_ELMDOGDIJAM_OFFSET UNITYSDK_OFFSET(0x1CAAA350)
#define GHMGGIHEHJE_ELOHKPBAJGJ_OFFSET UNITYSDK_OFFSET(0x1CAAB130)
#define GHMGGIHEHJE_ENMCAPODNGP_OFFSET UNITYSDK_OFFSET(0x1CAAA680)
#define GHMGGIHEHJE_ENNMMFFFKGJ_OFFSET UNITYSDK_OFFSET(0x1CAA9710)
#define GHMGGIHEHJE_FAJPNOJBPPA_OFFSET UNITYSDK_OFFSET(0x1CAA66D0)
#define GHMGGIHEHJE_FCBDPLCGCLL_OFFSET UNITYSDK_OFFSET(0x1CAA6670)
#define GHMGGIHEHJE_FEOCEGMKEHN_OFFSET UNITYSDK_OFFSET(0x1CAAA1E0)
#define GHMGGIHEHJE_FFCCDJGICBC_OFFSET UNITYSDK_OFFSET(0x1CAA31E0)
#define GHMGGIHEHJE_FFGOCENIHJL_OFFSET UNITYSDK_OFFSET(0x1CAAB620)
#define GHMGGIHEHJE_FFNOCEPGNGE_OFFSET UNITYSDK_OFFSET(0x1CAA6480)
#define GHMGGIHEHJE_FHBICNMEGMH_OFFSET UNITYSDK_OFFSET(0x1CAA65C0)
#define GHMGGIHEHJE_FHGGCFKLIDN_OFFSET UNITYSDK_OFFSET(0x1CAA4DF0)
#define GHMGGIHEHJE_FHKGKMNJBKC_OFFSET UNITYSDK_OFFSET(0x1CAAA020)
#define GHMGGIHEHJE_FKAJOGOHEBG_OFFSET UNITYSDK_OFFSET(0x1CAA2380)
#define GHMGGIHEHJE_FKGONBOHBCL_OFFSET UNITYSDK_OFFSET(0x1CAAAEA0)
#define GHMGGIHEHJE_FLMGKDADBBM_OFFSET UNITYSDK_OFFSET(0x1CAA56F0)
#define GHMGGIHEHJE_FMKHDDLPOHB_OFFSET UNITYSDK_OFFSET(0x1CAAA510)
#define GHMGGIHEHJE_FNJHLDIFPPF_OFFSET UNITYSDK_OFFSET(0x1CAAB570)
#define GHMGGIHEHJE_FNMMMJNHKAC_OFFSET UNITYSDK_OFFSET(0x1CAA5C90)
#define GHMGGIHEHJE_FNNCBFOPCFM_OFFSET UNITYSDK_OFFSET(0x1CAA8F10)
#define GHMGGIHEHJE_FOAPJMPCCJH_OFFSET UNITYSDK_OFFSET(0x1CAA8460)
#define GHMGGIHEHJE_FOKFDENMMGD_OFFSET UNITYSDK_OFFSET(0x1CAA2320)
#define GHMGGIHEHJE_GBBFNIEBPNH_OFFSET UNITYSDK_OFFSET(0x1CAAAB70)
#define GHMGGIHEHJE_GBNIBGFNMOG_OFFSET UNITYSDK_OFFSET(0x1CAA8410)
#define GHMGGIHEHJE_GDHBFECOIIM_OFFSET UNITYSDK_OFFSET(0x1CAA9FD0)
#define GHMGGIHEHJE_GEAPIDEPDLL_OFFSET UNITYSDK_OFFSET(0x1CAA9310)
#define GHMGGIHEHJE_GGPBLAKELPC_OFFSET UNITYSDK_OFFSET(0x1CAA2E60)
#define GHMGGIHEHJE_GIOILNGEEBB_OFFSET UNITYSDK_OFFSET(0x1CAA2AE0)
#define GHMGGIHEHJE_GLAEGEKACJG_OFFSET UNITYSDK_OFFSET(0x1CAA50D0)
#define GHMGGIHEHJE_GOBHAKFGBFE_OFFSET UNITYSDK_OFFSET(0x1CAA4CE0)
#define GHMGGIHEHJE_GOCAMFCKNMC_OFFSET UNITYSDK_OFFSET(0x1CAAAF00)
#define GHMGGIHEHJE_GPJPNMNLODF_OFFSET UNITYSDK_OFFSET(0x1CAAB730)
#define GHMGGIHEHJE_HFJCIANDEDP_OFFSET UNITYSDK_OFFSET(0x1CAA8E60)
#define GHMGGIHEHJE_HGBNLPJLOLJ_OFFSET UNITYSDK_OFFSET(0x1CAAAAC0)
#define GHMGGIHEHJE_HKMANABPGJJ_OFFSET UNITYSDK_OFFSET(0x1CAA7530)
#define GHMGGIHEHJE_HKPEMNFCCCP_OFFSET UNITYSDK_OFFSET(0x1CAA5EA0)
#define GHMGGIHEHJE_HLMJPKFMOPI_OFFSET UNITYSDK_OFFSET(0x1CAAA730)
#define GHMGGIHEHJE_HNEIMMFDJEM_OFFSET UNITYSDK_OFFSET(0x1CAAAFB0)
#define GHMGGIHEHJE_HNIPMHOOJHN_OFFSET UNITYSDK_OFFSET(0x1CAA8F70)
#define GHMGGIHEHJE_HOGCEGLGJFK_OFFSET UNITYSDK_OFFSET(0x1CAA5D70)
#define GHMGGIHEHJE_IAAPPGPNBDO_OFFSET UNITYSDK_OFFSET(0x1CAA3ED0)
#define GHMGGIHEHJE_IBHEMAEMDOB_OFFSET UNITYSDK_OFFSET(0x1CAAA840)
#define GHMGGIHEHJE_ICCOIHJGBGJ_OFFSET UNITYSDK_OFFSET(0x1CAA5B80)
#define GHMGGIHEHJE_IDBGGIEEODJ_OFFSET UNITYSDK_OFFSET(0x1CAA42F0)
#define GHMGGIHEHJE_IEKILMAPPOL_OFFSET UNITYSDK_OFFSET(0x1CAA9BB0)
#define GHMGGIHEHJE_IFKFEMJEAJM_OFFSET UNITYSDK_OFFSET(0x1CAAA790)
#define GHMGGIHEHJE_IGEHEPDDJJF_OFFSET UNITYSDK_OFFSET(0x1CAAB680)
#define GHMGGIHEHJE_IJJGOHDADID_OFFSET UNITYSDK_OFFSET(0x1CAA33F0)
#define GHMGGIHEHJE_INPFLCCJPEJ_OFFSET UNITYSDK_OFFSET(0x1CAAA0D0)
#define GHMGGIHEHJE_IOALJODLMOF_OFFSET UNITYSDK_OFFSET(0x1CAA2B30)
#define GHMGGIHEHJE_IPNHECIFGJL_OFFSET UNITYSDK_OFFSET(0x1CAA4290)
#define GHMGGIHEHJE_JAGBDIGGEEM_OFFSET UNITYSDK_OFFSET(0x1CAA26B0)
#define GHMGGIHEHJE_JBCLHHHGKKD_OFFSET UNITYSDK_OFFSET(0x1CAA41E0)
#define GHMGGIHEHJE_JGJABOHGPCM_OFFSET UNITYSDK_OFFSET(0x1CAA5390)
#define GHMGGIHEHJE_JGJKKAMDHPF_OFFSET UNITYSDK_OFFSET(0x1CAAB840)
#define GHMGGIHEHJE_JIBAIEAEOKN_OFFSET UNITYSDK_OFFSET(0x1CAAB1E0)
#define GHMGGIHEHJE_JIOIDGIDBEL_OFFSET UNITYSDK_OFFSET(0x1CAA3B90)
#define GHMGGIHEHJE_JMGFJJMDPKH_OFFSET UNITYSDK_OFFSET(0x1CAA6570)
#define GHMGGIHEHJE_KALDOAAHFNL_OFFSET UNITYSDK_OFFSET(0x1CAA3DD0)
#define GHMGGIHEHJE_KCODNBLGDLG_OFFSET UNITYSDK_OFFSET(0x1CAA5B30)
#define GHMGGIHEHJE_KGIFJEBPDFB_OFFSET UNITYSDK_OFFSET(0x1CAA9610)
#define GHMGGIHEHJE_KJEPLNLONAL_OFFSET UNITYSDK_OFFSET(0x1CAA4060)
#define GHMGGIHEHJE_KKKMNFOKPPI_OFFSET UNITYSDK_OFFSET(0x1CAA4C90)
#define GHMGGIHEHJE_KLCBIJANMMJ_OFFSET UNITYSDK_OFFSET(0x1CAA3700)
#define GHMGGIHEHJE_KLDEPKPEFEN_OFFSET UNITYSDK_OFFSET(0x1CAA4D90)
#define GHMGGIHEHJE_KLHOFPLACEP_OFFSET UNITYSDK_OFFSET(0x1CAA5640)
#define GHMGGIHEHJE_KMEOMJGLCLN_OFFSET UNITYSDK_OFFSET(0x1CAA3F30)
#define GHMGGIHEHJE_KNKIGINCKOO_OFFSET UNITYSDK_OFFSET(0x1CAA9C10)
#define GHMGGIHEHJE_KNLEGBLOJAL_OFFSET UNITYSDK_OFFSET(0x1CAA3CE0)
#define GHMGGIHEHJE_KNPLOFAONJF_OFFSET UNITYSDK_OFFSET(0x1CAA30D0)
#define GHMGGIHEHJE_KOPEAFNGDAK_OFFSET UNITYSDK_OFFSET(0x1CAA2270)
#define GHMGGIHEHJE_LCNHJIGGLKI_OFFSET UNITYSDK_OFFSET(0x1CAAA8A0)
#define GHMGGIHEHJE_LENIFCEDLCL_OFFSET UNITYSDK_OFFSET(0x1CAAB400)
#define GHMGGIHEHJE_LEODFMGDAJP_OFFSET UNITYSDK_OFFSET(0x1CAA7AD0)
#define GHMGGIHEHJE_LEPBHGNEMKE_OFFSET UNITYSDK_OFFSET(0x1CAA2660)
#define GHMGGIHEHJE_LEPMCOBPFGK_OFFSET UNITYSDK_OFFSET(0x1CAA9AB0)
#define GHMGGIHEHJE_LFDMDBNDHLF_OFFSET UNITYSDK_OFFSET(0x1CAA27C0)
#define GHMGGIHEHJE_LFLKLNGNDED_OFFSET UNITYSDK_OFFSET(0x1CAA3AE0)
#define GHMGGIHEHJE_LJPPLADKCAM_OFFSET UNITYSDK_OFFSET(0x1CAA9490)
#define GHMGGIHEHJE_LKHIOAKHGPL_OFFSET UNITYSDK_OFFSET(0x1CAA7480)
#define GHMGGIHEHJE_LLEAPONKDMJ_OFFSET UNITYSDK_OFFSET(0x1CAA8510)
#define GHMGGIHEHJE_LNDNALCIFAP_OFFSET UNITYSDK_OFFSET(0x1CAAA9B0)
#define GHMGGIHEHJE_LNGKMONNCLC_OFFSET UNITYSDK_OFFSET(0x1CAA3600)
#define GHMGGIHEHJE_MIALDCOACIK_OFFSET UNITYSDK_OFFSET(0x1CAAA620)
#define GHMGGIHEHJE_MIMJOINHIHI_OFFSET UNITYSDK_OFFSET(0x1CAA4AD0)
#define GHMGGIHEHJE_MJHHOLPDPCC_OFFSET UNITYSDK_OFFSET(0x1CAA4630)
#define GHMGGIHEHJE_MNABAPBCDPH_OFFSET UNITYSDK_OFFSET(0x1CAA9B00)
#define GHMGGIHEHJE_MOHGOJBAKMH_OFFSET UNITYSDK_OFFSET(0x1CAA9090)
#define GHMGGIHEHJE_NAIEOLPOLDG_OFFSET UNITYSDK_OFFSET(0x1CAA5020)
#define GHMGGIHEHJE_NAPKMGLIGOK_OFFSET UNITYSDK_OFFSET(0x1CAAB0C0)
#define GHMGGIHEHJE_NCPLDDEHHBB_OFFSET UNITYSDK_OFFSET(0x1CAA3080)
#define GHMGGIHEHJE_NJCKOHMFHGB_OFFSET UNITYSDK_OFFSET(0x1CAA5C30)
#define GHMGGIHEHJE_NLLFKMLDIBB_OFFSET UNITYSDK_OFFSET(0x1CAA9200)
#define GHMGGIHEHJE_NOIGALJGGDK_OFFSET UNITYSDK_OFFSET(0x1CAA9DF0)
#define GHMGGIHEHJE_OAHAMGLOMJO_OFFSET UNITYSDK_OFFSET(0x1CAAA130)
#define GHMGGIHEHJE_OAKNBJCOBBP_OFFSET UNITYSDK_OFFSET(0x1CAA89C0)
#define GHMGGIHEHJE_OBPNGFMOJOG_OFFSET UNITYSDK_OFFSET(0x1CAAAA60)
#define GHMGGIHEHJE_OCAHOIPFJNN_OFFSET UNITYSDK_OFFSET(0x1CAA5E50)
#define GHMGGIHEHJE_OCKJALFHPFL_OFFSET UNITYSDK_OFFSET(0x1CAA3650)
#define GHMGGIHEHJE_ODNGPALEBLE_OFFSET UNITYSDK_OFFSET(0x1CAA5FB0)
#define GHMGGIHEHJE_OECEEJAONKH_OFFSET UNITYSDK_OFFSET(0x1CAAB240)
#define GHMGGIHEHJE_OEDOGADDCDA_OFFSET UNITYSDK_OFFSET(0x1CAAB790)
#define GHMGGIHEHJE_OFAKNFCABBL_OFFSET UNITYSDK_OFFSET(0x1CAAB460)
#define GHMGGIHEHJE_OGHPGEGHHOH_OFFSET UNITYSDK_OFFSET(0x1CAA6330)
#define GHMGGIHEHJE_OGKFKDHMPED_OFFSET UNITYSDK_OFFSET(0x1CAAA240)
#define GHMGGIHEHJE_OIDFFGECFJF_OFFSET UNITYSDK_OFFSET(0x1CAA4BB0)
#define GHMGGIHEHJE_OJGIDJHLJEH_OFFSET UNITYSDK_OFFSET(0x1CAA5750)
#define GHMGGIHEHJE_OJNLILHHPLF_OFFSET UNITYSDK_OFFSET(0x1CAA8060)
#define GHMGGIHEHJE_OJOECCNJDEL_OFFSET UNITYSDK_OFFSET(0x1CAA9770)
#define GHMGGIHEHJE_OKJLODNDHLE_OFFSET UNITYSDK_OFFSET(0x1CAAAC80)
#define GHMGGIHEHJE_OLNAGDCFKJB_OFFSET UNITYSDK_OFFSET(0x1CAA3770)
#define GHMGGIHEHJE_PCOAAJOCHAA_OFFSET UNITYSDK_OFFSET(0x1CAA3A90)
#define GHMGGIHEHJE_PDCOHBHKPMO_OFFSET UNITYSDK_OFFSET(0x1CAA60F0)
#define GHMGGIHEHJE_PDDEFCNCCFA_OFFSET UNITYSDK_OFFSET(0x1CAA6D80)
#define GHMGGIHEHJE_PEJNMMHENGL_OFFSET UNITYSDK_OFFSET(0x1CAA9660)
#define GHMGGIHEHJE_PHEMNJKGMDD_OFFSET UNITYSDK_OFFSET(0x1CAA4A70)
#define GHMGGIHEHJE_PKGBONNOPPO_OFFSET UNITYSDK_OFFSET(0x1CAAA400)
#define GHMGGIHEHJE_PKIIGKIAPJA_OFFSET UNITYSDK_OFFSET(0x1CAA6390)
#define GHMGGIHEHJE_PNDHODMOGIM_OFFSET UNITYSDK_OFFSET(0x1CAA4970)
#define GHMGGIHEHJE_POBPBGGLAIB_OFFSET UNITYSDK_OFFSET(0x1CAAAD90)
#define GHMGGIHEHJE_POOOLFMLLOF_OFFSET UNITYSDK_OFFSET(0x1CAA2760)
#define GHMGGIHEHJE_PPNKBCFENNP_OFFSET UNITYSDK_OFFSET(0x1CAA8010)

inline static constexpr unsigned int GHMGGIHEHJE_TypeDefinitionIndex = 42618;

	class GHMGGIHEHJE : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CTOR_OFFSET))(this);
		}

		::MJHPMAOIGPN* KOPEAFNGDAK()
		{
			return ((::MJHPMAOIGPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KOPEAFNGDAK_OFFSET))(this);
		}

		::System::Boolean FOKFDENMMGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FOKFDENMMGD_OFFSET))(this);
		}

		::System::Void FKAJOGOHEBG(::RPG::Client::LittleGame::RoadRash::ECameraMode a1, ::UnityEngine::Transform* a2, ::FGKKEIBIPDL* a3, ::System::Single a4, ::System::Single a5, ::BJHNJIPKPHN a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ECameraMode, ::UnityEngine::Transform*, ::FGKKEIBIPDL*, ::System::Single, ::System::Single, ::BJHNJIPKPHN))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FKAJOGOHEBG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EADAPEMOEPM(::RPG::Client::LittleGame::RoadRash::ECameraMode a1, ::UnityEngine::Transform* a2, ::FGKKEIBIPDL* a3, ::System::Single a4, ::System::Single a5, ::BJHNJIPKPHN a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ECameraMode, ::UnityEngine::Transform*, ::FGKKEIBIPDL*, ::System::Single, ::System::Single, ::BJHNJIPKPHN))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EADAPEMOEPM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LEPBHGNEMKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LEPBHGNEMKE_OFFSET))(this);
		}

		::KKPIINMGOMA* JAGBDIGGEEM()
		{
			return ((::KKPIINMGOMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_JAGBDIGGEEM_OFFSET))(this);
		}

		::System::Boolean POOOLFMLLOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_POOOLFMLLOF_OFFSET))(this);
		}

		::System::Void LFDMDBNDHLF(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LFDMDBNDHLF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void BBGLOFEAAKP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_BBGLOFEAAKP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void GIOILNGEEBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GIOILNGEEBB_OFFSET))(this);
		}

		::CEGFCKKCEHM* IOALJODLMOF()
		{
			return ((::CEGFCKKCEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IOALJODLMOF_OFFSET))(this);
		}

		::System::Boolean CPDFBNHHKDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CPDFBNHHKDG_OFFSET))(this);
		}

		::System::Void DNILGBILJDP(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_DNILGBILJDP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void GGPBLAKELPC(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GGPBLAKELPC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void NCPLDDEHHBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_NCPLDDEHHBB_OFFSET))(this);
		}

		::KEJFFGDKDJL* KNPLOFAONJF()
		{
			return ((::KEJFFGDKDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KNPLOFAONJF_OFFSET))(this);
		}

		::System::Boolean DFCMGJJOLBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_DFCMGJJOLBJ_OFFSET))(this);
		}

		::System::Void FFCCDJGICBC(::UnityEngine::Transform* a1, ::Il2CppArray<::BJIACBNKCCJ*>* a2, ::System::Single a3, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine a4, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>* a5, ::UnityEngine::Bounds a6, ::Il2CppArray<::LIBEBAKBAOM*>* a7, ::Il2CppArray<::HPMECOPBDBE*>* a8, ::Il2CppArray<::PGEMELICKOP*>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::BJIACBNKCCJ*>*, ::System::Single, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>*, ::UnityEngine::Bounds, ::Il2CppArray<::LIBEBAKBAOM*>*, ::Il2CppArray<::HPMECOPBDBE*>*, ::Il2CppArray<::PGEMELICKOP*>*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FFCCDJGICBC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void IJJGOHDADID(::UnityEngine::Transform* a1, ::Il2CppArray<::BJIACBNKCCJ*>* a2, ::System::Single a3, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine a4, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>* a5, ::UnityEngine::Bounds a6, ::Il2CppArray<::LIBEBAKBAOM*>* a7, ::Il2CppArray<::HPMECOPBDBE*>* a8, ::Il2CppArray<::PGEMELICKOP*>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::BJIACBNKCCJ*>*, ::System::Single, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>*, ::UnityEngine::Bounds, ::Il2CppArray<::LIBEBAKBAOM*>*, ::Il2CppArray<::HPMECOPBDBE*>*, ::Il2CppArray<::PGEMELICKOP*>*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IJJGOHDADID_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void LNGKMONNCLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LNGKMONNCLC_OFFSET))(this);
		}

		::IKALAIILPEK* OCKJALFHPFL()
		{
			return ((::IKALAIILPEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OCKJALFHPFL_OFFSET))(this);
		}

		::System::Boolean KLCBIJANMMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KLCBIJANMMJ_OFFSET))(this);
		}

		::System::Void OLNAGDCFKJB(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OLNAGDCFKJB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EDDNDBKJMFI(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EDDNDBKJMFI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void PCOAAJOCHAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PCOAAJOCHAA_OFFSET))(this);
		}

		::DLAPDGELEPN* LFLKLNGNDED()
		{
			return ((::DLAPDGELEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LFLKLNGNDED_OFFSET))(this);
		}

		::System::Boolean JIOIDGIDBEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_JIOIDGIDBEL_OFFSET))(this);
		}

		::System::Void BDCPPBOIDHL(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_BDCPPBOIDHL_OFFSET))(this, a1, a2);
		}

		::System::Void KNLEGBLOJAL(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KNLEGBLOJAL_OFFSET))(this, a1, a2);
		}

		::System::Void KALDOAAHFNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KALDOAAHFNL_OFFSET))(this);
		}

		::JDPOALIDGNK* CEKPHDEINIO()
		{
			return ((::JDPOALIDGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CEKPHDEINIO_OFFSET))(this);
		}

		::System::Boolean IAAPPGPNBDO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IAAPPGPNBDO_OFFSET))(this);
		}

		::System::Void KMEOMJGLCLN(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::List_1<::GHMJNBPDMKL>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::List_1<::GHMJNBPDMKL>*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KMEOMJGLCLN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KJEPLNLONAL(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::List_1<::GHMJNBPDMKL>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::List_1<::GHMJNBPDMKL>*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KJEPLNLONAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BBOHIFAOBAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_BBOHIFAOBAN_OFFSET))(this);
		}

		::BAHEINMHOAC* JBCLHHHGKKD()
		{
			return ((::BAHEINMHOAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_JBCLHHHGKKD_OFFSET))(this);
		}

		::System::Boolean IPNHECIFGJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IPNHECIFGJL_OFFSET))(this);
		}

		::System::Void IDBGGIEEODJ(::System::Boolean a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::Client::LittleGame::RoadRash::EEngineState a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Single a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Boolean a17, ::System::Int32 a18)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IDBGGIEEODJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::System::Void MJHHOLPDPCC(::System::Boolean a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::Client::LittleGame::RoadRash::EEngineState a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Single a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Boolean a17, ::System::Int32 a18)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_MJHHOLPDPCC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::System::Void PNDHODMOGIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PNDHODMOGIM_OFFSET))(this);
		}

		::PLFMKIDHJEB* EKEFPDFCNOM()
		{
			return ((::PLFMKIDHJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EKEFPDFCNOM_OFFSET))(this);
		}

		::System::Boolean PHEMNJKGMDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PHEMNJKGMDD_OFFSET))(this);
		}

		::System::Void MIMJOINHIHI(::DDILGBNCFNM* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DDILGBNCFNM*, ::System::Int32))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_MIMJOINHIHI_OFFSET))(this, a1, a2);
		}

		::System::Void OIDFFGECFJF(::DDILGBNCFNM* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DDILGBNCFNM*, ::System::Int32))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OIDFFGECFJF_OFFSET))(this, a1, a2);
		}

		::System::Void KKKMNFOKPPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KKKMNFOKPPI_OFFSET))(this);
		}

		::EGDNALHEHJD* GOBHAKFGBFE()
		{
			return ((::EGDNALHEHJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GOBHAKFGBFE_OFFSET))(this);
		}

		::System::Boolean KLDEPKPEFEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KLDEPKPEFEN_OFFSET))(this);
		}

		::System::Void FHGGCFKLIDN(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FHGGCFKLIDN_OFFSET))(this, a1, a2);
		}

		::System::Void EHINHBPJLCN(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EHINHBPJLCN_OFFSET))(this, a1, a2);
		}

		::System::Void CGEDCIFOJIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CGEDCIFOJIE_OFFSET))(this);
		}

		::NNJDEIOOHOA* NAIEOLPOLDG()
		{
			return ((::NNJDEIOOHOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_NAIEOLPOLDG_OFFSET))(this);
		}

		::System::Boolean GLAEGEKACJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GLAEGEKACJG_OFFSET))(this);
		}

		::System::Void BENHPKNNIGE(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>* a3, ::ENEIHJJPNPI* a4, ::System::Single a5, ::System::Collections::Generic::SortedSet_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>*, ::ENEIHJJPNPI*, ::System::Single, ::System::Collections::Generic::SortedSet_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_BENHPKNNIGE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void JGJABOHGPCM(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>* a3, ::ENEIHJJPNPI* a4, ::System::Single a5, ::System::Collections::Generic::SortedSet_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>*, ::ENEIHJJPNPI*, ::System::Single, ::System::Collections::Generic::SortedSet_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_JGJABOHGPCM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void EHFIOLAILLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EHFIOLAILLI_OFFSET))(this);
		}

		::NFKBBGEFJIN* KLHOFPLACEP()
		{
			return ((::NFKBBGEFJIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KLHOFPLACEP_OFFSET))(this);
		}

		::System::Boolean FLMGKDADBBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FLMGKDADBBM_OFFSET))(this);
		}

		::System::Void OJGIDJHLJEH(::CNCNFGFMKLN* a1, ::CNCNFGFMKLN* a2, ::CNCNFGFMKLN* a3, ::CNCNFGFMKLN* a4, ::CNCNFGFMKLN* a5, ::CNCNFGFMKLN* a6, ::CNCNFGFMKLN* a7, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a8, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a9, ::Il2CppArray<::RPG::GameCore::RoadRashGameModifierConfig*>* a10)
		{
			return ((::System::Void(*)(::PVOID, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::Il2CppArray<::RPG::GameCore::RoadRashGameModifierConfig*>*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OJGIDJHLJEH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void CJMAMCABEAL(::CNCNFGFMKLN* a1, ::CNCNFGFMKLN* a2, ::CNCNFGFMKLN* a3, ::CNCNFGFMKLN* a4, ::CNCNFGFMKLN* a5, ::CNCNFGFMKLN* a6, ::CNCNFGFMKLN* a7, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a8, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a9, ::Il2CppArray<::RPG::GameCore::RoadRashGameModifierConfig*>* a10)
		{
			return ((::System::Void(*)(::PVOID, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::CNCNFGFMKLN*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::Il2CppArray<::RPG::GameCore::RoadRashGameModifierConfig*>*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CJMAMCABEAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void KCODNBLGDLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KCODNBLGDLG_OFFSET))(this);
		}

		::OEAJBKAIPKB* ICCOIHJGBGJ()
		{
			return ((::OEAJBKAIPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_ICCOIHJGBGJ_OFFSET))(this);
		}

		::System::Boolean NJCKOHMFHGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_NJCKOHMFHGB_OFFSET))(this);
		}

		::System::Void FNMMMJNHKAC(::OADEJAABALE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OADEJAABALE*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FNMMMJNHKAC_OFFSET))(this, a1);
		}

		::System::Void HOGCEGLGJFK(::OADEJAABALE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OADEJAABALE*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_HOGCEGLGJFK_OFFSET))(this, a1);
		}

		::System::Void OCAHOIPFJNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OCAHOIPFJNN_OFFSET))(this);
		}

		::HIEJMKLPBFC* HKPEMNFCCCP()
		{
			return ((::HIEJMKLPBFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_HKPEMNFCCCP_OFFSET))(this);
		}

		::System::Boolean BBAGJNNGAHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_BBAGJNNGAHL_OFFSET))(this);
		}

		::System::Void ODNGPALEBLE(::RPG::Client::LittleGame::RoadRash::AICarRuntimeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::AICarRuntimeState))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_ODNGPALEBLE_OFFSET))(this, a1);
		}

		::System::Void PDCOHBHKPMO(::RPG::Client::LittleGame::RoadRash::AICarRuntimeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::AICarRuntimeState))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PDCOHBHKPMO_OFFSET))(this, a1);
		}

		::System::Void DOKJNFOGDGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_DOKJNFOGDGE_OFFSET))(this);
		}

		::NLJPKPAIILH* CBMMGBFNJOJ()
		{
			return ((::NLJPKPAIILH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CBMMGBFNJOJ_OFFSET))(this);
		}

		::System::Boolean OGHPGEGHHOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OGHPGEGHHOH_OFFSET))(this);
		}

		::System::Void PKIIGKIAPJA(::UnityEngine::Rigidbody* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PKIIGKIAPJA_OFFSET))(this, a1, a2);
		}

		::System::Void FFNOCEPGNGE(::UnityEngine::Rigidbody* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FFNOCEPGNGE_OFFSET))(this, a1, a2);
		}

		::System::Void JMGFJJMDPKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_JMGFJJMDPKH_OFFSET))(this);
		}

		::FNFGDHDIHHM* FHBICNMEGMH()
		{
			return ((::FNFGDHDIHHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FHBICNMEGMH_OFFSET))(this);
		}

		::System::Boolean FCBDPLCGCLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FCBDPLCGCLL_OFFSET))(this);
		}

		::System::Void FAJPNOJBPPA(::System::UInt32 a1, ::System::UInt32 a2, ::System::IDisposable* a3, ::System::UInt32 a4, ::System::Single a5, ::System::Boolean a6, ::System::Single a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::UInt32 a11, ::System::UInt32 a12, ::UnityEngine::Component* a13, ::UnityEngine::Component* a14, ::UnityEngine::Component* a15, ::System::UInt32 a16, ::System::UInt32 a17, ::System::UInt32 a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Single a21, ::Il2CppArray<::System::UInt32>* a22, ::System::UInt32 a23, ::UnityEngine::Animator* a24, ::System::Int32 a25, ::System::UInt32 a26, ::UnityEngine::Animator* a27, ::RPG::Client::LittleGame::RoadRash::RoadRashBlueFireSource a28, ::System::Boolean a29, ::System::Single a30, ::System::Collections::Generic::List_1<::GILFCOGNOCB*>* a31, ::System::UInt32 a32, ::System::Int32 a33, ::System::UInt32 a34, ::System::Single a35, ::System::UInt32 a36, ::System::Single a37, ::KIEKDHMNFFK* a38)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IDisposable*, ::System::UInt32, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::UnityEngine::Component*, ::UnityEngine::Component*, ::UnityEngine::Component*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::UnityEngine::Animator*, ::System::Int32, ::System::UInt32, ::UnityEngine::Animator*, ::RPG::Client::LittleGame::RoadRash::RoadRashBlueFireSource, ::System::Boolean, ::System::Single, ::System::Collections::Generic::List_1<::GILFCOGNOCB*>*, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Single, ::KIEKDHMNFFK*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FAJPNOJBPPA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38);
		}

		::System::Void PDDEFCNCCFA(::System::UInt32 a1, ::System::UInt32 a2, ::System::IDisposable* a3, ::System::UInt32 a4, ::System::Single a5, ::System::Boolean a6, ::System::Single a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::UInt32 a11, ::System::UInt32 a12, ::UnityEngine::Component* a13, ::UnityEngine::Component* a14, ::UnityEngine::Component* a15, ::System::UInt32 a16, ::System::UInt32 a17, ::System::UInt32 a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Single a21, ::Il2CppArray<::System::UInt32>* a22, ::System::UInt32 a23, ::UnityEngine::Animator* a24, ::System::Int32 a25, ::System::UInt32 a26, ::UnityEngine::Animator* a27, ::RPG::Client::LittleGame::RoadRash::RoadRashBlueFireSource a28, ::System::Boolean a29, ::System::Single a30, ::System::Collections::Generic::List_1<::GILFCOGNOCB*>* a31, ::System::UInt32 a32, ::System::Int32 a33, ::System::UInt32 a34, ::System::Single a35, ::System::UInt32 a36, ::System::Single a37, ::KIEKDHMNFFK* a38)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IDisposable*, ::System::UInt32, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::UnityEngine::Component*, ::UnityEngine::Component*, ::UnityEngine::Component*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::UnityEngine::Animator*, ::System::Int32, ::System::UInt32, ::UnityEngine::Animator*, ::RPG::Client::LittleGame::RoadRash::RoadRashBlueFireSource, ::System::Boolean, ::System::Single, ::System::Collections::Generic::List_1<::GILFCOGNOCB*>*, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Single, ::KIEKDHMNFFK*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PDDEFCNCCFA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38);
		}

		::System::Void AEFIALALGBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_AEFIALALGBJ_OFFSET))(this);
		}

		::NAJMEPONCEL* LKHIOAKHGPL()
		{
			return ((::NAJMEPONCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LKHIOAKHGPL_OFFSET))(this);
		}

		::System::Boolean HKMANABPGJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_HKMANABPGJJ_OFFSET))(this);
		}

		::System::Void EEOLCMOLLGD(::RPG::Client::LittleGame::RoadRash::EEngineState a1, ::AFEBAJLJMMK* a2, ::AFEBAJLJMMK* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Single a14, ::System::Single a15, ::System::Single a16, ::System::Single a17, ::System::Single a18, ::RPG::Client::LittleGame::RoadRash::EngineCurves a19, ::UnityEngine::Vector3 a20, ::System::Single a21, ::System::Single a22, ::System::Single a23)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::AFEBAJLJMMK*, ::AFEBAJLJMMK*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EngineCurves, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EEOLCMOLLGD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
		}

		::System::Void LEODFMGDAJP(::RPG::Client::LittleGame::RoadRash::EEngineState a1, ::AFEBAJLJMMK* a2, ::AFEBAJLJMMK* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Single a14, ::System::Single a15, ::System::Single a16, ::System::Single a17, ::System::Single a18, ::RPG::Client::LittleGame::RoadRash::EngineCurves a19, ::UnityEngine::Vector3 a20, ::System::Single a21, ::System::Single a22, ::System::Single a23)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::AFEBAJLJMMK*, ::AFEBAJLJMMK*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EngineCurves, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LEODFMGDAJP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
		}

		::System::Void PPNKBCFENNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PPNKBCFENNP_OFFSET))(this);
		}

		::JOMHKKNICMN* OJNLILHHPLF()
		{
			return ((::JOMHKKNICMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OJNLILHHPLF_OFFSET))(this);
		}

		::System::Boolean CKFNHLGBLID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CKFNHLGBLID_OFFSET))(this);
		}

		::System::Void AJGCDBJENID(::System::Single a1, ::EPCHCFOEJNL a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::EPCHCFOEJNL))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_AJGCDBJENID_OFFSET))(this, a1, a2);
		}

		::System::Void CKIDLDKPGAI(::System::Single a1, ::EPCHCFOEJNL a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::EPCHCFOEJNL))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CKIDLDKPGAI_OFFSET))(this, a1, a2);
		}

		::System::Void GBNIBGFNMOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GBNIBGFNMOG_OFFSET))(this);
		}

		::LJAIOGHEIBA* FOAPJMPCCJH()
		{
			return ((::LJAIOGHEIBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FOAPJMPCCJH_OFFSET))(this);
		}

		::System::Boolean LLEAPONKDMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LLEAPONKDMJ_OFFSET))(this);
		}

		::System::Void DLHDMLLFDAC(::System::Single a1, ::System::Single a2, ::System::Collections::Generic::List_1<::ILLGBAOOJNL*>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Single a6, ::System::Collections::Generic::List_1<::GOCDHLDEGEJ*>* a7, ::RPG::Client::LittleGame::RoadRash::EImpactForbidReason a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Boolean a15, ::System::Single a16, ::System::Single a17, ::System::Single a18, ::System::Single a19, ::System::Boolean a20, ::System::Single a21, ::System::Single a22)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::ILLGBAOOJNL*>*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::GOCDHLDEGEJ*>*, ::RPG::Client::LittleGame::RoadRash::EImpactForbidReason, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_DLHDMLLFDAC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
		}

		::System::Void OAKNBJCOBBP(::System::Single a1, ::System::Single a2, ::System::Collections::Generic::List_1<::ILLGBAOOJNL*>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Single a6, ::System::Collections::Generic::List_1<::GOCDHLDEGEJ*>* a7, ::RPG::Client::LittleGame::RoadRash::EImpactForbidReason a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Boolean a15, ::System::Single a16, ::System::Single a17, ::System::Single a18, ::System::Single a19, ::System::Boolean a20, ::System::Single a21, ::System::Single a22)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::ILLGBAOOJNL*>*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::GOCDHLDEGEJ*>*, ::RPG::Client::LittleGame::RoadRash::EImpactForbidReason, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OAKNBJCOBBP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
		}

		::System::Void CIDBHAMLAFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_CIDBHAMLAFM_OFFSET))(this);
		}

		::ABODKGPJMLO* HFJCIANDEDP()
		{
			return ((::ABODKGPJMLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_HFJCIANDEDP_OFFSET))(this);
		}

		::System::Boolean FNNCBFOPCFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FNNCBFOPCFM_OFFSET))(this);
		}

		::System::Void HNIPMHOOJHN(::CCLFKMFJLPB* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::CCLFKMFJLPB*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_HNIPMHOOJHN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MOHGOJBAKMH(::CCLFKMFJLPB* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::CCLFKMFJLPB*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_MOHGOJBAKMH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BPNKFPAEDIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_BPNKFPAEDIP_OFFSET))(this);
		}

		::NGCFJDEBCGH* NLLFKMLDIBB()
		{
			return ((::NGCFJDEBCGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_NLLFKMLDIBB_OFFSET))(this);
		}

		::System::Boolean EJIADBHOJGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EJIADBHOJGC_OFFSET))(this);
		}

		::System::Void GEAPIDEPDLL(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::LittleGame::RoadRash::ProjectileParams a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::LittleGame::RoadRash::ProjectileParams, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GEAPIDEPDLL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LJPPLADKCAM(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::LittleGame::RoadRash::ProjectileParams a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::LittleGame::RoadRash::ProjectileParams, ::System::Boolean))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LJPPLADKCAM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KGIFJEBPDFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KGIFJEBPDFB_OFFSET))(this);
		}

		::LGJACOFLLHN* PEJNMMHENGL()
		{
			return ((::LGJACOFLLHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PEJNMMHENGL_OFFSET))(this);
		}

		::System::Boolean ENNMMFFFKGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_ENNMMFFFKGJ_OFFSET))(this);
		}

		::System::Void OJOECCNJDEL(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OJOECCNJDEL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DGKOPKFJGOF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_DGKOPKFJGOF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LEPMCOBPFGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LEPMCOBPFGK_OFFSET))(this);
		}

		::CKHFKFPPANI* MNABAPBCDPH()
		{
			return ((::CKHFKFPPANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_MNABAPBCDPH_OFFSET))(this);
		}

		::System::Boolean IEKILMAPPOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IEKILMAPPOL_OFFSET))(this);
		}

		::System::Void KNKIGINCKOO(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Transform* a7)
		{
			return ((::System::Void(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_KNKIGINCKOO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void NOIGALJGGDK(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Transform* a7)
		{
			return ((::System::Void(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_NOIGALJGGDK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GDHBFECOIIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GDHBFECOIIM_OFFSET))(this);
		}

		::PLFMKIDHJEB* FHKGKMNJBKC()
		{
			return ((::PLFMKIDHJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FHKGKMNJBKC_OFFSET))(this);
		}

		::System::Boolean INPFLCCJPEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_INPFLCCJPEJ_OFFSET))(this);
		}

		::EGDNALHEHJD* OAHAMGLOMJO()
		{
			return ((::EGDNALHEHJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OAHAMGLOMJO_OFFSET))(this);
		}

		::System::Boolean FEOCEGMKEHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FEOCEGMKEHN_OFFSET))(this);
		}

		::NNJDEIOOHOA* OGKFKDHMPED()
		{
			return ((::NNJDEIOOHOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OGKFKDHMPED_OFFSET))(this);
		}

		::System::Boolean ADPIEAANLEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_ADPIEAANLEI_OFFSET))(this);
		}

		::NFKBBGEFJIN* ELMDOGDIJAM()
		{
			return ((::NFKBBGEFJIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_ELMDOGDIJAM_OFFSET))(this);
		}

		::System::Boolean PKGBONNOPPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_PKGBONNOPPO_OFFSET))(this);
		}

		::OEAJBKAIPKB* DNHJGKKOJJC()
		{
			return ((::OEAJBKAIPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_DNHJGKKOJJC_OFFSET))(this);
		}

		::System::Boolean FMKHDDLPOHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FMKHDDLPOHB_OFFSET))(this);
		}

		::MJHPMAOIGPN* BEOBOEPOAFO()
		{
			return ((::MJHPMAOIGPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_BEOBOEPOAFO_OFFSET))(this);
		}

		::System::Boolean MIALDCOACIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_MIALDCOACIK_OFFSET))(this);
		}

		::FNFGDHDIHHM* ENMCAPODNGP()
		{
			return ((::FNFGDHDIHHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_ENMCAPODNGP_OFFSET))(this);
		}

		::System::Boolean HLMJPKFMOPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_HLMJPKFMOPI_OFFSET))(this);
		}

		::HIEJMKLPBFC* IFKFEMJEAJM()
		{
			return ((::HIEJMKLPBFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IFKFEMJEAJM_OFFSET))(this);
		}

		::System::Boolean IBHEMAEMDOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IBHEMAEMDOB_OFFSET))(this);
		}

		::NLJPKPAIILH* LCNHJIGGLKI()
		{
			return ((::NLJPKPAIILH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LCNHJIGGLKI_OFFSET))(this);
		}

		::System::Boolean EJPGPJDCFDJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EJPGPJDCFDJ_OFFSET))(this);
		}

		::NAJMEPONCEL* LNDNALCIFAP()
		{
			return ((::NAJMEPONCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LNDNALCIFAP_OFFSET))(this);
		}

		::System::Boolean OBPNGFMOJOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OBPNGFMOJOG_OFFSET))(this);
		}

		::JOMHKKNICMN* HGBNLPJLOLJ()
		{
			return ((::JOMHKKNICMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_HGBNLPJLOLJ_OFFSET))(this);
		}

		::System::Boolean GBBFNIEBPNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GBBFNIEBPNH_OFFSET))(this);
		}

		::LJAIOGHEIBA* APIHLNMLAJG()
		{
			return ((::LJAIOGHEIBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_APIHLNMLAJG_OFFSET))(this);
		}

		::System::Boolean OKJLODNDHLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OKJLODNDHLE_OFFSET))(this);
		}

		::KKPIINMGOMA* AAMPILKFOAM()
		{
			return ((::KKPIINMGOMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_AAMPILKFOAM_OFFSET))(this);
		}

		::System::Boolean POBPBGGLAIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_POBPBGGLAIB_OFFSET))(this);
		}

		::CEGFCKKCEHM* AFMFBBFLKBD()
		{
			return ((::CEGFCKKCEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_AFMFBBFLKBD_OFFSET))(this);
		}

		::System::Boolean FKGONBOHBCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FKGONBOHBCL_OFFSET))(this);
		}

		::KEJFFGDKDJL* GOCAMFCKNMC()
		{
			return ((::KEJFFGDKDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GOCAMFCKNMC_OFFSET))(this);
		}

		::System::Boolean HNEIMMFDJEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_HNEIMMFDJEM_OFFSET))(this);
		}

		::IKALAIILPEK* AIBPDNOHHMD()
		{
			return ((::IKALAIILPEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_AIBPDNOHHMD_OFFSET))(this);
		}

		::System::Boolean NAPKMGLIGOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_NAPKMGLIGOK_OFFSET))(this);
		}

		::ABODKGPJMLO* ELOHKPBAJGJ()
		{
			return ((::ABODKGPJMLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_ELOHKPBAJGJ_OFFSET))(this);
		}

		::System::Boolean JIBAIEAEOKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_JIBAIEAEOKN_OFFSET))(this);
		}

		::DLAPDGELEPN* OECEEJAONKH()
		{
			return ((::DLAPDGELEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OECEEJAONKH_OFFSET))(this);
		}

		::System::Boolean EALEIOPBJCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EALEIOPBJCM_OFFSET))(this);
		}

		::NGCFJDEBCGH* AHPIEBCHAHM()
		{
			return ((::NGCFJDEBCGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_AHPIEBCHAHM_OFFSET))(this);
		}

		::System::Boolean LENIFCEDLCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_LENIFCEDLCL_OFFSET))(this);
		}

		::LGJACOFLLHN* OFAKNFCABBL()
		{
			return ((::LGJACOFLLHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OFAKNFCABBL_OFFSET))(this);
		}

		::System::Boolean EBJJJIIEBOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_EBJJJIIEBOC_OFFSET))(this);
		}

		::CKHFKFPPANI* FNJHLDIFPPF()
		{
			return ((::CKHFKFPPANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FNJHLDIFPPF_OFFSET))(this);
		}

		::System::Boolean FFGOCENIHJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_FFGOCENIHJL_OFFSET))(this);
		}

		::JDPOALIDGNK* IGEHEPDDJJF()
		{
			return ((::JDPOALIDGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_IGEHEPDDJJF_OFFSET))(this);
		}

		::System::Boolean GPJPNMNLODF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_GPJPNMNLODF_OFFSET))(this);
		}

		::BAHEINMHOAC* OEDOGADDCDA()
		{
			return ((::BAHEINMHOAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_OEDOGADDCDA_OFFSET))(this);
		}

		::System::Boolean JGJKKAMDHPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMGGIHEHJE_JGJKKAMDHPF_OFFSET))(this);
		}

	};
