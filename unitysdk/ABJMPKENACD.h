#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABJMPKENACD_AMOMFKCLJHB.h"
#include "unitysdk/ABJMPKENACD_MOACMLHFFCC.h"
#include "unitysdk/ABJMPKENACD_OAIEODBENIO.h"
#include "unitysdk/FBMFHPMONGC_BCLGKKACIJO.h"
#include "unitysdk/FBMFHPMONGC_CKAPAAJBPAH.h"
#include "unitysdk/FBMFHPMONGC_OJAOIGOHPNB.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class AAIJDKMDACF;
class ABNKJLHDDHJ;
class BFIJLKBPBAK;
class FANBKJPNEDB;
class FishingRodController;
class GFMLEBCNNCN;
class GGGPIOIJELD;
class GHICACFMBNP;
class GPCLMNFMNBJ;
class HAMJECLNFDC;
class OGJNHDLJIBM;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace RootMotion::FinalIK { class LookController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define ABJMPKENACD_AANOGHMALEJ_OFFSET UNITYSDK_OFFSET(0x126352C0)
#define ABJMPKENACD_ABOKADFPJCO_OFFSET UNITYSDK_OFFSET(0x12632AF0)
#define ABJMPKENACD_AECGHMBIFPL_OFFSET UNITYSDK_OFFSET(0x126334E0)
#define ABJMPKENACD_AFLEGIBAGCG_OFFSET UNITYSDK_OFFSET(0x1262FF30)
#define ABJMPKENACD_AGBOHLJEMIE_OFFSET UNITYSDK_OFFSET(0x1262B790)
#define ABJMPKENACD_AGKLHFHIKKM_OFFSET UNITYSDK_OFFSET(0x1262BC70)
#define ABJMPKENACD_AJLDBEGFMCJ_OFFSET UNITYSDK_OFFSET(0x12636CC0)
#define ABJMPKENACD_AJLGLNFJDMH_OFFSET UNITYSDK_OFFSET(0x1262B740)
#define ABJMPKENACD_AKLNFPHCNKD_OFFSET UNITYSDK_OFFSET(0x12636540)
#define ABJMPKENACD_ALDDLFBHAAK_OFFSET UNITYSDK_OFFSET(0x1262A6D0)
#define ABJMPKENACD_APNGEJJHOCO_OFFSET UNITYSDK_OFFSET(0x12632B30)
#define ABJMPKENACD_BBGBBBAOFLA_OFFSET UNITYSDK_OFFSET(0x1262B440)
#define ABJMPKENACD_BDGEEDAELDD_OFFSET UNITYSDK_OFFSET(0x1262CA60)
#define ABJMPKENACD_BDLPBCEMCLJ_OFFSET UNITYSDK_OFFSET(0x12631550)
#define ABJMPKENACD_BEPPCHEDPGK_OFFSET UNITYSDK_OFFSET(0x126356F0)
#define ABJMPKENACD_BFGKLGGBCDB_OFFSET UNITYSDK_OFFSET(0x12635A50)
#define ABJMPKENACD_BHMJLDNOAAC_OFFSET UNITYSDK_OFFSET(0x126364A0)
#define ABJMPKENACD_BIBKEHFCALF_OFFSET UNITYSDK_OFFSET(0x126338C0)
#define ABJMPKENACD_BOLJLGCGBNO_OFFSET UNITYSDK_OFFSET(0x12636330)
#define ABJMPKENACD_CADJOBJPOBD_OFFSET UNITYSDK_OFFSET(0x12630D50)
#define ABJMPKENACD_CCJHFKKKEKG_OFFSET UNITYSDK_OFFSET(0x126365F0)
#define ABJMPKENACD_CFDCHFLPPBJ_OFFSET UNITYSDK_OFFSET(0x12632B20)
#define ABJMPKENACD_CFDHCEPMABM_OFFSET UNITYSDK_OFFSET(0x1262AD30)
#define ABJMPKENACD_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1262C100)
#define ABJMPKENACD_COFCHGALDGH_OFFSET UNITYSDK_OFFSET(0x12630F60)
#define ABJMPKENACD_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x1262A040)
#define ABJMPKENACD_DJEIFCDGCIN_OFFSET UNITYSDK_OFFSET(0x126323B0)
#define ABJMPKENACD_DLIGAEGCNME_OFFSET UNITYSDK_OFFSET(0x126322D0)
#define ABJMPKENACD_DNMPBJGALNO_OFFSET UNITYSDK_OFFSET(0x12631220)
#define ABJMPKENACD_EDFFDPDNFPD_OFFSET UNITYSDK_OFFSET(0x12633A90)
#define ABJMPKENACD_EILDPPJDKGP_OFFSET UNITYSDK_OFFSET(0x12637080)
#define ABJMPKENACD_EPOFGIAFILL_OFFSET UNITYSDK_OFFSET(0x1262FF40)
#define ABJMPKENACD_FILFBFFMNAK_OFFSET UNITYSDK_OFFSET(0x12632490)
#define ABJMPKENACD_FLDCFFEDCNE_OFFSET UNITYSDK_OFFSET(0x12636470)
#define ABJMPKENACD_FLJEMFGDOFB_OFFSET UNITYSDK_OFFSET(0x12633610)
#define ABJMPKENACD_FMBDGJIPHAA_OFFSET UNITYSDK_OFFSET(0x12636CA0)
#define ABJMPKENACD_FMGLHPNPMNE_OFFSET UNITYSDK_OFFSET(0x12636750)
#define ABJMPKENACD_FOKPJONOLMD_OFFSET UNITYSDK_OFFSET(0x1262E9D0)
#define ABJMPKENACD_GCCHOADAIJI_OFFSET UNITYSDK_OFFSET(0x1262B3B0)
#define ABJMPKENACD_GFBFHJBEDBD_OFFSET UNITYSDK_OFFSET(0x12635B30)
#define ABJMPKENACD_GIKCPCAODDE_OFFSET UNITYSDK_OFFSET(0x1262D650)
#define ABJMPKENACD_GLJDKMEEKNN_OFFSET UNITYSDK_OFFSET(0x1262D930)
#define ABJMPKENACD_GNABJJPNECE_OFFSET UNITYSDK_OFFSET(0x1262B090)
#define ABJMPKENACD_GNIMLIPBACD_OFFSET UNITYSDK_OFFSET(0x126370C0)
#define ABJMPKENACD_HBBCAIAHPOD_OFFSET UNITYSDK_OFFSET(0x12636A30)
#define ABJMPKENACD_HJCGKABHNMC_OFFSET UNITYSDK_OFFSET(0x12636CB0)
#define ABJMPKENACD_HMKHIEIHOPB_OFFSET UNITYSDK_OFFSET(0x126358A0)
#define ABJMPKENACD_HNELJPCMDMJ_OFFSET UNITYSDK_OFFSET(0x1262D810)
#define ABJMPKENACD_HPJOBMCMIEJ_OFFSET UNITYSDK_OFFSET(0x126319D0)
#define ABJMPKENACD_HPPGECCFGDN_OFFSET UNITYSDK_OFFSET(0x1262BF20)
#define ABJMPKENACD_IADIOADPCOD_OFFSET UNITYSDK_OFFSET(0x12637090)
#define ABJMPKENACD_IALKJGKBKIC_OFFSET UNITYSDK_OFFSET(0x126337E0)
#define ABJMPKENACD_IBKPENBLHCO_OFFSET UNITYSDK_OFFSET(0x1262B420)
#define ABJMPKENACD_ICBOPAJAOJP_OFFSET UNITYSDK_OFFSET(0x1262B7A0)
#define ABJMPKENACD_IDFLEJNBEKG_OFFSET UNITYSDK_OFFSET(0x12631C60)
#define ABJMPKENACD_IEICNHEBIGL_OFFSET UNITYSDK_OFFSET(0x1262B5C0)
#define ABJMPKENACD_IEKGHPNOJPM_OFFSET UNITYSDK_OFFSET(0x126367E0)
#define ABJMPKENACD_IIFNFMAFGJP_OFFSET UNITYSDK_OFFSET(0x12632540)
#define ABJMPKENACD_IJJHKEMLEEC_OFFSET UNITYSDK_OFFSET(0x1262C690)
#define ABJMPKENACD_IJLCLHMBBJC_OFFSET UNITYSDK_OFFSET(0x12634370)
#define ABJMPKENACD_IMMLGNPANOF_OFFSET UNITYSDK_OFFSET(0x126370B0)
#define ABJMPKENACD_IODKMGDJIEG_OFFSET UNITYSDK_OFFSET(0x12630E90)
#define ABJMPKENACD_IPPMHNMFNEG_OFFSET UNITYSDK_OFFSET(0x12630CE0)
#define ABJMPKENACD_JDPFLDDJJBP_OFFSET UNITYSDK_OFFSET(0x126322E0)
#define ABJMPKENACD_JEKFBANGDFA_OFFSET UNITYSDK_OFFSET(0x12635640)
#define ABJMPKENACD_JIDFFPHMOBJ_OFFSET UNITYSDK_OFFSET(0x12632900)
#define ABJMPKENACD_JMJNKPCDJCH_OFFSET UNITYSDK_OFFSET(0x1262C1E0)
#define ABJMPKENACD_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x12637240)
#define ABJMPKENACD_JNLDLLLMMGI_OFFSET UNITYSDK_OFFSET(0x1262AC10)
#define ABJMPKENACD_JNMKPINAFKJ_OFFSET UNITYSDK_OFFSET(0x12631010)
#define ABJMPKENACD_JPAPAMAKEMK_OFFSET UNITYSDK_OFFSET(0x1262C190)
#define ABJMPKENACD_KAHAKKMLIPL_OFFSET UNITYSDK_OFFSET(0x12630F70)
#define ABJMPKENACD_KAMEBBMCGFL_OFFSET UNITYSDK_OFFSET(0x1262EC30)
#define ABJMPKENACD_KBCHGIMEBFP_OFFSET UNITYSDK_OFFSET(0x1262EBA0)
#define ABJMPKENACD_KCIABLJBFEA_OFFSET UNITYSDK_OFFSET(0x126323C0)
#define ABJMPKENACD_KCNDPDHDOKG_OFFSET UNITYSDK_OFFSET(0x126347A0)
#define ABJMPKENACD_KCOEKMKPDFJ_OFFSET UNITYSDK_OFFSET(0x12634F30)
#define ABJMPKENACD_KDGFCFKNIFD_OFFSET UNITYSDK_OFFSET(0x1262CF70)
#define ABJMPKENACD_KENEEADIJPJ_OFFSET UNITYSDK_OFFSET(0x126357B0)
#define ABJMPKENACD_KFCAOPDBHKM_OFFSET UNITYSDK_OFFSET(0x1262E240)
#define ABJMPKENACD_KFMJIMGEHHF_OFFSET UNITYSDK_OFFSET(0x12633790)
#define ABJMPKENACD_KFMMPGFAAHC_OFFSET UNITYSDK_OFFSET(0x12635080)
#define ABJMPKENACD_KIDPCANKECA_OFFSET UNITYSDK_OFFSET(0x12633B30)
#define ABJMPKENACD_KLFEHIKKCHB_OFFSET UNITYSDK_OFFSET(0x1262D940)
#define ABJMPKENACD_LBNMEEPFPEI_OFFSET UNITYSDK_OFFSET(0x1262CF10)
#define ABJMPKENACD_LOGPPGHBGHP_OFFSET UNITYSDK_OFFSET(0x1262D9E0)
#define ABJMPKENACD_MAEAAHHCIGB_OFFSET UNITYSDK_OFFSET(0x126350A0)
#define ABJMPKENACD_MBEEBLKJPDG_OFFSET UNITYSDK_OFFSET(0x1262AC70)
#define ABJMPKENACD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x126355D0)
#define ABJMPKENACD_MFCMNNGMOMG_OFFSET UNITYSDK_OFFSET(0x126323D0)
#define ABJMPKENACD_MGMMNOKPDBC_OFFSET UNITYSDK_OFFSET(0x1262AFC0)
#define ABJMPKENACD_MIAPDNHKFAP_OFFSET UNITYSDK_OFFSET(0x126301A0)
#define ABJMPKENACD_MIKGPBDACIE_OFFSET UNITYSDK_OFFSET(0x126366A0)
#define ABJMPKENACD_MJACPOEJDPL_OFFSET UNITYSDK_OFFSET(0x1262B500)
#define ABJMPKENACD_MJPAOECMAGO_OFFSET UNITYSDK_OFFSET(0x12632D80)
#define ABJMPKENACD_MNFMOAMOLCF_OFFSET UNITYSDK_OFFSET(0x12634B70)
#define ABJMPKENACD_NAOCPFCAPJL_OFFSET UNITYSDK_OFFSET(0x12634040)
#define ABJMPKENACD_NDAKFBPPDOP_OFFSET UNITYSDK_OFFSET(0x126367F0)
#define ABJMPKENACD_NFMCCDJKGNM_OFFSET UNITYSDK_OFFSET(0x1262F240)
#define ABJMPKENACD_NLMLNNKDFHH_OFFSET UNITYSDK_OFFSET(0x12632180)
#define ABJMPKENACD_OCCDIOODEFN_OFFSET UNITYSDK_OFFSET(0x1262C030)
#define ABJMPKENACD_OEBEOABMOKO_OFFSET UNITYSDK_OFFSET(0x1262A7A0)
#define ABJMPKENACD_OHBPFPLPCNC_OFFSET UNITYSDK_OFFSET(0x12635360)
#define ABJMPKENACD_OILMGGGJNHJ_OFFSET UNITYSDK_OFFSET(0x126314E0)
#define ABJMPKENACD_OJINPJJOEJB_OFFSET UNITYSDK_OFFSET(0x12633540)
#define ABJMPKENACD_OKINPAEOJOH_OFFSET UNITYSDK_OFFSET(0x12632470)
#define ABJMPKENACD_ONKBBLKPJGM_OFFSET UNITYSDK_OFFSET(0x126363A0)
#define ABJMPKENACD_ONKJAPEOILH_OFFSET UNITYSDK_OFFSET(0x1262D1E0)
#define ABJMPKENACD_ONSTART_OFFSET UNITYSDK_OFFSET(0x12629F80)
#define ABJMPKENACD_OOGFIDFAAJC_OFFSET UNITYSDK_OFFSET(0x12636220)
#define ABJMPKENACD_PBAMMNGOLAC_OFFSET UNITYSDK_OFFSET(0x1262B640)
#define ABJMPKENACD_PDOCIMKMPJI_OFFSET UNITYSDK_OFFSET(0x1262AA10)
#define ABJMPKENACD_PFBMPNHFAIO_OFFSET UNITYSDK_OFFSET(0x1262F4D0)
#define ABJMPKENACD_PGLMOLCNPBK_OFFSET UNITYSDK_OFFSET(0x12633620)
#define ABJMPKENACD_PJGBCOFPOCN_OFFSET UNITYSDK_OFFSET(0x12635630)
#define ABJMPKENACD_PLCPLDFHFJP_OFFSET UNITYSDK_OFFSET(0x12633530)
#define ABJMPKENACD_PNEEDGEPAFG_OFFSET UNITYSDK_OFFSET(0x126350F0)
#define ABJMPKENACD_PNONEADEDDE_OFFSET UNITYSDK_OFFSET(0x12632B00)
#define ABJMPKENACD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1262A690)
#define ABJMPKENACD__CTOR_OFFSET UNITYSDK_OFFSET(0x1262A1A0)

inline static constexpr unsigned int ABJMPKENACD_TypeDefinitionIndex = 88606;

class ABJMPKENACD : public ::JGELKBLKFHE
{
public:
	static ::System::Int32* StaticGet_NKENFJFKPPF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ABJMPKENACD_TypeDefinitionIndex)->GetStaticField(0x9F10);
	}
	static ::System::Int32* StaticGet_CDBCPEOOFEL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ABJMPKENACD_TypeDefinitionIndex)->GetStaticField(0x9F14);
	}
	static ::System::Int32* StaticGet_OGFHBPMEPCK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ABJMPKENACD_TypeDefinitionIndex)->GetStaticField(0x9F18);
	}
	static ::System::Single* StaticGet_DAKGKJLNFOM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ABJMPKENACD_TypeDefinitionIndex)->GetStaticField(0x9F1C);
	}
	static ::System::Int32* StaticGet_PCCLCKOJPEH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ABJMPKENACD_TypeDefinitionIndex)->GetStaticField(0x9F20);
	}
	static ::System::Boolean* StaticGet_BODJCDFEMNO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ABJMPKENACD_TypeDefinitionIndex)->GetStaticField(0x9F24);
	}
	static ::System::Single* StaticGet_AMBIIGPDGDG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ABJMPKENACD_TypeDefinitionIndex)->GetStaticField(0x9F28);
	}
	// static const ::System::Int32 BBEBENNOMAF = 0x579; // 0x0
	// static const ::System::Int32 DMPBJMGBOCP = 0x583; // 0x0
	::UnityEngine::Animator* LJBNEJJCONF; // 0x18
	::RootMotion::FinalIK::LookController* JBKLJHEJFBN; // 0x20
	::Foundation::AssetRequestHandle GFDLGEDEMNA; // 0x28
	::UnityEngine::Transform* HDMLJMPHBKD; // 0x48
	::MoleMole::Battle::Entity* HDDFKLPANJK; // 0x50
	::GFMLEBCNNCN* AIMMOIIAFEO; // 0x58
	::Foundation::AssetPath GMFBODCNNDN; // 0x60
	::GHICACFMBNP* LKNOCPCJINI; // 0x70
	::System::Collections::Generic::List_1<::GPCLMNFMNBJ*>* IAHFJJKFFJJ; // 0x78
	::UnityEngine::Transform* LNNIAEHLKHO; // 0x80
	::System::Collections::Generic::Queue_1<::FANBKJPNEDB*>* CMCHMHGNFPF; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScreenEffectType>* LCFEKKFPOJM; // 0x90
	::UnityEngine::Transform* HABBCCIPMCE; // 0x98
	::MoleMole::Battle::Entity* LGKEELNLHKJ; // 0xA0
	::UnityEngine::Transform* HPIGANHNDEP; // 0xA8
	::System::Collections::Generic::List_1<::HAMJECLNFDC*>* PCBBHPILNMO; // 0xB0
	::MoleMole::Battle::Entity* LFINENFOBOB; // 0xB8
	::System::Collections::Generic::HashSet_1<::System::Int32>* MBJDJONIBED; // 0xC0
	::System::Collections::Generic::HashSet_1<::System::Int32>* FFLFFNBBLGF; // 0xC8
	::System::Threading::CancellationToken HNGBKOCIDPE; // 0xD0
	::MoleMole::Battle::Entity* DAIJBDIGIHF; // 0xD8
	::FishingRodController* LDGCGGHBCEI; // 0xE0
	::UnityEngine::GameObject* JFGKMAKMOPJ; // 0xE8
	::UnityEngine::Animator* LDKHNNGDBGE; // 0xF0
	::UnityEngine::Material* NDGLPCAMDNP; // 0xF8
	::UnityEngine::Transform* OAADNKEPIHG; // 0x100
	::UnityEngine::Transform* PFLEOEHOKCB; // 0x108
	::UnityEngine::Transform* NKMPLGOOHCM; // 0x110
	::GGGPIOIJELD* JFKFMOOBPLJ; // 0x118
	::MoleMole::Battle::Entity* KNMIFHFEEFM; // 0x120
	::UnityEngine::Transform* HHKBKKMFIIM; // 0x128
	::UnityEngine::GameObject* EPDIPFONEBH; // 0x130
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BIDIOGDJHMC; // 0x138
	::System::Collections::Generic::List_1<::FANBKJPNEDB*>* AJIGBPLLLGK; // 0x140
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* ECNMGCHNJJO; // 0x148
	::MoleMole::Battle::Entity* GPGIKGHLFMH; // 0x150
	::MoleMole::Battle::Entity* DJLKGLPECNI; // 0x158
	::System::Collections::Generic::List_1<::GFMLEBCNNCN*>* FJHPKBLFHAN; // 0x160
	::UnityEngine::Transform* AMEAIDINPEC; // 0x168
	::OGJNHDLJIBM* HLOEDLCGJHE; // 0x170
	::UnityEngine::Transform* JNAHFFFCHMM; // 0x178
	::UnityEngine::Transform* JDJFEJGENGG; // 0x180
	::MoleMole::Battle::Entity* CGHKDFHGHBD; // 0x188
	::ABNKJLHDDHJ* KKFMKFKKGGK; // 0x190
	::FANBKJPNEDB* NONMIJJGPAN; // 0x198
	::AAIJDKMDACF* LCAIJGOIIGB; // 0x1A0
	::BFIJLKBPBAK* GBNAGIHDLGA; // 0x1A8
	::MoleMole::Battle::Entity* DBMHCPCACEP; // 0x1B0
	::System::Int32 HPMAIBBGFMN; // 0x1B8
	::System::Int32 PHDIBOGHJJE; // 0x1BC
	::System::UInt32 CNPMPIFFHBA; // 0x1C0
	::UnityEngine::Vector3 BDDEFMKLLCL; // 0x1C4
	::System::Boolean MHFEJEMEBCF; // 0x1D0
	::System::Boolean LHGOJAMGHHL; // 0x1D1
	::System::Boolean NCPJONIKGJJ; // 0x1D2
	::System::Boolean NCPEPGPONJJ; // 0x1D3
	::System::Int32 EFNEOCMDIDK; // 0x1D4
	::System::Single KMNPGNMKMGD; // 0x1D8
	::ABJMPKENACD_AMOMFKCLJHB JADKNOOJOHO; // 0x1DC
	::UnityEngine::Vector3 CGKDHFAILIN; // 0x1E0
	::System::Int32 MPLHOIOEIJO; // 0x1EC
	::System::Int32 EHHIJNMDHFO; // 0x1F0
	::System::Int32 CHJLKDAMJCF; // 0x1F4
	::System::Int32 AFOEPEOHCHF; // 0x1F8
	::System::Single MLJNELPJNOE; // 0x1FC
	::System::Int32 OMNAJBKKPJD; // 0x200
	::System::Int32 ECLNHJGPDCE; // 0x204
	::System::Boolean MACKEGCJFLL; // 0x208
	::System::Boolean KIJJIIMIFND; // 0x209
	::System::Boolean LEFAHGJIJHN; // 0x20A
	::System::Boolean MDNDBCAFCAP; // 0x20B
	::ABJMPKENACD_MOACMLHFFCC AFNPHBOLEBN; // 0x20C
	::System::Int32 FAFMDDFLOJE; // 0x22C
	::System::Boolean KFAJAIOIPEL; // 0x230
	::System::Boolean GGFLPLHCBND; // 0x231
	::System::Byte _padding0[0x2];
	::System::Single IKGCEFPPLIP; // 0x234
	::System::Single FEJFLEMEAIA; // 0x238
	::System::Int32 FINABOIPEDD; // 0x23C
	::System::Int32 JKONDJKGFKN; // 0x240
	::System::Boolean FFMIOCABMPM; // 0x244
	::System::Boolean OHFJLOGKLIF; // 0x245
	::System::Boolean KLCOLNJEOCH; // 0x246
	::System::Boolean EKBMKONIJIA; // 0x247
	::System::Single IAKKOBNOMHD; // 0x248
	::System::Int32 KCFBGLENEEB; // 0x24C
	::System::Int32 DBJIAKLBGJC; // 0x250
	::System::UInt32 BCFDJBCNJHF; // 0x254
	::System::Int32 FIMDFEAMNEO; // 0x258
	::System::Int32 OGBEGGAOMDL; // 0x25C
	::System::Single PFCKAEOCNEH; // 0x260
	::System::Boolean DCKIHJAAGNK; // 0x264
	::System::Boolean GNMEACGOAAI; // 0x265
	::System::Boolean CDLDFPJCCHJ; // 0x266
	::System::Boolean HGPHAPFPLPK; // 0x267
	::System::Int32 GLNJBEMEPAK; // 0x268
	::System::Int32 FOLEABBCKFB; // 0x26C
	::UnityEngine::Quaternion DFIPGCHPJHN; // 0x270
	::System::Int32 NEEJINAJIKH; // 0x280
	::System::Int32 MKJOAJBHCIH; // 0x284
	::FBMFHPMONGC_BCLGKKACIJO PAKDLDMFGCL; // 0x288
	::System::Int32 OKOHLGBDHBA; // 0x28C
	::System::Int32 KEFMIJIJLBI; // 0x290
	::System::Int32 NLBLOCECPJG; // 0x294
	::System::Int32 FJJANMGGPCD; // 0x298
	::System::Int32 NJGIFJLJNMP; // 0x29C
	::System::Single NHJFGFFHKHJ; // 0x2A0
	::System::Single GNPHCBFDKBA; // 0x2A4
	::System::Int32 IAOJBICCNBF; // 0x2A8
	::System::Int32 NPJMGJHNKMJ; // 0x2AC
	::System::Int32 IBCLLCBIOMC; // 0x2B0
	::System::Int32 DAHNJELNLJN; // 0x2B4
	::System::Int32 NBEAKCODJME; // 0x2B8
	::System::Single ODDBJAJKLPF; // 0x2BC
	::System::Int32 OAACINEGBIP; // 0x2C0
	::System::Int32 GOPCDMJFELO; // 0x2C4
	::System::Int32 NDDDPAAPPGN; // 0x2C8
	::System::Single NALOGCLCJNA; // 0x2CC
	::FBMFHPMONGC_CKAPAAJBPAH MKNAOPBMAEH; // 0x2D0
	::System::UInt32 OAGMLGMBLOI; // 0x2D4
	::System::Single GCNPNPCHNIA; // 0x2D8
	::UnityEngine::Vector3 MKKBLPHNPGI; // 0x2DC
	::UnityEngine::Vector3 LADODODEPIA; // 0x2E8
	::System::Int32 MAPIMAMECDB; // 0x2F4
	::System::Int32 GFFLJEJPDJO; // 0x2F8
	::System::Int32 AMLFCNBBAPB; // 0x2FC
	::System::Single NDNDCKKPODG; // 0x300
	::System::Int32 CLLKOPOJBLD; // 0x304
	::System::Int32 MCBLMFJGEBG; // 0x308
	::FBMFHPMONGC_OJAOIGOHPNB BKNGAOOCGHB; // 0x30C
	::System::Single PBEALKNHNIL; // 0x310
	::System::Int32 _JBLGDBJODPA_k__BackingField; // 0x314
	::System::Int32 KKIFOCPFFIJ; // 0x318
	::System::Int32 HOMCFFALHEJ; // 0x31C
	::System::Int32 ALFCOKICEHD; // 0x320
	::System::Int32 MDJMKCIEGKJ; // 0x324
	::System::Single JIHIAJMFHKL; // 0x328
	::System::Int32 HCNCOBNLHFJ; // 0x32C
	::System::Int32 KGJCJMLIODM; // 0x330
	::System::Int32 DAOELEJFLHH; // 0x334

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABJMPKENACD__CCTOR_OFFSET))();
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_ONSTART_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ALDDLFBHAAK(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_ALDDLFBHAAK_OFFSET))(this, NPAKMAGBOCH);
	}

	::UnityEngine::Vector3 OEBEOABMOKO(::System::Int32 PFLKNLADAOI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_OEBEOABMOKO_OFFSET))(this, PFLKNLADAOI);
	}

	::System::Void PDOCIMKMPJI(::System::String* JHBKKMKLCBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABJMPKENACD_PDOCIMKMPJI_OFFSET))(this, JHBKKMKLCBH);
	}

	::System::Void CFDHCEPMABM(::System::Int32 CBIEJMBPAIC, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_CFDHCEPMABM_OFFSET))(this, CBIEJMBPAIC, EGEGIMGMJHN);
	}

	::Cysharp::Threading::Tasks::UniTask MGMMNOKPDBC(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJMPKENACD_MGMMNOKPDBC_OFFSET))(this, IACKHFCLPJI);
	}

	::System::Void GNABJJPNECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_GNABJJPNECE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> BBGBBBAOFLA()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BBGBBBAOFLA_OFFSET))(this);
	}

	::System::Void MJACPOEJDPL(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ABJMPKENACD_MJACPOEJDPL_OFFSET))(this, EIFONLCJOPG);
	}

	::Cysharp::Threading::Tasks::UniTask PBAMMNGOLAC(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_PBAMMNGOLAC_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Void AJLGLNFJDMH(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ABJMPKENACD_AJLGLNFJDMH_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void AGBOHLJEMIE(::FANBKJPNEDB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + ABJMPKENACD_AGBOHLJEMIE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ICBOPAJAOJP(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN, ::System::Single ECMOEENIHME, ::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_ICBOPAJAOJP_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN, ECMOEENIHME, BGBCNLEBGEL, HAFDIMGJBHC);
	}

	::System::Void AGKLHFHIKKM(::System::String* MCOHLHMKLIP, ::MoleMole::Config::ScreenEffectType BBMDGPCOFOF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + ABJMPKENACD_AGKLHFHIKKM_OFFSET))(this, MCOHLHMKLIP, BBMDGPCOFOF);
	}

	::System::Void HPPGECCFGDN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ABJMPKENACD_HPPGECCFGDN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void JPAPAMAKEMK(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ABJMPKENACD_JPAPAMAKEMK_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void JMJNKPCDJCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JMJNKPCDJCH_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData ONKJAPEOILH(::MoleMole::FishCameraConfig DFMKILICPFB)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::MoleMole::FishCameraConfig))((::PBYTE)hIl2Cpp + ABJMPKENACD_ONKJAPEOILH_OFFSET))(this, DFMKILICPFB);
	}

	::Cysharp::Threading::Tasks::UniTask GIKCPCAODDE(::FBMFHPMONGC_CKAPAAJBPAH HOPPKLPOBED, ::System::Boolean GDNECMBHKND, ::System::Boolean NPPMJEIPMFC, ::System::Single AMFOADOGKKK, ::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::FBMFHPMONGC_CKAPAAJBPAH, ::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJMPKENACD_GIKCPCAODDE_OFFSET))(this, HOPPKLPOBED, GDNECMBHKND, NPPMJEIPMFC, AMFOADOGKKK, AKAGDEFAGJA, KPLGFGLGLPD);
	}

	::Cysharp::Threading::Tasks::UniTask HNELJPCMDMJ(::System::Int32 NPAKMAGBOCH, ::System::Boolean NELCEOFGEFI, ::System::Threading::CancellationTokenSource* MPPGOFIIMEM, ::System::Boolean GDNECMBHKND, ::System::Boolean KNJOFCCMBDB, ::System::Boolean ANICFFFFLKK)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_HNELJPCMDMJ_OFFSET))(this, NPAKMAGBOCH, NELCEOFGEFI, MPPGOFIIMEM, GDNECMBHKND, KNJOFCCMBDB, ANICFFFFLKK);
	}

	::System::Void GLJDKMEEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_GLJDKMEEKNN_OFFSET))(this);
	}

	::System::Void JNLDLLLMMGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JNLDLLLMMGI_OFFSET))(this);
	}

	::System::Void LOGPPGHBGHP(::MoleMole::Battle::Entity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ABJMPKENACD_LOGPPGHBGHP_OFFSET))(this, EIFONLCJOPG);
	}

	::UnityEngine::Camera* MBEEBLKJPDG()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_MBEEBLKJPDG_OFFSET))(this);
	}

	::System::Void FOKPJONOLMD(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ABJMPKENACD_FOKPJONOLMD_OFFSET))(this, EIFONLCJOPG);
	}

	::Cysharp::Threading::Tasks::UniTask KBCHGIMEBFP()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_KBCHGIMEBFP_OFFSET))(this);
	}

	::System::Void KDGFCFKNIFD(::System::Int32 CBIEJMBPAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_KDGFCFKNIFD_OFFSET))(this, CBIEJMBPAIC);
	}

	::System::Void KAMEBBMCGFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_KAMEBBMCGFL_OFFSET))(this);
	}

	::System::Void NFMCCDJKGNM(::System::Int32 CBIEJMBPAIC, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_NFMCCDJKGNM_OFFSET))(this, CBIEJMBPAIC, EGEGIMGMJHN);
	}

	::System::Void PFBMPNHFAIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_PFBMPNHFAIO_OFFSET))(this);
	}

	::System::Int32 AFLEGIBAGCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_AFLEGIBAGCG_OFFSET))(this);
	}

	::System::Void EPOFGIAFILL(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABJMPKENACD_EPOFGIAFILL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single IBKPENBLHCO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_IBKPENBLHCO_OFFSET))(this);
	}

	::System::Void MIAPDNHKFAP(::System::Int32 NPAKMAGBOCH, ::System::Boolean NELCEOFGEFI, ::System::Threading::CancellationTokenSource* MPPGOFIIMEM, ::System::Action_1<::System::Boolean>* FKHOJLMBILE, ::System::Boolean LGHOKHJEIMO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_MIAPDNHKFAP_OFFSET))(this, NPAKMAGBOCH, NELCEOFGEFI, MPPGOFIIMEM, FKHOJLMBILE, LGHOKHJEIMO);
	}

	::Cysharp::Threading::Tasks::UniTask CADJOBJPOBD(::System::Int32 NPAKMAGBOCH, ::System::Boolean NELCEOFGEFI, ::System::Threading::CancellationTokenSource* MPPGOFIIMEM, ::System::Boolean GDNECMBHKND, ::System::Boolean KNJOFCCMBDB, ::System::Boolean ANICFFFFLKK)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_CADJOBJPOBD_OFFSET))(this, NPAKMAGBOCH, NELCEOFGEFI, MPPGOFIIMEM, GDNECMBHKND, KNJOFCCMBDB, ANICFFFFLKK);
	}

	::Cysharp::Threading::Tasks::UniTask IODKMGDJIEG(::System::Single EEODALLOKMF)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_IODKMGDJIEG_OFFSET))(this, EEODALLOKMF);
	}

	::System::Void IEICNHEBIGL(::PAMPOBIPLCE GEPABHJBIAH)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + ABJMPKENACD_IEICNHEBIGL_OFFSET))(this, GEPABHJBIAH);
	}

	::System::Boolean COFCHGALDGH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_COFCHGALDGH_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask KAHAKKMLIPL()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_KAHAKKMLIPL_OFFSET))(this);
	}

	::System::Void JNMKPINAFKJ(::System::Single KKAMDFNMMJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_JNMKPINAFKJ_OFFSET))(this, KKAMDFNMMJH);
	}

	::UnityEngine::Vector3 OILMGGGJNHJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_OILMGGGJNHJ_OFFSET))(this);
	}

	::System::Void BDLPBCEMCLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BDLPBCEMCLJ_OFFSET))(this);
	}

	::UnityEngine::GameObject* DNMPBJGALNO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_DNMPBJGALNO_OFFSET))(this);
	}

	::System::Void HPJOBMCMIEJ(::System::Int32 CBIEJMBPAIC, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_HPJOBMCMIEJ_OFFSET))(this, CBIEJMBPAIC, EGEGIMGMJHN);
	}

	::System::Void BDGEEDAELDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BDGEEDAELDD_OFFSET))(this);
	}

	::GPCLMNFMNBJ* NLMLNNKDFHH()
	{
		return ((::GPCLMNFMNBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NLMLNNKDFHH_OFFSET))(this);
	}

	::FANBKJPNEDB* DLIGAEGCNME()
	{
		return ((::FANBKJPNEDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_DLIGAEGCNME_OFFSET))(this);
	}

	::System::Int32 JDPFLDDJJBP(::System::Int32 PFLKNLADAOI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_JDPFLDDJJBP_OFFSET))(this, PFLKNLADAOI);
	}

	::System::Void DJEIFCDGCIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_DJEIFCDGCIN_OFFSET))(this);
	}

	::System::Void KCIABLJBFEA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_KCIABLJBFEA_OFFSET))(this, EGEGIMGMJHN);
	}

	::Cysharp::Threading::Tasks::UniTask MFCMNNGMOMG()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_MFCMNNGMOMG_OFFSET))(this);
	}

	::System::Boolean OKINPAEOJOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_OKINPAEOJOH_OFFSET))(this);
	}

	::System::Void FILFBFFMNAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FILFBFFMNAK_OFFSET))(this);
	}

	::UnityEngine::Vector3 IIFNFMAFGJP(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single FNIOPKPHDEH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_IIFNFMAFGJP_OFFSET))(this, IACKHFCLPJI, FNIOPKPHDEH);
	}

	::AAIJDKMDACF* ABOKADFPJCO()
	{
		return ((::AAIJDKMDACF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_ABOKADFPJCO_OFFSET))(this);
	}

	::System::Boolean PNONEADEDDE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_PNONEADEDDE_OFFSET))(this);
	}

	::System::Void CFDCHFLPPBJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_CFDCHFLPPBJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::PipelineCamera::WorldBasicCameraData APNGEJJHOCO(::PipelineCamera::WorldBasicCameraData KDEHMPGOCEP, ::PipelineCamera::WorldBasicCameraData PADJNMGMGHO, ::System::Single IMLLDOHDCNC)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_APNGEJJHOCO_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, IMLLDOHDCNC);
	}

	::System::Void MJPAOECMAGO(::System::Int32 KMMGKJPAOMF, ::System::Boolean NPPMJEIPMFC, ::System::Boolean LKEOMMCINCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_MJPAOECMAGO_OFFSET))(this, KMMGKJPAOMF, NPPMJEIPMFC, LKEOMMCINCP);
	}

	::System::Void AECGHMBIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_AECGHMBIFPL_OFFSET))(this);
	}

	::System::Single PLCPLDFHFJP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_PLCPLDFHFJP_OFFSET))(this);
	}

	::System::Void IPPMHNMFNEG(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABJMPKENACD_IPPMHNMFNEG_OFFSET))(this, EGEGIMGMJHN);
	}

	::Cysharp::Threading::Tasks::UniTask OJINPJJOEJB(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_OJINPJJOEJB_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Single FLJEMFGDOFB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FLJEMFGDOFB_OFFSET))(this);
	}

	::MoleMole::FishPosConfig* PGLMOLCNPBK()
	{
		return ((::MoleMole::FishPosConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_PGLMOLCNPBK_OFFSET))(this);
	}

	::System::Boolean KFMJIMGEHHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_KFMJIMGEHHF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask IALKJGKBKIC(::ABJMPKENACD_AMOMFKCLJHB GEJCKFFFKCL)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::ABJMPKENACD_AMOMFKCLJHB))((::PBYTE)hIl2Cpp + ABJMPKENACD_IALKJGKBKIC_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void BIBKEHFCALF(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABJMPKENACD_BIBKEHFCALF_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void IJJHKEMLEEC(::MoleMole::Battle::Entity* MJPPILKEMBG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ABJMPKENACD_IJJHKEMLEEC_OFFSET))(this, MJPPILKEMBG);
	}

	::System::Void EDFFDPDNFPD(::System::Single BGDDNHMJALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_EDFFDPDNFPD_OFFSET))(this, BGDDNHMJALJ);
	}

	::System::Void NAOCPFCAPJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NAOCPFCAPJL_OFFSET))(this);
	}

	::System::Void IJLCLHMBBJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_IJLCLHMBBJC_OFFSET))(this);
	}

	::System::Void KCNDPDHDOKG(::System::Single BGDDNHMJALJ, ::System::Boolean CNEMAILGJFP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_KCNDPDHDOKG_OFFSET))(this, BGDDNHMJALJ, CNEMAILGJFP);
	}

	::System::Boolean GCCHOADAIJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_GCCHOADAIJI_OFFSET))(this);
	}

	::System::Void MNFMOAMOLCF(::System::Int32 NPAKMAGBOCH, ::System::UInt32 DEFAKCIAKLG, ::System::Boolean NELCEOFGEFI, ::System::Threading::CancellationTokenSource* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + ABJMPKENACD_MNFMOAMOLCF_OFFSET))(this, NPAKMAGBOCH, DEFAKCIAKLG, NELCEOFGEFI, KHGFAKJKDGG);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> KCOEKMKPDFJ(::MoleMole::FishCameraConfig KIDMJNEFBPH, ::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL, ::System::Single FBNIOMKFDAM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::MoleMole::FishCameraConfig, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_KCOEKMKPDFJ_OFFSET))(this, KIDMJNEFBPH, BGBCNLEBGEL, FBNIOMKFDAM);
	}

	::UnityEngine::Vector3 KFMMPGFAAHC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_KFMMPGFAAHC_OFFSET))(this);
	}

	::System::Void KLFEHIKKCHB(::MoleMole::Battle::Entity* MJPPILKEMBG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ABJMPKENACD_KLFEHIKKCHB_OFFSET))(this, MJPPILKEMBG);
	}

	::System::Void MAEAAHHCIGB(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ABJMPKENACD_MAEAAHHCIGB_OFFSET))(this, EIFONLCJOPG);
	}

	::Cysharp::Threading::Tasks::UniTask PNEEDGEPAFG(::UnityEngine::Vector3 KLILFBFAELK, ::UnityEngine::Vector3 DAAEHEHLLLD, ::MoleMole::FishMove3DCurve* FAJHPKBELMF, ::System::Single MDPPNMIPDMP, ::System::Boolean PNPFABLHFLB, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::FishMove3DCurve*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + ABJMPKENACD_PNEEDGEPAFG_OFFSET))(this, KLILFBFAELK, DAAEHEHLLLD, FAJHPKBELMF, MDPPNMIPDMP, PNPFABLHFLB, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTask AANOGHMALEJ()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_AANOGHMALEJ_OFFSET))(this);
	}

	::System::Void IDFLEJNBEKG(::System::Single OOPMKIIBAAE, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_IDFLEJNBEKG_OFFSET))(this, OOPMKIIBAAE, IAKPGBCAAKM);
	}

	::MoleMole::FishMoveParam* JIDFFPHMOBJ()
	{
		return ((::MoleMole::FishMoveParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JIDFFPHMOBJ_OFFSET))(this);
	}

	::System::Void OHBPFPLPCNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_OHBPFPLPCNC_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_MBGCBDBNPFE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::GPCLMNFMNBJ*>* PJGBCOFPOCN()
	{
		return ((::System::Collections::Generic::List_1<::GPCLMNFMNBJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_PJGBCOFPOCN_OFFSET))(this);
	}

	::System::Int32 JEKFBANGDFA(::System::Int32 NDDIJPFKGCJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_JEKFBANGDFA_OFFSET))(this, NDDIJPFKGCJ);
	}

	::System::Void BEPPCHEDPGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BEPPCHEDPGK_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask KENEEADIJPJ(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJMPKENACD_KENEEADIJPJ_OFFSET))(this, IACKHFCLPJI);
	}

	::UnityEngine::AnimationCurve* HMKHIEIHOPB(::ABJMPKENACD_AMOMFKCLJHB GEJCKFFFKCL)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::ABJMPKENACD_AMOMFKCLJHB))((::PBYTE)hIl2Cpp + ABJMPKENACD_HMKHIEIHOPB_OFFSET))(this, GEJCKFFFKCL);
	}

	::Cysharp::Threading::Tasks::UniTask BFGKLGGBCDB(::System::Boolean NPPMJEIPMFC)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_BFGKLGGBCDB_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Void GFBFHJBEDBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_GFBFHJBEDBD_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask OOGFIDFAAJC(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Boolean FLLAECLHGIF)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_OOGFIDFAAJC_OFFSET))(this, IACKHFCLPJI, FLLAECLHGIF);
	}

	::UnityEngine::Vector3 BOLJLGCGBNO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BOLJLGCGBNO_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ONKBBLKPJGM(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_ONKBBLKPJGM_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Void LBNMEEPFPEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_LBNMEEPFPEI_OFFSET))(this);
	}

	::System::Boolean FLDCFFEDCNE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FLDCFFEDCNE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OCCDIOODEFN(::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL, ::System::Single FBNIOMKFDAM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_OCCDIOODEFN_OFFSET))(this, BGBCNLEBGEL, FBNIOMKFDAM);
	}

	::Cysharp::Threading::Tasks::UniTask BHMJLDNOAAC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BHMJLDNOAAC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask AKLNFPHCNKD(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_AKLNFPHCNKD_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Void KFCAOPDBHKM(::UnityEngine::Transform* GIAEPMKCBIB, ::UnityEngine::Transform* DOBFFIICAII, ::System::Single CLDNOBEOBKO, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_KFCAOPDBHKM_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII, CLDNOBEOBKO, PMNLNNGEIFM);
	}

	::Cysharp::Threading::Tasks::UniTask CCJHFKKKEKG(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + ABJMPKENACD_CCJHFKKKEKG_OFFSET))(this, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTask MIKGPBDACIE(::System::Threading::CancellationTokenSource* MPPGOFIIMEM, ::System::Boolean GDNECMBHKND)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationTokenSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJMPKENACD_MIKGPBDACIE_OFFSET))(this, MPPGOFIIMEM, GDNECMBHKND);
	}

	::UnityEngine::Vector3 FMGLHPNPMNE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FMGLHPNPMNE_OFFSET))(this);
	}

	::System::Boolean IEKGHPNOJPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_IEKGHPNOJPM_OFFSET))(this);
	}

	::System::Void NDAKFBPPDOP(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABJMPKENACD_NDAKFBPPDOP_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HBBCAIAHPOD(::System::Int32 CBIEJMBPAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABJMPKENACD_HBBCAIAHPOD_OFFSET))(this, CBIEJMBPAIC);
	}

	::System::Void COFHOCIEHPD(::PAMPOBIPLCE GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + ABJMPKENACD_COFHOCIEHPD_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Void FMBDGJIPHAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FMBDGJIPHAA_OFFSET))(this);
	}

	::System::UInt32 HJCGKABHNMC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_HJCGKABHNMC_OFFSET))(this);
	}

	::System::Void AJLDBEGFMCJ(::UnityEngine::Transform* LNEEMAGIHLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ABJMPKENACD_AJLDBEGFMCJ_OFFSET))(this, LNEEMAGIHLB);
	}

	::FANBKJPNEDB* EILDPPJDKGP()
	{
		return ((::FANBKJPNEDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_EILDPPJDKGP_OFFSET))(this);
	}

	::System::Boolean IADIOADPCOD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_IADIOADPCOD_OFFSET))(this);
	}

	::System::UInt32 IMMLGNPANOF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_IMMLGNPANOF_OFFSET))(this);
	}

	::System::Void GNIMLIPBACD(::System::Action* FKHOJLMBILE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ABJMPKENACD_GNIMLIPBACD_OFFSET))(this, FKHOJLMBILE);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JNBGBKMJGAG_OFFSET))(this);
	}

	::System::Void KIDPCANKECA(::ABJMPKENACD_OAIEODBENIO APGMPFJEIHF)
	{
		return ((::System::Void(*)(::PVOID, ::ABJMPKENACD_OAIEODBENIO))((::PBYTE)hIl2Cpp + ABJMPKENACD_KIDPCANKECA_OFFSET))(this, APGMPFJEIHF);
	}
};
