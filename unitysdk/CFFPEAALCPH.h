#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOPPBPJHHJK.h"
#include "unitysdk/RPG/GameCore/AnimCategory.h"
#include "unitysdk/RPG/GameCore/AnimStateFsmType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/RPG/GameCore/BuildInAnimParam.h"
#include "unitysdk/RPG/GameCore/CharacterEmoState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/OnHitAnimType.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/ONLHJAEPLBB.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BGOBCKLPEMK;
class BMOMAEJOJJP;
class CEBMNLPNKFL;
class CFFPEAALCPH_JJGHFDADLPD;
class CNHFDCJCFLL;
class COKICPIHPAC;
class EJOHLHMLFAO;
class EKFMIDBJDIA;
class FHHBMOKIIKM;
class GIPKHEMODAD;
class HOMDJMMOCJK;
class JBHLJMENAPJ;
class JHMBGNKOIJH;
class MBBEBLGELAP;
class NCMHCCGKLAH;
class NEOCEOCDEAF;
class NILCJPJGMJC;
namespace RPG::Client { class AdditiveHitWeaponAttachmentHandler; }
namespace RPG::Client { class AvatarAimController; }
namespace RPG::Client { class AvatarLookAtController; }
namespace RPG::Client { class FABRIK_WeaponControl; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class MonoFullBodyIK; }
namespace RPG::Client { class OverrideControllerSwitcher; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterHeadConstraint; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace RPG::GameCore { class SyncAnimWithBgm; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterMoveData; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class LimbIK; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define CFFPEAALCPH_AAAEOEBBJCL_OFFSET UNITYSDK_OFFSET(0xD388B10)
#define CFFPEAALCPH_AEIPMJBPHNN_OFFSET UNITYSDK_OFFSET(0xD37C110)
#define CFFPEAALCPH_AGLJAHOBLIO_OFFSET UNITYSDK_OFFSET(0xD381120)
#define CFFPEAALCPH_AHCIBNGCJIE_OFFSET UNITYSDK_OFFSET(0xD380B60)
#define CFFPEAALCPH_AHEODFNLELK_OFFSET UNITYSDK_OFFSET(0xD3825F0)
#define CFFPEAALCPH_AHLDKPCIEJL_1_OFFSET UNITYSDK_OFFSET(0xD380960)
#define CFFPEAALCPH_AHLDKPCIEJL_OFFSET UNITYSDK_OFFSET(0xD388310)
#define CFFPEAALCPH_AIIDDFJHEPH_OFFSET UNITYSDK_OFFSET(0xD380DD0)
#define CFFPEAALCPH_AOOGEEJFJHB_OFFSET UNITYSDK_OFFSET(0xD387520)
#define CFFPEAALCPH_APICJPMPEFH_OFFSET UNITYSDK_OFFSET(0xD381CC0)
#define CFFPEAALCPH_BHAOHJKCPKH_OFFSET UNITYSDK_OFFSET(0xD384630)
#define CFFPEAALCPH_BHAOLDLFMHN_OFFSET UNITYSDK_OFFSET(0xD3863E0)
#define CFFPEAALCPH_CAAFHODLAPK_OFFSET UNITYSDK_OFFSET(0xD3893D0)
#define CFFPEAALCPH_CAGFCPHJNKD_OFFSET UNITYSDK_OFFSET(0xD3856A0)
#define CFFPEAALCPH_CBJOPEHHIFL_1_OFFSET UNITYSDK_OFFSET(0xD383BF0)
#define CFFPEAALCPH_CBJOPEHHIFL_OFFSET UNITYSDK_OFFSET(0xD383BA0)
#define CFFPEAALCPH_CDCCLBBMHPM_OFFSET UNITYSDK_OFFSET(0xD384120)
#define CFFPEAALCPH_CDLLBNKDCAM_OFFSET UNITYSDK_OFFSET(0xD3897D0)
#define CFFPEAALCPH_CFCMOPDNJOG_OFFSET UNITYSDK_OFFSET(0xD380830)
#define CFFPEAALCPH_CIBBCOIEALC_OFFSET UNITYSDK_OFFSET(0xD380EC0)
#define CFFPEAALCPH_CIGMNBGFALL_OFFSET UNITYSDK_OFFSET(0xD3852E0)
#define CFFPEAALCPH_CJDNBOCFEDP_OFFSET UNITYSDK_OFFSET(0xD384F60)
#define CFFPEAALCPH_CJJOHMHGLNF_OFFSET UNITYSDK_OFFSET(0xD389D90)
#define CFFPEAALCPH_CKABCPJKAOJ_OFFSET UNITYSDK_OFFSET(0xD380D70)
#define CFFPEAALCPH_CLPPEGIOHBP_OFFSET UNITYSDK_OFFSET(0xD388A10)
#define CFFPEAALCPH_CNANDAKOCEM_OFFSET UNITYSDK_OFFSET(0xD387120)
#define CFFPEAALCPH_CTOR_OFFSET UNITYSDK_OFFSET(0xD37CFF0)
#define CFFPEAALCPH_DFMLKHLMHPM_OFFSET UNITYSDK_OFFSET(0xD380BC0)
#define CFFPEAALCPH_DHJCLIFCJKC_OFFSET UNITYSDK_OFFSET(0xD37FF40)
#define CFFPEAALCPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD37D290)
#define CFFPEAALCPH_DKKAAIGFHDO_OFFSET UNITYSDK_OFFSET(0xD382910)
#define CFFPEAALCPH_DLPNJIBOLKA_OFFSET UNITYSDK_OFFSET(0xD385F50)
#define CFFPEAALCPH_DMKEMKGAHLM_OFFSET UNITYSDK_OFFSET(0xD380890)
#define CFFPEAALCPH_DNHFENKBDKK_OFFSET UNITYSDK_OFFSET(0xD37C0B0)
#define CFFPEAALCPH_DPNHAGMHLNG_OFFSET UNITYSDK_OFFSET(0xD389BC0)
#define CFFPEAALCPH_EGBEAJKJDJD_OFFSET UNITYSDK_OFFSET(0xD384920)
#define CFFPEAALCPH_EGGJNHLEFKH_OFFSET UNITYSDK_OFFSET(0xD37FB80)
#define CFFPEAALCPH_EHDJMGPGABE_OFFSET UNITYSDK_OFFSET(0xD37CC70)
#define CFFPEAALCPH_EHGFPGHNJAA_OFFSET UNITYSDK_OFFSET(0xD38B0B0)
#define CFFPEAALCPH_EHGGICNNBGO_OFFSET UNITYSDK_OFFSET(0xD38AB20)
#define CFFPEAALCPH_ENBOEHDHCAL_OFFSET UNITYSDK_OFFSET(0xD37F590)
#define CFFPEAALCPH_EOGOIGBMFFB_OFFSET UNITYSDK_OFFSET(0xD381530)
#define CFFPEAALCPH_EOHLNLGMHHL_OFFSET UNITYSDK_OFFSET(0xD37CEC0)
#define CFFPEAALCPH_EPGHPONDNOO_OFFSET UNITYSDK_OFFSET(0xD384610)
#define CFFPEAALCPH_FDGKEDAOELI_OFFSET UNITYSDK_OFFSET(0xD385260)
#define CFFPEAALCPH_FGAJAJEPFHK_OFFSET UNITYSDK_OFFSET(0xD37BEE0)
#define CFFPEAALCPH_FIFENHGIIHO_OFFSET UNITYSDK_OFFSET(0xD37FFB0)
#define CFFPEAALCPH_FJKGGJOMGCH_OFFSET UNITYSDK_OFFSET(0xD389420)
#define CFFPEAALCPH_FKEDCFNFLDK_OFFSET UNITYSDK_OFFSET(0xD382C80)
#define CFFPEAALCPH_FMNIICBFFCH_OFFSET UNITYSDK_OFFSET(0xD386E40)
#define CFFPEAALCPH_FPKGNEJCJND_OFFSET UNITYSDK_OFFSET(0xD3881F0)
#define CFFPEAALCPH_FPPPOHAGAON_OFFSET UNITYSDK_OFFSET(0xD37E050)
#define CFFPEAALCPH_GBMFBOBAIAE_OFFSET UNITYSDK_OFFSET(0xD381020)
#define CFFPEAALCPH_GCIIBECKBJF_OFFSET UNITYSDK_OFFSET(0xD388550)
#define CFFPEAALCPH_GEEFBIHPEKP_OFFSET UNITYSDK_OFFSET(0xD3898D0)
#define CFFPEAALCPH_GEKEFMKDGBK_OFFSET UNITYSDK_OFFSET(0xD3829C0)
#define CFFPEAALCPH_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0xD3884D0)
#define CFFPEAALCPH_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0xD37EEA0)
#define CFFPEAALCPH_GET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD38AFF0)
#define CFFPEAALCPH_GET_ANIMEXTERNALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xD38B190)
#define CFFPEAALCPH_GET_ANIMVISULTIMESCALE_OFFSET UNITYSDK_OFFSET(0xD38B170)
#define CFFPEAALCPH_GET_CUSTOMVISUALLAYERNAME_OFFSET UNITYSDK_OFFSET(0xD38AED0)
#define CFFPEAALCPH_GET_FULLBODYIK_OFFSET UNITYSDK_OFFSET(0xD38B050)
#define CFFPEAALCPH_GET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xD38AFB0)
#define CFFPEAALCPH_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD38AF50)
#define CFFPEAALCPH_GET_HITADDITIVELAYERNAME_OFFSET UNITYSDK_OFFSET(0xD38AEF0)
#define CFFPEAALCPH_GET_HITOVERRIDELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD38AF70)
#define CFFPEAALCPH_GET_HITOVERRIDELAYERNAME_OFFSET UNITYSDK_OFFSET(0xD38AF10)
#define CFFPEAALCPH_GET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xD38AFD0)
#define CFFPEAALCPH_GET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD38B010)
#define CFFPEAALCPH_GET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xD38B030)
#define CFFPEAALCPH_GET_MODIFIERPHASE2ENDRECORDINANIMSTOPSTATE_OFFSET UNITYSDK_OFFSET(0xD38B1B0)
#define CFFPEAALCPH_GET_OVERRIDECONTROLLERSWITCHER_OFFSET UNITYSDK_OFFSET(0xD38B150)
#define CFFPEAALCPH_GET_PHASEREF_OFFSET UNITYSDK_OFFSET(0xD38B1D0)
#define CFFPEAALCPH_GET_RECIVEDEADHANDLEREVENT_OFFSET UNITYSDK_OFFSET(0xD38AF90)
#define CFFPEAALCPH_GET_VISUALLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD38AF30)
#define CFFPEAALCPH_GET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xD38B070)
#define CFFPEAALCPH_GET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD38B090)
#define CFFPEAALCPH_GFBAFFOGLEN_OFFSET UNITYSDK_OFFSET(0xD381DA0)
#define CFFPEAALCPH_GGFBBKJDDEA_OFFSET UNITYSDK_OFFSET(0xD387F70)
#define CFFPEAALCPH_GICBGCEOKIO_OFFSET UNITYSDK_OFFSET(0xD38A120)
#define CFFPEAALCPH_GKKPFPKCODO_OFFSET UNITYSDK_OFFSET(0xD381E90)
#define CFFPEAALCPH_GNLMMEIMBOO_OFFSET UNITYSDK_OFFSET(0xD389D20)
#define CFFPEAALCPH_GNNOHDAGPHE_OFFSET UNITYSDK_OFFSET(0xD3810A0)
#define CFFPEAALCPH_GOGLAAOBOCK_OFFSET UNITYSDK_OFFSET(0xD37FB00)
#define CFFPEAALCPH_HAFJBGNMIFG_OFFSET UNITYSDK_OFFSET(0xD388840)
#define CFFPEAALCPH_HFEMLLPLCKL_OFFSET UNITYSDK_OFFSET(0xD382A20)
#define CFFPEAALCPH_HHBGDLMBGMJ_OFFSET UNITYSDK_OFFSET(0xD3881A0)
#define CFFPEAALCPH_HKJNJCEHJLH_OFFSET UNITYSDK_OFFSET(0xD384B90)
#define CFFPEAALCPH_HKJOPFJCAEO_OFFSET UNITYSDK_OFFSET(0xD380CE0)
#define CFFPEAALCPH_HNJOBPAMIJC_OFFSET UNITYSDK_OFFSET(0xD3837A0)
#define CFFPEAALCPH_HOCGJGKDCHA_OFFSET UNITYSDK_OFFSET(0xD38AC00)
#define CFFPEAALCPH_IALJHCECMPG_OFFSET UNITYSDK_OFFSET(0xD37C2B0)
#define CFFPEAALCPH_IBBNADBAGKH_OFFSET UNITYSDK_OFFSET(0xD38B210)
#define CFFPEAALCPH_IBLMJDIOEMP_OFFSET UNITYSDK_OFFSET(0xD383570)
#define CFFPEAALCPH_IFHGMPNGFFE_OFFSET UNITYSDK_OFFSET(0xD3817A0)
#define CFFPEAALCPH_IGHIPHJHFLM_OFFSET UNITYSDK_OFFSET(0xD37C730)
#define CFFPEAALCPH_IHIKJLNFPII_OFFSET UNITYSDK_OFFSET(0xD38ACB0)
#define CFFPEAALCPH_INNMCDEPEPP_OFFSET UNITYSDK_OFFSET(0xD3821F0)
#define CFFPEAALCPH_JBGCHLNAJAB_OFFSET UNITYSDK_OFFSET(0xD38ADB0)
#define CFFPEAALCPH_JFGIOFPKDPB_OFFSET UNITYSDK_OFFSET(0xD3838E0)
#define CFFPEAALCPH_JGMMKJCLGKJ_OFFSET UNITYSDK_OFFSET(0xD389620)
#define CFFPEAALCPH_JIENENJGBBI_OFFSET UNITYSDK_OFFSET(0xD382F80)
#define CFFPEAALCPH_JLIMIFLEKNF_OFFSET UNITYSDK_OFFSET(0xD37C050)
#define CFFPEAALCPH_JMAFAKMKPMK_OFFSET UNITYSDK_OFFSET(0xD38B200)
#define CFFPEAALCPH_JMEDCMHJIJB_OFFSET UNITYSDK_OFFSET(0xD389780)
#define CFFPEAALCPH_JPPLIJOJLJL_OFFSET UNITYSDK_OFFSET(0xD3859F0)
#define CFFPEAALCPH_KBDOOFGPPCJ_OFFSET UNITYSDK_OFFSET(0xD383E20)
#define CFFPEAALCPH_KBODBHJELLL_OFFSET UNITYSDK_OFFSET(0xD37F8F0)
#define CFFPEAALCPH_KFAFLBGKPNO_OFFSET UNITYSDK_OFFSET(0xD37C4E0)
#define CFFPEAALCPH_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0xD388D50)
#define CFFPEAALCPH_KMPPCODELPB_OFFSET UNITYSDK_OFFSET(0xD382180)
#define CFFPEAALCPH_KNPPADIFPFK_OFFSET UNITYSDK_OFFSET(0xD3808F0)
#define CFFPEAALCPH_KPPBEEPPLFA_OFFSET UNITYSDK_OFFSET(0xD38A790)
#define CFFPEAALCPH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD3861A0)
#define CFFPEAALCPH_LDJHLOAMBHM_OFFSET UNITYSDK_OFFSET(0xD37CA00)
#define CFFPEAALCPH_LFKENPCFFCO_OFFSET UNITYSDK_OFFSET(0xD37BF50)
#define CFFPEAALCPH_LGIDEBOBDIE_OFFSET UNITYSDK_OFFSET(0xD37C410)
#define CFFPEAALCPH_LIBFBNJODBF_OFFSET UNITYSDK_OFFSET(0xD37FA50)
#define CFFPEAALCPH_LIFIMCJMOFF_OFFSET UNITYSDK_OFFSET(0xD389700)
#define CFFPEAALCPH_LJHGHDPJLCN_OFFSET UNITYSDK_OFFSET(0xD3835F0)
#define CFFPEAALCPH_LKOJIMODMEJ_OFFSET UNITYSDK_OFFSET(0xD388B60)
#define CFFPEAALCPH_LKPENAKALIP_OFFSET UNITYSDK_OFFSET(0xD380F30)
#define CFFPEAALCPH_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xD37DA30)
#define CFFPEAALCPH_LMPEJAFEHME_OFFSET UNITYSDK_OFFSET(0xD3822F0)
#define CFFPEAALCPH_LNDAFCEABDL_OFFSET UNITYSDK_OFFSET(0xD3899A0)
#define CFFPEAALCPH_LPFGHDDJIOI_OFFSET UNITYSDK_OFFSET(0xD38A6B0)
#define CFFPEAALCPH_LPHDGLJJFNB_OFFSET UNITYSDK_OFFSET(0xD380C60)
#define CFFPEAALCPH_LPOKCBPCHFC_OFFSET UNITYSDK_OFFSET(0xD3894A0)
#define CFFPEAALCPH_MAADNLNEJCN_OFFSET UNITYSDK_OFFSET(0xD37D660)
#define CFFPEAALCPH_MFMFDKCHOAJ_OFFSET UNITYSDK_OFFSET(0xD384440)
#define CFFPEAALCPH_MGOGJCBJCMF_OFFSET UNITYSDK_OFFSET(0xD3843A0)
#define CFFPEAALCPH_MIAFKDJLBED_OFFSET UNITYSDK_OFFSET(0xD3836F0)
#define CFFPEAALCPH_MJFNDPOLCEL_OFFSET UNITYSDK_OFFSET(0xD382270)
#define CFFPEAALCPH_MKFIBPHPPFK_OFFSET UNITYSDK_OFFSET(0xD3891A0)
#define CFFPEAALCPH_NDACOPLMLAK_OFFSET UNITYSDK_OFFSET(0xD389FB0)
#define CFFPEAALCPH_NDKKKNJJDHO_OFFSET UNITYSDK_OFFSET(0xD38A1A0)
#define CFFPEAALCPH_NHEPLLKLGJJ_OFFSET UNITYSDK_OFFSET(0xD38A2E0)
#define CFFPEAALCPH_NNHBCIAJAGC_OFFSET UNITYSDK_OFFSET(0xD387B30)
#define CFFPEAALCPH_OALGNOCPAPI_OFFSET UNITYSDK_OFFSET(0xD3874E0)
#define CFFPEAALCPH_OBBCKEOKDDI_OFFSET UNITYSDK_OFFSET(0xD383CB0)
#define CFFPEAALCPH_OCHJAEKBNJE_OFFSET UNITYSDK_OFFSET(0xD38B1F0)
#define CFFPEAALCPH_ODMHAHJNGHC_OFFSET UNITYSDK_OFFSET(0xD383680)
#define CFFPEAALCPH_OJJMBGOPFHK_OFFSET UNITYSDK_OFFSET(0xD380C00)
#define CFFPEAALCPH_OKAHJJEPCDL_OFFSET UNITYSDK_OFFSET(0xD389A60)
#define CFFPEAALCPH_OKGNGGADHHL_OFFSET UNITYSDK_OFFSET(0xD384520)
#define CFFPEAALCPH_OLPOPCCMMOJ_OFFSET UNITYSDK_OFFSET(0xD37BFB0)
#define CFFPEAALCPH_OMHAIMPHDHH_OFFSET UNITYSDK_OFFSET(0xD37F9E0)
#define CFFPEAALCPH_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xD37EF10)
#define CFFPEAALCPH_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xD37F960)
#define CFFPEAALCPH_OOPHEMFNEFD_OFFSET UNITYSDK_OFFSET(0xD381820)
#define CFFPEAALCPH_PENOIAAOILK_OFFSET UNITYSDK_OFFSET(0xD380B10)
#define CFFPEAALCPH_PLCLEKODIFI_OFFSET UNITYSDK_OFFSET(0xD387E80)
#define CFFPEAALCPH_PLFEIOCNDAN_OFFSET UNITYSDK_OFFSET(0xD382EE0)
#define CFFPEAALCPH_PLKPFPONOFC_OFFSET UNITYSDK_OFFSET(0xD389150)
#define CFFPEAALCPH_PMHCAKMHJLL_OFFSET UNITYSDK_OFFSET(0xD389E70)
#define CFFPEAALCPH_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0xD380FD0)
#define CFFPEAALCPH_SET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD38B000)
#define CFFPEAALCPH_SET_ANIMEXTERNALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xD38B1A0)
#define CFFPEAALCPH_SET_ANIMVISULTIMESCALE_OFFSET UNITYSDK_OFFSET(0xD38B180)
#define CFFPEAALCPH_SET_CUSTOMVISUALLAYERNAME_OFFSET UNITYSDK_OFFSET(0xD38AEE0)
#define CFFPEAALCPH_SET_FULLBODYIK_OFFSET UNITYSDK_OFFSET(0xD38B060)
#define CFFPEAALCPH_SET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xD38AFC0)
#define CFFPEAALCPH_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD38AF60)
#define CFFPEAALCPH_SET_HITADDITIVELAYERNAME_OFFSET UNITYSDK_OFFSET(0xD38AF00)
#define CFFPEAALCPH_SET_HITOVERRIDELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD38AF80)
#define CFFPEAALCPH_SET_HITOVERRIDELAYERNAME_OFFSET UNITYSDK_OFFSET(0xD38AF20)
#define CFFPEAALCPH_SET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xD38AFE0)
#define CFFPEAALCPH_SET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD38B020)
#define CFFPEAALCPH_SET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xD38B040)
#define CFFPEAALCPH_SET_MODIFIERPHASE2ENDRECORDINANIMSTOPSTATE_OFFSET UNITYSDK_OFFSET(0xD38B1C0)
#define CFFPEAALCPH_SET_OVERRIDECONTROLLERSWITCHER_OFFSET UNITYSDK_OFFSET(0xD38B160)
#define CFFPEAALCPH_SET_PHASEREF_OFFSET UNITYSDK_OFFSET(0xD38B1E0)
#define CFFPEAALCPH_SET_RECIVEDEADHANDLEREVENT_OFFSET UNITYSDK_OFFSET(0xD38AFA0)
#define CFFPEAALCPH_SET_VISUALLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD38AF40)
#define CFFPEAALCPH_SET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xD38B080)
#define CFFPEAALCPH_SET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD38B0A0)
#define CFFPEAALCPH_TICK_OFFSET UNITYSDK_OFFSET(0xD384680)

inline static constexpr unsigned int CFFPEAALCPH_TypeDefinitionIndex = 58125;

	class CFFPEAALCPH : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::NCMHCCGKLAH* LMCGNOKGHBN; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NEOCEOCDEAF*>* INMNMAPFKFJ; // 0x20
		::CEBMNLPNKFL* EJIGGDBANIB; // 0x28
		::RPG::Client::OverrideControllerSwitcher* _OverrideControllerSwitcher_k__BackingField; // 0x30
		::CEBMNLPNKFL* BMKEEDBCEHM; // 0x38
		::System::String* _CustomVisualLayerName_k__BackingField; // 0x40
		::RPG::GameCore::GameEntity* FOLIDJGNLOO; // 0x48
		::CEBMNLPNKFL* GCBEELGKOEJ; // 0x50
		::JBHLJMENAPJ* ILLOMEFMFHM; // 0x58
		::CEBMNLPNKFL* NIBKGDLKPEB; // 0x60
		::HOMDJMMOCJK* _PhaseRef_k__BackingField; // 0x68
		::RPG::GameCore::CharacterDataComponent* CBBCNOIONLG; // 0x70
		::System::Collections::Generic::HashSet_1<::System::Int32>* ADCBOPAELLM; // 0x78
		::RPG::Client::MonoFullBodyIK* _FullBodyIK_k__BackingField; // 0x80
		::System::String* ANCIFPBBEIL; // 0x88
		::System::String* _HitOverrideLayerName_k__BackingField; // 0x90
		::RPG::Client::LookAtIK* _LookAtIK_k__BackingField; // 0x98
		::RPG::Client::AdditiveHitWeaponAttachmentHandler* _WeaponAttachmentHandler_k__BackingField; // 0xA0
		::CEBMNLPNKFL* OBEDPMOJINF; // 0xA8
		::System::Collections::Generic::List_1<::BMOMAEJOJJP*>* GPDJMIACMCC; // 0xB0
		::System::String* _HitAdditiveLayerName_k__BackingField; // 0xB8
		::RPG::Client::AvatarAimController* _AimController_k__BackingField; // 0xC0
		::Il2CppArray<::COKICPIHPAC*>* OGDFEPGPPCI; // 0xC8
		::GIPKHEMODAD* NIOKKOEDIDO; // 0xD0
		::RootMotion::FinalIK::GrounderIK* _GrounderIK_k__BackingField; // 0xD8
		::System::Collections::Generic::List_1<::CNHFDCJCFLL*>* NGPOLAJHJCG; // 0xE0
		::RPG::Client::FABRIK_WeaponControl* _WeaponController_k__BackingField; // 0xE8
		::FHHBMOKIIKM* OPFODMBGBGF; // 0xF0
		::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* _LimbIKs_k__BackingField; // 0xF8
		::CFFPEAALCPH_JJGHFDADLPD* LNKLEKJPNHK; // 0x100
		::RPG::Client::AvatarLookAtController* _LookAtController_k__BackingField; // 0x108
		::System::String* IOBCJPPPBIO; // 0x110
		::System::UInt32 DDDHJDJODID; // 0x118
		::System::Int32 PGEEGFMCBAM; // 0x11C
		::System::Int32 _HitOverrideLayerIndex_k__BackingField; // 0x120
		::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0x124
		::System::Single GIFCMBFPFMB; // 0x128
		::System::Int32 CNJDCOADBCH; // 0x12C
		::RPG::GameCore::CharacterEmoState CKMADMEMHFE; // 0x130
		::System::Int32 _VisualLayerIndex_k__BackingField; // 0x134
		::System::Int32 HFJNAKJJBHA; // 0x138
		::System::Int32 MKKACJMKCNM; // 0x13C
		::System::Int32 OPCFGGCHLKP; // 0x140
		::System::Int32 NJDBCDGGBKO; // 0x144
		::System::Int32 LOILPKNHDPF; // 0x148
		::System::Single _AnimVisulTimeScale_k__BackingField; // 0x14C
		::System::UInt32 ICIOHPALEKH; // 0x150
		::System::Single _AnimExternalTimeScale_k__BackingField; // 0x154
		::System::Int32 EOGOCEFLINC; // 0x158
		::System::Int32 KKFIHNEKFFA; // 0x15C
		::System::Int32 BPAEFEKNGDJ; // 0x160
		::System::Int32 DEKPIEHINGO; // 0x164
		::System::UInt32 KJIBKJKCNCA; // 0x168
		::System::Int32 KGHFMEOIPNP; // 0x16C
		::OOPPBPJHHJK LFPCIGGAOEF; // 0x170
		::System::Boolean _ReciveDeadHandlerEvent_k__BackingField; // 0x180
		::System::Boolean NMCBADPELHI; // 0x181
		::System::Boolean KANKADMLCMB; // 0x182
		::System::Boolean AEOPHJKAGIN; // 0x183
		::System::Int32 CIBAAJGCIPL; // 0x184
		::System::Int32 PHNNNDLKILB; // 0x188
		::System::Boolean CBDNJHBBILO; // 0x18C
		::System::Boolean AJBDIGHLMDC; // 0x18D
		::System::Boolean NPMEDBOIGIA; // 0x18E
		::System::Boolean LANEOCINKIO; // 0x18F
		::System::Single DNKNPLBMHJH; // 0x190
		::System::Boolean MMMOFHOKBLN; // 0x194
		::System::Boolean FJFPOOJOBPF; // 0x195
		::System::Boolean PNCGCMJFOLG; // 0x196
		::System::Boolean _ModifierPhase2EndRecordInAnimStopState_k__BackingField; // 0x197
		::RPG::GameCore::ResilienceEnum MFMEANEANHD; // 0x198
		::System::UInt32 LOABAFHHCJP; // 0x19C
		::System::Int32 EJPHDNJDPDD; // 0x1A0
		::System::Int32 HCOFHHGJHPD; // 0x1A4
		::RPG::MVector3 KJGLNGABFDD; // 0x1A8
		::RPG::MVector3 FGPABJLGHEB; // 0x1B4
		// static const ::System::Object GCAGIEMBPPK; // 0x0
		// static const ::System::Object FIGLCDHJPLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CTOR_OFFSET))(this);
		}

		::System::Boolean FGAJAJEPFHK(::RPGTools::Timeline::BattlePerform::BPCharacterMoveData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterMoveData*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_FGAJAJEPFHK_OFFSET))(this, a1);
		}

		::System::Void LFKENPCFFCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LFKENPCFFCO_OFFSET))(this);
		}

		::System::Void OLPOPCCMMOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OLPOPCCMMOJ_OFFSET))(this);
		}

		::System::Void JLIMIFLEKNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JLIMIFLEKNF_OFFSET))(this);
		}

		::System::Void DNHFENKBDKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_DNHFENKBDKK_OFFSET))(this);
		}

		::System::Void AEIPMJBPHNN(::RPG::GameCore::SyncAnimWithBgm* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SyncAnimWithBgm*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AEIPMJBPHNN_OFFSET))(this, a1);
		}

		::System::Void LGIDEBOBDIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LGIDEBOBDIE_OFFSET))(this);
		}

		::System::Void KFAFLBGKPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_KFAFLBGKPNO_OFFSET))(this, a1);
		}

		::System::Void IGHIPHJHFLM(::CFFPEAALCPH_JJGHFDADLPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFFPEAALCPH_JJGHFDADLPD*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_IGHIPHJHFLM_OFFSET))(this, a1);
		}

		::System::Void EOHLNLGMHHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_EOHLNLGMHHL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::CharacterDataComponent* a1, ::RPG::GameCore::GameEntity* a2, ::NILCJPJGMJC* a3, ::System::String* a4, ::RPG::GameCore::AnimStateFsmType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*, ::RPG::GameCore::GameEntity*, ::NILCJPJGMJC*, ::System::String*, ::RPG::GameCore::AnimStateFsmType))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FPPPOHAGAON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_FPPPOHAGAON_OFFSET))(this);
		}

		::System::Void MAADNLNEJCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_MAADNLNEJCN_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void OMHAIMPHDHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OMHAIMPHDHH_OFFSET))(this);
		}

		::System::Boolean LIBFBNJODBF(::System::String* a1, ::MBBEBLGELAP* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LIBFBNJODBF_OFFSET))(this, a1, a2);
		}

		::System::Void GOGLAAOBOCK(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GOGLAAOBOCK_OFFSET))(this, a1, a2);
		}

		::System::Void ENBOEHDHCAL(::RPG::GameCore::AnimStateLogicType a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::AnimStateLogicTypeExtra a6, ::System::UInt32 a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::AnimStateLogicTypeExtra, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_ENBOEHDHCAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void FIFENHGIIHO(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_FIFENHGIIHO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AnimStateLogicType DMKEMKGAHLM()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_DMKEMKGAHLM_OFFSET))(this);
		}

		::System::Object* AHCIBNGCJIE(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AHCIBNGCJIE_OFFSET))(this, a1);
		}

		::CEBMNLPNKFL* DFMLKHLMHPM()
		{
			return ((::CEBMNLPNKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_DFMLKHLMHPM_OFFSET))(this);
		}

		::System::Void OJJMBGOPFHK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OJJMBGOPFHK_OFFSET))(this, a1);
		}

		::System::Void LPHDGLJJFNB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LPHDGLJJFNB_OFFSET))(this, a1);
		}

		::CEBMNLPNKFL* HKJOPFJCAEO()
		{
			return ((::CEBMNLPNKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_HKJOPFJCAEO_OFFSET))(this);
		}

		::System::Single CKABCPJKAOJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CKABCPJKAOJ_OFFSET))(this);
		}

		::RPG::Client::MockAnimator* IALJHCECMPG()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_IALJHCECMPG_OFFSET))(this);
		}

		::UnityEngine::Animator* GetUnityAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GETUNITYANIMATOR_OFFSET))(this);
		}

		::System::Single AIIDDFJHEPH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AIIDDFJHEPH_OFFSET))(this);
		}

		::JHMBGNKOIJH* CFCMOPDNJOG()
		{
			return ((::JHMBGNKOIJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CFCMOPDNJOG_OFFSET))(this);
		}

		::System::Void CIBBCOIEALC(::EJOHLHMLFAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJOHLHMLFAO*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CIBBCOIEALC_OFFSET))(this, a1);
		}

		::System::Void LKPENAKALIP(::EJOHLHMLFAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJOHLHMLFAO*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LKPENAKALIP_OFFSET))(this, a1);
		}

		::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
		}

		::ONLHJAEPLBB GBMFBOBAIAE()
		{
			return ((::ONLHJAEPLBB(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GBMFBOBAIAE_OFFSET))(this);
		}

		::ONLHJAEPLBB GNNOHDAGPHE()
		{
			return ((::ONLHJAEPLBB(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GNNOHDAGPHE_OFFSET))(this);
		}

		::System::Void AGLJAHOBLIO(::System::String* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AGLJAHOBLIO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IFHGMPNGFFE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_IFHGMPNGFFE_OFFSET))(this, a1);
		}

		::System::Void OOPHEMFNEFD(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OOPHEMFNEFD_OFFSET))(this, a1, a2);
		}

		::System::Boolean GFBAFFOGLEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GFBAFFOGLEN_OFFSET))(this);
		}

		::System::Boolean GKKPFPKCODO(::RPG::GameCore::CharacterEmoState a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterEmoState, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GKKPFPKCODO_OFFSET))(this, a1, a2);
		}

		::System::Single LMPEJAFEHME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LMPEJAFEHME_OFFSET))(this);
		}

		::System::Void AHEODFNLELK(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AHEODFNLELK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EHDJMGPGABE(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_EHDJMGPGABE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean APICJPMPEFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_APICJPMPEFH_OFFSET))(this);
		}

		::System::Void LDJHLOAMBHM(::RPG::GameCore::BuildInAnimParam a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BuildInAnimParam, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LDJHLOAMBHM_OFFSET))(this, a1, a2);
		}

		::System::Void HFEMLLPLCKL(::RPG::GameCore::BuildInAnimParam a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BuildInAnimParam, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_HFEMLLPLCKL_OFFSET))(this, a1, a2);
		}

		::System::Void FKEDCFNFLDK(::RPG::GameCore::BuildInAnimParam a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BuildInAnimParam, ::System::Int32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_FKEDCFNFLDK_OFFSET))(this, a1, a2);
		}

		::System::Boolean PLFEIOCNDAN(::RPG::GameCore::BuildInAnimParam a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BuildInAnimParam))((::PBYTE)hIl2Cpp + CFFPEAALCPH_PLFEIOCNDAN_OFFSET))(this, a1);
		}

		::System::Void JIENENJGBBI(::RPG::MVector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JIENENJGBBI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IBLMJDIOEMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_IBLMJDIOEMP_OFFSET))(this, a1);
		}

		::System::Void LJHGHDPJLCN(::UnityEngine::Vector3 a1, ::RPG::GameCore::CharacterHeadConstraint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LJHGHDPJLCN_OFFSET))(this, a1, a2);
		}

		::System::Void ODMHAHJNGHC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_ODMHAHJNGHC_OFFSET))(this, a1);
		}

		::System::Void MIAFKDJLBED(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_MIAFKDJLBED_OFFSET))(this, a1, a2);
		}

		::System::Boolean HNJOBPAMIJC(::BGOBCKLPEMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGOBCKLPEMK*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_HNJOBPAMIJC_OFFSET))(this, a1);
		}

		::System::Single JFGIOFPKDPB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JFGIOFPKDPB_OFFSET))(this);
		}

		::System::Void CBJOPEHHIFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CBJOPEHHIFL_OFFSET))(this);
		}

		::System::Void CBJOPEHHIFL_1(::System::Single a1, ::System::Single a2, ::System::String* a3, ::RPG::MVector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CBJOPEHHIFL_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OBBCKEOKDDI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OBBCKEOKDDI_OFFSET))(this, a1);
		}

		::System::Void KBDOOFGPPCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_KBDOOFGPPCJ_OFFSET))(this);
		}

		::System::Void DKKAAIGFHDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_DKKAAIGFHDO_OFFSET))(this);
		}

		::System::Boolean CDCCLBBMHPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CDCCLBBMHPM_OFFSET))(this);
		}

		::System::Void OKGNGGADHHL(::BMOMAEJOJJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMOMAEJOJJP*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OKGNGGADHHL_OFFSET))(this, a1);
		}

		::RPG::MVector3 EPGHPONDNOO()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_EPGHPONDNOO_OFFSET))(this);
		}

		::System::Boolean BHAOHJKCPKH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_BHAOHJKCPKH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_TICK_OFFSET))(this, a1);
		}

		::System::Void FDGKEDAOELI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_FDGKEDAOELI_OFFSET))(this);
		}

		::System::Void CAGFCPHJNKD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CAGFCPHJNKD_OFFSET))(this, a1);
		}

		::System::Void JPPLIJOJLJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JPPLIJOJLJL_OFFSET))(this);
		}

		::System::Void DLPNJIBOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_DLPNJIBOLKA_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean NNHBCIAJAGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_NNHBCIAJAGC_OFFSET))(this);
		}

		::System::Void HHBGDLMBGMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_HHBGDLMBGMJ_OFFSET))(this);
		}

		::System::Boolean FPKGNEJCJND(::RPG::GameCore::AnimCategory a1, ::RPG::GameCore::ModifierBehaviorVisual* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimCategory, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_FPKGNEJCJND_OFFSET))(this, a1, a2);
		}

		::System::String* AHLDKPCIEJL(::RPG::GameCore::AnimCategory a1, ::RPG::GameCore::OnHitAnimType a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AnimCategory, ::RPG::GameCore::OnHitAnimType))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AHLDKPCIEJL_OFFSET))(this, a1, a2);
		}

		::System::String* AHLDKPCIEJL_1(::RPG::GameCore::AnimCategory a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AnimCategory))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AHLDKPCIEJL_1_OFFSET))(this, a1);
		}

		::System::Void KBODBHJELLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_KBODBHJELLL_OFFSET))(this);
		}

		::System::Int32 GetUnevaluatedNextState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
		}

		::System::Boolean GCIIBECKBJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GCIIBECKBJF_OFFSET))(this);
		}

		::System::Boolean HAFJBGNMIFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_HAFJBGNMIFG_OFFSET))(this);
		}

		::System::Boolean CLPPEGIOHBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CLPPEGIOHBP_OFFSET))(this);
		}

		::System::Void AAAEOEBBJCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AAAEOEBBJCL_OFFSET))(this);
		}

		::System::Void LKOJIMODMEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LKOJIMODMEJ_OFFSET))(this);
		}

		::System::Void PLKPFPONOFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_PLKPFPONOFC_OFFSET))(this);
		}

		::System::Void MKFIBPHPPFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_MKFIBPHPPFK_OFFSET))(this);
		}

		::System::Void CAAFHODLAPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CAAFHODLAPK_OFFSET))(this);
		}

		::System::Boolean FJKGGJOMGCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_FJKGGJOMGCH_OFFSET))(this);
		}

		::System::Void LPOKCBPCHFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LPOKCBPCHFC_OFFSET))(this);
		}

		::System::Boolean LIFIMCJMOFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LIFIMCJMOFF_OFFSET))(this);
		}

		::System::Void JMEDCMHJIJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JMEDCMHJIJB_OFFSET))(this);
		}

		::System::Void PENOIAAOILK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_PENOIAAOILK_OFFSET))(this);
		}

		::System::Void CNANDAKOCEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CNANDAKOCEM_OFFSET))(this);
		}

		::System::Void GEEFBIHPEKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GEEFBIHPEKP_OFFSET))(this, a1);
		}

		::System::Void LNDAFCEABDL(::CNHFDCJCFLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNHFDCJCFLL*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LNDAFCEABDL_OFFSET))(this, a1);
		}

		::System::Void OKAHJJEPCDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OKAHJJEPCDL_OFFSET))(this);
		}

		::System::String* DPNHAGMHLNG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_DPNHAGMHLNG_OFFSET))(this);
		}

		::System::Void KHIMHKPIMGJ(::System::Boolean a1, ::System::Single a2, ::System::Boolean a3, ::RPG::GameCore::AnimStateLogicTypeExtra a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::RPG::GameCore::AnimStateLogicTypeExtra, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_KHIMHKPIMGJ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CJJOHMHGLNF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CJJOHMHGLNF_OFFSET))(this, a1);
		}

		::System::Void PMHCAKMHJLL(::RPG::GameCore::ModifierBehaviorVisual* a1, ::RPG::GameCore::ModifierBehaviorVisual* a2, ::RPG::GameCore::ModifierBehaviorVisual* a3, ::RPG::GameCore::ModifierBehaviorVisual* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*, ::RPG::GameCore::ModifierBehaviorVisual*, ::RPG::GameCore::ModifierBehaviorVisual*, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_PMHCAKMHJLL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DHJCLIFCJKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_DHJCLIFCJKC_OFFSET))(this);
		}

		::System::Boolean EGGJNHLEFKH(::RPG::GameCore::AnimStateLogicType a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::System::String*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_EGGJNHLEFKH_OFFSET))(this, a1, a2);
		}

		::System::Void CJDNBOCFEDP(::System::Single a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CJDNBOCFEDP_OFFSET))(this, a1, a2, a3);
		}

		::System::Single NDACOPLMLAK(::System::Single a1, ::RPG::GameCore::ModifierBehaviorVisual* a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::RPG::GameCore::ModifierBehaviorVisual*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_NDACOPLMLAK_OFFSET))(this, a1, a2, a3);
		}

		::CEBMNLPNKFL* CDLLBNKDCAM(::System::Single a1)
		{
			return ((::CEBMNLPNKFL*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CDLLBNKDCAM_OFFSET))(this, a1);
		}

		::CEBMNLPNKFL* GICBGCEOKIO()
		{
			return ((::CEBMNLPNKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GICBGCEOKIO_OFFSET))(this);
		}

		::CEBMNLPNKFL* NDKKKNJJDHO()
		{
			return ((::CEBMNLPNKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_NDKKKNJJDHO_OFFSET))(this);
		}

		::System::Void BHAOLDLFMHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_BHAOLDLFMHN_OFFSET))(this);
		}

		::System::Void FMNIICBFFCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_FMNIICBFFCH_OFFSET))(this);
		}

		::System::Void NHEPLLKLGJJ(::RPG::GameCore::ModifierBehaviorVisual* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_NHEPLLKLGJJ_OFFSET))(this, a1);
		}

		::System::Void OALGNOCPAPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OALGNOCPAPI_OFFSET))(this);
		}

		::System::Void KPPBEEPPLFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_KPPBEEPPLFA_OFFSET))(this);
		}

		::System::Void AOOGEEJFJHB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_AOOGEEJFJHB_OFFSET))(this, a1);
		}

		::System::Int32 KMPPCODELPB(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_KMPPCODELPB_OFFSET))(this, a1);
		}

		::System::Int32 GEKEFMKDGBK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GEKEFMKDGBK_OFFSET))(this);
		}

		::System::Void EHGGICNNBGO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_EHGGICNNBGO_OFFSET))(this, a1);
		}

		::System::Void HOCGJGKDCHA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_HOCGJGKDCHA_OFFSET))(this, a1);
		}

		::System::Void IHIKJLNFPII(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_IHIKJLNFPII_OFFSET))(this, a1);
		}

		::System::Void JBGCHLNAJAB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JBGCHLNAJAB_OFFSET))(this, a1);
		}

		::System::Void HKJNJCEHJLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_HKJNJCEHJLH_OFFSET))(this);
		}

		::System::Boolean GGFBBKJDDEA(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::ModifierBehaviorVisual* a3, ::RPG::GameCore::ModifierBehaviorVisual* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::ModifierBehaviorVisual*, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GGFBBKJDDEA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean PLCLEKODIFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_PLCLEKODIFI_OFFSET))(this);
		}

		::System::String* GNLMMEIMBOO(::RPG::GameCore::ModifierBehaviorVisual* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GNLMMEIMBOO_OFFSET))(this, a1);
		}

		::System::Int32 MFMFDKCHOAJ(::RPG::GameCore::ModifierBehaviorVisual* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_MFMFDKCHOAJ_OFFSET))(this, a1);
		}

		::System::Int32 JGMMKJCLGKJ(::RPG::GameCore::ModifierBehaviorVisual* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JGMMKJCLGKJ_OFFSET))(this, a1);
		}

		::System::Int32 LPFGHDDJIOI(::RPG::GameCore::ModifierBehaviorVisual* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_LPFGHDDJIOI_OFFSET))(this, a1);
		}

		::System::String* KNPPADIFPFK(::RPG::GameCore::ModifierBehaviorVisual* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_KNPPADIFPFK_OFFSET))(this, a1);
		}

		::System::Void EOGOIGBMFFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_EOGOIGBMFFB_OFFSET))(this, a1);
		}

		::System::Void EGBEAJKJDJD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_EGBEAJKJDJD_OFFSET))(this, a1);
		}

		::System::Void CIGMNBGFALL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_CIGMNBGFALL_OFFSET))(this, a1);
		}

		::System::Void MJFNDPOLCEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_MJFNDPOLCEL_OFFSET))(this);
		}

		::System::Void INNMCDEPEPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_INNMCDEPEPP_OFFSET))(this);
		}

		::System::String* get_CustomVisualLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_CUSTOMVISUALLAYERNAME_OFFSET))(this);
		}

		::System::Void set_CustomVisualLayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_CUSTOMVISUALLAYERNAME_OFFSET))(this, a1);
		}

		::System::String* get_HitAdditiveLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_HITADDITIVELAYERNAME_OFFSET))(this);
		}

		::System::Void set_HitAdditiveLayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_HITADDITIVELAYERNAME_OFFSET))(this, a1);
		}

		::System::String* get_HitOverrideLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_HITOVERRIDELAYERNAME_OFFSET))(this);
		}

		::System::Void set_HitOverrideLayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_HITOVERRIDELAYERNAME_OFFSET))(this, a1);
		}

		::System::Int32 get_VisualLayerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_VISUALLAYERINDEX_OFFSET))(this);
		}

		::System::Void set_VisualLayerIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_VISUALLAYERINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_HitAdditiveLayerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_HITADDITIVELAYERINDEX_OFFSET))(this);
		}

		::System::Void set_HitAdditiveLayerIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_HITADDITIVELAYERINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_HitOverrideLayerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_HITOVERRIDELAYERINDEX_OFFSET))(this);
		}

		::System::Void set_HitOverrideLayerIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_HITOVERRIDELAYERINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_ReciveDeadHandlerEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_RECIVEDEADHANDLEREVENT_OFFSET))(this);
		}

		::System::Void set_ReciveDeadHandlerEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_RECIVEDEADHANDLEREVENT_OFFSET))(this, a1);
		}

		::RootMotion::FinalIK::GrounderIK* get_GrounderIK()
		{
			return ((::RootMotion::FinalIK::GrounderIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_GROUNDERIK_OFFSET))(this);
		}

		::System::Void set_GrounderIK(::RootMotion::FinalIK::GrounderIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIK*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_GROUNDERIK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* get_LimbIKs()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::LimbIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_LIMBIKS_OFFSET))(this);
		}

		::System::Void set_LimbIKs(::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::LimbIK*>*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_LIMBIKS_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarAimController* get_AimController()
		{
			return ((::RPG::Client::AvatarAimController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_AIMCONTROLLER_OFFSET))(this);
		}

		::System::Void set_AimController(::RPG::Client::AvatarAimController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarAimController*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_AIMCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarLookAtController* get_LookAtController()
		{
			return ((::RPG::Client::AvatarLookAtController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_LOOKATCONTROLLER_OFFSET))(this);
		}

		::System::Void set_LookAtController(::RPG::Client::AvatarLookAtController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarLookAtController*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_LOOKATCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::LookAtIK* get_LookAtIK()
		{
			return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_LOOKATIK_OFFSET))(this);
		}

		::System::Void set_LookAtIK(::RPG::Client::LookAtIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_LOOKATIK_OFFSET))(this, a1);
		}

		::RPG::Client::MonoFullBodyIK* get_FullBodyIK()
		{
			return ((::RPG::Client::MonoFullBodyIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_FULLBODYIK_OFFSET))(this);
		}

		::System::Void set_FullBodyIK(::RPG::Client::MonoFullBodyIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoFullBodyIK*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_FULLBODYIK_OFFSET))(this, a1);
		}

		::RPG::Client::AdditiveHitWeaponAttachmentHandler* get_WeaponAttachmentHandler()
		{
			return ((::RPG::Client::AdditiveHitWeaponAttachmentHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_WEAPONATTACHMENTHANDLER_OFFSET))(this);
		}

		::System::Void set_WeaponAttachmentHandler(::RPG::Client::AdditiveHitWeaponAttachmentHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdditiveHitWeaponAttachmentHandler*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_WEAPONATTACHMENTHANDLER_OFFSET))(this, a1);
		}

		::RPG::Client::FABRIK_WeaponControl* get_WeaponController()
		{
			return ((::RPG::Client::FABRIK_WeaponControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_WEAPONCONTROLLER_OFFSET))(this);
		}

		::System::Void set_WeaponController(::RPG::Client::FABRIK_WeaponControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FABRIK_WeaponControl*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_WEAPONCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::GameCore::ModifierBehaviorVisual* MGOGJCBJCMF()
		{
			return ((::RPG::GameCore::ModifierBehaviorVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_MGOGJCBJCMF_OFFSET))(this);
		}

		::RPG::GameCore::ModifierBehaviorVisual* EHGFPGHNJAA()
		{
			return ((::RPG::GameCore::ModifierBehaviorVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_EHGFPGHNJAA_OFFSET))(this);
		}

		::RPG::Client::OverrideControllerSwitcher* get_OverrideControllerSwitcher()
		{
			return ((::RPG::Client::OverrideControllerSwitcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_OVERRIDECONTROLLERSWITCHER_OFFSET))(this);
		}

		::System::Void set_OverrideControllerSwitcher(::RPG::Client::OverrideControllerSwitcher* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OverrideControllerSwitcher*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_OVERRIDECONTROLLERSWITCHER_OFFSET))(this, a1);
		}

		::System::Single get_AnimVisulTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_ANIMVISULTIMESCALE_OFFSET))(this);
		}

		::System::Void set_AnimVisulTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_ANIMVISULTIMESCALE_OFFSET))(this, a1);
		}

		::System::Single get_AnimExternalTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_ANIMEXTERNALTIMESCALE_OFFSET))(this);
		}

		::System::Void set_AnimExternalTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_ANIMEXTERNALTIMESCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_ModifierPhase2EndRecordInAnimStopState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_MODIFIERPHASE2ENDRECORDINANIMSTOPSTATE_OFFSET))(this);
		}

		::System::Void set_ModifierPhase2EndRecordInAnimStopState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_MODIFIERPHASE2ENDRECORDINANIMSTOPSTATE_OFFSET))(this, a1);
		}

		::HOMDJMMOCJK* get_PhaseRef()
		{
			return ((::HOMDJMMOCJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_GET_PHASEREF_OFFSET))(this);
		}

		::System::Void set_PhaseRef(::HOMDJMMOCJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOMDJMMOCJK*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_SET_PHASEREF_OFFSET))(this, a1);
		}

		::System::UInt32 OCHJAEKBNJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_OCHJAEKBNJE_OFFSET))(this);
		}

		::System::Void JMAFAKMKPMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JMAFAKMKPMK_OFFSET))(this, a1);
		}

		::System::String* IBBNADBAGKH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_IBBNADBAGKH_OFFSET))(this);
		}

	};
