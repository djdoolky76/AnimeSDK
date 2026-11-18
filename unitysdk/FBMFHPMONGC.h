#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBMFHPMONGC_AGOGIENCNHB.h"
#include "unitysdk/FBMFHPMONGC_BCLGKKACIJO.h"
#include "unitysdk/FBMFHPMONGC_CKAPAAJBPAH.h"
#include "unitysdk/FBMFHPMONGC_ECILEJICMHM.h"
#include "unitysdk/FBMFHPMONGC_KBNBLHLOEFP.h"
#include "unitysdk/FBMFHPMONGC_OJAOIGOHPNB.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/POOIBEFDFGP.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class DLOHLLFLCOH;
class FishingRodController;
class GGGPIOIJELD;
class GHICACFMBNP;
class GPCLMNFMNBJ;
class HCOECCJJCIN;
class JMIIBFBJLNF;
class OGJNHDLJIBM;
class PMIAJPMBMFP;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define FBMFHPMONGC_ABOKADFPJCO_OFFSET UNITYSDK_OFFSET(0x131EFBF0)
#define FBMFHPMONGC_AECGHMBIFPL_OFFSET UNITYSDK_OFFSET(0x131F01C0)
#define FBMFHPMONGC_AEEHFKDFMBJ_OFFSET UNITYSDK_OFFSET(0x131FBE50)
#define FBMFHPMONGC_AGKLHFHIKKM_OFFSET UNITYSDK_OFFSET(0x131F11A0)
#define FBMFHPMONGC_AJLDBEGFMCJ_OFFSET UNITYSDK_OFFSET(0x131F1980)
#define FBMFHPMONGC_AJLGLNFJDMH_OFFSET UNITYSDK_OFFSET(0x131F1090)
#define FBMFHPMONGC_AKLNFPHCNKD_OFFSET UNITYSDK_OFFSET(0x131F7A90)
#define FBMFHPMONGC_ALDDLFBHAAK_OFFSET UNITYSDK_OFFSET(0x131EFFB0)
#define FBMFHPMONGC_APNGEJJHOCO_OFFSET UNITYSDK_OFFSET(0x131FC760)
#define FBMFHPMONGC_BBGBBBAOFLA_OFFSET UNITYSDK_OFFSET(0x131FBEA0)
#define FBMFHPMONGC_BDGEEDAELDD_OFFSET UNITYSDK_OFFSET(0x131F4B50)
#define FBMFHPMONGC_BDLPBCEMCLJ_OFFSET UNITYSDK_OFFSET(0x131EF5A0)
#define FBMFHPMONGC_BEPPCHEDPGK_OFFSET UNITYSDK_OFFSET(0x131FA9B0)
#define FBMFHPMONGC_BFGKLGGBCDB_OFFSET UNITYSDK_OFFSET(0x131F84E0)
#define FBMFHPMONGC_BHMJLDNOAAC_OFFSET UNITYSDK_OFFSET(0x131FC3E0)
#define FBMFHPMONGC_BIBKEHFCALF_OFFSET UNITYSDK_OFFSET(0x131EFA20)
#define FBMFHPMONGC_BMAMBJENIJO_OFFSET UNITYSDK_OFFSET(0x131FC9B0)
#define FBMFHPMONGC_BPPBKGHBKIJ_OFFSET UNITYSDK_OFFSET(0x131FAF40)
#define FBMFHPMONGC_CADJOBJPOBD_OFFSET UNITYSDK_OFFSET(0x131EF460)
#define FBMFHPMONGC_CCJHFKKKEKG_OFFSET UNITYSDK_OFFSET(0x131FAE40)
#define FBMFHPMONGC_CFDHCEPMABM_OFFSET UNITYSDK_OFFSET(0x131F6A90)
#define FBMFHPMONGC_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x131F8020)
#define FBMFHPMONGC_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x131F6D30)
#define FBMFHPMONGC_DEFJPEAFBKG_OFFSET UNITYSDK_OFFSET(0x131F3D40)
#define FBMFHPMONGC_DNMPBJGALNO_OFFSET UNITYSDK_OFFSET(0x131F1660)
#define FBMFHPMONGC_EILDPPJDKGP_OFFSET UNITYSDK_OFFSET(0x131F01B0)
#define FBMFHPMONGC_FHPCMALAHGM_OFFSET UNITYSDK_OFFSET(0x131F3D50)
#define FBMFHPMONGC_FLJEMFGDOFB_OFFSET UNITYSDK_OFFSET(0x131F6D20)
#define FBMFHPMONGC_FOKPJONOLMD_OFFSET UNITYSDK_OFFSET(0x131FAEF0)
#define FBMFHPMONGC_GBIOOBDNCGH_OFFSET UNITYSDK_OFFSET(0x131F6F40)
#define FBMFHPMONGC_GFBFHJBEDBD_OFFSET UNITYSDK_OFFSET(0x131F56E0)
#define FBMFHPMONGC_GIKCPCAODDE_OFFSET UNITYSDK_OFFSET(0x131F8260)
#define FBMFHPMONGC_HBBCAIAHPOD_OFFSET UNITYSDK_OFFSET(0x131FAA70)
#define FBMFHPMONGC_HMKHIEIHOPB_OFFSET UNITYSDK_OFFSET(0x131F3E00)
#define FBMFHPMONGC_HNELJPCMDMJ_OFFSET UNITYSDK_OFFSET(0x131FC630)
#define FBMFHPMONGC_IALKJGKBKIC_OFFSET UNITYSDK_OFFSET(0x131F8160)
#define FBMFHPMONGC_ICBOPAJAOJP_OFFSET UNITYSDK_OFFSET(0x131F7B40)
#define FBMFHPMONGC_IDFLEJNBEKG_OFFSET UNITYSDK_OFFSET(0x131F3700)
#define FBMFHPMONGC_IEICNHEBIGL_OFFSET UNITYSDK_OFFSET(0x131EF330)
#define FBMFHPMONGC_IIFNFMAFGJP_OFFSET UNITYSDK_OFFSET(0x131F2F20)
#define FBMFHPMONGC_IJJHKEMLEEC_OFFSET UNITYSDK_OFFSET(0x131EFC00)
#define FBMFHPMONGC_IJLCLHMBBJC_OFFSET UNITYSDK_OFFSET(0x131F6660)
#define FBMFHPMONGC_IODKMGDJIEG_OFFSET UNITYSDK_OFFSET(0x131F3C70)
#define FBMFHPMONGC_JIDFFPHMOBJ_OFFSET UNITYSDK_OFFSET(0x131F32E0)
#define FBMFHPMONGC_JIMECFDBLNL_OFFSET UNITYSDK_OFFSET(0x131FBDB0)
#define FBMFHPMONGC_JMJNKPCDJCH_OFFSET UNITYSDK_OFFSET(0x131F45C0)
#define FBMFHPMONGC_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x131F8640)
#define FBMFHPMONGC_JNMKPINAFKJ_OFFSET UNITYSDK_OFFSET(0x131F1450)
#define FBMFHPMONGC_JNNJALCOHEH_OFFSET UNITYSDK_OFFSET(0x131F0950)
#define FBMFHPMONGC_JPAPAMAKEMK_OFFSET UNITYSDK_OFFSET(0x131F3C20)
#define FBMFHPMONGC_KAHAKKMLIPL_OFFSET UNITYSDK_OFFSET(0x131F6E90)
#define FBMFHPMONGC_KAMEBBMCGFL_OFFSET UNITYSDK_OFFSET(0x131F3FB0)
#define FBMFHPMONGC_KBCHGIMEBFP_OFFSET UNITYSDK_OFFSET(0x131FBF50)
#define FBMFHPMONGC_KCCNIAPAIJM_OFFSET UNITYSDK_OFFSET(0x131EEB00)
#define FBMFHPMONGC_KCOEKMKPDFJ_OFFSET UNITYSDK_OFFSET(0x131FACE0)
#define FBMFHPMONGC_KDGFCFKNIFD_OFFSET UNITYSDK_OFFSET(0x131F4FF0)
#define FBMFHPMONGC_KFCAOPDBHKM_OFFSET UNITYSDK_OFFSET(0x131F27A0)
#define FBMFHPMONGC_KFMMPGFAAHC_OFFSET UNITYSDK_OFFSET(0x131FC3C0)
#define FBMFHPMONGC_LBNMEEPFPEI_OFFSET UNITYSDK_OFFSET(0x131F1920)
#define FBMFHPMONGC_LEOLGMCNGKC_OFFSET UNITYSDK_OFFSET(0x131F6F20)
#define FBMFHPMONGC_LGOALPGGCML_OFFSET UNITYSDK_OFFSET(0x131EE250)
#define FBMFHPMONGC_LOGPPGHBGHP_OFFSET UNITYSDK_OFFSET(0x131FAF50)
#define FBMFHPMONGC_MAEAAHHCIGB_OFFSET UNITYSDK_OFFSET(0x131F5260)
#define FBMFHPMONGC_MAKEFOEIKDB_OFFSET UNITYSDK_OFFSET(0x131EF3B0)
#define FBMFHPMONGC_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x131F0150)
#define FBMFHPMONGC_MFCMNNGMOMG_OFFSET UNITYSDK_OFFSET(0x131F85B0)
#define FBMFHPMONGC_MGMMNOKPDBC_OFFSET UNITYSDK_OFFSET(0x131EED20)
#define FBMFHPMONGC_MIAPDNHKFAP_OFFSET UNITYSDK_OFFSET(0x131FB7B0)
#define FBMFHPMONGC_MIKGPBDACIE_OFFSET UNITYSDK_OFFSET(0x131F80B0)
#define FBMFHPMONGC_MJACPOEJDPL_OFFSET UNITYSDK_OFFSET(0x131F0090)
#define FBMFHPMONGC_MJPAOECMAGO_OFFSET UNITYSDK_OFFSET(0x131F0210)
#define FBMFHPMONGC_MNFMOAMOLCF_OFFSET UNITYSDK_OFFSET(0x131FBFF0)
#define FBMFHPMONGC_NAOCPFCAPJL_OFFSET UNITYSDK_OFFSET(0x131F52B0)
#define FBMFHPMONGC_NDAKFBPPDOP_OFFSET UNITYSDK_OFFSET(0x131EF0E0)
#define FBMFHPMONGC_NFMCCDJKGNM_OFFSET UNITYSDK_OFFSET(0x131EEE00)
#define FBMFHPMONGC_NLJEIIMBODF_OFFSET UNITYSDK_OFFSET(0x131EF090)
#define FBMFHPMONGC_NLMLNNKDFHH_OFFSET UNITYSDK_OFFSET(0x131F0F40)
#define FBMFHPMONGC_OEBEOABMOKO_OFFSET UNITYSDK_OFFSET(0x131F34D0)
#define FBMFHPMONGC_OJINPJJOEJB_OFFSET UNITYSDK_OFFSET(0x131F10E0)
#define FBMFHPMONGC_ONKBBLKPJGM_OFFSET UNITYSDK_OFFSET(0x131F8410)
#define FBMFHPMONGC_ONKJAPEOILH_OFFSET UNITYSDK_OFFSET(0x131F6050)
#define FBMFHPMONGC_ONSTART_OFFSET UNITYSDK_OFFSET(0x131EDE30)
#define FBMFHPMONGC_OOGFIDFAAJC_OFFSET UNITYSDK_OFFSET(0x131F0E50)
#define FBMFHPMONGC_PALNBLIIIMK_OFFSET UNITYSDK_OFFSET(0x131EEA10)
#define FBMFHPMONGC_PBAMMNGOLAC_OFFSET UNITYSDK_OFFSET(0x131F55E0)
#define FBMFHPMONGC_PFBMPNHFAIO_OFFSET UNITYSDK_OFFSET(0x131F1D40)
#define FBMFHPMONGC_PGLMOLCNPBK_OFFSET UNITYSDK_OFFSET(0x131F64D0)
#define FBMFHPMONGC_PJGBCOFPOCN_OFFSET UNITYSDK_OFFSET(0x131F8250)
#define FBMFHPMONGC_PLCPLDFHFJP_OFFSET UNITYSDK_OFFSET(0x131F84D0)
#define FBMFHPMONGC_PNEEDGEPAFG_OFFSET UNITYSDK_OFFSET(0x131FC480)
#define FBMFHPMONGC__CCTOR_OFFSET UNITYSDK_OFFSET(0x131EE240)
#define FBMFHPMONGC__CTOR_OFFSET UNITYSDK_OFFSET(0x131EDE90)

inline static constexpr unsigned int FBMFHPMONGC_TypeDefinitionIndex = 50472;

class FBMFHPMONGC : public ::JGELKBLKFHE
{
public:
	static ::System::Int32* StaticGet_PCCLCKOJPEH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FBMFHPMONGC_TypeDefinitionIndex)->GetStaticField(0xA7C0);
	}
	static ::System::Boolean* StaticGet_BODJCDFEMNO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FBMFHPMONGC_TypeDefinitionIndex)->GetStaticField(0xA7C4);
	}
	::JMIIBFBJLNF* EHPGKALGIBP; // 0x18
	::System::Collections::Generic::List_1<::GPCLMNFMNBJ*>* IAHFJJKFFJJ; // 0x20
	::MoleMole::Battle::Entity* CGHKDFHGHBD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BIDIOGDJHMC; // 0x30
	::MoleMole::Battle::Entity* LGKEELNLHKJ; // 0x38
	::UnityEngine::Transform* JNAHFFFCHMM; // 0x40
	::MoleMole::Battle::Entity* GPGIKGHLFMH; // 0x48
	::UnityEngine::Transform* HABBCCIPMCE; // 0x50
	::Foundation::AssetRequestHandle GFDLGEDEMNA; // 0x58
	::UnityEngine::Transform* HDMLJMPHBKD; // 0x78
	::GGGPIOIJELD* JFKFMOOBPLJ; // 0x80
	::UnityEngine::Transform* AMEAIDINPEC; // 0x88
	::PMIAJPMBMFP* FACICPMBCAN; // 0x90
	::System::Collections::Generic::Queue_1<::JMIIBFBJLNF*>* CMCHMHGNFPF; // 0x98
	::UnityEngine::Material* NDGLPCAMDNP; // 0xA0
	::UnityEngine::GameObject* EPDIPFONEBH; // 0xA8
	::UnityEngine::Transform* JDJFEJGENGG; // 0xB0
	::MoleMole::Battle::Entity* DBMHCPCACEP; // 0xB8
	::UnityEngine::Transform* HHKBKKMFIIM; // 0xC0
	::Foundation::AssetPath GMFBODCNNDN; // 0xC8
	::System::Threading::CancellationToken HNGBKOCIDPE; // 0xD8
	::UnityEngine::Transform* NKMPLGOOHCM; // 0xE0
	::System::Collections::Generic::List_1<::JMIIBFBJLNF*>* AJIGBPLLLGK; // 0xE8
	::UnityEngine::Transform* LNNIAEHLKHO; // 0xF0
	::UnityEngine::Transform* OAADNKEPIHG; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScreenEffectType>* LCFEKKFPOJM; // 0x100
	::UnityEngine::Transform* HPIGANHNDEP; // 0x108
	::MoleMole::Battle::Entity* HDDFKLPANJK; // 0x110
	::FishingRodController* LDGCGGHBCEI; // 0x118
	::System::Collections::Generic::HashSet_1<::System::Int32>* MBJDJONIBED; // 0x120
	::UnityEngine::GameObject* JFGKMAKMOPJ; // 0x128
	::OGJNHDLJIBM* HLOEDLCGJHE; // 0x130
	::DLOHLLFLCOH* LCAIJGOIIGB; // 0x138
	::UnityEngine::Transform* PFLEOEHOKCB; // 0x140
	::UnityEngine::Animator* LDKHNNGDBGE; // 0x148
	::System::Collections::Generic::HashSet_1<::System::Int32>* FFLFFNBBLGF; // 0x150
	::MoleMole::Battle::Entity* DJLKGLPECNI; // 0x158
	::GHICACFMBNP* LKNOCPCJINI; // 0x160
	::FBMFHPMONGC_KBNBLHLOEFP HNOPBOFFGHP; // 0x168
	::System::Int32 CHJLKDAMJCF; // 0x16C
	::System::Int32 NJGIFJLJNMP; // 0x170
	::System::Int32 FINABOIPEDD; // 0x174
	::System::Int32 ALFCOKICEHD; // 0x178
	::System::Single KMNPGNMKMGD; // 0x17C
	::System::Boolean HGPHAPFPLPK; // 0x180
	::System::Boolean DCKIHJAAGNK; // 0x181
	::System::Boolean GNMEACGOAAI; // 0x182
	::System::Boolean NCPEPGPONJJ; // 0x183
	::System::Boolean CDLDFPJCCHJ; // 0x184
	::System::Boolean LHGOJAMGHHL; // 0x185
	::System::Boolean KLCOLNJEOCH; // 0x186
	::System::Byte _padding0[0x1];
	::System::Int32 OGBEGGAOMDL; // 0x188
	::System::Int32 DAHNJELNLJN; // 0x18C
	::System::Int32 OKOHLGBDHBA; // 0x190
	::System::Int32 NLBLOCECPJG; // 0x194
	::System::Single NALOGCLCJNA; // 0x198
	::UnityEngine::Vector3 BDDEFMKLLCL; // 0x19C
	::System::Int32 HCNCOBNLHFJ; // 0x1A8
	::System::Int32 FAFMDDFLOJE; // 0x1AC
	::FBMFHPMONGC_BCLGKKACIJO PAKDLDMFGCL; // 0x1B0
	::System::Single MLJNELPJNOE; // 0x1B4
	::FBMFHPMONGC_CKAPAAJBPAH MKNAOPBMAEH; // 0x1B8
	::System::Single IKGCEFPPLIP; // 0x1BC
	::System::Single NDNDCKKPODG; // 0x1C0
	::System::Int32 PHDIBOGHJJE; // 0x1C4
	::System::Single GNPHCBFDKBA; // 0x1C8
	::FBMFHPMONGC_AGOGIENCNHB JADKNOOJOHO; // 0x1CC
	::System::Single FEJFLEMEAIA; // 0x1D0
	::FBMFHPMONGC_OJAOIGOHPNB BKNGAOOCGHB; // 0x1D4
	::System::Int32 HPMAIBBGFMN; // 0x1D8
	::System::Int32 MPLHOIOEIJO; // 0x1DC
	::System::Boolean NCPJONIKGJJ; // 0x1E0
	::System::Boolean GGFLPLHCBND; // 0x1E1
	::System::Boolean EKBMKONIJIA; // 0x1E2
	::System::Boolean KFAJAIOIPEL; // 0x1E3
	::System::Int32 DAOELEJFLHH; // 0x1E4
	::FBMFHPMONGC_ECILEJICMHM AFNPHBOLEBN; // 0x1E8
	::System::Int32 EHHIJNMDHFO; // 0x208
	::System::Int32 NPJMGJHNKMJ; // 0x20C
	::UnityEngine::Vector3 LADODODEPIA; // 0x210
	::System::Int32 ILIJKBAHCPN; // 0x21C
	::UnityEngine::Vector3 MKKBLPHNPGI; // 0x220
	::System::Int32 OMNAJBKKPJD; // 0x22C
	::System::Int32 GFFLJEJPDJO; // 0x230
	::System::Int32 FOLEABBCKFB; // 0x234
	::System::Int32 HOMCFFALHEJ; // 0x238
	::System::UInt32 BCFDJBCNJHF; // 0x23C
	::System::Int32 AFOEPEOHCHF; // 0x240
	::System::Single JIHIAJMFHKL; // 0x244
	::System::Int32 MCBLMFJGEBG; // 0x248
	::System::Single GCNPNPCHNIA; // 0x24C
	::System::Int32 OAACINEGBIP; // 0x250
	::System::Single NHJFGFFHKHJ; // 0x254
	::System::Single ODDBJAJKLPF; // 0x258
	::System::Int32 ECLNHJGPDCE; // 0x25C
	::System::Single PFCKAEOCNEH; // 0x260
	::System::Int32 DBJIAKLBGJC; // 0x264
	::System::Int32 MDJMKCIEGKJ; // 0x268
	::System::Int32 IAOJBICCNBF; // 0x26C
	::System::Int32 GLNJBEMEPAK; // 0x270

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBMFHPMONGC__CCTOR_OFFSET))();
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_ONSTART_OFFSET))(this);
	}

	::System::Void LGOALPGGCML(::POOIBEFDFGP FNIOPKPHDEH, ::System::Single AGFILKMHDJG, ::System::Single HDJPBBPKFNN)
	{
		return ((::System::Void(*)(::PVOID, ::POOIBEFDFGP, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LGOALPGGCML_OFFSET))(this, FNIOPKPHDEH, AGFILKMHDJG, HDJPBBPKFNN);
	}

	::Cysharp::Threading::Tasks::UniTask MGMMNOKPDBC(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MGMMNOKPDBC_OFFSET))(this, IACKHFCLPJI);
	}

	::System::Void NFMCCDJKGNM(::System::Int32 CBIEJMBPAIC, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NFMCCDJKGNM_OFFSET))(this, CBIEJMBPAIC, EGEGIMGMJHN);
	}

	::System::Boolean NLJEIIMBODF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NLJEIIMBODF_OFFSET))(this);
	}

	::System::Void NDAKFBPPDOP(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NDAKFBPPDOP_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void IEICNHEBIGL(::PAMPOBIPLCE GEPABHJBIAH)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IEICNHEBIGL_OFFSET))(this, GEPABHJBIAH);
	}

	::Cysharp::Threading::Tasks::UniTask MAKEFOEIKDB(::System::Single FNIOPKPHDEH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MAKEFOEIKDB_OFFSET))(this, FNIOPKPHDEH);
	}

	::Cysharp::Threading::Tasks::UniTask CADJOBJPOBD(::System::Int32 NPAKMAGBOCH, ::System::Boolean NELCEOFGEFI, ::System::Threading::CancellationTokenSource* MPPGOFIIMEM, ::System::Boolean GDNECMBHKND, ::System::Boolean KNJOFCCMBDB, ::System::Boolean ANICFFFFLKK)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMFHPMONGC_CADJOBJPOBD_OFFSET))(this, NPAKMAGBOCH, NELCEOFGEFI, MPPGOFIIMEM, GDNECMBHKND, KNJOFCCMBDB, ANICFFFFLKK);
	}

	::System::Void BDLPBCEMCLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BDLPBCEMCLJ_OFFSET))(this);
	}

	::System::Void BIBKEHFCALF(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BIBKEHFCALF_OFFSET))(this, MCOHLHMKLIP);
	}

	::DLOHLLFLCOH* ABOKADFPJCO()
	{
		return ((::DLOHLLFLCOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_ABOKADFPJCO_OFFSET))(this);
	}

	::System::Void IJJHKEMLEEC(::MoleMole::Battle::Entity* PBPNOPMHKAI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IJJHKEMLEEC_OFFSET))(this, PBPNOPMHKAI);
	}

	::Cysharp::Threading::Tasks::UniTask ALDDLFBHAAK(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_ALDDLFBHAAK_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Void MJACPOEJDPL(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MJACPOEJDPL_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean MBGCBDBNPFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MBGCBDBNPFE_OFFSET))(this);
	}

	::JMIIBFBJLNF* EILDPPJDKGP()
	{
		return ((::JMIIBFBJLNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_EILDPPJDKGP_OFFSET))(this);
	}

	::System::Void AECGHMBIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_AECGHMBIFPL_OFFSET))(this);
	}

	::System::Void MJPAOECMAGO(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MJPAOECMAGO_OFFSET))(this, KMMGKJPAOMF);
	}

	::System::Void JNNJALCOHEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JNNJALCOHEH_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask OOGFIDFAAJC(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OOGFIDFAAJC_OFFSET))(this, IACKHFCLPJI);
	}

	::GPCLMNFMNBJ* NLMLNNKDFHH()
	{
		return ((::GPCLMNFMNBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NLMLNNKDFHH_OFFSET))(this);
	}

	::System::Void AJLGLNFJDMH(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_AJLGLNFJDMH_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean KCCNIAPAIJM(::HCOECCJJCIN* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::HCOECCJJCIN*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KCCNIAPAIJM_OFFSET))(this, DFMKILICPFB);
	}

	::Cysharp::Threading::Tasks::UniTask OJINPJJOEJB(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJINPJJOEJB_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Void AGKLHFHIKKM(::System::String* MCOHLHMKLIP, ::MoleMole::Config::ScreenEffectType BBMDGPCOFOF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + FBMFHPMONGC_AGKLHFHIKKM_OFFSET))(this, MCOHLHMKLIP, BBMDGPCOFOF);
	}

	::System::Void JNMKPINAFKJ(::System::Single KKAMDFNMMJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JNMKPINAFKJ_OFFSET))(this, KKAMDFNMMJH);
	}

	::System::Void LBNMEEPFPEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LBNMEEPFPEI_OFFSET))(this);
	}

	::System::Void AJLDBEGFMCJ(::UnityEngine::Transform* LNEEMAGIHLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_AJLDBEGFMCJ_OFFSET))(this, LNEEMAGIHLB);
	}

	::System::Void PFBMPNHFAIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PFBMPNHFAIO_OFFSET))(this);
	}

	::System::Void KFCAOPDBHKM(::UnityEngine::Transform* GIAEPMKCBIB, ::UnityEngine::Transform* DOBFFIICAII, ::System::Single CLDNOBEOBKO, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KFCAOPDBHKM_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII, CLDNOBEOBKO, PMNLNNGEIFM);
	}

	::UnityEngine::Vector3 IIFNFMAFGJP(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single FNIOPKPHDEH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IIFNFMAFGJP_OFFSET))(this, IACKHFCLPJI, FNIOPKPHDEH);
	}

	::System::Void IDFLEJNBEKG(::System::Single OOPMKIIBAAE, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IDFLEJNBEKG_OFFSET))(this, OOPMKIIBAAE, IAKPGBCAAKM);
	}

	::System::Void JPAPAMAKEMK(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JPAPAMAKEMK_OFFSET))(this, EIFONLCJOPG);
	}

	::Cysharp::Threading::Tasks::UniTask IODKMGDJIEG(::System::Single EEODALLOKMF)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IODKMGDJIEG_OFFSET))(this, EEODALLOKMF);
	}

	::System::Boolean DEFJPEAFBKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_DEFJPEAFBKG_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask FHPCMALAHGM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FBMFHPMONGC_FHPCMALAHGM_OFFSET))(this, OMMEALOOOOD);
	}

	::UnityEngine::AnimationCurve* HMKHIEIHOPB(::FBMFHPMONGC_AGOGIENCNHB GEJCKFFFKCL)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::FBMFHPMONGC_AGOGIENCNHB))((::PBYTE)hIl2Cpp + FBMFHPMONGC_HMKHIEIHOPB_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void KAMEBBMCGFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KAMEBBMCGFL_OFFSET))(this);
	}

	::System::Void JMJNKPCDJCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JMJNKPCDJCH_OFFSET))(this);
	}

	::System::Void MAEAAHHCIGB(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MAEAAHHCIGB_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void NAOCPFCAPJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NAOCPFCAPJL_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask PBAMMNGOLAC(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PBAMMNGOLAC_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Void GFBFHJBEDBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GFBFHJBEDBD_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData ONKJAPEOILH(::MoleMole::FishCameraConfig DFMKILICPFB)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::MoleMole::FishCameraConfig))((::PBYTE)hIl2Cpp + FBMFHPMONGC_ONKJAPEOILH_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::FishPosConfig* PGLMOLCNPBK()
	{
		return ((::MoleMole::FishPosConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PGLMOLCNPBK_OFFSET))(this);
	}

	::System::Void IJLCLHMBBJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IJLCLHMBBJC_OFFSET))(this);
	}

	::System::Boolean PALNBLIIIMK(::HCOECCJJCIN* DFMKILICPFB, ::POOIBEFDFGP FNIOPKPHDEH, ::System::Single AGFILKMHDJG, ::System::Single HDJPBBPKFNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::HCOECCJJCIN*, ::POOIBEFDFGP, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PALNBLIIIMK_OFFSET))(this, DFMKILICPFB, FNIOPKPHDEH, AGFILKMHDJG, HDJPBBPKFNN);
	}

	::System::Void CFDHCEPMABM(::System::Int32 CBIEJMBPAIC, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMFHPMONGC_CFDHCEPMABM_OFFSET))(this, CBIEJMBPAIC, EGEGIMGMJHN);
	}

	::System::Single FLJEMFGDOFB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_FLJEMFGDOFB_OFFSET))(this);
	}

	::System::Void COFHOCIEHPD(::PAMPOBIPLCE GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_COFHOCIEHPD_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::Cysharp::Threading::Tasks::UniTask KAHAKKMLIPL()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KAHAKKMLIPL_OFFSET))(this);
	}

	::System::Boolean LEOLGMCNGKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LEOLGMCNGKC_OFFSET))(this);
	}

	::System::Void GBIOOBDNCGH(::System::Single OLHBMKFCBNM, ::System::Single GFKIDBPICBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GBIOOBDNCGH_OFFSET))(this, OLHBMKFCBNM, GFKIDBPICBL);
	}

	::Cysharp::Threading::Tasks::UniTask AKLNFPHCNKD(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_AKLNFPHCNKD_OFFSET))(this, NPAKMAGBOCH);
	}

	::UnityEngine::GameObject* DNMPBJGALNO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_DNMPBJGALNO_OFFSET))(this);
	}

	::System::Void ICBOPAJAOJP(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN, ::System::Single ECMOEENIHME, ::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMFHPMONGC_ICBOPAJAOJP_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN, ECMOEENIHME, BGBCNLEBGEL, HAFDIMGJBHC);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_CNIKAMOAANF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask MIKGPBDACIE(::System::Threading::CancellationTokenSource* MPPGOFIIMEM, ::System::Boolean GDNECMBHKND)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationTokenSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MIKGPBDACIE_OFFSET))(this, MPPGOFIIMEM, GDNECMBHKND);
	}

	::Cysharp::Threading::Tasks::UniTask IALKJGKBKIC(::FBMFHPMONGC_AGOGIENCNHB GEJCKFFFKCL, ::System::Int32 LHJOFNLPDFF)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::FBMFHPMONGC_AGOGIENCNHB, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IALKJGKBKIC_OFFSET))(this, GEJCKFFFKCL, LHJOFNLPDFF);
	}

	::System::Collections::Generic::List_1<::GPCLMNFMNBJ*>* PJGBCOFPOCN()
	{
		return ((::System::Collections::Generic::List_1<::GPCLMNFMNBJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PJGBCOFPOCN_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask GIKCPCAODDE(::FBMFHPMONGC_CKAPAAJBPAH HOPPKLPOBED, ::System::Boolean GDNECMBHKND, ::System::Boolean NPPMJEIPMFC, ::System::Single AMFOADOGKKK, ::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::FBMFHPMONGC_CKAPAAJBPAH, ::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GIKCPCAODDE_OFFSET))(this, HOPPKLPOBED, GDNECMBHKND, NPPMJEIPMFC, AMFOADOGKKK, AKAGDEFAGJA, KPLGFGLGLPD);
	}

	::Cysharp::Threading::Tasks::UniTask ONKBBLKPJGM(::System::Int32 NPAKMAGBOCH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_ONKBBLKPJGM_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Single PLCPLDFHFJP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PLCPLDFHFJP_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask BFGKLGGBCDB(::System::Boolean NPPMJEIPMFC)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BFGKLGGBCDB_OFFSET))(this, NPPMJEIPMFC);
	}

	::Cysharp::Threading::Tasks::UniTask MFCMNNGMOMG()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MFCMNNGMOMG_OFFSET))(this);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JNBGBKMJGAG_OFFSET))(this);
	}

	::MoleMole::FishMoveParam* JIDFFPHMOBJ()
	{
		return ((::MoleMole::FishMoveParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JIDFFPHMOBJ_OFFSET))(this);
	}

	::UnityEngine::Vector3 OEBEOABMOKO(::FBMFHPMONGC_KBNBLHLOEFP FEKPJFKOKFD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FBMFHPMONGC_KBNBLHLOEFP))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OEBEOABMOKO_OFFSET))(this, FEKPJFKOKFD);
	}

	::System::Void KDGFCFKNIFD(::System::Int32 CBIEJMBPAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KDGFCFKNIFD_OFFSET))(this, CBIEJMBPAIC);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> KCOEKMKPDFJ(::MoleMole::FishCameraConfig KIDMJNEFBPH, ::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL, ::System::Single FBNIOMKFDAM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::MoleMole::FishCameraConfig, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KCOEKMKPDFJ_OFFSET))(this, KIDMJNEFBPH, BGBCNLEBGEL, FBNIOMKFDAM);
	}

	::Cysharp::Threading::Tasks::UniTask CCJHFKKKEKG(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FBMFHPMONGC_CCJHFKKKEKG_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void FOKPJONOLMD(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_FOKPJONOLMD_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void BPPBKGHBKIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BPPBKGHBKIJ_OFFSET))(this);
	}

	::System::Void LOGPPGHBGHP(::MoleMole::Battle::Entity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LOGPPGHBGHP_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void BDGEEDAELDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BDGEEDAELDD_OFFSET))(this);
	}

	::System::Void MIAPDNHKFAP(::System::Int32 NPAKMAGBOCH, ::System::Boolean NELCEOFGEFI, ::System::Threading::CancellationTokenSource* MPPGOFIIMEM, ::System::Action_1<::System::Boolean>* FKHOJLMBILE, ::System::Boolean LGHOKHJEIMO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MIAPDNHKFAP_OFFSET))(this, NPAKMAGBOCH, NELCEOFGEFI, MPPGOFIIMEM, FKHOJLMBILE, LGHOKHJEIMO);
	}

	::Cysharp::Threading::Tasks::UniTask JIMECFDBLNL()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JIMECFDBLNL_OFFSET))(this);
	}

	::System::Void AEEHFKDFMBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_AEEHFKDFMBJ_OFFSET))(this);
	}

	::System::Void BEPPCHEDPGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BEPPCHEDPGK_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> BBGBBBAOFLA()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BBGBBBAOFLA_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask KBCHGIMEBFP()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KBCHGIMEBFP_OFFSET))(this);
	}

	::System::Void MNFMOAMOLCF(::System::Int32 NPAKMAGBOCH, ::System::UInt32 DEFAKCIAKLG, ::System::Boolean NELCEOFGEFI, ::System::Threading::CancellationTokenSource* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MNFMOAMOLCF_OFFSET))(this, NPAKMAGBOCH, DEFAKCIAKLG, NELCEOFGEFI, KHGFAKJKDGG);
	}

	::UnityEngine::Vector3 KFMMPGFAAHC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KFMMPGFAAHC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask BHMJLDNOAAC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BHMJLDNOAAC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask PNEEDGEPAFG(::UnityEngine::Vector3 KLILFBFAELK, ::UnityEngine::Vector3 DAAEHEHLLLD, ::MoleMole::FishMove3DCurve* FAJHPKBELMF, ::System::Single MDPPNMIPDMP, ::System::Boolean PNPFABLHFLB, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::FishMove3DCurve*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PNEEDGEPAFG_OFFSET))(this, KLILFBFAELK, DAAEHEHLLLD, FAJHPKBELMF, MDPPNMIPDMP, PNPFABLHFLB, OMMEALOOOOD);
	}

	::System::Void HBBCAIAHPOD(::System::Int32 CBIEJMBPAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMFHPMONGC_HBBCAIAHPOD_OFFSET))(this, CBIEJMBPAIC);
	}

	::Cysharp::Threading::Tasks::UniTask HNELJPCMDMJ(::System::Int32 NPAKMAGBOCH, ::System::Boolean NELCEOFGEFI, ::System::Threading::CancellationTokenSource* MPPGOFIIMEM, ::System::Boolean GDNECMBHKND, ::System::Boolean KNJOFCCMBDB, ::System::Boolean ANICFFFFLKK)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMFHPMONGC_HNELJPCMDMJ_OFFSET))(this, NPAKMAGBOCH, NELCEOFGEFI, MPPGOFIIMEM, GDNECMBHKND, KNJOFCCMBDB, ANICFFFFLKK);
	}

	::PipelineCamera::WorldBasicCameraData APNGEJJHOCO(::PipelineCamera::WorldBasicCameraData KDEHMPGOCEP, ::PipelineCamera::WorldBasicCameraData PADJNMGMGHO, ::System::Single IMLLDOHDCNC)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_APNGEJJHOCO_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, IMLLDOHDCNC);
	}

	::Cysharp::Threading::Tasks::UniTask BMAMBJENIJO(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single ILFAANADIHI, ::System::Single MDPPNMIPDMP)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BMAMBJENIJO_OFFSET))(this, FAJHPKBELMF, ILFAANADIHI, MDPPNMIPDMP);
	}
};
