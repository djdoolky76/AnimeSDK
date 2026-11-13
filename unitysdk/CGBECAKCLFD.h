#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/RoadRashGameHitSource.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EAIBehindBehavior.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EImpactForbidReason.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EImpactType.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EKnockUpDirection.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashBlueFireSource.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_FallingLandingQTEConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_ImpactEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_SlamLateralImpactConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
#include "unitysdk/RPG/Client/RoadRash/MonoEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/MonoSpeedEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashObstacleImpactVisualOverrideConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashObstaclePhysicsImpactConfig.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BEGILENIHBD;
class BJIACBNKCCJ;
class CKHFKFPPANI;
class CNCNFGFMKLN;
class DHAGPJEEPCI;
class FNFGDHDIHHM;
class GHMGGIHEHJE;
class GILFCOGNOCB;
class GMAGAHGCOFD;
class JIJBCGDANLJ;
class KBFKLMMIPLI;
class KGAKDFCNDPH;
class KLOFEMFBAIN;
class KPDKCEAFBHI;
class LJAIOGHEIBA;
class MONJFDPKFBA;
class NAJMEPONCEL;
class NFDMOPAMCMA;
class NFKBBGEFJIN;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginCharaOverlayMatBase; }
namespace RPG::Client { class RoadRashGameAbility_Charging; }
namespace RPG::Client { class RoadRashGameAbility_FireProjectileCast; }
namespace RPG::Client { class RoadRashGameAbility_ReleaseCharging; }
namespace RPG::Client { class RoadRashGameAbility_Slam; }
namespace RPG::Client { class RoadRashGameAbility_SlamCast; }
namespace RPG::Client { class RoadRashGameAbility_Ultimate; }
namespace RPG::Client { class RoadRashGameAbility_UltimateV2; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameCar; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameProjectile; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure_AICarConfig; }
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CGBECAKCLFD_ADFLCJKOEDF_OFFSET UNITYSDK_OFFSET(0x17858230)
#define CGBECAKCLFD_AGDGFEAGFJL_OFFSET UNITYSDK_OFFSET(0x1784EEE0)
#define CGBECAKCLFD_AHLCPBDCKAE_OFFSET UNITYSDK_OFFSET(0x17840ED0)
#define CGBECAKCLFD_AHOOIBDHCJM_OFFSET UNITYSDK_OFFSET(0x17845BB0)
#define CGBECAKCLFD_AJLJLGFEHOA_OFFSET UNITYSDK_OFFSET(0x17858C60)
#define CGBECAKCLFD_AKBDABODKAK_OFFSET UNITYSDK_OFFSET(0x17852040)
#define CGBECAKCLFD_AODGAFADCAA_OFFSET UNITYSDK_OFFSET(0x17845480)
#define CGBECAKCLFD_AOKBCEPBGPE_OFFSET UNITYSDK_OFFSET(0x17842140)
#define CGBECAKCLFD_APEOECFPDOO_OFFSET UNITYSDK_OFFSET(0x17842CC0)
#define CGBECAKCLFD_BABGADEHKID_OFFSET UNITYSDK_OFFSET(0x1783F050)
#define CGBECAKCLFD_BALLPMOEPDE_OFFSET UNITYSDK_OFFSET(0x1784EB90)
#define CGBECAKCLFD_BCCKDLIGGIK_OFFSET UNITYSDK_OFFSET(0x17843B70)
#define CGBECAKCLFD_BCKEONIKNLD_OFFSET UNITYSDK_OFFSET(0x17841E50)
#define CGBECAKCLFD_BGEBEKMJIPD_1_OFFSET UNITYSDK_OFFSET(0x178430A0)
#define CGBECAKCLFD_BGEBEKMJIPD_OFFSET UNITYSDK_OFFSET(0x17840A30)
#define CGBECAKCLFD_BHHFBIENPPB_OFFSET UNITYSDK_OFFSET(0x1784C900)
#define CGBECAKCLFD_BIIDPLDLKKD_OFFSET UNITYSDK_OFFSET(0x1784D7B0)
#define CGBECAKCLFD_BJBKFBOOHOD_OFFSET UNITYSDK_OFFSET(0x1783EB80)
#define CGBECAKCLFD_BJOKAMLKABM_OFFSET UNITYSDK_OFFSET(0x17844F40)
#define CGBECAKCLFD_BJOPKGBIECB_OFFSET UNITYSDK_OFFSET(0x1784A7F0)
#define CGBECAKCLFD_BKELBLPDNGN_OFFSET UNITYSDK_OFFSET(0x178414C0)
#define CGBECAKCLFD_BKJGJLEEBJH_OFFSET UNITYSDK_OFFSET(0x1783D920)
#define CGBECAKCLFD_BLGGKACJHLD_OFFSET UNITYSDK_OFFSET(0x178522B0)
#define CGBECAKCLFD_BMNHEMBLJBG_OFFSET UNITYSDK_OFFSET(0x17858280)
#define CGBECAKCLFD_BNBDJCPLNJE_OFFSET UNITYSDK_OFFSET(0x178503F0)
#define CGBECAKCLFD_BOBNEBGJNGB_OFFSET UNITYSDK_OFFSET(0x17847700)
#define CGBECAKCLFD_CALBHJOGBGI_OFFSET UNITYSDK_OFFSET(0x17855630)
#define CGBECAKCLFD_CBJMBFBEMMC_OFFSET UNITYSDK_OFFSET(0x17853520)
#define CGBECAKCLFD_CDEDLIFFGLE_1_OFFSET UNITYSDK_OFFSET(0x17858450)
#define CGBECAKCLFD_CDEDLIFFGLE_OFFSET UNITYSDK_OFFSET(0x17825920)
#define CGBECAKCLFD_CDJGCNIPBHC_OFFSET UNITYSDK_OFFSET(0x1783A3D0)
#define CGBECAKCLFD_CFOADFAOMBK_OFFSET UNITYSDK_OFFSET(0x17851BE0)
#define CGBECAKCLFD_CGJIKJFBGFE_OFFSET UNITYSDK_OFFSET(0x1784AD80)
#define CGBECAKCLFD_CHIHGEPPDCD_OFFSET UNITYSDK_OFFSET(0x17852C30)
#define CGBECAKCLFD_CIFHAHFLBKO_OFFSET UNITYSDK_OFFSET(0x1784C6F0)
#define CGBECAKCLFD_CKDBCGAOOAD_OFFSET UNITYSDK_OFFSET(0x178420C0)
#define CGBECAKCLFD_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0x1783CF70)
#define CGBECAKCLFD_CTOR_OFFSET UNITYSDK_OFFSET(0x17839590)
#define CGBECAKCLFD_DAGNGBGDMNC_OFFSET UNITYSDK_OFFSET(0x17851A10)
#define CGBECAKCLFD_DBLNFGCFFCB_OFFSET UNITYSDK_OFFSET(0x178470E0)
#define CGBECAKCLFD_DDLMCENINHC_OFFSET UNITYSDK_OFFSET(0x17844890)
#define CGBECAKCLFD_DGJIGNFJCKF_OFFSET UNITYSDK_OFFSET(0x178423C0)
#define CGBECAKCLFD_DHFADFFMIIN_OFFSET UNITYSDK_OFFSET(0x1783CF10)
#define CGBECAKCLFD_DHKKDABPNFA_OFFSET UNITYSDK_OFFSET(0x17845CB0)
#define CGBECAKCLFD_DHLEPKAFOCM_OFFSET UNITYSDK_OFFSET(0x17851410)
#define CGBECAKCLFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17839710)
#define CGBECAKCLFD_EAAOBCLJFOD_OFFSET UNITYSDK_OFFSET(0x17849A10)
#define CGBECAKCLFD_EBCOPHIGDPA_OFFSET UNITYSDK_OFFSET(0x17843260)
#define CGBECAKCLFD_ECCEMBIIJPF_OFFSET UNITYSDK_OFFSET(0x17855AC0)
#define CGBECAKCLFD_EDACFEDDENH_OFFSET UNITYSDK_OFFSET(0x17826D00)
#define CGBECAKCLFD_EDOPNNCJNOP_OFFSET UNITYSDK_OFFSET(0x17858C90)
#define CGBECAKCLFD_EHGKGBKJJDG_OFFSET UNITYSDK_OFFSET(0x17858C80)
#define CGBECAKCLFD_ENKPPCEGLNA_OFFSET UNITYSDK_OFFSET(0x17850940)
#define CGBECAKCLFD_FBKAELKHFOM_OFFSET UNITYSDK_OFFSET(0x178417F0)
#define CGBECAKCLFD_FELCDIMNBID_OFFSET UNITYSDK_OFFSET(0x17841CA0)
#define CGBECAKCLFD_FFBACHCFFCJ_OFFSET UNITYSDK_OFFSET(0x17840BA0)
#define CGBECAKCLFD_FGANFGJHHPP_OFFSET UNITYSDK_OFFSET(0x17841540)
#define CGBECAKCLFD_FGNEABJLFOH_OFFSET UNITYSDK_OFFSET(0x17844B20)
#define CGBECAKCLFD_FHJBDBNPPBA_OFFSET UNITYSDK_OFFSET(0x1783FC40)
#define CGBECAKCLFD_FIDPPIFFDGA_OFFSET UNITYSDK_OFFSET(0x17848C20)
#define CGBECAKCLFD_FJFHNPCDMAL_OFFSET UNITYSDK_OFFSET(0x17845260)
#define CGBECAKCLFD_FKNFLCHFPFP_OFFSET UNITYSDK_OFFSET(0x178545A0)
#define CGBECAKCLFD_FNJHBBGKDPG_OFFSET UNITYSDK_OFFSET(0x17854460)
#define CGBECAKCLFD_FNJHMLMMNAG_OFFSET UNITYSDK_OFFSET(0x1784A340)
#define CGBECAKCLFD_FNLGBGNMKLF_OFFSET UNITYSDK_OFFSET(0x17850C70)
#define CGBECAKCLFD_FOODMKNBJPH_OFFSET UNITYSDK_OFFSET(0x1784A570)
#define CGBECAKCLFD_GBHNGLKGFBF_OFFSET UNITYSDK_OFFSET(0x1783E7E0)
#define CGBECAKCLFD_GECMIFLKIAH_OFFSET UNITYSDK_OFFSET(0x17846AC0)
#define CGBECAKCLFD_GFCCGINPKAJ_OFFSET UNITYSDK_OFFSET(0x1783EDE0)
#define CGBECAKCLFD_GFCMFODMAPF_OFFSET UNITYSDK_OFFSET(0x1783EAE0)
#define CGBECAKCLFD_GIPNFPMDFGJ_OFFSET UNITYSDK_OFFSET(0x1783E870)
#define CGBECAKCLFD_GJDBKGHBNOP_OFFSET UNITYSDK_OFFSET(0x1783B790)
#define CGBECAKCLFD_GLIMCHGCCEK_OFFSET UNITYSDK_OFFSET(0x17856660)
#define CGBECAKCLFD_GPKKCGLAFJF_OFFSET UNITYSDK_OFFSET(0x17847D80)
#define CGBECAKCLFD_HBKLKBJOFGG_OFFSET UNITYSDK_OFFSET(0x17826620)
#define CGBECAKCLFD_HBOOCDDHGCB_OFFSET UNITYSDK_OFFSET(0x17843AC0)
#define CGBECAKCLFD_HCPJAKGNBCH_OFFSET UNITYSDK_OFFSET(0x178421C0)
#define CGBECAKCLFD_HGPCHCIALCG_OFFSET UNITYSDK_OFFSET(0x1783B6E0)
#define CGBECAKCLFD_HKLDKBCJLEA_OFFSET UNITYSDK_OFFSET(0x17852BA0)
#define CGBECAKCLFD_HNALMLNOOCC_OFFSET UNITYSDK_OFFSET(0x17849DA0)
#define CGBECAKCLFD_ICANIKHCBPG_OFFSET UNITYSDK_OFFSET(0x17848640)
#define CGBECAKCLFD_IDADAOPFKFK_OFFSET UNITYSDK_OFFSET(0x17856D40)
#define CGBECAKCLFD_IDKAABDFFKE_OFFSET UNITYSDK_OFFSET(0x17840E50)
#define CGBECAKCLFD_IDNJBOBIJGA_OFFSET UNITYSDK_OFFSET(0x1784EAE0)
#define CGBECAKCLFD_IEDHECEKDLN_OFFSET UNITYSDK_OFFSET(0x17850030)
#define CGBECAKCLFD_IGABHJCCOLK_OFFSET UNITYSDK_OFFSET(0x17844E00)
#define CGBECAKCLFD_IKALJMIIKDI_OFFSET UNITYSDK_OFFSET(0x17852770)
#define CGBECAKCLFD_ILLFLMDDMBK_OFFSET UNITYSDK_OFFSET(0x178494F0)
#define CGBECAKCLFD_IMCAOGGKKEA_OFFSET UNITYSDK_OFFSET(0x17842690)
#define CGBECAKCLFD_JAEHMBANHMB_OFFSET UNITYSDK_OFFSET(0x17843950)
#define CGBECAKCLFD_JBEBCEMJHLI_OFFSET UNITYSDK_OFFSET(0x17850630)
#define CGBECAKCLFD_JBKGMOOGPKJ_OFFSET UNITYSDK_OFFSET(0x1783D020)
#define CGBECAKCLFD_JDACDMALOFM_OFFSET UNITYSDK_OFFSET(0x17848F10)
#define CGBECAKCLFD_JEEGMGNPNLO_OFFSET UNITYSDK_OFFSET(0x1783F640)
#define CGBECAKCLFD_JEFAMBFCBBC_OFFSET UNITYSDK_OFFSET(0x17850D60)
#define CGBECAKCLFD_JFBMGIAOJBF_OFFSET UNITYSDK_OFFSET(0x1783D2C0)
#define CGBECAKCLFD_JFLNOKMLPOJ_OFFSET UNITYSDK_OFFSET(0x1784D0E0)
#define CGBECAKCLFD_JHDKOCLKADN_1_OFFSET UNITYSDK_OFFSET(0x1783EF00)
#define CGBECAKCLFD_JHDKOCLKADN_OFFSET UNITYSDK_OFFSET(0x1783C4B0)
#define CGBECAKCLFD_JIDLGGFLAAE_OFFSET UNITYSDK_OFFSET(0x178473E0)
#define CGBECAKCLFD_JJFNKIKMLEL_OFFSET UNITYSDK_OFFSET(0x178547B0)
#define CGBECAKCLFD_JKFILHIMGIM_OFFSET UNITYSDK_OFFSET(0x178464A0)
#define CGBECAKCLFD_JKHJBLNKIKM_OFFSET UNITYSDK_OFFSET(0x1784F680)
#define CGBECAKCLFD_JNEMIIDFJGH_OFFSET UNITYSDK_OFFSET(0x17841200)
#define CGBECAKCLFD_KCCJFGKPKNJ_OFFSET UNITYSDK_OFFSET(0x17854190)
#define CGBECAKCLFD_KDFFAIAHCLB_OFFSET UNITYSDK_OFFSET(0x178404D0)
#define CGBECAKCLFD_KHDDNJBIAIP_OFFSET UNITYSDK_OFFSET(0x17852EF0)
#define CGBECAKCLFD_KIIICHDMAEC_OFFSET UNITYSDK_OFFSET(0x1784BDC0)
#define CGBECAKCLFD_KLBEMNCOEFN_OFFSET UNITYSDK_OFFSET(0x1783AF70)
#define CGBECAKCLFD_KLNMEHKCFDE_OFFSET UNITYSDK_OFFSET(0x17858760)
#define CGBECAKCLFD_KNFIJFFADCP_OFFSET UNITYSDK_OFFSET(0x17848930)
#define CGBECAKCLFD_KODGOHBOJCP_OFFSET UNITYSDK_OFFSET(0x17857580)
#define CGBECAKCLFD_KPPJCHGNCKL_OFFSET UNITYSDK_OFFSET(0x17847A40)
#define CGBECAKCLFD_LACLCKPKAFC_OFFSET UNITYSDK_OFFSET(0x17850EE0)
#define CGBECAKCLFD_LBIMLFMAJPL_OFFSET UNITYSDK_OFFSET(0x1783C060)
#define CGBECAKCLFD_LCGJIMFFGII_OFFSET UNITYSDK_OFFSET(0x17858C40)
#define CGBECAKCLFD_LFCINKCOPDC_OFFSET UNITYSDK_OFFSET(0x1783ADB0)
#define CGBECAKCLFD_LHDNEDFMNGH_OFFSET UNITYSDK_OFFSET(0x1783A5D0)
#define CGBECAKCLFD_LHEOPMIPNGP_OFFSET UNITYSDK_OFFSET(0x17849BE0)
#define CGBECAKCLFD_LIHJCMNPNAG_OFFSET UNITYSDK_OFFSET(0x17857F20)
#define CGBECAKCLFD_LIOOKNFCAGF_OFFSET UNITYSDK_OFFSET(0x17852D20)
#define CGBECAKCLFD_LJJGLGNCDJB_OFFSET UNITYSDK_OFFSET(0x178558F0)
#define CGBECAKCLFD_LPEMLOBBCIH_OFFSET UNITYSDK_OFFSET(0x1784B440)
#define CGBECAKCLFD_MAOKELGFIGO_OFFSET UNITYSDK_OFFSET(0x17844C10)
#define CGBECAKCLFD_MBIBFFEBIOJ_OFFSET UNITYSDK_OFFSET(0x17855BF0)
#define CGBECAKCLFD_MDHJHECBAIL_OFFSET UNITYSDK_OFFSET(0x17844020)
#define CGBECAKCLFD_MDLPOAIOKAJ_OFFSET UNITYSDK_OFFSET(0x178434C0)
#define CGBECAKCLFD_MEDCOBCLDIE_OFFSET UNITYSDK_OFFSET(0x1784F3D0)
#define CGBECAKCLFD_MEJAEINLBIB_OFFSET UNITYSDK_OFFSET(0x1783CB10)
#define CGBECAKCLFD_MIHALCJNJEI_OFFSET UNITYSDK_OFFSET(0x17840780)
#define CGBECAKCLFD_MIPEHADOBGN_OFFSET UNITYSDK_OFFSET(0x1783C400)
#define CGBECAKCLFD_MLBLBICBLHO_OFFSET UNITYSDK_OFFSET(0x1783D330)
#define CGBECAKCLFD_MOKNONPPADP_OFFSET UNITYSDK_OFFSET(0x178576B0)
#define CGBECAKCLFD_NAFBIPHMPKL_OFFSET UNITYSDK_OFFSET(0x178453A0)
#define CGBECAKCLFD_NBHPANGFMKJ_OFFSET UNITYSDK_OFFSET(0x1784F5B0)
#define CGBECAKCLFD_NFLOEHGIALG_OFFSET UNITYSDK_OFFSET(0x178449D0)
#define CGBECAKCLFD_NIBJEGIENIC_OFFSET UNITYSDK_OFFSET(0x178442C0)
#define CGBECAKCLFD_NICCMIIABMN_OFFSET UNITYSDK_OFFSET(0x178412C0)
#define CGBECAKCLFD_NIDFGKPHJJM_OFFSET UNITYSDK_OFFSET(0x1784E180)
#define CGBECAKCLFD_NLGFJLEGACA_OFFSET UNITYSDK_OFFSET(0x17858CB0)
#define CGBECAKCLFD_NLGNOELNBJM_OFFSET UNITYSDK_OFFSET(0x1783AE10)
#define CGBECAKCLFD_NNHIJIFLLJI_OFFSET UNITYSDK_OFFSET(0x178516E0)
#define CGBECAKCLFD_NNJDJJPMDOJ_OFFSET UNITYSDK_OFFSET(0x178589C0)
#define CGBECAKCLFD_NNPDGGABMMD_OFFSET UNITYSDK_OFFSET(0x1783DE60)
#define CGBECAKCLFD_NOAELANMGPN_OFFSET UNITYSDK_OFFSET(0x17845800)
#define CGBECAKCLFD_NOMPMAJAHKF_OFFSET UNITYSDK_OFFSET(0x1784EA20)
#define CGBECAKCLFD_NPGBIGJBOJD_OFFSET UNITYSDK_OFFSET(0x1784F200)
#define CGBECAKCLFD_OCIPNMLBGLK_OFFSET UNITYSDK_OFFSET(0x17850610)
#define CGBECAKCLFD_OCLJDFAFMMO_OFFSET UNITYSDK_OFFSET(0x1783D0F0)
#define CGBECAKCLFD_ODJCNKOHBFD_1_OFFSET UNITYSDK_OFFSET(0x1783CCA0)
#define CGBECAKCLFD_ODJCNKOHBFD_OFFSET UNITYSDK_OFFSET(0x17858620)
#define CGBECAKCLFD_ODNOHEDKADN_OFFSET UNITYSDK_OFFSET(0x17841BA0)
#define CGBECAKCLFD_OEOOAFNLFEF_OFFSET UNITYSDK_OFFSET(0x1783D180)
#define CGBECAKCLFD_OHEPFFNJJBM_OFFSET UNITYSDK_OFFSET(0x17840240)
#define CGBECAKCLFD_OHHNMMKIBKP_OFFSET UNITYSDK_OFFSET(0x1784FA20)
#define CGBECAKCLFD_OKDLAPCJAFK_OFFSET UNITYSDK_OFFSET(0x1784D480)
#define CGBECAKCLFD_OKEMKIOBGGL_OFFSET UNITYSDK_OFFSET(0x17851190)
#define CGBECAKCLFD_ONCFCFHPFIO_OFFSET UNITYSDK_OFFSET(0x17843E70)
#define CGBECAKCLFD_OOCNCOOOHOH_OFFSET UNITYSDK_OFFSET(0x17841870)
#define CGBECAKCLFD_OPPLDLJENNC_OFFSET UNITYSDK_OFFSET(0x17842E60)
#define CGBECAKCLFD_PABBDPBKDMI_OFFSET UNITYSDK_OFFSET(0x17852DB0)
#define CGBECAKCLFD_PDLMGFPNBBA_OFFSET UNITYSDK_OFFSET(0x17843630)
#define CGBECAKCLFD_PIBKBCGJOBI_OFFSET UNITYSDK_OFFSET(0x17854260)
#define CGBECAKCLFD_PICFAAKJIAO_OFFSET UNITYSDK_OFFSET(0x1784D030)
#define CGBECAKCLFD_PJGNAGELDCD_OFFSET UNITYSDK_OFFSET(0x17854980)
#define CGBECAKCLFD_PLDPMKKLHMI_OFFSET UNITYSDK_OFFSET(0x17841DD0)
#define CGBECAKCLFD_PLJCOHFLCKA_OFFSET UNITYSDK_OFFSET(0x1784B3A0)
#define CGBECAKCLFD_PLMEDNBFIHD_OFFSET UNITYSDK_OFFSET(0x17852E40)
#define CGBECAKCLFD_PLPPCJDHACL_OFFSET UNITYSDK_OFFSET(0x178581C0)
#define CGBECAKCLFD_POMAMBGPJCB_OFFSET UNITYSDK_OFFSET(0x17849200)

inline static constexpr unsigned int CGBECAKCLFD_TypeDefinitionIndex = 78241;

	class CGBECAKCLFD : public ::System::Object
	{
	public:
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_FallingLandingQTEConfig GMAKFIBKJEA; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Single>* MLBAGCINBCJ; // 0x20
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x28
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig IDLDCIKIPCG; // 0x30
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig BHDHIFOBCBD; // 0x68
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_AICarConfig* IDIJCDLLHJA; // 0x90
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_SlamLateralImpactConfig IKIBLLNIBJH; // 0x98
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Single>* KOHBCFMCBNH; // 0xB0
		::JIJBCGDANLJ* FKINCGODJEP; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::KLOFEMFBAIN*>* KNOEEHEJDHP; // 0xC0
		::System::Collections::Generic::List_1<::System::Object*>* GPNHGICJFPP; // 0xC8
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_SlamLateralImpactConfig EHMELCHCDJD; // 0xD0
		// static const ::System::String* HGJMFPOFMGP; // 0x0
		// static const ::System::Object OEPPIIBCFGH; // 0x0
		// static const ::System::Object OBOGCBNHMKK; // 0x0
		// static const ::System::Object BLLJNKLCHGN; // 0x0
		// static const ::System::Object DJPECOBFEJP; // 0x0
		// static const ::System::Object IKNAJIFLMKI; // 0x0
		// static const ::System::Object FCOKCBPKJBN; // 0x0
		// static const ::System::Object PNHBLKKHJJN; // 0x0
		// static const ::System::Object MNNCNJEFNCA; // 0x0
		// static const ::System::Object CFFFLCALDKB; // 0x0
		// static const ::System::Object CHHACOENIBG; // 0x0
		// static const ::System::Object AGACPJDCJJH; // 0x0
		// static const ::System::Object BKNNLFFHHEP; // 0x0
		// static const ::System::Object HGGFHIEGDMC; // 0x0
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_DISPOSE_OFFSET))(this);
		}

		::System::Void NLGNOELNBJM(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NLGNOELNBJM_OFFSET))(this, a1);
		}

		::System::Void KLBEMNCOEFN(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KLBEMNCOEFN_OFFSET))(this, a1);
		}

		::System::UInt32 HGPCHCIALCG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_HGPCHCIALCG_OFFSET))(this);
		}

		::GHMGGIHEHJE* GJDBKGHBNOP(::RPG::Client::RoadRash::MonoRoadRashGameCar* a1, ::System::UInt32 a2, ::MONJFDPKFBA* a3, ::System::UInt32 a4)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameCar*, ::System::UInt32, ::MONJFDPKFBA*, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_GJDBKGHBNOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LHDNEDFMNGH(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LHDNEDFMNGH_OFFSET))(this, a1);
		}

		::GHMGGIHEHJE* HBKLKBJOFGG(::RPG::Client::RoadRash::MonoRoadRashGameProjectile* a1, ::GHMGGIHEHJE* a2, ::GHMGGIHEHJE* a3, ::RPG::Client::LittleGame::RoadRash::ProjectileParams a4)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile*, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::ProjectileParams))((::PBYTE)hIl2Cpp + CGBECAKCLFD_HBKLKBJOFGG_OFFSET))(this, a1, a2, a3, a4);
		}

		::GHMGGIHEHJE* EDACFEDDENH(::RPG::Client::RoadRash::MonoRoadRashGameProjectile* a1, ::GHMGGIHEHJE* a2, ::System::Single a3, ::RPG::Client::LittleGame::RoadRash::ProjectileParams a4)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile*, ::GHMGGIHEHJE*, ::System::Single, ::RPG::Client::LittleGame::RoadRash::ProjectileParams))((::PBYTE)hIl2Cpp + CGBECAKCLFD_EDACFEDDENH_OFFSET))(this, a1, a2, a3, a4);
		}

		::GHMGGIHEHJE* MLBLBICBLHO(::RPG::Client::RoadRash::MonoRoadRashGameProjectile* a1, ::GHMGGIHEHJE* a2, ::System::Int32 a3, ::System::Boolean a4, ::BJIACBNKCCJ* a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::Client::LittleGame::RoadRash::ProjectileParams a9)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile*, ::GHMGGIHEHJE*, ::System::Int32, ::System::Boolean, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::RoadRash::ProjectileParams))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MLBLBICBLHO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Single GBHNGLKGFBF(::System::Single a1, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile* a2)
		{
			return ((::System::Single(*)(::System::Single, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_GBHNGLKGFBF_OFFSET))(a1, a2);
		}

		::System::Void NNPDGGABMMD(::CKHFKFPPANI* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::BJIACBNKCCJ* a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Quaternion a9, ::UnityEngine::Vector3 a10)
		{
			return ((::System::Void(*)(::PVOID, ::CKHFKFPPANI*, ::System::Single, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NNPDGGABMMD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::UnityEngine::Vector3 BJBKFBOOHOD(::BJIACBNKCCJ* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::BJIACBNKCCJ*, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BJBKFBOOHOD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GFCCGINPKAJ(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CGBECAKCLFD_GFCCGINPKAJ_OFFSET))(a1, a2);
		}

		::System::Void CDJGCNIPBHC(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CDJGCNIPBHC_OFFSET))(this, a1);
		}

		::NFKBBGEFJIN* JHDKOCLKADN(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::NFKBBGEFJIN*(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JHDKOCLKADN_OFFSET))(this, a1, a2);
		}

		::CNCNFGFMKLN* JHDKOCLKADN_1(::GHMGGIHEHJE* a1, ::RPG::GameCore::LittleGameAbilityConfig* a2)
		{
			return ((::CNCNFGFMKLN*(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::GameCore::LittleGameAbilityConfig*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JHDKOCLKADN_1_OFFSET))(this, a1, a2);
		}

		::GHMGGIHEHJE* BABGADEHKID()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BABGADEHKID_OFFSET))(this);
		}

		::GHMGGIHEHJE* JEEGMGNPNLO(::System::UInt32 a1)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JEEGMGNPNLO_OFFSET))(this, a1);
		}

		::GHMGGIHEHJE* FHJBDBNPPBA(::System::UInt32 a1)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FHJBDBNPPBA_OFFSET))(this, a1);
		}

		::System::Void OHEPFFNJJBM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OHEPFFNJJBM_OFFSET))(this, a1);
		}

		::System::Void MIHALCJNJEI(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MIHALCJNJEI_OFFSET))(this, a1);
		}

		::System::Void LBIMLFMAJPL(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LBIMLFMAJPL_OFFSET))(this, a1);
		}

		::System::Void FFBACHCFFCJ(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FFBACHCFFCJ_OFFSET))(this, a1);
		}

		::System::Void IDKAABDFFKE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_IDKAABDFFKE_OFFSET))(this, a1);
		}

		::System::Void AHLCPBDCKAE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_AHLCPBDCKAE_OFFSET))(this, a1);
		}

		::RPG::Client::RoadRash::MonoEffectConfig JNEMIIDFJGH(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::MonoRoadRashGameCar* a2)
		{
			return ((::RPG::Client::RoadRash::MonoEffectConfig(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::MonoRoadRashGameCar*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JNEMIIDFJGH_OFFSET))(this, a1, a2);
		}

		::System::Boolean NICCMIIABMN(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NICCMIIABMN_OFFSET))(this, a1);
		}

		::System::Void BKELBLPDNGN(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BKELBLPDNGN_OFFSET))(this, a1);
		}

		::System::Void FGANFGJHHPP(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FGANFGJHHPP_OFFSET))(this, a1);
		}

		::System::Void FBKAELKHFOM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FBKAELKHFOM_OFFSET))(this, a1);
		}

		::System::Void OOCNCOOOHOH(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OOCNCOOOHOH_OFFSET))(this, a1);
		}

		::System::Void CKDBCGAOOAD(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CKDBCGAOOAD_OFFSET))(this, a1);
		}

		::System::Void BCKEONIKNLD(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BCKEONIKNLD_OFFSET))(this, a1);
		}

		::System::Void AOKBCEPBGPE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_AOKBCEPBGPE_OFFSET))(this, a1);
		}

		::RPG::Client::RoadRash::MonoEffectConfig ODNOHEDKADN(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::MonoRoadRashGameCar* a2)
		{
			return ((::RPG::Client::RoadRash::MonoEffectConfig(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::MonoRoadRashGameCar*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ODNOHEDKADN_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCPJAKGNBCH(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_HCPJAKGNBCH_OFFSET))(this, a1);
		}

		static ::System::Boolean FELCDIMNBID(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FELCDIMNBID_OFFSET))(a1);
		}

		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig DGJIGNFJCKF(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_DGJIGNFJCKF_OFFSET))(this, a1);
		}

		::System::Void IMCAOGGKKEA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_IMCAOGGKKEA_OFFSET))(this, a1);
		}

		::System::Boolean APEOECFPDOO(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_APEOECFPDOO_OFFSET))(this, a1);
		}

		::System::Void EBCOPHIGDPA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_EBCOPHIGDPA_OFFSET))(this, a1);
		}

		::System::UInt32 OPPLDLJENNC(::GHMGGIHEHJE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OPPLDLJENNC_OFFSET))(this, a1);
		}

		::System::Void JBKGMOOGPKJ(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JBKGMOOGPKJ_OFFSET))(this, a1);
		}

		::System::Void PLDPMKKLHMI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::RoadRashBlueFireSource a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::RoadRashBlueFireSource, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PLDPMKKLHMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PDLMGFPNBBA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PDLMGFPNBBA_OFFSET))(this, a1);
		}

		::System::Boolean JAEHMBANHMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JAEHMBANHMB_OFFSET))(this);
		}

		static ::System::Boolean HBOOCDDHGCB(::NAJMEPONCEL* a1)
		{
			return ((::System::Boolean(*)(::NAJMEPONCEL*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_HBOOCDDHGCB_OFFSET))(a1);
		}

		::System::Void BCCKDLIGGIK(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BCCKDLIGGIK_OFFSET))(this, a1);
		}

		::System::Void OCLJDFAFMMO(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OCLJDFAFMMO_OFFSET))(this, a1);
		}

		::System::Void ONCFCFHPFIO(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ONCFCFHPFIO_OFFSET))(this, a1);
		}

		::GILFCOGNOCB* MDHJHECBAIL(::GHMGGIHEHJE* a1)
		{
			return ((::GILFCOGNOCB*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MDHJHECBAIL_OFFSET))(this, a1);
		}

		::System::Void DDLMCENINHC(::GHMGGIHEHJE* a1, ::GILFCOGNOCB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GILFCOGNOCB*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_DDLMCENINHC_OFFSET))(this, a1, a2);
		}

		::System::Void NIBJEGIENIC(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NIBJEGIENIC_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* MDLPOAIOKAJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MDLPOAIOKAJ_OFFSET))(this, a1, a2);
		}

		::System::Void BJOKAMLKABM(::FNFGDHDIHHM* a1, ::RPG::Client::RoadRash::MonoSpeedEffectConfig a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::FNFGDHDIHHM*, ::RPG::Client::RoadRash::MonoSpeedEffectConfig, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BJOKAMLKABM_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void FJFHNPCDMAL(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2, ::RPG::Client::RoadRash::MonoSpeedEffectConfig a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Animator*, ::RPG::Client::RoadRash::MonoSpeedEffectConfig))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FJFHNPCDMAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NAFBIPHMPKL(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NAFBIPHMPKL_OFFSET))(a1, a2, a3);
		}

		::System::Int32 IGABHJCCOLK(::GHMGGIHEHJE* a1, ::FNFGDHDIHHM* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::GHMGGIHEHJE*, ::FNFGDHDIHHM*, ::System::Int32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_IGABHJCCOLK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGNEABJLFOH(::FNFGDHDIHHM* a1, ::RPG::Client::RoadRash::MonoSpeedEffectConfig a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::FNFGDHDIHHM*, ::RPG::Client::RoadRash::MonoSpeedEffectConfig, ::System::Int32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FGNEABJLFOH_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 MAOKELGFIGO(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::MonoSpeedEffectConfig a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::MonoSpeedEffectConfig))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MAOKELGFIGO_OFFSET))(this, a1, a2);
		}

		::System::Int32 NFLOEHGIALG(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::MonoSpeedEffectConfig a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::MonoSpeedEffectConfig))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NFLOEHGIALG_OFFSET))(this, a1, a2);
		}

		::System::Void AODGAFADCAA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_AODGAFADCAA_OFFSET))(this, a1);
		}

		::System::Void OEOOAFNLFEF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OEOOAFNLFEF_OFFSET))(this, a1);
		}

		::System::Boolean NOAELANMGPN(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NOAELANMGPN_OFFSET))(this, a1);
		}

		::System::Void CPNEMOBKHEL(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CPNEMOBKHEL_OFFSET))(this, a1, a2);
		}

		::System::Void AHOOIBDHCJM(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_AHOOIBDHCJM_OFFSET))(this, a1, a2);
		}

		::System::Void DHKKDABPNFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_DHKKDABPNFA_OFFSET))(this);
		}

		::System::Void JKFILHIMGIM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JKFILHIMGIM_OFFSET))(this, a1);
		}

		::System::Void GECMIFLKIAH(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_GECMIFLKIAH_OFFSET))(this, a1, a2);
		}

		::System::Void DBLNFGCFFCB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_DBLNFGCFFCB_OFFSET))(this, a1);
		}

		::System::Void JIDLGGFLAAE(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::MonoRoadRashGameCar* a2, ::RPG::Client::MonoEffect* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::MonoRoadRashGameCar*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JIDLGGFLAAE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void BOBNEBGJNGB(::RPG::Client::MonoEffectPluginCharaOverlayMatBase* a1, ::Il2CppArray<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffectPluginCharaOverlayMatBase*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BOBNEBGJNGB_OFFSET))(a1, a2);
		}

		static ::System::Void KPPJCHGNCKL(::FNFGDHDIHHM* a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Void(*)(::FNFGDHDIHHM*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KPPJCHGNCKL_OFFSET))(a1, a2);
		}

		static ::System::Void DHFADFFMIIN(::FNFGDHDIHHM* a1)
		{
			return ((::System::Void(*)(::FNFGDHDIHHM*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_DHFADFFMIIN_OFFSET))(a1);
		}

		::System::Void LFCINKCOPDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LFCINKCOPDC_OFFSET))(this);
		}

		::System::UInt32 BGEBEKMJIPD(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::MonoEffectConfig a2, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a3, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a4, ::System::Boolean a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::MonoEffectConfig, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BGEBEKMJIPD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 ICANIKHCBPG(::GHMGGIHEHJE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ICANIKHCBPG_OFFSET))(this, a1);
		}

		::System::UInt32 KNFIJFFADCP(::GHMGGIHEHJE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KNFIJFFADCP_OFFSET))(this, a1);
		}

		::System::UInt32 FIDPPIFFDGA(::GHMGGIHEHJE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FIDPPIFFDGA_OFFSET))(this, a1);
		}

		::System::UInt32 JDACDMALOFM(::GHMGGIHEHJE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JDACDMALOFM_OFFSET))(this, a1);
		}

		::System::UInt32 POMAMBGPJCB(::GHMGGIHEHJE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_POMAMBGPJCB_OFFSET))(this, a1);
		}

		::System::UInt32 BGEBEKMJIPD_1(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::MonoSpeedEffectConfig a2, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a3, ::System::Boolean a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::MonoSpeedEffectConfig, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BGEBEKMJIPD_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GPKKCGLAFJF(::GHMGGIHEHJE* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8, ::System::Boolean a9)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_GPKKCGLAFJF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void ILLFLMDDMBK(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ILLFLMDDMBK_OFFSET))(this, a1, a2);
		}

		::System::Boolean EAAOBCLJFOD(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_EAAOBCLJFOD_OFFSET))(this, a1, a2);
		}

		::System::Boolean LHEOPMIPNGP(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LHEOPMIPNGP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HNALMLNOOCC(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig))((::PBYTE)hIl2Cpp + CGBECAKCLFD_HNALMLNOOCC_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Transform* FNJHMLMMNAG(::GHMGGIHEHJE* a1)
		{
			return ((::UnityEngine::Transform*(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FNJHMLMMNAG_OFFSET))(a1);
		}

		::System::Void FOODMKNBJPH(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::Client::RoadRash::RoadRashObstacleImpactVisualOverrideConfig a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::RoadRash::RoadRashObstacleImpactVisualOverrideConfig))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FOODMKNBJPH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BJOPKGBIECB(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::RoadRashObstacleImpactVisualOverrideConfig a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::RoadRashObstacleImpactVisualOverrideConfig))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BJOPKGBIECB_OFFSET))(this, a1, a2);
		}

		::System::Void CGJIKJFBGFE(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CGJIKJFBGFE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::LittleGame::RoadRash::EAIBehindBehavior MIPEHADOBGN()
		{
			return ((::RPG::Client::LittleGame::RoadRash::EAIBehindBehavior(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MIPEHADOBGN_OFFSET))(this);
		}

		::System::Void GFCMFODMAPF(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Void(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CGBECAKCLFD_GFCMFODMAPF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PLJCOHFLCKA(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Void(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PLJCOHFLCKA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single LPEMLOBBCIH(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LPEMLOBBCIH_OFFSET))(this, a1, a2);
		}

		::System::Single KIIICHDMAEC(::GHMGGIHEHJE* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KIIICHDMAEC_OFFSET))(this, a1, a2, a3);
		}

		::System::Single CIFHAHFLBKO(::GHMGGIHEHJE* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CIFHAHFLBKO_OFFSET))(this, a1, a2, a3);
		}

		::System::Single BHHFBIENPPB(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BHHFBIENPPB_OFFSET))(this, a1, a2, a3);
		}

		::System::Single PICFAAKJIAO(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PICFAAKJIAO_OFFSET))(this, a1);
		}

		::System::Void JFLNOKMLPOJ(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JFLNOKMLPOJ_OFFSET))(this, a1, a2);
		}

		::System::Void OKDLAPCJAFK(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OKDLAPCJAFK_OFFSET))(this, a1, a2);
		}

		::System::Void BIIDPLDLKKD(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BIIDPLDLKKD_OFFSET))(this, a1, a2);
		}

		::System::Void NIDFGKPHJJM(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3, ::RPG::Client::LittleGame::RoadRash::EImpactType a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::RoadRash::EImpactType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NIDFGKPHJJM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::B51Racing::RoadRashGameHitSource NBHPANGFMKJ(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::Client::B51Racing::RoadRashGameHitSource(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NBHPANGFMKJ_OFFSET))(a1);
		}

		static ::System::Void IDNJBOBIJGA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_IDNJBOBIJGA_OFFSET))(a1);
		}

		static ::System::Boolean NOMPMAJAHKF(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EImpactForbidReason a2)
		{
			return ((::System::Boolean(*)(::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EImpactForbidReason))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NOMPMAJAHKF_OFFSET))(a1, a2);
		}

		::RPG::Client::LittleGame::RoadRash::EKnockUpDirection JKHJBLNKIKM(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::RPG::Client::LittleGame::RoadRash::EKnockUpDirection(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JKHJBLNKIKM_OFFSET))(this, a1, a2);
		}

		::System::Void MEDCOBCLDIE(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MEDCOBCLDIE_OFFSET))(this, a1, a2);
		}

		::System::Boolean BNBDJCPLNJE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BNBDJCPLNJE_OFFSET))(this, a1);
		}

		::System::Void BALLPMOEPDE(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BALLPMOEPDE_OFFSET))(this, a1, a2);
		}

		::System::Void AGDGFEAGFJL(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_AGDGFEAGFJL_OFFSET))(this, a1, a2);
		}

		::System::Void NPGBIGJBOJD(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::RPG::Client::LittleGame::RoadRash::EImpactType a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EImpactType))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NPGBIGJBOJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JBEBCEMJHLI(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JBEBCEMJHLI_OFFSET))(this, a1);
		}

		::System::Single ENKPPCEGLNA(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ENKPPCEGLNA_OFFSET))(this, a1, a2);
		}

		::System::Single JEFAMBFCBBC(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JEFAMBFCBBC_OFFSET))(this, a1);
		}

		::System::Boolean LACLCKPKAFC(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LACLCKPKAFC_OFFSET))(this, a1);
		}

		::System::Single DHLEPKAFOCM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_DHLEPKAFOCM_OFFSET))(this, a1);
		}

		::System::Single OKEMKIOBGGL(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OKEMKIOBGGL_OFFSET))(this, a1);
		}

		::System::Single FNLGBGNMKLF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FNLGBGNMKLF_OFFSET))(this, a1);
		}

		::System::Void IEDHECEKDLN(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3, ::RPG::Client::LittleGame::RoadRash::EImpactType a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::RoadRash::EImpactType, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_IEDHECEKDLN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NNHIJIFLLJI(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3, ::RPG::Client::LittleGame::RoadRash::EImpactType a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::RoadRash::EImpactType))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NNHIJIFLLJI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single AKBDABODKAK(::CKHFKFPPANI* a1, ::CKHFKFPPANI* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::CKHFKFPPANI*, ::CKHFKFPPANI*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CGBECAKCLFD_AKBDABODKAK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CFOADFAOMBK(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3, ::RPG::Client::LittleGame::RoadRash::EImpactType a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::RoadRash::EImpactType, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CFOADFAOMBK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BLGGKACJHLD(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3, ::RPG::Client::LittleGame::RoadRash::EImpactType a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::RoadRash::EImpactType, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BLGGKACJHLD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void IKALJMIIKDI(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::RPG::Client::RoadRash::RoadRashObstaclePhysicsImpactConfig a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::RPG::Client::RoadRash::RoadRashObstaclePhysicsImpactConfig))((::PBYTE)hIl2Cpp + CGBECAKCLFD_IKALJMIIKDI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DAGNGBGDMNC(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EImpactType a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EImpactType))((::PBYTE)hIl2Cpp + CGBECAKCLFD_DAGNGBGDMNC_OFFSET))(this, a1, a2);
		}

		::System::Void HKLDKBCJLEA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_HKLDKBCJLEA_OFFSET))(this, a1);
		}

		::System::Void LIOOKNFCAGF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LIOOKNFCAGF_OFFSET))(this, a1);
		}

		::System::Void PABBDPBKDMI(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PABBDPBKDMI_OFFSET))(this, a1);
		}

		::System::Void OHHNMMKIBKP(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EKnockUpDirection a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EKnockUpDirection))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OHHNMMKIBKP_OFFSET))(this, a1, a2);
		}

		::System::Void KHDDNJBIAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KHDDNJBIAIP_OFFSET))(this);
		}

		static ::System::Void JFBMGIAOJBF(::LJAIOGHEIBA* a1)
		{
			return ((::System::Void(*)(::LJAIOGHEIBA*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JFBMGIAOJBF_OFFSET))(a1);
		}

		::System::Void CBJMBFBEMMC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CBJMBFBEMMC_OFFSET))(this, a1);
		}

		::System::Void PIBKBCGJOBI(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PIBKBCGJOBI_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::BJIACBNKCCJ*, ::System::Single> KCCJFGKPKNJ(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::ValueTuple_2<::BJIACBNKCCJ*, ::System::Single>(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KCCJFGKPKNJ_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_2<::BJIACBNKCCJ*, ::System::Single> BKJGJLEEBJH(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::ValueTuple_2<::BJIACBNKCCJ*, ::System::Single>(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BKJGJLEEBJH_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_2<::BJIACBNKCCJ*, ::System::Single> GIPNFPMDFGJ(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::ValueTuple_2<::BJIACBNKCCJ*, ::System::Single>(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_GIPNFPMDFGJ_OFFSET))(this, a1, a2, a3);
		}

		::BJIACBNKCCJ* FNJHBBGKDPG(::BJIACBNKCCJ* a1)
		{
			return ((::BJIACBNKCCJ*(*)(::PVOID, ::BJIACBNKCCJ*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FNJHBBGKDPG_OFFSET))(this, a1);
		}

		static ::System::Single PLMEDNBFIHD(::BJIACBNKCCJ* a1, ::System::Single a2, ::BJIACBNKCCJ* a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::BJIACBNKCCJ*, ::System::Single, ::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PLMEDNBFIHD_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void FKNFLCHFPFP(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbility_SlamCast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_SlamCast*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_FKNFLCHFPFP_OFFSET))(this, a1, a2);
		}

		::System::Void JJFNKIKMLEL(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbility_FireProjectileCast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_FireProjectileCast*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_JJFNKIKMLEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean PJGNAGELDCD(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::RPG::Client::RoadRashGameAbility_Slam* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_Slam*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PJGNAGELDCD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CALBHJOGBGI(::GHMGGIHEHJE* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CALBHJOGBGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJJGLGNCDJB(::GHMGGIHEHJE* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Int32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LJJGLGNCDJB_OFFSET))(this, a1, a2);
		}

		::GHMGGIHEHJE* ECCEMBIIJPF(::System::Int32 a1)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ECCEMBIIJPF_OFFSET))(this, a1);
		}

		::System::Boolean MBIBFFEBIOJ(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbility_Charging* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_Charging*, ::System::Int32))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MBIBFFEBIOJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GLIMCHGCCEK(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbility_ReleaseCharging* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_ReleaseCharging*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_GLIMCHGCCEK_OFFSET))(this, a1, a2);
		}

		::System::Void IDADAOPFKFK(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbility_Ultimate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_Ultimate*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_IDADAOPFKFK_OFFSET))(this, a1, a2);
		}

		::System::Void KODGOHBOJCP(::GHMGGIHEHJE* a1, ::NFDMOPAMCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::NFDMOPAMCMA*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KODGOHBOJCP_OFFSET))(this, a1, a2);
		}

		::System::Void MOKNONPPADP(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbility_UltimateV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_UltimateV2*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MOKNONPPADP_OFFSET))(this, a1, a2);
		}

		::System::Void LIHJCMNPNAG(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LIHJCMNPNAG_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean ADFLCJKOEDF(::RPG::Client::LittleGame::RoadRash::EEngineState a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ADFLCJKOEDF_OFFSET))(a1);
		}

		static ::System::Boolean PLPPCJDHACL(::RPG::Client::LittleGame::RoadRash::EEngineState a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + CGBECAKCLFD_PLPPCJDHACL_OFFSET))(a1);
		}

		::System::Boolean BMNHEMBLJBG(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_BMNHEMBLJBG_OFFSET))(this, a1, a2);
		}

		::System::Void CDEDLIFFGLE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CDEDLIFFGLE_OFFSET))(this, a1);
		}

		::System::Void CDEDLIFFGLE_1(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CDEDLIFFGLE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ODJCNKOHBFD(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ODJCNKOHBFD_OFFSET))(this, a1);
		}

		::System::Void ODJCNKOHBFD_1(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_ODJCNKOHBFD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KLNMEHKCFDE(::GHMGGIHEHJE* a1, ::DHAGPJEEPCI* a2, ::RPG::Client::LittleGame::RoadRash::EEngineState a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::DHAGPJEEPCI*, ::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KLNMEHKCFDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NNJDJJPMDOJ(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NNJDJJPMDOJ_OFFSET))(this, a1);
		}

		::System::Void MEJAEINLBIB(::GHMGGIHEHJE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBECAKCLFD_MEJAEINLBIB_OFFSET))(this, a1, a2);
		}

		::System::Boolean CHIHGEPPDCD(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_CHIHGEPPDCD_OFFSET))(this, a1, a2);
		}

		::KLOFEMFBAIN* KDFFAIAHCLB(::BEGILENIHBD* a1)
		{
			return ((::KLOFEMFBAIN*(*)(::PVOID, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + CGBECAKCLFD_KDFFAIAHCLB_OFFSET))(this, a1);
		}

		::KBFKLMMIPLI* OCIPNMLBGLK()
		{
			return ((::KBFKLMMIPLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_OCIPNMLBGLK_OFFSET))(this);
		}

		::GMAGAHGCOFD* LCGJIMFFGII()
		{
			return ((::GMAGAHGCOFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_LCGJIMFFGII_OFFSET))(this);
		}

		::KGAKDFCNDPH* AJLJLGFEHOA()
		{
			return ((::KGAKDFCNDPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_AJLJLGFEHOA_OFFSET))(this);
		}

		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_AICarConfig* EHGKGBKJJDG()
		{
			return ((::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_AICarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_EHGKGBKJJDG_OFFSET))(this);
		}

		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig EDOPNNCJNOP()
		{
			return ((::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_EDOPNNCJNOP_OFFSET))(this);
		}

		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_FallingLandingQTEConfig NLGFJLEGACA()
		{
			return ((::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_FallingLandingQTEConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD_NLGFJLEGACA_OFFSET))(this);
		}

	};
