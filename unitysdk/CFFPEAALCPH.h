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

#define CFFPEAALCPH_AAAEOEBBJCL_OFFSET UNITYSDK_OFFSET(0xCA1E470)
#define CFFPEAALCPH_AEIPMJBPHNN_OFFSET UNITYSDK_OFFSET(0xCA11B80)
#define CFFPEAALCPH_AGLJAHOBLIO_OFFSET UNITYSDK_OFFSET(0xCA16B70)
#define CFFPEAALCPH_AHCIBNGCJIE_OFFSET UNITYSDK_OFFSET(0xCA165B0)
#define CFFPEAALCPH_AHEODFNLELK_OFFSET UNITYSDK_OFFSET(0xCA18040)
#define CFFPEAALCPH_AHLDKPCIEJL_1_OFFSET UNITYSDK_OFFSET(0xCA163A0)
#define CFFPEAALCPH_AHLDKPCIEJL_OFFSET UNITYSDK_OFFSET(0xCA1DC70)
#define CFFPEAALCPH_AIIDDFJHEPH_OFFSET UNITYSDK_OFFSET(0xCA16820)
#define CFFPEAALCPH_AOOGEEJFJHB_OFFSET UNITYSDK_OFFSET(0xCA1CE90)
#define CFFPEAALCPH_APICJPMPEFH_OFFSET UNITYSDK_OFFSET(0xCA17710)
#define CFFPEAALCPH_BHAOHJKCPKH_OFFSET UNITYSDK_OFFSET(0xCA1A020)
#define CFFPEAALCPH_BHAOLDLFMHN_OFFSET UNITYSDK_OFFSET(0xCA1BD70)
#define CFFPEAALCPH_CAAFHODLAPK_OFFSET UNITYSDK_OFFSET(0xCA1ED20)
#define CFFPEAALCPH_CAGFCPHJNKD_OFFSET UNITYSDK_OFFSET(0xCA1B050)
#define CFFPEAALCPH_CBJOPEHHIFL_1_OFFSET UNITYSDK_OFFSET(0xCA19620)
#define CFFPEAALCPH_CBJOPEHHIFL_OFFSET UNITYSDK_OFFSET(0xCA195C0)
#define CFFPEAALCPH_CDCCLBBMHPM_OFFSET UNITYSDK_OFFSET(0xCA19B20)
#define CFFPEAALCPH_CDLLBNKDCAM_OFFSET UNITYSDK_OFFSET(0xCA1F120)
#define CFFPEAALCPH_CFCMOPDNJOG_OFFSET UNITYSDK_OFFSET(0xCA16290)
#define CFFPEAALCPH_CIBBCOIEALC_OFFSET UNITYSDK_OFFSET(0xCA16910)
#define CFFPEAALCPH_CIGMNBGFALL_OFFSET UNITYSDK_OFFSET(0xCA1AC90)
#define CFFPEAALCPH_CJDNBOCFEDP_OFFSET UNITYSDK_OFFSET(0xCA1A940)
#define CFFPEAALCPH_CJJOHMHGLNF_OFFSET UNITYSDK_OFFSET(0xCA1F6E0)
#define CFFPEAALCPH_CKABCPJKAOJ_OFFSET UNITYSDK_OFFSET(0xCA167D0)
#define CFFPEAALCPH_CLPPEGIOHBP_OFFSET UNITYSDK_OFFSET(0xCA1E380)
#define CFFPEAALCPH_CNANDAKOCEM_OFFSET UNITYSDK_OFFSET(0xCA1CAA0)
#define CFFPEAALCPH_CTOR_OFFSET UNITYSDK_OFFSET(0xCA12A20)
#define CFFPEAALCPH_DFMLKHLMHPM_OFFSET UNITYSDK_OFFSET(0xCA16610)
#define CFFPEAALCPH_DHJCLIFCJKC_OFFSET UNITYSDK_OFFSET(0xCA15990)
#define CFFPEAALCPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA12CD0)
#define CFFPEAALCPH_DKKAAIGFHDO_OFFSET UNITYSDK_OFFSET(0xCA18360)
#define CFFPEAALCPH_DLPNJIBOLKA_OFFSET UNITYSDK_OFFSET(0xCA1B8F0)
#define CFFPEAALCPH_DMKEMKGAHLM_OFFSET UNITYSDK_OFFSET(0xCA162E0)
#define CFFPEAALCPH_DNHFENKBDKK_OFFSET UNITYSDK_OFFSET(0xCA11B20)
#define CFFPEAALCPH_DPNHAGMHLNG_OFFSET UNITYSDK_OFFSET(0xCA1F510)
#define CFFPEAALCPH_EGBEAJKJDJD_OFFSET UNITYSDK_OFFSET(0xCA1A300)
#define CFFPEAALCPH_EGGJNHLEFKH_OFFSET UNITYSDK_OFFSET(0xCA155D0)
#define CFFPEAALCPH_EHDJMGPGABE_OFFSET UNITYSDK_OFFSET(0xCA126A0)
#define CFFPEAALCPH_EHGFPGHNJAA_OFFSET UNITYSDK_OFFSET(0xCA20A10)
#define CFFPEAALCPH_EHGGICNNBGO_OFFSET UNITYSDK_OFFSET(0xCA20480)
#define CFFPEAALCPH_ENBOEHDHCAL_OFFSET UNITYSDK_OFFSET(0xCA14FF0)
#define CFFPEAALCPH_EOGOIGBMFFB_OFFSET UNITYSDK_OFFSET(0xCA16F80)
#define CFFPEAALCPH_EOHLNLGMHHL_OFFSET UNITYSDK_OFFSET(0xCA128F0)
#define CFFPEAALCPH_EPGHPONDNOO_OFFSET UNITYSDK_OFFSET(0xCA1A000)
#define CFFPEAALCPH_FDGKEDAOELI_OFFSET UNITYSDK_OFFSET(0xCA1AC10)
#define CFFPEAALCPH_FGAJAJEPFHK_OFFSET UNITYSDK_OFFSET(0xCA11950)
#define CFFPEAALCPH_FIFENHGIIHO_OFFSET UNITYSDK_OFFSET(0xCA15A00)
#define CFFPEAALCPH_FJKGGJOMGCH_OFFSET UNITYSDK_OFFSET(0xCA1ED70)
#define CFFPEAALCPH_FKEDCFNFLDK_OFFSET UNITYSDK_OFFSET(0xCA186B0)
#define CFFPEAALCPH_FMNIICBFFCH_OFFSET UNITYSDK_OFFSET(0xCA1C7D0)
#define CFFPEAALCPH_FPKGNEJCJND_OFFSET UNITYSDK_OFFSET(0xCA1DB50)
#define CFFPEAALCPH_FPPPOHAGAON_OFFSET UNITYSDK_OFFSET(0xCA13AD0)
#define CFFPEAALCPH_GBMFBOBAIAE_OFFSET UNITYSDK_OFFSET(0xCA16A70)
#define CFFPEAALCPH_GCIIBECKBJF_OFFSET UNITYSDK_OFFSET(0xCA1DEC0)
#define CFFPEAALCPH_GEEFBIHPEKP_OFFSET UNITYSDK_OFFSET(0xCA1F210)
#define CFFPEAALCPH_GEKEFMKDGBK_OFFSET UNITYSDK_OFFSET(0xCA18400)
#define CFFPEAALCPH_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0xCA1DE40)
#define CFFPEAALCPH_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0xCA14910)
#define CFFPEAALCPH_GET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCA20950)
#define CFFPEAALCPH_GET_ANIMEXTERNALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCA20AF0)
#define CFFPEAALCPH_GET_ANIMVISULTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCA20AD0)
#define CFFPEAALCPH_GET_CUSTOMVISUALLAYERNAME_OFFSET UNITYSDK_OFFSET(0xCA20830)
#define CFFPEAALCPH_GET_FULLBODYIK_OFFSET UNITYSDK_OFFSET(0xCA209B0)
#define CFFPEAALCPH_GET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xCA20910)
#define CFFPEAALCPH_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xCA208B0)
#define CFFPEAALCPH_GET_HITADDITIVELAYERNAME_OFFSET UNITYSDK_OFFSET(0xCA20850)
#define CFFPEAALCPH_GET_HITOVERRIDELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xCA208D0)
#define CFFPEAALCPH_GET_HITOVERRIDELAYERNAME_OFFSET UNITYSDK_OFFSET(0xCA20870)
#define CFFPEAALCPH_GET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xCA20930)
#define CFFPEAALCPH_GET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCA20970)
#define CFFPEAALCPH_GET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xCA20990)
#define CFFPEAALCPH_GET_MODIFIERPHASE2ENDRECORDINANIMSTOPSTATE_OFFSET UNITYSDK_OFFSET(0xCA20B10)
#define CFFPEAALCPH_GET_OVERRIDECONTROLLERSWITCHER_OFFSET UNITYSDK_OFFSET(0xCA20AB0)
#define CFFPEAALCPH_GET_PHASEREF_OFFSET UNITYSDK_OFFSET(0xCA20B30)
#define CFFPEAALCPH_GET_RECIVEDEADHANDLEREVENT_OFFSET UNITYSDK_OFFSET(0xCA208F0)
#define CFFPEAALCPH_GET_VISUALLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xCA20890)
#define CFFPEAALCPH_GET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xCA209D0)
#define CFFPEAALCPH_GET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCA209F0)
#define CFFPEAALCPH_GFBAFFOGLEN_OFFSET UNITYSDK_OFFSET(0xCA177F0)
#define CFFPEAALCPH_GGFBBKJDDEA_OFFSET UNITYSDK_OFFSET(0xCA1D8D0)
#define CFFPEAALCPH_GICBGCEOKIO_OFFSET UNITYSDK_OFFSET(0xCA1FA70)
#define CFFPEAALCPH_GKKPFPKCODO_OFFSET UNITYSDK_OFFSET(0xCA178E0)
#define CFFPEAALCPH_GNLMMEIMBOO_OFFSET UNITYSDK_OFFSET(0xCA1F670)
#define CFFPEAALCPH_GNNOHDAGPHE_OFFSET UNITYSDK_OFFSET(0xCA16AF0)
#define CFFPEAALCPH_GOGLAAOBOCK_OFFSET UNITYSDK_OFFSET(0xCA15550)
#define CFFPEAALCPH_HAFJBGNMIFG_OFFSET UNITYSDK_OFFSET(0xCA1E1B0)
#define CFFPEAALCPH_HFEMLLPLCKL_OFFSET UNITYSDK_OFFSET(0xCA18460)
#define CFFPEAALCPH_HHBGDLMBGMJ_OFFSET UNITYSDK_OFFSET(0xCA1DB00)
#define CFFPEAALCPH_HKJNJCEHJLH_OFFSET UNITYSDK_OFFSET(0xCA1A570)
#define CFFPEAALCPH_HKJOPFJCAEO_OFFSET UNITYSDK_OFFSET(0xCA16740)
#define CFFPEAALCPH_HNJOBPAMIJC_OFFSET UNITYSDK_OFFSET(0xCA191C0)
#define CFFPEAALCPH_HOCGJGKDCHA_OFFSET UNITYSDK_OFFSET(0xCA20560)
#define CFFPEAALCPH_IALJHCECMPG_OFFSET UNITYSDK_OFFSET(0xCA11D10)
#define CFFPEAALCPH_IBBNADBAGKH_OFFSET UNITYSDK_OFFSET(0xCA20B70)
#define CFFPEAALCPH_IBLMJDIOEMP_OFFSET UNITYSDK_OFFSET(0xCA18F90)
#define CFFPEAALCPH_IFHGMPNGFFE_OFFSET UNITYSDK_OFFSET(0xCA171F0)
#define CFFPEAALCPH_IGHIPHJHFLM_OFFSET UNITYSDK_OFFSET(0xCA12180)
#define CFFPEAALCPH_IHIKJLNFPII_OFFSET UNITYSDK_OFFSET(0xCA20610)
#define CFFPEAALCPH_INNMCDEPEPP_OFFSET UNITYSDK_OFFSET(0xCA17C40)
#define CFFPEAALCPH_JBGCHLNAJAB_OFFSET UNITYSDK_OFFSET(0xCA20710)
#define CFFPEAALCPH_JFGIOFPKDPB_OFFSET UNITYSDK_OFFSET(0xCA19300)
#define CFFPEAALCPH_JGMMKJCLGKJ_OFFSET UNITYSDK_OFFSET(0xCA1EF70)
#define CFFPEAALCPH_JIENENJGBBI_OFFSET UNITYSDK_OFFSET(0xCA189A0)
#define CFFPEAALCPH_JLIMIFLEKNF_OFFSET UNITYSDK_OFFSET(0xCA11AC0)
#define CFFPEAALCPH_JMAFAKMKPMK_OFFSET UNITYSDK_OFFSET(0xCA20B60)
#define CFFPEAALCPH_JMEDCMHJIJB_OFFSET UNITYSDK_OFFSET(0xCA1F0D0)
#define CFFPEAALCPH_JPPLIJOJLJL_OFFSET UNITYSDK_OFFSET(0xCA1B3A0)
#define CFFPEAALCPH_KBDOOFGPPCJ_OFFSET UNITYSDK_OFFSET(0xCA19840)
#define CFFPEAALCPH_KBODBHJELLL_OFFSET UNITYSDK_OFFSET(0xCA15350)
#define CFFPEAALCPH_KFAFLBGKPNO_OFFSET UNITYSDK_OFFSET(0xCA11F40)
#define CFFPEAALCPH_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0xCA1E6A0)
#define CFFPEAALCPH_KMPPCODELPB_OFFSET UNITYSDK_OFFSET(0xCA17BD0)
#define CFFPEAALCPH_KNPPADIFPFK_OFFSET UNITYSDK_OFFSET(0xCA16330)
#define CFFPEAALCPH_KPPBEEPPLFA_OFFSET UNITYSDK_OFFSET(0xCA200F0)
#define CFFPEAALCPH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCA1BB40)
#define CFFPEAALCPH_LDJHLOAMBHM_OFFSET UNITYSDK_OFFSET(0xCA12440)
#define CFFPEAALCPH_LFKENPCFFCO_OFFSET UNITYSDK_OFFSET(0xCA119C0)
#define CFFPEAALCPH_LGIDEBOBDIE_OFFSET UNITYSDK_OFFSET(0xCA11E70)
#define CFFPEAALCPH_LIBFBNJODBF_OFFSET UNITYSDK_OFFSET(0xCA154B0)
#define CFFPEAALCPH_LIFIMCJMOFF_OFFSET UNITYSDK_OFFSET(0xCA1F050)
#define CFFPEAALCPH_LJHGHDPJLCN_OFFSET UNITYSDK_OFFSET(0xCA19010)
#define CFFPEAALCPH_LKOJIMODMEJ_OFFSET UNITYSDK_OFFSET(0xCA1E4C0)
#define CFFPEAALCPH_LKPENAKALIP_OFFSET UNITYSDK_OFFSET(0xCA16980)
#define CFFPEAALCPH_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xCA13490)
#define CFFPEAALCPH_LMPEJAFEHME_OFFSET UNITYSDK_OFFSET(0xCA17D40)
#define CFFPEAALCPH_LNDAFCEABDL_OFFSET UNITYSDK_OFFSET(0xCA1F2E0)
#define CFFPEAALCPH_LPFGHDDJIOI_OFFSET UNITYSDK_OFFSET(0xCA20010)
#define CFFPEAALCPH_LPHDGLJJFNB_OFFSET UNITYSDK_OFFSET(0xCA166C0)
#define CFFPEAALCPH_LPOKCBPCHFC_OFFSET UNITYSDK_OFFSET(0xCA1EDF0)
#define CFFPEAALCPH_MAADNLNEJCN_OFFSET UNITYSDK_OFFSET(0xCA130B0)
#define CFFPEAALCPH_MFMFDKCHOAJ_OFFSET UNITYSDK_OFFSET(0xCA19E30)
#define CFFPEAALCPH_MGOGJCBJCMF_OFFSET UNITYSDK_OFFSET(0xCA19D90)
#define CFFPEAALCPH_MIAFKDJLBED_OFFSET UNITYSDK_OFFSET(0xCA19110)
#define CFFPEAALCPH_MJFNDPOLCEL_OFFSET UNITYSDK_OFFSET(0xCA17CC0)
#define CFFPEAALCPH_MKFIBPHPPFK_OFFSET UNITYSDK_OFFSET(0xCA1EAF0)
#define CFFPEAALCPH_NDACOPLMLAK_OFFSET UNITYSDK_OFFSET(0xCA1F900)
#define CFFPEAALCPH_NDKKKNJJDHO_OFFSET UNITYSDK_OFFSET(0xCA1FAF0)
#define CFFPEAALCPH_NHEPLLKLGJJ_OFFSET UNITYSDK_OFFSET(0xCA1FC40)
#define CFFPEAALCPH_NNHBCIAJAGC_OFFSET UNITYSDK_OFFSET(0xCA1D480)
#define CFFPEAALCPH_OALGNOCPAPI_OFFSET UNITYSDK_OFFSET(0xCA1CE50)
#define CFFPEAALCPH_OBBCKEOKDDI_OFFSET UNITYSDK_OFFSET(0xCA196E0)
#define CFFPEAALCPH_OCHJAEKBNJE_OFFSET UNITYSDK_OFFSET(0xCA20B50)
#define CFFPEAALCPH_ODMHAHJNGHC_OFFSET UNITYSDK_OFFSET(0xCA190A0)
#define CFFPEAALCPH_OJJMBGOPFHK_OFFSET UNITYSDK_OFFSET(0xCA16660)
#define CFFPEAALCPH_OKAHJJEPCDL_OFFSET UNITYSDK_OFFSET(0xCA1F3A0)
#define CFFPEAALCPH_OKGNGGADHHL_OFFSET UNITYSDK_OFFSET(0xCA19F10)
#define CFFPEAALCPH_OLPOPCCMMOJ_OFFSET UNITYSDK_OFFSET(0xCA11A20)
#define CFFPEAALCPH_OMHAIMPHDHH_OFFSET UNITYSDK_OFFSET(0xCA15440)
#define CFFPEAALCPH_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCA14980)
#define CFFPEAALCPH_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCA153C0)
#define CFFPEAALCPH_OOPHEMFNEFD_OFFSET UNITYSDK_OFFSET(0xCA17270)
#define CFFPEAALCPH_PENOIAAOILK_OFFSET UNITYSDK_OFFSET(0xCA16560)
#define CFFPEAALCPH_PLCLEKODIFI_OFFSET UNITYSDK_OFFSET(0xCA1D7E0)
#define CFFPEAALCPH_PLFEIOCNDAN_OFFSET UNITYSDK_OFFSET(0xCA18900)
#define CFFPEAALCPH_PLKPFPONOFC_OFFSET UNITYSDK_OFFSET(0xCA1EAA0)
#define CFFPEAALCPH_PMHCAKMHJLL_OFFSET UNITYSDK_OFFSET(0xCA1F7C0)
#define CFFPEAALCPH_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0xCA16A20)
#define CFFPEAALCPH_SET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCA20960)
#define CFFPEAALCPH_SET_ANIMEXTERNALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCA20B00)
#define CFFPEAALCPH_SET_ANIMVISULTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCA20AE0)
#define CFFPEAALCPH_SET_CUSTOMVISUALLAYERNAME_OFFSET UNITYSDK_OFFSET(0xCA20840)
#define CFFPEAALCPH_SET_FULLBODYIK_OFFSET UNITYSDK_OFFSET(0xCA209C0)
#define CFFPEAALCPH_SET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xCA20920)
#define CFFPEAALCPH_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xCA208C0)
#define CFFPEAALCPH_SET_HITADDITIVELAYERNAME_OFFSET UNITYSDK_OFFSET(0xCA20860)
#define CFFPEAALCPH_SET_HITOVERRIDELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xCA208E0)
#define CFFPEAALCPH_SET_HITOVERRIDELAYERNAME_OFFSET UNITYSDK_OFFSET(0xCA20880)
#define CFFPEAALCPH_SET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xCA20940)
#define CFFPEAALCPH_SET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCA20980)
#define CFFPEAALCPH_SET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xCA209A0)
#define CFFPEAALCPH_SET_MODIFIERPHASE2ENDRECORDINANIMSTOPSTATE_OFFSET UNITYSDK_OFFSET(0xCA20B20)
#define CFFPEAALCPH_SET_OVERRIDECONTROLLERSWITCHER_OFFSET UNITYSDK_OFFSET(0xCA20AC0)
#define CFFPEAALCPH_SET_PHASEREF_OFFSET UNITYSDK_OFFSET(0xCA20B40)
#define CFFPEAALCPH_SET_RECIVEDEADHANDLEREVENT_OFFSET UNITYSDK_OFFSET(0xCA20900)
#define CFFPEAALCPH_SET_VISUALLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xCA208A0)
#define CFFPEAALCPH_SET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xCA209E0)
#define CFFPEAALCPH_SET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCA20A00)
#define CFFPEAALCPH_TICK_OFFSET UNITYSDK_OFFSET(0xCA1A070)

inline static constexpr unsigned int CFFPEAALCPH_TypeDefinitionIndex = 56901;

	class CFFPEAALCPH : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::CEBMNLPNKFL* NIBKGDLKPEB; // 0x18
		::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* _LimbIKs_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* ADCBOPAELLM; // 0x28
		::GIPKHEMODAD* NIOKKOEDIDO; // 0x30
		::JBHLJMENAPJ* ILLOMEFMFHM; // 0x38
		::System::String* ANCIFPBBEIL; // 0x40
		::System::String* IOBCJPPPBIO; // 0x48
		::RPG::Client::FABRIK_WeaponControl* _WeaponController_k__BackingField; // 0x50
		::Il2CppArray<::COKICPIHPAC*>* OGDFEPGPPCI; // 0x58
		::CEBMNLPNKFL* OBEDPMOJINF; // 0x60
		::RPG::Client::AdditiveHitWeaponAttachmentHandler* _WeaponAttachmentHandler_k__BackingField; // 0x68
		::CFFPEAALCPH_JJGHFDADLPD* LNKLEKJPNHK; // 0x70
		::System::String* _CustomVisualLayerName_k__BackingField; // 0x78
		::CEBMNLPNKFL* EJIGGDBANIB; // 0x80
		::CEBMNLPNKFL* BMKEEDBCEHM; // 0x88
		::System::Collections::Generic::List_1<::BMOMAEJOJJP*>* GPDJMIACMCC; // 0x90
		::System::String* _HitAdditiveLayerName_k__BackingField; // 0x98
		::FHHBMOKIIKM* OPFODMBGBGF; // 0xA0
		::RPG::Client::MonoFullBodyIK* _FullBodyIK_k__BackingField; // 0xA8
		::RPG::Client::OverrideControllerSwitcher* _OverrideControllerSwitcher_k__BackingField; // 0xB0
		::RPG::Client::AvatarLookAtController* _LookAtController_k__BackingField; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NEOCEOCDEAF*>* INMNMAPFKFJ; // 0xC0
		::NCMHCCGKLAH* LMCGNOKGHBN; // 0xC8
		::RPG::GameCore::CharacterDataComponent* CBBCNOIONLG; // 0xD0
		::System::Collections::Generic::List_1<::CNHFDCJCFLL*>* NGPOLAJHJCG; // 0xD8
		::System::String* _HitOverrideLayerName_k__BackingField; // 0xE0
		::RootMotion::FinalIK::GrounderIK* _GrounderIK_k__BackingField; // 0xE8
		::RPG::GameCore::GameEntity* FOLIDJGNLOO; // 0xF0
		::CEBMNLPNKFL* GCBEELGKOEJ; // 0xF8
		::RPG::Client::LookAtIK* _LookAtIK_k__BackingField; // 0x100
		::HOMDJMMOCJK* _PhaseRef_k__BackingField; // 0x108
		::RPG::Client::AvatarAimController* _AimController_k__BackingField; // 0x110
		::System::Int32 EJPHDNJDPDD; // 0x118
		::System::Int32 HCOFHHGJHPD; // 0x11C
		::System::Boolean LANEOCINKIO; // 0x120
		::System::Boolean KANKADMLCMB; // 0x121
		::System::Boolean CBDNJHBBILO; // 0x122
		::System::Boolean _ReciveDeadHandlerEvent_k__BackingField; // 0x123
		::System::Boolean AEOPHJKAGIN; // 0x124
		::System::Boolean MMMOFHOKBLN; // 0x125
		::System::Boolean AJBDIGHLMDC; // 0x126
		::System::Boolean NMCBADPELHI; // 0x127
		::System::Int32 _VisualLayerIndex_k__BackingField; // 0x128
		::System::Int32 MKKACJMKCNM; // 0x12C
		::System::Int32 DEKPIEHINGO; // 0x130
		::System::Int32 LOILPKNHDPF; // 0x134
		::System::Single _AnimVisulTimeScale_k__BackingField; // 0x138
		::System::Single GIFCMBFPFMB; // 0x13C
		::System::UInt32 LOABAFHHCJP; // 0x140
		::System::UInt32 DDDHJDJODID; // 0x144
		::RPG::MVector3 FGPABJLGHEB; // 0x148
		::RPG::MVector3 KJGLNGABFDD; // 0x154
		::System::Int32 CIBAAJGCIPL; // 0x160
		::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0x164
		::System::Int32 CNJDCOADBCH; // 0x168
		::System::Single _AnimExternalTimeScale_k__BackingField; // 0x16C
		::System::Int32 PGEEGFMCBAM; // 0x170
		::OOPPBPJHHJK LFPCIGGAOEF; // 0x174
		::System::Int32 BPAEFEKNGDJ; // 0x184
		::System::Int32 _HitOverrideLayerIndex_k__BackingField; // 0x188
		::System::Int32 NJDBCDGGBKO; // 0x18C
		::System::Int32 EOGOCEFLINC; // 0x190
		::System::Int32 OPCFGGCHLKP; // 0x194
		::System::Int32 PHNNNDLKILB; // 0x198
		::System::Int32 HFJNAKJJBHA; // 0x19C
		::RPG::GameCore::ResilienceEnum MFMEANEANHD; // 0x1A0
		::RPG::GameCore::CharacterEmoState CKMADMEMHFE; // 0x1A4
		::System::Int32 KGHFMEOIPNP; // 0x1A8
		::System::Int32 KKFIHNEKFFA; // 0x1AC
		::System::Boolean _ModifierPhase2EndRecordInAnimStopState_k__BackingField; // 0x1B0
		::System::Boolean NPMEDBOIGIA; // 0x1B1
		::System::Boolean PNCGCMJFOLG; // 0x1B2
		::System::Boolean FJFPOOJOBPF; // 0x1B3
		::System::UInt32 ICIOHPALEKH; // 0x1B4
		::System::UInt32 KJIBKJKCNCA; // 0x1B8
		::System::Single DNKNPLBMHJH; // 0x1BC
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
