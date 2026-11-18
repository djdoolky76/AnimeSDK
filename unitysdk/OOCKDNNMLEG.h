#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFOEOKBFJPJ.h"
#include "unitysdk/MoleMole/Config/AttackEffectTriggerAt.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/MoleMole/Config/ConfigDataClearPriority.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosYType.h"
#include "unitysdk/MoleMole/Config/HitDirectionType.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/NECFCJGAJML.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ILDKCGCLCOO.h"
#include "unitysdk/LKGACDKKAIL.h"
#include "unitysdk/OCLPKBONCJJ.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class DIAEPBNFKBO;
class GEIHCPAOKKK;
class GHLDLOHAOGM;
class HAFLGNENJDI;
class HJDNNLKBHBA;
class JPKMBBAHKDH;
class KPNIFGIKELE;
class KPNIFGIKELE_BEBANOFCFII;
class MLFADFNMJFO;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraPitchPolar; }
namespace MoleMole::Config { class ConfigCameraScreenOffset; }
namespace MoleMole::Config { class ConfigCameraShake; }
namespace MoleMole::Config { class ConfigCameraStretch; }
namespace MoleMole::Config { class ConfigCameraZoom; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAttackCameraShake; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigEntityAttackEffectItem; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityCameraStretch; }
namespace MoleMole::Config { class ConfigEntityCameraZoom; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define OOCKDNNMLEG_ACDNLGBFPKO_OFFSET UNITYSDK_OFFSET(0x136D10E0)
#define OOCKDNNMLEG_ADPHJNNCADM_OFFSET UNITYSDK_OFFSET(0x136C7090)
#define OOCKDNNMLEG_AEKNIIAIAJO_OFFSET UNITYSDK_OFFSET(0x136D77D0)
#define OOCKDNNMLEG_AGDLDNGGGLP_1_OFFSET UNITYSDK_OFFSET(0x136DB940)
#define OOCKDNNMLEG_AGDLDNGGGLP_OFFSET UNITYSDK_OFFSET(0x136D3CE0)
#define OOCKDNNMLEG_AHJMGKCDMNE_OFFSET UNITYSDK_OFFSET(0x136DB510)
#define OOCKDNNMLEG_AIFFLDAPDDI_OFFSET UNITYSDK_OFFSET(0x136C8430)
#define OOCKDNNMLEG_AKAGNPNKNHO_OFFSET UNITYSDK_OFFSET(0x136DA9F0)
#define OOCKDNNMLEG_AKGJIJCCEIO_OFFSET UNITYSDK_OFFSET(0x136D7270)
#define OOCKDNNMLEG_AOALGOBCBFP_1_OFFSET UNITYSDK_OFFSET(0x136CCD30)
#define OOCKDNNMLEG_AOALGOBCBFP_OFFSET UNITYSDK_OFFSET(0x136DBB10)
#define OOCKDNNMLEG_AOIJBIKHEAF_OFFSET UNITYSDK_OFFSET(0x136CE0C0)
#define OOCKDNNMLEG_BBJHCNPKFIJ_OFFSET UNITYSDK_OFFSET(0x136CBF00)
#define OOCKDNNMLEG_BPNMJNDCKCP_OFFSET UNITYSDK_OFFSET(0x136DF070)
#define OOCKDNNMLEG_CAOBMHCIENN_OFFSET UNITYSDK_OFFSET(0x136CAFA0)
#define OOCKDNNMLEG_CGIDHDAJCFJ_OFFSET UNITYSDK_OFFSET(0x136DEE10)
#define OOCKDNNMLEG_CKEGGABCIKE_OFFSET UNITYSDK_OFFSET(0x136D5D70)
#define OOCKDNNMLEG_CKNDBEEGLHC_OFFSET UNITYSDK_OFFSET(0x136C7E30)
#define OOCKDNNMLEG_CMHMLLMENJM_OFFSET UNITYSDK_OFFSET(0x136D8C00)
#define OOCKDNNMLEG_CMPFENJCJCI_OFFSET UNITYSDK_OFFSET(0x136CDEB0)
#define OOCKDNNMLEG_CPNMGBEDFKC_OFFSET UNITYSDK_OFFSET(0x136CC950)
#define OOCKDNNMLEG_DCDDGIPPBHN_OFFSET UNITYSDK_OFFSET(0x136CDC30)
#define OOCKDNNMLEG_DDKOOMIABEF_OFFSET UNITYSDK_OFFSET(0x136D88F0)
#define OOCKDNNMLEG_DEAHGNINJEI_OFFSET UNITYSDK_OFFSET(0x136C6E10)
#define OOCKDNNMLEG_DGABEIPPCOJ_OFFSET UNITYSDK_OFFSET(0x136CAE20)
#define OOCKDNNMLEG_DKEKHIKKLLK_OFFSET UNITYSDK_OFFSET(0x136DD150)
#define OOCKDNNMLEG_DKMEMPNIOGC_OFFSET UNITYSDK_OFFSET(0x136DA350)
#define OOCKDNNMLEG_EANLMCFKNKJ_OFFSET UNITYSDK_OFFSET(0x136DEA90)
#define OOCKDNNMLEG_EBDLEPAMEBJ_OFFSET UNITYSDK_OFFSET(0x136C4420)
#define OOCKDNNMLEG_EDJIMBADGEG_OFFSET UNITYSDK_OFFSET(0x136CD8F0)
#define OOCKDNNMLEG_EDKBPMEGGIF_OFFSET UNITYSDK_OFFSET(0x136CCAE0)
#define OOCKDNNMLEG_FANBLHHIMEL_OFFSET UNITYSDK_OFFSET(0x136D5230)
#define OOCKDNNMLEG_FDFCIOLFAJD_OFFSET UNITYSDK_OFFSET(0x136C5E80)
#define OOCKDNNMLEG_FEIKNNCDMNL_OFFSET UNITYSDK_OFFSET(0x136D3860)
#define OOCKDNNMLEG_FKGMLIGHLKA_OFFSET UNITYSDK_OFFSET(0x136DFB40)
#define OOCKDNNMLEG_FNEKPMEHNMM_OFFSET UNITYSDK_OFFSET(0x136DE610)
#define OOCKDNNMLEG_GABFFFHPJBB_OFFSET UNITYSDK_OFFSET(0x136D8D80)
#define OOCKDNNMLEG_GAOOOACNPKD_OFFSET UNITYSDK_OFFSET(0x136D8AB0)
#define OOCKDNNMLEG_GBNGPCAHOCP_OFFSET UNITYSDK_OFFSET(0x136C4D30)
#define OOCKDNNMLEG_GFIBAHPAMDC_OFFSET UNITYSDK_OFFSET(0x136DCCD0)
#define OOCKDNNMLEG_GGBMNIFEJID_OFFSET UNITYSDK_OFFSET(0x136DD620)
#define OOCKDNNMLEG_GGMFOOKEAEA_OFFSET UNITYSDK_OFFSET(0x136C86D0)
#define OOCKDNNMLEG_GHCMHLEEGKH_OFFSET UNITYSDK_OFFSET(0x136DCF80)
#define OOCKDNNMLEG_GJDPNPMOCNB_OFFSET UNITYSDK_OFFSET(0x136DA2B0)
#define OOCKDNNMLEG_GPGHGANIKDA_OFFSET UNITYSDK_OFFSET(0x136D6530)
#define OOCKDNNMLEG_HEMBPEPCBBA_OFFSET UNITYSDK_OFFSET(0x136D90D0)
#define OOCKDNNMLEG_HGCGONAFJJN_OFFSET UNITYSDK_OFFSET(0x136C4190)
#define OOCKDNNMLEG_HHEGOKOIJFL_OFFSET UNITYSDK_OFFSET(0x136D0F70)
#define OOCKDNNMLEG_HJCOMHLFNEO_OFFSET UNITYSDK_OFFSET(0x136C8C10)
#define OOCKDNNMLEG_HKMHBCFIABE_OFFSET UNITYSDK_OFFSET(0x136DA920)
#define OOCKDNNMLEG_HMBNGJIKDPN_OFFSET UNITYSDK_OFFSET(0x136CD150)
#define OOCKDNNMLEG_HOKMODKPIJM_OFFSET UNITYSDK_OFFSET(0x136D8570)
#define OOCKDNNMLEG_HPEHLNAIJBM_OFFSET UNITYSDK_OFFSET(0x136CA6F0)
#define OOCKDNNMLEG_IAEODJNCELO_OFFSET UNITYSDK_OFFSET(0x136CD300)
#define OOCKDNNMLEG_IEHKAFMPJCH_1_OFFSET UNITYSDK_OFFSET(0x136D6430)
#define OOCKDNNMLEG_IEHKAFMPJCH_OFFSET UNITYSDK_OFFSET(0x136D1320)
#define OOCKDNNMLEG_IEPIJNKFLPO_OFFSET UNITYSDK_OFFSET(0x136D05E0)
#define OOCKDNNMLEG_IHBEOKLPANH_OFFSET UNITYSDK_OFFSET(0x136CAB80)
#define OOCKDNNMLEG_IHEMCFJPKPO_OFFSET UNITYSDK_OFFSET(0x136D98A0)
#define OOCKDNNMLEG_IJMEAEDBLCH_1_OFFSET UNITYSDK_OFFSET(0x136DD430)
#define OOCKDNNMLEG_IJMEAEDBLCH_OFFSET UNITYSDK_OFFSET(0x136C6710)
#define OOCKDNNMLEG_IKLMCKKMIJM_OFFSET UNITYSDK_OFFSET(0x136DE8F0)
#define OOCKDNNMLEG_IMEAGJIINDO_OFFSET UNITYSDK_OFFSET(0x136CBFE0)
#define OOCKDNNMLEG_JBIKPCKLIND_OFFSET UNITYSDK_OFFSET(0x136D8120)
#define OOCKDNNMLEG_JCFMFICPOHD_OFFSET UNITYSDK_OFFSET(0x136CB1B0)
#define OOCKDNNMLEG_JCKLHMIHCFH_OFFSET UNITYSDK_OFFSET(0x136D2DF0)
#define OOCKDNNMLEG_JEMFBKKCNON_OFFSET UNITYSDK_OFFSET(0x136C7900)
#define OOCKDNNMLEG_JLIKGFMMDOB_OFFSET UNITYSDK_OFFSET(0x136D9F30)
#define OOCKDNNMLEG_JMIJDIABEDG_OFFSET UNITYSDK_OFFSET(0x136DAED0)
#define OOCKDNNMLEG_JNKDFAKHNHH_OFFSET UNITYSDK_OFFSET(0x136C3FF0)
#define OOCKDNNMLEG_JOIIPLMDKGG_OFFSET UNITYSDK_OFFSET(0x136CB900)
#define OOCKDNNMLEG_JPJIKDBHOOD_OFFSET UNITYSDK_OFFSET(0x136CC2C0)
#define OOCKDNNMLEG_KAAFONKDFKN_OFFSET UNITYSDK_OFFSET(0x136DD870)
#define OOCKDNNMLEG_KAECBJBMGAN_OFFSET UNITYSDK_OFFSET(0x136D7900)
#define OOCKDNNMLEG_KDJIDJGNECJ_OFFSET UNITYSDK_OFFSET(0x136D0310)
#define OOCKDNNMLEG_KFCEIGPCEMG_OFFSET UNITYSDK_OFFSET(0x136DB130)
#define OOCKDNNMLEG_KGFGHPGGDAO_OFFSET UNITYSDK_OFFSET(0x136C5500)
#define OOCKDNNMLEG_KNDFNOFAGNF_OFFSET UNITYSDK_OFFSET(0x136D4BE0)
#define OOCKDNNMLEG_KNLLABNPPFF_OFFSET UNITYSDK_OFFSET(0x136D9BE0)
#define OOCKDNNMLEG_KPGFMBBDMIG_OFFSET UNITYSDK_OFFSET(0x136CC130)
#define OOCKDNNMLEG_KPOFCFAKODL_OFFSET UNITYSDK_OFFSET(0x136DABE0)
#define OOCKDNNMLEG_LCCHFDAHODA_OFFSET UNITYSDK_OFFSET(0x136DE360)
#define OOCKDNNMLEG_LFBJMKCFGHH_OFFSET UNITYSDK_OFFSET(0x136D8EA0)
#define OOCKDNNMLEG_LFEDCDANFLP_OFFSET UNITYSDK_OFFSET(0x136C5C80)
#define OOCKDNNMLEG_LIHFGEHMPLL_OFFSET UNITYSDK_OFFSET(0x136D9300)
#define OOCKDNNMLEG_LLGANCCFIGE_OFFSET UNITYSDK_OFFSET(0x136DBE30)
#define OOCKDNNMLEG_MFJKADCHDLB_OFFSET UNITYSDK_OFFSET(0x136C76F0)
#define OOCKDNNMLEG_MGJDJHOKAHB_OFFSET UNITYSDK_OFFSET(0x136D66C0)
#define OOCKDNNMLEG_MHAGEMKLEFB_OFFSET UNITYSDK_OFFSET(0x136CC4D0)
#define OOCKDNNMLEG_MJIGLBABFNP_OFFSET UNITYSDK_OFFSET(0x136D7BF0)
#define OOCKDNNMLEG_MKFNAFNGCOJ_OFFSET UNITYSDK_OFFSET(0x136DBCE0)
#define OOCKDNNMLEG_MKIJCABMALK_OFFSET UNITYSDK_OFFSET(0x136C6910)
#define OOCKDNNMLEG_MMIMIJKNANO_OFFSET UNITYSDK_OFFSET(0x136D54C0)
#define OOCKDNNMLEG_MNMEKGHDHAN_OFFSET UNITYSDK_OFFSET(0x136C8F20)
#define OOCKDNNMLEG_MODCAAOLFGA_OFFSET UNITYSDK_OFFSET(0x136C8A90)
#define OOCKDNNMLEG_MOLCKAMEJFG_OFFSET UNITYSDK_OFFSET(0x136C4BA0)
#define OOCKDNNMLEG_NABLPBFALHC_OFFSET UNITYSDK_OFFSET(0x136E0740)
#define OOCKDNNMLEG_NDHAPCHLHJG_OFFSET UNITYSDK_OFFSET(0x136DC5C0)
#define OOCKDNNMLEG_NGAOBPNDHHC_OFFSET UNITYSDK_OFFSET(0x136DC6E0)
#define OOCKDNNMLEG_NGOBBMAGJLH_OFFSET UNITYSDK_OFFSET(0x136DAD20)
#define OOCKDNNMLEG_NGOEBMEMIDK_OFFSET UNITYSDK_OFFSET(0x136DDA50)
#define OOCKDNNMLEG_NHLLGODFIDB_OFFSET UNITYSDK_OFFSET(0x136C9990)
#define OOCKDNNMLEG_NJAOAKOGEJC_OFFSET UNITYSDK_OFFSET(0x136CAD40)
#define OOCKDNNMLEG_NLOBGFNJOME_1_OFFSET UNITYSDK_OFFSET(0x136DA4E0)
#define OOCKDNNMLEG_NLOBGFNJOME_OFFSET UNITYSDK_OFFSET(0x136C4F40)
#define OOCKDNNMLEG_NNDJPJDOFCB_OFFSET UNITYSDK_OFFSET(0x136DEC00)
#define OOCKDNNMLEG_NPEFDFJJANI_OFFSET UNITYSDK_OFFSET(0x136D73A0)
#define OOCKDNNMLEG_OAINHOIGECE_OFFSET UNITYSDK_OFFSET(0x136CDF50)
#define OOCKDNNMLEG_ODEJCFEIBGE_OFFSET UNITYSDK_OFFSET(0x136D6FD0)
#define OOCKDNNMLEG_OEMILAEHONG_OFFSET UNITYSDK_OFFSET(0x136D83A0)
#define OOCKDNNMLEG_OENIIKPIMMN_OFFSET UNITYSDK_OFFSET(0x136D5030)
#define OOCKDNNMLEG_OIBCCDFHNMH_OFFSET UNITYSDK_OFFSET(0x136DFDF0)
#define OOCKDNNMLEG_OIMJEJCFHHC_OFFSET UNITYSDK_OFFSET(0x136DC610)
#define OOCKDNNMLEG_OKDDJCPPGCN_OFFSET UNITYSDK_OFFSET(0x136DAE40)
#define OOCKDNNMLEG_OMNLFJFCFIC_OFFSET UNITYSDK_OFFSET(0x136C6500)
#define OOCKDNNMLEG_ONEAFNAIKIC_OFFSET UNITYSDK_OFFSET(0x136CBAC0)
#define OOCKDNNMLEG_PANKOGLIMON_OFFSET UNITYSDK_OFFSET(0x136D47D0)
#define OOCKDNNMLEG_PCJIEHDNKCO_OFFSET UNITYSDK_OFFSET(0x136D7E70)
#define OOCKDNNMLEG_PDJLFKGALLJ_OFFSET UNITYSDK_OFFSET(0x136D4A70)
#define OOCKDNNMLEG_PEGKJDAIGNA_1_OFFSET UNITYSDK_OFFSET(0x136D0C00)
#define OOCKDNNMLEG_PEGKJDAIGNA_OFFSET UNITYSDK_OFFSET(0x136D09B0)
#define OOCKDNNMLEG_PGJGKPDBFGF_OFFSET UNITYSDK_OFFSET(0x136D5C40)
#define OOCKDNNMLEG__CCTOR_OFFSET UNITYSDK_OFFSET(0x136C3880)

inline static constexpr unsigned int OOCKDNNMLEG_TypeDefinitionIndex = 81856;

class OOCKDNNMLEG : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_IKJHGIODMKA()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OOCKDNNMLEG_TypeDefinitionIndex)->GetStaticField(0x3CEA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HitDirectionType, ::System::Func_6<::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>*>** StaticGet_HHAFOHLDBKP()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HitDirectionType, ::System::Func_6<::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(OOCKDNNMLEG_TypeDefinitionIndex)->GetStaticField(0x3CEA8);
	}
	static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_ANLJNFKIIGI()
	{
		return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(OOCKDNNMLEG_TypeDefinitionIndex)->GetStaticField(0x3CEB0);
	}
	static ::System::UInt32* StaticGet_EOOPKIPDEOG()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OOCKDNNMLEG_TypeDefinitionIndex)->GetStaticField(0xDEE0);
	}
	// static const ::System::Single BGOKCFEJADM; // 0x0
	// static const ::System::Single ICPBINIBGEI; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCKDNNMLEG__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Quaternion JNKDFAKHNHH(::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Vector3 KOPNKMMLMFA)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JNKDFAKHNHH_OFFSET))(CFJFMMGPGKE, KBHFBLJPFJH, KOPNKMMLMFA);
	}

	static ::System::Boolean HGCGONAFJJN(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::UInt32 PONMIAPMPML, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HGCGONAFJJN_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, LPOIBLLILAA, BFBELMDIAHI, PONMIAPMPML, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void MOLCKAMEJFG(::System::Int32 EPNPNJINIHC, ::System::Int32 IIHJGOBNEPF, ::MoleMole::Config::ConfigDataClearPriority DHBKDLGOGNN, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigDataClearPriority, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MOLCKAMEJFG_OFFSET))(EPNPNJINIHC, IIHJGOBNEPF, DHBKDLGOGNN, NGODDCIOJDP);
	}

	static ::UnityEngine::Vector3 NLOBGFNJOME(::System::Int32 EOGLMAEPALE, ::UnityEngine::Vector3 ANNNDENOJJG, ::MoleMole::Config::AttackEffectTriggerAt OBNIAHNMHPF, ::System::Single BOGPAHGJOJK, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32, ::UnityEngine::Vector3, ::MoleMole::Config::AttackEffectTriggerAt, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NLOBGFNJOME_OFFSET))(EOGLMAEPALE, ANNNDENOJJG, OBNIAHNMHPF, BOGPAHGJOJK, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::UnityEngine::Vector3 KGFGHPGGDAO(::MoleMole::Config::ConfigEntityAttackEffectItem* NFFNEFLKPDG, ::KPNIFGIKELE_BEBANOFCFII* AHMAPKFIBHA, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackEffectItem*, ::KPNIFGIKELE_BEBANOFCFII*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KGFGHPGGDAO_OFFSET))(NFFNEFLKPDG, AHMAPKFIBHA, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void LFEDCDANFLP(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* FLEIJJGMHBB, ::System::Boolean AJKMLNBEFPE, ::System::Single IOPKCKKAKFB, ::System::String* ENBCBPHCMDH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_LFEDCDANFLP_OFFSET))(NGODDCIOJDP, FLEIJJGMHBB, AJKMLNBEFPE, IOPKCKKAKFB, ENBCBPHCMDH);
	}

	static ::System::Int32 FDFCIOLFAJD(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* KLNJAFHIDJM, ::MoleMole::Config::ValueVariationType NGCECIOMIGK, ::System::Single ECMOEENIHME, ::System::Single JOFGIANGHMK, ::System::Single CIIPCCLOHLH, ::System::Single JLCKOCEMBPP, ::System::Single EODDDEDPMHA, ::System::String* GGNPCJJOPGI, ::System::String* HEGCNBAJGLN, ::System::Boolean OOJMPMOHEMB, ::System::Boolean EJMAJAPJMAA, ::System::Boolean MCMFEKBLKDJ, ::MoleMole::Config::ConfigDataPlayStacking HGJGKFEKNFL, ::MoleMole::Config::CameraConfigDataStacking AGJAPLENLIK, ::MoleMole::Config::ConfigDataPriority PFDADPAOAEK, ::System::Boolean CMCDLGGGEMG, ::System::Single GFHMCBPMKIL, ::System::Int32 ECKBMCCICFE)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Config::ValueVariationType, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::ConfigDataPlayStacking, ::MoleMole::Config::CameraConfigDataStacking, ::MoleMole::Config::ConfigDataPriority, ::System::Boolean, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_FDFCIOLFAJD_OFFSET))(NGODDCIOJDP, KLNJAFHIDJM, NGCECIOMIGK, ECMOEENIHME, JOFGIANGHMK, CIIPCCLOHLH, JLCKOCEMBPP, EODDDEDPMHA, GGNPCJJOPGI, HEGCNBAJGLN, OOJMPMOHEMB, EJMAJAPJMAA, MCMFEKBLKDJ, HGJGKFEKNFL, AGJAPLENLIK, PFDADPAOAEK, CMCDLGGGEMG, GFHMCBPMKIL, ECKBMCCICFE);
	}

	static ::System::Boolean IJMEAEDBLCH(::GEIHCPAOKKK* NOBAFJCGBFB, ::GEIHCPAOKKK* MCCOCFJPAMN, ::MoleMole::Config::ConfigEntityAttackPattern* LCGFGJOIAPN)
	{
		return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::GEIHCPAOKKK*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IJMEAEDBLCH_OFFSET))(NOBAFJCGBFB, MCCOCFJPAMN, LCGFGJOIAPN);
	}

	static ::System::Boolean DEAHGNINJEI(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::UInt32 IBJNHPABKLL, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_DEAHGNINJEI_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, LPOIBLLILAA, BFBELMDIAHI, IBJNHPABKLL, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void MFJKADCHDLB(::System::String* KLNJAFHIDJM, ::System::Single JPOHDFGEFLP, ::UnityEngine::Canvas* FAKJDBJMJCH, ::System::Single GKILGICAJON, ::UnityEngine::AnimationCurve* GAGHJKDJFGE, ::System::Single GFHMCBPMKIL, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::UnityEngine::Canvas*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MFJKADCHDLB_OFFSET))(KLNJAFHIDJM, JPOHDFGEFLP, FAKJDBJMJCH, GKILGICAJON, GAGHJKDJFGE, GFHMCBPMKIL, NGODDCIOJDP);
	}

	static ::System::Void CKNDBEEGLHC(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::MLFADFNMJFO* LBPBFHIPIBF, ::EFOEOKBFJPJ EOKGCJINPDH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MLFADFNMJFO*, ::EFOEOKBFJPJ))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_CKNDBEEGLHC_OFFSET))(MFMPICKHAMJ, JKELDNKGNDI, LBPBFHIPIBF, EOKGCJINPDH);
	}

	static ::System::Boolean AIFFLDAPDDI(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::UInt32 PONMIAPMPML, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AIFFLDAPDDI_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, LPOIBLLILAA, BFBELMDIAHI, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, PONMIAPMPML, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void GGMFOOKEAEA(::KPNIFGIKELE* CMAOBDOAKEI, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::MoleMole::Config::ConfigEntityAttackEffect* NHNBJFIMIPA)
	{
		return ((::System::Void(*)(::KPNIFGIKELE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackEffect*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GGMFOOKEAEA_OFFSET))(CMAOBDOAKEI, MFMPICKHAMJ, JKELDNKGNDI, NHNBJFIMIPA);
	}

	static ::System::Void MODCAAOLFGA(::MoleMole::Config::ConfigDataPriority IIHJGOBNEPF, ::MoleMole::Config::ConfigDataClearPriority DHBKDLGOGNN, ::System::String* GDBNHOPJMHI, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDataPriority, ::MoleMole::Config::ConfigDataClearPriority, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MODCAAOLFGA_OFFSET))(IIHJGOBNEPF, DHBKDLGOGNN, GDBNHOPJMHI, NGODDCIOJDP);
	}

	static ::System::Void HJCOMHLFNEO(::KPNIFGIKELE* LLKNCOGDFCO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::Void(*)(::KPNIFGIKELE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HJCOMHLFNEO_OFFSET))(LLKNCOGDFCO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::UnityEngine::Vector3 HPEHLNAIJBM(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HPEHLNAIJBM_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Single IHBEOKLPANH(::GEIHCPAOKKK* KBBAJMPBAFA, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType OBNIAHNMHPF, ::UnityEngine::Transform* AHBJIBOBOBN)
	{
		return ((::System::Single(*)(::GEIHCPAOKKK*, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IHBEOKLPANH_OFFSET))(KBBAJMPBAFA, OBNIAHNMHPF, AHBJIBOBOBN);
	}

	static ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* NJAOAKOGEJC(::PipelineCamera::WorldBasicCameraDataDeltaFlag FCPCLIJNDLA, ::System::Boolean JPNBPEGCKNO, ::System::Single IENOAGOAHMO, ::System::String* DKDCJAHGGJN)
	{
		return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NJAOAKOGEJC_OFFSET))(FCPCLIJNDLA, JPNBPEGCKNO, IENOAGOAHMO, DKDCJAHGGJN);
	}

	static ::System::Boolean DGABEIPPCOJ(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_DGABEIPPCOJ_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void JCFMFICPOHD(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* BBMMMHNDHKC, ::System::Boolean AJKMLNBEFPE, ::System::Single IOPKCKKAKFB, ::System::String* ENBCBPHCMDH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JCFMFICPOHD_OFFSET))(NGODDCIOJDP, BBMMMHNDHKC, AJKMLNBEFPE, IOPKCKKAKFB, ENBCBPHCMDH);
	}

	static ::System::Boolean ADPHJNNCADM(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::Boolean LLNCPOECLCN, ::UnityEngine::Vector3 FJOHIBCJLIF, ::UnityEngine::Quaternion MDPOLFIGONG, ::System::UInt32 IBJNHPABKLL, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_ADPHJNNCADM_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, LLNCPOECLCN, FJOHIBCJLIF, MDPOLFIGONG, IBJNHPABKLL, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::UInt32 BBJHCNPKFIJ()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + OOCKDNNMLEG_BBJHCNPKFIJ_OFFSET))();
	}

	static ::UnityEngine::Vector3 IMEAGJIINDO(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IMEAGJIINDO_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Boolean KPGFMBBDMIG(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KPGFMBBDMIG_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void MHAGEMKLEFB(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* FCBOGHFHLKI, ::System::Boolean AJKMLNBEFPE, ::System::Single IOPKCKKAKFB, ::System::String* ENBCBPHCMDH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MHAGEMKLEFB_OFFSET))(NGODDCIOJDP, FCBOGHFHLKI, AJKMLNBEFPE, IOPKCKKAKFB, ENBCBPHCMDH);
	}

	static ::System::Void CPNMGBEDFKC(::System::String* KMLMGBNFFPG, ::System::UInt32 GPOOKCALDKA, ::System::Boolean MKHECGEBDFH, ::MoleMole::Battle::Entity* OINFOOIGCGC)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_CPNMGBEDFKC_OFFSET))(KMLMGBNFFPG, GPOOKCALDKA, MKHECGEBDFH, OINFOOIGCGC);
	}

	static ::System::Boolean EDKBPMEGGIF(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::UInt32 IBJNHPABKLL, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_EDKBPMEGGIF_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, LPOIBLLILAA, BFBELMDIAHI, IBJNHPABKLL, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::UnityEngine::Vector3 HMBNGJIKDPN(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HMBNGJIKDPN_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Int32 IAEODJNCELO(::MoleMole::Cameras::CameraDataAccessor* GPBKDGGEBCF, ::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigCameraStretch* NBCCEHIHFKI, ::System::Single DJIODPOEGEL, ::System::Int32 ECKBMCCICFE, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Int32(*)(::MoleMole::Cameras::CameraDataAccessor*, ::System::String*, ::MoleMole::Config::ConfigCameraStretch*, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IAEODJNCELO_OFFSET))(GPBKDGGEBCF, KLNJAFHIDJM, NBCCEHIHFKI, DJIODPOEGEL, ECKBMCCICFE, NGODDCIOJDP);
	}

	static ::System::Int32 EDJIMBADGEG(::MoleMole::Config::CameraDelayMoveMode MHHDIINIKMG, ::MoleMole::Config::CameraDelayMoveMode HGMDLOACJLA, ::System::Single AJPAFKAPNNM, ::System::Boolean KHFOOHDFHGL, ::System::Single JOFGIANGHMK, ::System::Int32 PFDADPAOAEK, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Int32(*)(::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Config::CameraDelayMoveMode, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_EDJIMBADGEG_OFFSET))(MHHDIINIKMG, HGMDLOACJLA, AJPAFKAPNNM, KHFOOHDFHGL, JOFGIANGHMK, PFDADPAOAEK, NGODDCIOJDP);
	}

	static ::System::Void DCDDGIPPBHN(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* CFCDPHOOHJA, ::System::Boolean KPBLNHHJGFE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_DCDDGIPPBHN_OFFSET))(NGODDCIOJDP, CFCDPHOOHJA, KPBLNHHJGFE);
	}

	static ::System::Boolean CMPFENJCJCI(::MoleMole::Cameras::CameraDataAccessor* GPBKDGGEBCF, ::MoleMole::Config::ConfigCameraStretch* NBCCEHIHFKI)
	{
		return ((::System::Boolean(*)(::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::Config::ConfigCameraStretch*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_CMPFENJCJCI_OFFSET))(GPBKDGGEBCF, NBCCEHIHFKI);
	}

	static ::System::Boolean OAINHOIGECE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOCKDNNMLEG_OAINHOIGECE_OFFSET))();
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> AOIJBIKHEAF(::KPNIFGIKELE_BEBANOFCFII* AHMAPKFIBHA, ::MoleMole::Config::HitDirectionType OBNIAHNMHPF, ::UnityEngine::Vector3 BOGPAHGJOJK, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::KPNIFGIKELE_BEBANOFCFII*, ::MoleMole::Config::HitDirectionType, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AOIJBIKHEAF_OFFSET))(AHMAPKFIBHA, OBNIAHNMHPF, BOGPAHGJOJK, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::UnityEngine::Vector3 KDJIDJGNECJ(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KDJIDJGNECJ_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void PEGKJDAIGNA(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* KLNJAFHIDJM, ::System::Single GKILGICAJON, ::UnityEngine::AnimationCurve* GAGHJKDJFGE, ::System::Single CPAGMLMJFIE, ::System::Single KJELLOJCFPD)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_PEGKJDAIGNA_OFFSET))(NGODDCIOJDP, KLNJAFHIDJM, GKILGICAJON, GAGHJKDJFGE, CPAGMLMJFIE, KJELLOJCFPD);
	}

	static ::System::Void HHEGOKOIJFL(::System::String* DDCEKMLDIFC, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HHEGOKOIJFL_OFFSET))(DDCEKMLDIFC, NGODDCIOJDP);
	}

	static ::System::Void ACDNLGBFPKO(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigCameraZoom* GGCPKCMEIHH, ::System::Single GFHMCBPMKIL, ::System::Int32 ECKBMCCICFE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Config::ConfigCameraZoom*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_ACDNLGBFPKO_OFFSET))(NGODDCIOJDP, KLNJAFHIDJM, GGCPKCMEIHH, GFHMCBPMKIL, ECKBMCCICFE);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* IEHKAFMPJCH(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG, ::System::UInt32 MHMHNDPPPBG, ::System::Boolean FOJFMJKALKO, ::System::Boolean& PINHBFNFENF, ::System::Int32 DNMOBFLOEEH)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::Boolean, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IEHKAFMPJCH_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, ABLBFLBOEOG, MHMHNDPPPBG, FOJFMJKALKO, PINHBFNFENF, DNMOBFLOEEH);
	}

	static ::System::Boolean PANKOGLIMON(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 KAABMADJKPM, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::UInt32 IBJNHPABKLL, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_PANKOGLIMON_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, KAABMADJKPM, BFBELMDIAHI, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, IBJNHPABKLL, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void PDJLFKGALLJ(::System::String* CGDNKJEDIOH, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_PDJLFKGALLJ_OFFSET))(CGDNKJEDIOH, NGODDCIOJDP);
	}

	static ::UnityEngine::Vector3 KNDFNOFAGNF(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KNDFNOFAGNF_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void OENIIKPIMMN(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* FLEIJJGMHBB, ::System::Boolean AJKMLNBEFPE, ::System::Single IOPKCKKAKFB, ::System::String* ENBCBPHCMDH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_OENIIKPIMMN_OFFSET))(NGODDCIOJDP, FLEIJJGMHBB, AJKMLNBEFPE, IOPKCKKAKFB, ENBCBPHCMDH);
	}

	static ::System::Boolean FANBLHHIMEL(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::UInt32 IBJNHPABKLL, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_FANBLHHIMEL_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, LPOIBLLILAA, BFBELMDIAHI, IBJNHPABKLL, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Boolean JPJIKDBHOOD(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::UInt32 PONMIAPMPML, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JPJIKDBHOOD_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, PONMIAPMPML, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void PGJGKPDBFGF(::MoleMole::Config::ConfigEntityCameraZoom* DFMKILICPFB, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityCameraZoom*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_PGJGKPDBFGF_OFFSET))(DFMKILICPFB, MFMPICKHAMJ);
	}

	static ::System::Boolean CKEGGABCIKE(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::Boolean NAOAKDDGJHM, ::UnityEngine::Vector3 FJOHIBCJLIF, ::UnityEngine::Quaternion MDPOLFIGONG, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_CKEGGABCIKE_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, NAOAKDDGJHM, FJOHIBCJLIF, MDPOLFIGONG, OCKMDPLBKFH);
	}

	static ::System::Void GPGHGANIKDA(::System::Int32 LDKBPPNIOMB, ::System::Int32 IIHJGOBNEPF, ::MoleMole::Config::ConfigDataClearPriority DHBKDLGOGNN, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigDataClearPriority, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GPGHGANIKDA_OFFSET))(LDKBPPNIOMB, IIHJGOBNEPF, DHBKDLGOGNN, NGODDCIOJDP);
	}

	static ::System::Void MGJDJHOKAHB(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigCameraShake* OFFLFONPCLJ, ::MoleMole::Battle::Entity* OINFOOIGCGC, ::System::Single HMPEKNJGMEB, ::System::Boolean PLECEIFEFMA)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::ConfigCameraShake*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MGJDJHOKAHB_OFFSET))(KLNJAFHIDJM, OFFLFONPCLJ, OINFOOIGCGC, HMPEKNJGMEB, PLECEIFEFMA);
	}

	static ::System::Boolean ODEJCFEIBGE(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::UInt32 PONMIAPMPML, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_ODEJCFEIBGE_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, LPOIBLLILAA, BFBELMDIAHI, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, PONMIAPMPML, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Func_6<::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>* AKGJIJCCEIO(::MoleMole::Config::HitDirectionType GINBENGGJMN)
	{
		return ((::System::Func_6<::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>*(*)(::MoleMole::Config::HitDirectionType))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AKGJIJCCEIO_OFFSET))(GINBENGGJMN);
	}

	static ::System::Void MNMEKGHDHAN(::KPNIFGIKELE* CMAOBDOAKEI, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>* OAJILAOAOLB)
	{
		return ((::System::Void(*)(::KPNIFGIKELE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MNMEKGHDHAN_OFFSET))(CMAOBDOAKEI, MFMPICKHAMJ, JKELDNKGNDI, OAJILAOAOLB);
	}

	static ::System::Void MJIGLBABFNP(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* CFCDPHOOHJA, ::System::Boolean KPBLNHHJGFE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MJIGLBABFNP_OFFSET))(NGODDCIOJDP, CFCDPHOOHJA, KPBLNHHJGFE);
	}

	static ::UnityEngine::Vector3 PCJIEHDNKCO(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Config::ConfigEntityAttackProperty* LDMGKJACHAG, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Config::ConfigEntityAttackProperty*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_PCJIEHDNKCO_OFFSET))(KBCCBKNJJOO, LDMGKJACHAG, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void JBIKPCKLIND(::HAFLGNENJDI* LGBFDMFOOJF, ::HAFLGNENJDI* MEIKMBGDJPD, ::KPNIFGIKELE* IKHJEGECGJA, ::System::Collections::Generic::HashSet_1<::System::Int32>* BIJEENDPILB, ::JPKMBBAHKDH* BCCOFAHJEII, ::System::Boolean HGKDNNDJJEF, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>* KLPLLHDEEOP, ::System::Boolean DOABPFJGNDN, ::System::Boolean OLLCKOLGMMC)
	{
		return ((::System::Void(*)(::HAFLGNENJDI*, ::HAFLGNENJDI*, ::KPNIFGIKELE*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::JPKMBBAHKDH*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JBIKPCKLIND_OFFSET))(LGBFDMFOOJF, MEIKMBGDJPD, IKHJEGECGJA, BIJEENDPILB, BCCOFAHJEII, HGKDNNDJJEF, KLPLLHDEEOP, DOABPFJGNDN, OLLCKOLGMMC);
	}

	static ::System::Boolean OEMILAEHONG(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_OEMILAEHONG_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Boolean CAOBMHCIENN(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::UInt32 PONMIAPMPML, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_CAOBMHCIENN_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, PONMIAPMPML, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Int32 HOKMODKPIJM(::UnityEngine::Vector3 GKOEEJHILPG, ::UnityEngine::Vector3 PIAJFHFLAAD, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NMLHOFLPLCD, ::System::Single IDLPPPAMIEO, ::System::Single EONBMPMEJHO)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HOKMODKPIJM_OFFSET))(GKOEEJHILPG, PIAJFHFLAAD, NMLHOFLPLCD, IDLPPPAMIEO, EONBMPMEJHO);
	}

	static ::UnityEngine::Vector3 GAOOOACNPKD(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GAOOOACNPKD_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Boolean OMNLFJFCFIC(::System::Boolean CMCDLGGGEMG, ::MoleMole::Battle::Entity* PIIOPOOEHEL, ::System::Boolean PKMLKEDDCIL)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_OMNLFJFCFIC_OFFSET))(CMCDLGGGEMG, PIIOPOOEHEL, PKMLKEDDCIL);
	}

	static ::UnityEngine::Vector3 CMHMLLMENJM(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_CMHMLLMENJM_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::UnityEngine::Vector3 GABFFFHPJBB(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GABFFFHPJBB_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void LFBJMKCFGHH(::System::String* KLNJAFHIDJM, ::System::Single JPOHDFGEFLP, ::UnityEngine::Canvas* FAKJDBJMJCH, ::System::Single GKILGICAJON, ::UnityEngine::AnimationCurve* GAGHJKDJFGE, ::System::Single GFHMCBPMKIL, ::System::Single CPAGMLMJFIE, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::UnityEngine::Canvas*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_LFBJMKCFGHH_OFFSET))(KLNJAFHIDJM, JPOHDFGEFLP, FAKJDBJMJCH, GKILGICAJON, GAGHJKDJFGE, GFHMCBPMKIL, CPAGMLMJFIE, NGODDCIOJDP);
	}

	static ::UnityEngine::Vector3 IEPIJNKFLPO(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IEPIJNKFLPO_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::UnityEngine::Vector3 HEMBPEPCBBA(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HEMBPEPCBBA_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void NHLLGODFIDB(::KPNIFGIKELE* CMAOBDOAKEI, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::MoleMole::Config::ConfigEntityAttackEffect* NHNBJFIMIPA)
	{
		return ((::System::Void(*)(::KPNIFGIKELE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackEffect*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NHLLGODFIDB_OFFSET))(CMAOBDOAKEI, MFMPICKHAMJ, JKELDNKGNDI, NHNBJFIMIPA);
	}

	static ::System::Boolean GBNGPCAHOCP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GBNGPCAHOCP_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void LIHFGEHMPLL(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* FCBOGHFHLKI, ::System::Boolean AJKMLNBEFPE, ::System::Single IOPKCKKAKFB, ::System::String* ENBCBPHCMDH, ::System::String* FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_LIHFGEHMPLL_OFFSET))(NGODDCIOJDP, FCBOGHFHLKI, AJKMLNBEFPE, IOPKCKKAKFB, ENBCBPHCMDH, FGLDMHFEJDI);
	}

	static ::System::Void IHEMCFJPKPO(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* CFCDPHOOHJA, ::System::Single EGEGIMGMJHN, ::System::Single MDPPNMIPDMP, ::System::UInt32 DKOFFFNEFJC, ::System::Func_1<::System::Single>* CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::System::Single, ::System::UInt32, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IHEMCFJPKPO_OFFSET))(NGODDCIOJDP, CFCDPHOOHJA, EGEGIMGMJHN, MDPPNMIPDMP, DKOFFFNEFJC, CAOPDAMCNCN);
	}

	static ::System::Void KNLLABNPPFF(::MoleMole::Config::ConfigEntityAttackCameraShake* DFMKILICPFB, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::System::Boolean PLECEIFEFMA)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityAttackCameraShake*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KNLLABNPPFF_OFFSET))(DFMKILICPFB, MFMPICKHAMJ, PLECEIFEFMA);
	}

	static ::System::Boolean EBDLEPAMEBJ(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::Boolean LLNCPOECLCN, ::UnityEngine::Vector3 FJOHIBCJLIF, ::UnityEngine::Quaternion MDPOLFIGONG, ::System::UInt32 IBJNHPABKLL, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_EBDLEPAMEBJ_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, LLNCPOECLCN, FJOHIBCJLIF, MDPOLFIGONG, IBJNHPABKLL, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void JLIKGFMMDOB(::System::Collections::Generic::List_1<::System::Int32>* GPOFMPBECBC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JLIKGFMMDOB_OFFSET))(GPOFMPBECBC);
	}

	static ::System::Boolean NPEFDFJJANI(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NPEFDFJJANI_OFFSET))(MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Boolean GJDPNPMOCNB(::MoleMole::Cameras::CameraDataAccessor* GPBKDGGEBCF, ::MoleMole::Config::ConfigCameraStretch* NBCCEHIHFKI)
	{
		return ((::System::Boolean(*)(::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::Config::ConfigCameraStretch*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GJDPNPMOCNB_OFFSET))(GPBKDGGEBCF, NBCCEHIHFKI);
	}

	static ::System::Void DKMEMPNIOGC(::System::Int32 LABABPOMNIN, ::System::Int32 IIHJGOBNEPF, ::MoleMole::Config::ConfigDataClearPriority DHBKDLGOGNN, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigDataClearPriority, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_DKMEMPNIOGC_OFFSET))(LABABPOMNIN, IIHJGOBNEPF, DHBKDLGOGNN, NGODDCIOJDP);
	}

	static ::System::Single NLOBGFNJOME_1(::System::Int32 EOGLMAEPALE, ::System::Single FDNJEGCJKIJ, ::MoleMole::Config::AttackEffectTriggerAt OBNIAHNMHPF, ::System::Single BOGPAHGJOJK, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::Single(*)(::System::Int32, ::System::Single, ::MoleMole::Config::AttackEffectTriggerAt, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NLOBGFNJOME_1_OFFSET))(EOGLMAEPALE, FDNJEGCJKIJ, OBNIAHNMHPF, BOGPAHGJOJK, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void AGDLDNGGGLP(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* BMAKBDFJGML, ::MoleMole::Config::ConfigEntityAnimEvent* JGINLLKLHGM, ::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::DIAEPBNFKBO* BPMDKINFBCB, ::HJDNNLKBHBA* OJNNIDNIKGL, ::System::UInt32 KPBCENDNNDC, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>* IGECAGKFMJG, ::System::Int32 DNMOBFLOEEH)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::MoleMole::Config::ConfigEntityAnimEvent*, ::MLFADFNMJFO*, ::MoleMole::Battle::Entity*, ::DIAEPBNFKBO*, ::HJDNNLKBHBA*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>*, ::System::Int32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AGDLDNGGGLP_OFFSET))(BMAKBDFJGML, JGINLLKLHGM, LBPBFHIPIBF, MFMPICKHAMJ, BPMDKINFBCB, OJNNIDNIKGL, KPBCENDNNDC, IGECAGKFMJG, DNMOBFLOEEH);
	}

	static ::System::Void AKAGNPNKNHO(::MoleMole::Config::ConfigDataPriority IIHJGOBNEPF, ::MoleMole::Config::ConfigDataClearPriority DHBKDLGOGNN, ::System::String* DDCEKMLDIFC, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDataPriority, ::MoleMole::Config::ConfigDataClearPriority, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AKAGNPNKNHO_OFFSET))(IIHJGOBNEPF, DHBKDLGOGNN, DDCEKMLDIFC, NGODDCIOJDP);
	}

	static ::UnityEngine::Vector3 NGOBBMAGJLH(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NGOBBMAGJLH_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void KAECBJBMGAN(::System::String* CFGNKPGAJJJ, ::UnityEngine::Vector3 JMFFGJMMCAC, ::UnityEngine::Vector3 LMGDIEPPBIC, ::UnityEngine::Vector3 DMJBOODLCNE, ::UnityEngine::Vector3 GPEAOAHKMOG, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean OICHCJDHJOF)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KAECBJBMGAN_OFFSET))(CFGNKPGAJJJ, JMFFGJMMCAC, LMGDIEPPBIC, DMJBOODLCNE, GPEAOAHKMOG, AMNIHACKELI, OICHCJDHJOF);
	}

	static ::UnityEngine::LayerMask OKDDJCPPGCN(::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::UnityEngine::LayerMask(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_OKDDJCPPGCN_OFFSET))(MFMPICKHAMJ);
	}

	static ::System::Int32 JMIJDIABEDG(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigCameraStretch* NBCCEHIHFKI, ::System::Single GFHMCBPMKIL, ::System::Int32 ECKBMCCICFE)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Config::ConfigCameraStretch*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JMIJDIABEDG_OFFSET))(NGODDCIOJDP, KLNJAFHIDJM, NBCCEHIHFKI, GFHMCBPMKIL, ECKBMCCICFE);
	}

	static ::System::Void KFCEIGPCEMG(::HAFLGNENJDI* LGBFDMFOOJF, ::HAFLGNENJDI* MEIKMBGDJPD, ::KPNIFGIKELE* IKHJEGECGJA, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* BIJEENDPILB, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>* KLPLLHDEEOP)
	{
		return ((::System::Void(*)(::HAFLGNENJDI*, ::HAFLGNENJDI*, ::KPNIFGIKELE*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KFCEIGPCEMG_OFFSET))(LGBFDMFOOJF, MEIKMBGDJPD, IKHJEGECGJA, BIJEENDPILB, KLPLLHDEEOP);
	}

	static ::System::Void AHJMGKCDMNE(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* FCBOGHFHLKI, ::System::Boolean AJKMLNBEFPE, ::System::Single IOPKCKKAKFB, ::System::String* ENBCBPHCMDH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AHJMGKCDMNE_OFFSET))(NGODDCIOJDP, FCBOGHFHLKI, AJKMLNBEFPE, IOPKCKKAKFB, ENBCBPHCMDH);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* IEHKAFMPJCH_1(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* PILELGPBCLL, ::System::UInt32 MHMHNDPPPBG, ::System::Boolean FOJFMJKALKO)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IEHKAFMPJCH_1_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, PILELGPBCLL, MHMHNDPPPBG, FOJFMJKALKO);
	}

	static ::System::Void AGDLDNGGGLP_1(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* BMAKBDFJGML, ::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::DIAEPBNFKBO* BPMDKINFBCB, ::HJDNNLKBHBA* OJNNIDNIKGL, ::System::UInt32 KPBCENDNNDC, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>* IGECAGKFMJG, ::System::Int32 DNMOBFLOEEH)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::MLFADFNMJFO*, ::MoleMole::Battle::Entity*, ::DIAEPBNFKBO*, ::HJDNNLKBHBA*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>*, ::System::Int32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AGDLDNGGGLP_1_OFFSET))(BMAKBDFJGML, LBPBFHIPIBF, MFMPICKHAMJ, BPMDKINFBCB, OJNNIDNIKGL, KPBCENDNNDC, IGECAGKFMJG, DNMOBFLOEEH);
	}

	static ::System::Boolean AOALGOBCBFP(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AOALGOBCBFP_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void JEMFBKKCNON(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigCameraScreenOffset* DFMKILICPFB, ::System::Single JPOHDFGEFLP, ::UnityEngine::Canvas* PENIAOLACHA, ::System::Single GKILGICAJON, ::UnityEngine::AnimationCurve* GAGHJKDJFGE, ::System::Single GFHMCBPMKIL, ::System::Single CPAGMLMJFIE, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*, ::System::Single, ::UnityEngine::Canvas*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JEMFBKKCNON_OFFSET))(KLNJAFHIDJM, DFMKILICPFB, JPOHDFGEFLP, PENIAOLACHA, GKILGICAJON, GAGHJKDJFGE, GFHMCBPMKIL, CPAGMLMJFIE, NGODDCIOJDP);
	}

	static ::UnityEngine::Vector3 AEKNIIAIAJO(::MoleMole::Config::ConfigEntityAttackEffectItem* NFFNEFLKPDG)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackEffectItem*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AEKNIIAIAJO_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Void MKFNAFNGCOJ(::MoleMole::Config::ConfigEntityCameraStretch* DFMKILICPFB, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityCameraStretch*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MKFNAFNGCOJ_OFFSET))(DFMKILICPFB, MFMPICKHAMJ);
	}

	static ::System::Void KPOFCFAKODL(::MoleMole::Config::ConfigDataPriority IIHJGOBNEPF, ::MoleMole::Config::ConfigDataClearPriority DHBKDLGOGNN, ::System::String* DDCEKMLDIFC)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDataPriority, ::MoleMole::Config::ConfigDataClearPriority, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KPOFCFAKODL_OFFSET))(IIHJGOBNEPF, DHBKDLGOGNN, DDCEKMLDIFC);
	}

	static ::System::Boolean NDHAPCHLHJG(::System::Int32 KGPKAOOHOBK)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NDHAPCHLHJG_OFFSET))(KGPKAOOHOBK);
	}

	static ::System::Void OIMJEJCFHHC(::KPNIFGIKELE* LLKNCOGDFCO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::Void(*)(::KPNIFGIKELE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_OIMJEJCFHHC_OFFSET))(LLKNCOGDFCO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* JCKLHMIHCFH(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG, ::System::UInt32 KPBCENDNNDC)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JCKLHMIHCFH_OFFSET))(MFMPICKHAMJ, ABLBFLBOEOG, KPBCENDNNDC);
	}

	static ::ILDKCGCLCOO HKMHBCFIABE(::System::Boolean PIHNGDNALCE, ::System::Boolean DFFEFAFCDFC, ::System::Boolean JJBNLKICDLL, ::System::Int32 OLOHCPCOIGA)
	{
		return ((::ILDKCGCLCOO(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HKMHBCFIABE_OFFSET))(PIHNGDNALCE, DFFEFAFCDFC, JJBNLKICDLL, OLOHCPCOIGA);
	}

	static ::MoleMole::Battle::Entity* JOIIPLMDKGG(::MoleMole::Battle::Entity* FMOEIBBDIKE, ::MLFADFNMJFO* LCCLIBOFPDC)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MLFADFNMJFO*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JOIIPLMDKGG_OFFSET))(FMOEIBBDIKE, LCCLIBOFPDC);
	}

	static ::UnityEngine::Vector3 NGAOBPNDHHC(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NGAOBPNDHHC_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Boolean FEIKNNCDMNL(::HAFLGNENJDI* LGBFDMFOOJF, ::HAFLGNENJDI* MEIKMBGDJPD, ::MoleMole::Config::ConfigEntityAttackProperty* LDMGKJACHAG)
	{
		return ((::System::Boolean(*)(::HAFLGNENJDI*, ::HAFLGNENJDI*, ::MoleMole::Config::ConfigEntityAttackProperty*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_FEIKNNCDMNL_OFFSET))(LGBFDMFOOJF, MEIKMBGDJPD, LDMGKJACHAG);
	}

	static ::System::Int32 GFIBAHPAMDC(::UnityEngine::Transform* AKEAPAPGOPD, ::UnityEngine::Transform* KFCBGBAEDFN, ::System::Single AJPAFKAPNNM, ::System::Boolean KHFOOHDFHGL, ::System::Single JOFGIANGHMK, ::System::Int32 PFDADPAOAEK, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GFIBAHPAMDC_OFFSET))(AKEAPAPGOPD, KFCBGBAEDFN, AJPAFKAPNNM, KHFOOHDFHGL, JOFGIANGHMK, PFDADPAOAEK, NGODDCIOJDP);
	}

	static ::System::Boolean MKIJCABMALK(::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 NFOPONCIANK, ::System::Single NPCDBEAFOOG)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MKIJCABMALK_OFFSET))(AKAGDEFAGJA, NFOPONCIANK, NPCDBEAFOOG);
	}

	static ::System::Void LLGANCCFIGE(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigCameraStretch* NBCCEHIHFKI, ::System::Single DJIODPOEGEL, ::System::Int32 ECKBMCCICFE, ::System::Single AIFIBKHCJEL, ::System::Single LNLCLDBEPAF, ::System::Action_2<::NECFCJGAJML, ::NECFCJGAJML>* BOFBIGNKKIO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Config::ConfigCameraStretch*, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Action_2<::NECFCJGAJML, ::NECFCJGAJML>*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_LLGANCCFIGE_OFFSET))(NGODDCIOJDP, KLNJAFHIDJM, NBCCEHIHFKI, DJIODPOEGEL, ECKBMCCICFE, AIFIBKHCJEL, LNLCLDBEPAF, BOFBIGNKKIO);
	}

	static ::System::Boolean GHCMHLEEGKH(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GHCMHLEEGKH_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void PEGKJDAIGNA_1(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigCameraPitchPolar* DFMKILICPFB, ::System::Single GKILGICAJON, ::UnityEngine::AnimationCurve* GAGHJKDJFGE, ::System::Single CPAGMLMJFIE, ::System::Single KJELLOJCFPD, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_PEGKJDAIGNA_1_OFFSET))(KLNJAFHIDJM, DFMKILICPFB, GKILGICAJON, GAGHJKDJFGE, CPAGMLMJFIE, KJELLOJCFPD, NGODDCIOJDP);
	}

	static ::UnityEngine::Vector3 DKEKHIKKLLK(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_DKEKHIKKLLK_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Boolean MMIMIJKNANO(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::Boolean NAOAKDDGJHM, ::UnityEngine::Vector3 FJOHIBCJLIF, ::UnityEngine::Quaternion MDPOLFIGONG, ::System::UInt32 PONMIAPMPML, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_MMIMIJKNANO_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, NAOAKDDGJHM, FJOHIBCJLIF, MDPOLFIGONG, PONMIAPMPML, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Boolean IJMEAEDBLCH_1(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::MoleMole::Config::ConfigEntityAttackPattern* LCGFGJOIAPN)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IJMEAEDBLCH_1_OFFSET))(MFMPICKHAMJ, JKELDNKGNDI, LCGFGJOIAPN);
	}

	static ::System::Boolean GGBMNIFEJID(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::UInt32 IBJNHPABKLL, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_GGBMNIFEJID_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, LPOIBLLILAA, BFBELMDIAHI, IBJNHPABKLL, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Void KAAFONKDFKN(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>* OAJILAOAOLB, ::KPNIFGIKELE_BEBANOFCFII* AHMAPKFIBHA, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::Il2CppArray<::UnityEngine::Vector3>*& KMCMBMFAKOB)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*, ::KPNIFGIKELE_BEBANOFCFII*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_KAAFONKDFKN_OFFSET))(OAJILAOAOLB, AHMAPKFIBHA, MFMPICKHAMJ, JKELDNKGNDI, KMCMBMFAKOB);
	}

	static ::UnityEngine::Vector3 NGOEBMEMIDK(::MoleMole::Battle::Entity* NGODDCIOJDP, ::GEIHCPAOKKK* IJFHMGFKIBP, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::GEIHCPAOKKK*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NGOEBMEMIDK_OFFSET))(NGODDCIOJDP, IJFHMGFKIBP, DBJJLPGHPOL);
	}

	static ::System::Boolean AOALGOBCBFP_1(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::Boolean NAOAKDDGJHM, ::UnityEngine::Vector3 FJOHIBCJLIF, ::UnityEngine::Quaternion MDPOLFIGONG, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_AOALGOBCBFP_1_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, NAOAKDDGJHM, FJOHIBCJLIF, MDPOLFIGONG, OCKMDPLBKFH);
	}

	static ::System::Void LCCHFDAHODA(::System::String* KLNJAFHIDJM, ::System::UInt32 DKBGLBIECBN, ::System::Single GFHMCBPMKIL, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_LCCHFDAHODA_OFFSET))(KLNJAFHIDJM, DKBGLBIECBN, GFHMCBPMKIL, NGODDCIOJDP);
	}

	static ::UnityEngine::Vector3 FNEKPMEHNMM(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_FNEKPMEHNMM_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Nullable_1<::OCLPKBONCJJ> IKLMCKKMIJM(::System::Boolean GFJIILKDJKL, ::System::Single IOAOHANDFNE, ::System::String* ENBCBPHCMDH)
	{
		return ((::System::Nullable_1<::OCLPKBONCJJ>(*)(::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_IKLMCKKMIJM_OFFSET))(GFJIILKDJKL, IOAOHANDFNE, ENBCBPHCMDH);
	}

	static ::System::Void EANLMCFKNKJ(::System::Boolean ANJGJNBHFHH, ::MoleMole::Battle::Entity* OINFOOIGCGC)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_EANLMCFKNKJ_OFFSET))(ANJGJNBHFHH, OINFOOIGCGC);
	}

	static ::System::Boolean NNDJPJDOFCB(::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::UInt32 KMMGKJPAOMF, ::System::UInt32 PONMIAPMPML, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Boolean(*)(::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NNDJPJDOFCB_OFFSET))(LBPBFHIPIBF, KBCCBKNJJOO, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, DGDEFOCBJAC, KMMGKJPAOMF, PONMIAPMPML, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::MoleMole::Battle::Entity* ONEAFNAIKIC(::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_ONEAFNAIKIC_OFFSET))(NGODDCIOJDP, DBJJLPGHPOL);
	}

	static ::UnityEngine::Vector3 CGIDHDAJCFJ(::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::UnityEngine::Vector3 IKMBJPGNCGN, ::UnityEngine::Vector3 JHKAPGEIBHO, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_CGIDHDAJCFJ_OFFSET))(KBCCBKNJJOO, IKMBJPGNCGN, JHKAPGEIBHO, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void BPNMJNDCKCP(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* CMADCONDBMF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_BPNMJNDCKCP_OFFSET))(CMADCONDBMF);
	}

	static ::System::Int32 FKGMLIGHLKA(::UnityEngine::Transform* MCMIGCGKOFH, ::UnityEngine::Transform* FPAPLEDDGGA, ::System::Single AJPAFKAPNNM, ::System::Boolean KHFOOHDFHGL, ::System::Single JOFGIANGHMK, ::System::Int32 PFDADPAOAEK, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_FKGMLIGHLKA_OFFSET))(MCMIGCGKOFH, FPAPLEDDGGA, AJPAFKAPNNM, KHFOOHDFHGL, JOFGIANGHMK, PFDADPAOAEK, NGODDCIOJDP);
	}

	static ::UnityEngine::Vector3 OIBCCDFHNMH(::GEIHCPAOKKK* KBBAJMPBAFA, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType OBNIAHNMHPF, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType MHLCICIIEGO, ::UnityEngine::Vector3 EPOKHINHKEL, ::UnityEngine::Transform* AHBJIBOBOBN)
	{
		return ((::UnityEngine::Vector3(*)(::GEIHCPAOKKK*, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_OIBCCDFHNMH_OFFSET))(KBBAJMPBAFA, OBNIAHNMHPF, MHLCICIIEGO, EPOKHINHKEL, AHBJIBOBOBN);
	}

	static ::System::Void NABLPBFALHC(::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* CFCDPHOOHJA, ::System::Single EGEGIMGMJHN, ::System::Single MDPPNMIPDMP, ::System::UInt32 DKOFFFNEFJC, ::System::Func_1<::System::Single>* CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::System::Single, ::System::UInt32, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_NABLPBFALHC_OFFSET))(NGODDCIOJDP, CFCDPHOOHJA, EGEGIMGMJHN, MDPPNMIPDMP, DKOFFFNEFJC, CAOPDAMCNCN);
	}

	static ::System::Single DDKOOMIABEF(::UnityEngine::Vector3 GKOEEJHILPG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NMLHOFLPLCD)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_DDKOOMIABEF_OFFSET))(GKOEEJHILPG, NMLHOFLPLCD);
	}
};
