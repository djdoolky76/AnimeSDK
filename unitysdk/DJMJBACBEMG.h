#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJMJBACBEMG_EMHCMGMKHFI.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/ViewObject/Structures/FMemberAliveStateCheckAction.h"
#include "unitysdk/Foundation/ViewObject/Structures/FMonsterMemberLeftCheckAction.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/GDIACAHPLBB_MNPPEMJJLGL.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/DJMJBACBEMG_EBDEMNDNCFA.h"
#include "unitysdk/DJMJBACBEMG_PFPDAGBNFEB.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/ViewObject/CombineTriggerListenParam.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class FBGHHAHMAII;
class IFLPGOKHDJI;
class LCDNBAKJFKF;
namespace Foundation::ViewObject::Structures { class FEntityHPChangeAction; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class CNKGGMABMGE_2;

#define DJMJBACBEMG_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x12418930)
#define DJMJBACBEMG_AKFMIIECEGP_OFFSET UNITYSDK_OFFSET(0x1241C7B0)
#define DJMJBACBEMG_AKJPEAECOPF_OFFSET UNITYSDK_OFFSET(0x1241C3D0)
#define DJMJBACBEMG_AKKBPNPOICD_OFFSET UNITYSDK_OFFSET(0x1241C3C0)
#define DJMJBACBEMG_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x1241D0A0)
#define DJMJBACBEMG_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1241B9F0)
#define DJMJBACBEMG_APEHPDJPCPF_OFFSET UNITYSDK_OFFSET(0x1241CBA0)
#define DJMJBACBEMG_BFPBFGJFJCD_1_OFFSET UNITYSDK_OFFSET(0x1241B2F0)
#define DJMJBACBEMG_BFPBFGJFJCD_OFFSET UNITYSDK_OFFSET(0x1241B190)
#define DJMJBACBEMG_CDAOCENFKKB_OFFSET UNITYSDK_OFFSET(0x1241C400)
#define DJMJBACBEMG_CLNEHNADNFO_OFFSET UNITYSDK_OFFSET(0x12418B20)
#define DJMJBACBEMG_DAFGJOIJNGN_OFFSET UNITYSDK_OFFSET(0x12417FE0)
#define DJMJBACBEMG_DEADJIOEONL_OFFSET UNITYSDK_OFFSET(0x1241C3B0)
#define DJMJBACBEMG_DKAMODLKBPK_OFFSET UNITYSDK_OFFSET(0x124182A0)
#define DJMJBACBEMG_DMEGIBKHBIJ_OFFSET UNITYSDK_OFFSET(0x1241CE60)
#define DJMJBACBEMG_ECFFHJOCCPK_OFFSET UNITYSDK_OFFSET(0x12419C20)
#define DJMJBACBEMG_ECMHOEFGKNM_OFFSET UNITYSDK_OFFSET(0x1241CCB0)
#define DJMJBACBEMG_EDKHDCJBCBN_OFFSET UNITYSDK_OFFSET(0x1241B430)
#define DJMJBACBEMG_EHAFMMNKOIP_1_OFFSET UNITYSDK_OFFSET(0x1241CCC0)
#define DJMJBACBEMG_EHAFMMNKOIP_OFFSET UNITYSDK_OFFSET(0x1241AC10)
#define DJMJBACBEMG_FAPMCLAPOJA_OFFSET UNITYSDK_OFFSET(0x1241C7C0)
#define DJMJBACBEMG_FCGGGDPJIMD_OFFSET UNITYSDK_OFFSET(0x1241BA00)
#define DJMJBACBEMG_FPPOJNNCKGD_OFFSET UNITYSDK_OFFSET(0x1241BF50)
#define DJMJBACBEMG_GFAMAGEKEEK_OFFSET UNITYSDK_OFFSET(0x1241C3F0)
#define DJMJBACBEMG_GHPELOAPJKK_OFFSET UNITYSDK_OFFSET(0x12415840)
#define DJMJBACBEMG_GKBPJKDAHJP_OFFSET UNITYSDK_OFFSET(0x12419BB0)
#define DJMJBACBEMG_HCJIGGDOBPE_OFFSET UNITYSDK_OFFSET(0x12418F90)
#define DJMJBACBEMG_HIODPJBNAPI_OFFSET UNITYSDK_OFFSET(0x12417A00)
#define DJMJBACBEMG_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x1241AD50)
#define DJMJBACBEMG_HKGFBPHNCAH_OFFSET UNITYSDK_OFFSET(0x12418BA0)
#define DJMJBACBEMG_HLOPDNGBAEE_OFFSET UNITYSDK_OFFSET(0x1241B850)
#define DJMJBACBEMG_HMJJGLAMJKO_OFFSET UNITYSDK_OFFSET(0x1241D010)
#define DJMJBACBEMG_HNPMGOHAHFO_OFFSET UNITYSDK_OFFSET(0x12415760)
#define DJMJBACBEMG_HPIEICHJLJN_OFFSET UNITYSDK_OFFSET(0x1241D030)
#define DJMJBACBEMG_IAJIHBHIGDP_OFFSET UNITYSDK_OFFSET(0x12415850)
#define DJMJBACBEMG_IIPKFGJOAEH_OFFSET UNITYSDK_OFFSET(0x12419160)
#define DJMJBACBEMG_IJKOLEFKENF_OFFSET UNITYSDK_OFFSET(0x1241B5B0)
#define DJMJBACBEMG_IKFHEEKHJKL_OFFSET UNITYSDK_OFFSET(0x1241D040)
#define DJMJBACBEMG_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1241AD60)
#define DJMJBACBEMG_JBIIMMPAMBM_OFFSET UNITYSDK_OFFSET(0x1241B9D0)
#define DJMJBACBEMG_JLEACDCPMGL_OFFSET UNITYSDK_OFFSET(0x1241AD70)
#define DJMJBACBEMG_JPGBEKNKCCF_OFFSET UNITYSDK_OFFSET(0x1241B690)
#define DJMJBACBEMG_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x12418920)
#define DJMJBACBEMG_KECGBPNOFNJ_OFFSET UNITYSDK_OFFSET(0x12419EB0)
#define DJMJBACBEMG_KIBKKHBMAOH_OFFSET UNITYSDK_OFFSET(0x1241D2A0)
#define DJMJBACBEMG_KIDEBHNLGKE_OFFSET UNITYSDK_OFFSET(0x1241A0B0)
#define DJMJBACBEMG_KINNMAPAHPO_OFFSET UNITYSDK_OFFSET(0x12417300)
#define DJMJBACBEMG_LFEKAOINOED_OFFSET UNITYSDK_OFFSET(0x12419AB0)
#define DJMJBACBEMG_LHELOABCOJJ_OFFSET UNITYSDK_OFFSET(0x12417420)
#define DJMJBACBEMG_LHNHEMEOAAK_OFFSET UNITYSDK_OFFSET(0x124176A0)
#define DJMJBACBEMG_LHNLLMKNLGE_OFFSET UNITYSDK_OFFSET(0x1241D020)
#define DJMJBACBEMG_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x12419EA0)
#define DJMJBACBEMG_MGCDPMOMBAK_OFFSET UNITYSDK_OFFSET(0x124192D0)
#define DJMJBACBEMG_MIELMJIDGNA_OFFSET UNITYSDK_OFFSET(0x1241A1D0)
#define DJMJBACBEMG_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x1241C3A0)
#define DJMJBACBEMG_NANKPLFEBFJ_OFFSET UNITYSDK_OFFSET(0x12416FB0)
#define DJMJBACBEMG_NFIEDOAIHHD_OFFSET UNITYSDK_OFFSET(0x12416DC0)
#define DJMJBACBEMG_NGJMLFLLLGB_OFFSET UNITYSDK_OFFSET(0x12418D30)
#define DJMJBACBEMG_NJGLJGGKGLH_OFFSET UNITYSDK_OFFSET(0x12418050)
#define DJMJBACBEMG_NJJPBDDNFJO_OFFSET UNITYSDK_OFFSET(0x1241D290)
#define DJMJBACBEMG_NJKNIKFGDIG_OFFSET UNITYSDK_OFFSET(0x12418900)
#define DJMJBACBEMG_OAGIDGLABED_OFFSET UNITYSDK_OFFSET(0x1241AD80)
#define DJMJBACBEMG_OHKOHPHMAON_OFFSET UNITYSDK_OFFSET(0x1241CB90)
#define DJMJBACBEMG_OIIBNHMPLOF_OFFSET UNITYSDK_OFFSET(0x12418910)
#define DJMJBACBEMG_ONATTACH_OFFSET UNITYSDK_OFFSET(0x12415AB0)
#define DJMJBACBEMG_ONDETACH_OFFSET UNITYSDK_OFFSET(0x12415C10)
#define DJMJBACBEMG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x124173B0)
#define DJMJBACBEMG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12415D10)
#define DJMJBACBEMG_ONREADY_OFFSET UNITYSDK_OFFSET(0x12417920)
#define DJMJBACBEMG_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12417BE0)
#define DJMJBACBEMG_PBMGJEGHHHL_OFFSET UNITYSDK_OFFSET(0x1241D240)
#define DJMJBACBEMG_PFFODHJLBDF_OFFSET UNITYSDK_OFFSET(0x12418EF0)
#define DJMJBACBEMG_PFJNCGCDJOP_OFFSET UNITYSDK_OFFSET(0x124198B0)
#define DJMJBACBEMG_PIGOBKNHPDO_OFFSET UNITYSDK_OFFSET(0x124184D0)
#define DJMJBACBEMG_PJBBOKNDPAA_OFFSET UNITYSDK_OFFSET(0x12418940)
#define DJMJBACBEMG__CTOR_OFFSET UNITYSDK_OFFSET(0x12418650)

inline static constexpr unsigned int DJMJBACBEMG_TypeDefinitionIndex = 52956;

class DJMJBACBEMG
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* EGHFGHBMLAC; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* BCADBMFGIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GFDMIEBCJND; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* HICOILFMCOD; // 0x40
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction>* GLMPNBDMHNE; // 0x48
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FEntityHPChangeAction*>* LBLIFIPFLOJ; // 0x50
	::System::Collections::Generic::HashSet_1<::System::UInt32>* IEFBMOCHHJD; // 0x58
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction>* GCMFBDGDKCH; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* CPOFENMGMKM; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Unreal::FGameplayTagContainer>* FEFKLGJBNLK; // 0x70
	::CNKGGMABMGE_2<::System::UInt32, ::System::Int32>* BMPEPBEOOBA; // 0x78
	::System::Int32 _KFIINLIKEBO_k__BackingField; // 0x80
	::System::Int32 GDIDPEIICMF; // 0x84
	::System::Boolean _PLNDLLMMLJH_k__BackingField; // 0x88
	::System::Boolean _MPEHLBBGNBH_k__BackingField; // 0x89
	::System::Byte _padding0[0x2];
	::System::Int32 _LHNEEEMDMBE_k__BackingField; // 0x8C
	::System::Int32 _GFOEFMHLMIL_k__BackingField; // 0x90
	::System::UInt32 _IHPHJGGFABP_k__BackingField; // 0x94
	::DJMJBACBEMG_EMHCMGMKHFI _GLCHONGONII_k__BackingField; // 0x98
	::Foundation::ViewObject::SuiteInfo _CNJNIPHIEEO_k__BackingField; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG__CTOR_OFFSET))(this);
	}

	::System::Boolean HNPMGOHAHFO(::System::Int32 KKKPHDNOCGN, ::System::UInt32 IMGBAKKLEMJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_HNPMGOHAHFO_OFFSET))(this, KKKPHDNOCGN, IMGBAKKLEMJ);
	}

	::System::Int32 GHPELOAPJKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_GHPELOAPJKK_OFFSET))(this);
	}

	::System::Boolean IAJIHBHIGDP(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DJMJBACBEMG_IAJIHBHIGDP_OFFSET))(this, HPADNAEINPK);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ONRECYCLE_OFFSET))(this);
	}

	::System::Void NJKNIKFGDIG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_NJKNIKFGDIG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OIIBNHMPLOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_OIIBNHMPLOF_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void PJBBOKNDPAA(::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction))((::PBYTE)hIl2Cpp + DJMJBACBEMG_PJBBOKNDPAA_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void LHNHEMEOAAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_LHNHEMEOAAK_OFFSET))(this);
	}

	::System::Void NANKPLFEBFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_NANKPLFEBFJ_OFFSET))(this);
	}

	::System::Void LHELOABCOJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_LHELOABCOJJ_OFFSET))(this);
	}

	::System::Void PFFODHJLBDF(::MoleMole::EntityHandle HPADNAEINPK, ::GDIACAHPLBB_MNPPEMJJLGL BPINANLEDPD, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::GDIACAHPLBB_MNPPEMJJLGL, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + DJMJBACBEMG_PFFODHJLBDF_OFFSET))(this, HPADNAEINPK, BPINANLEDPD, AELLPLBJELA);
	}

	::System::Boolean CLNEHNADNFO(::System::Collections::Generic::List_1<::System::Int32>* OJGKBOPKDNJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_CLNEHNADNFO_OFFSET))(this, OJGKBOPKDNJ);
	}

	::System::Void IIPKFGJOAEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_IIPKFGJOAEH_OFFSET))(this);
	}

	::System::Boolean MGCDPMOMBAK(::System::UInt32 LJMPPBEMEPP, ::System::Int32 COMDNFILAIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_MGCDPMOMBAK_OFFSET))(this, LJMPPBEMEPP, COMDNFILAIC);
	}

	::System::Void PFJNCGCDJOP(::System::Boolean GPCHIMBGNJO, ::System::UInt32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_PFJNCGCDJOP_OFFSET))(this, GPCHIMBGNJO, LJMPPBEMEPP);
	}

	::System::Void LFEKAOINOED(::System::Int32 KBFLLDHOKLH, ::System::Collections::Generic::List_1<::System::Int32>* OJGKBOPKDNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_LFEKAOINOED_OFFSET))(this, KBFLLDHOKLH, OJGKBOPKDNJ);
	}

	::System::Void HKGFBPHNCAH(::FBGHHAHMAII* MJBLBNLGNMK, ::DJMJBACBEMG_PFPDAGBNFEB& JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::FBGHHAHMAII*, ::DJMJBACBEMG_PFPDAGBNFEB&))((::PBYTE)hIl2Cpp + DJMJBACBEMG_HKGFBPHNCAH_OFFSET))(this, MJBLBNLGNMK, JMDHBJMNBCP);
	}

	::System::Void GKBPJKDAHJP(::System::Int32 LILADNOHHJJ, ::System::Int32 JGGKPMHCFHL, ::System::Int32 JHIHKDHKCLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_GKBPJKDAHJP_OFFSET))(this, LILADNOHHJJ, JGGKPMHCFHL, JHIHKDHKCLK);
	}

	::System::Void ECFFHJOCCPK(::System::UInt32 LJMPPBEMEPP, ::System::Int32 COMDNFILAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ECFFHJOCCPK_OFFSET))(this, LJMPPBEMEPP, COMDNFILAIC);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void PIGOBKNHPDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_PIGOBKNHPDO_OFFSET))(this);
	}

	::System::Void KECGBPNOFNJ(::System::UInt32 LJMPPBEMEPP, ::Foundation::ViewObject::ViewObjectHandle EOJOGGEFMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + DJMJBACBEMG_KECGBPNOFNJ_OFFSET))(this, LJMPPBEMEPP, EOJOGGEFMFC);
	}

	::System::Void KIDEBHNLGKE(::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction GJBHEJGENMI, ::System::Boolean DGEOOJOCNMC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction, ::System::Boolean))((::PBYTE)hIl2Cpp + DJMJBACBEMG_KIDEBHNLGKE_OFFSET))(this, GJBHEJGENMI, DGEOOJOCNMC);
	}

	::System::Boolean MIELMJIDGNA(::Foundation::ViewObject::CombineTriggerListenParam MKHINEPJGPP, ::Foundation::ViewObject::ViewObjectHandle HODAIDNDKHD, ::Foundation::ViewObject::SuiteInfo DOJFEJPBANP)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + DJMJBACBEMG_MIELMJIDGNA_OFFSET))(this, MKHINEPJGPP, HODAIDNDKHD, DOJFEJPBANP);
	}

	::System::Void EHAFMMNKOIP(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_EHAFMMNKOIP_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void NGJMLFLLLGB(::FBGHHAHMAII* MJBLBNLGNMK, ::DJMJBACBEMG_PFPDAGBNFEB& JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::FBGHHAHMAII*, ::DJMJBACBEMG_PFPDAGBNFEB&))((::PBYTE)hIl2Cpp + DJMJBACBEMG_NGJMLFLLLGB_OFFSET))(this, MJBLBNLGNMK, JMDHBJMNBCP);
	}

	::System::UInt32 HJEFCNNHHEO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Int32 JLEACDCPMGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_JLEACDCPMGL_OFFSET))(this);
	}

	::System::Int32 OAGIDGLABED(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + DJMJBACBEMG_OAGIDGLABED_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void HCJIGGDOBPE(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DJMJBACBEMG_HCJIGGDOBPE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void BFPBFGJFJCD(::System::String* JNPDFEGBIOL, ::System::Boolean& BPBCHCPGPHM, ::System::Boolean& AGLLHNKKCAM, ::Foundation::ViewObject::SuiteInfo& DOJFEJPBANP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean&, ::Foundation::ViewObject::SuiteInfo&))((::PBYTE)hIl2Cpp + DJMJBACBEMG_BFPBFGJFJCD_OFFSET))(this, JNPDFEGBIOL, BPBCHCPGPHM, AGLLHNKKCAM, DOJFEJPBANP);
	}

	::System::Void EDKHDCJBCBN(::IFLPGOKHDJI* MHPNGBGGMMN)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_EDKHDCJBCBN_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Void IJKOLEFKENF(::Foundation::ViewObject::SuiteInfo DOJFEJPBANP, ::System::Collections::Generic::HashSet_1<::System::Int32>* KLFMNJLANEK)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_IJKOLEFKENF_OFFSET))(this, DOJFEJPBANP, KLFMNJLANEK);
	}

	::System::Boolean JPGBEKNKCCF(::Foundation::ViewObject::Structures::FEntityHPChangeAction* GJBHEJGENMI)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Structures::FEntityHPChangeAction*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_JPGBEKNKCCF_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void HLOPDNGBAEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_HLOPDNGBAEE_OFFSET))(this);
	}

	::System::Void JBIIMMPAMBM(::DJMJBACBEMG_EMHCMGMKHFI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DJMJBACBEMG_EMHCMGMKHFI))((::PBYTE)hIl2Cpp + DJMJBACBEMG_JBIIMMPAMBM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void FCGGGDPJIMD(::System::UInt32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_FCGGGDPJIMD_OFFSET))(this, LJMPPBEMEPP);
	}

	::System::Boolean FPPOJNNCKGD(::Foundation::Unreal::FGameplayTag AELLPLBJELA, ::System::Collections::Generic::List_1<::System::Int32>* OKDGIEIKKKH)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_FPPOJNNCKGD_OFFSET))(this, AELLPLBJELA, OKDGIEIKKKH);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_MLMLEKKJJID_OFFSET))(this);
	}

	::System::Void DEADJIOEONL(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_DEADJIOEONL_OFFSET))(this, EGEGIMGMJHN);
	}

	::Cysharp::Threading::Tasks::UniTask KINNMAPAHPO(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* PMFNJKIAOEE)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_KINNMAPAHPO_OFFSET))(this, PMFNJKIAOEE);
	}

	::System::Int32 AKKBPNPOICD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_AKKBPNPOICD_OFFSET))(this);
	}

	static ::System::Void BFPBFGJFJCD_1(::DJMJBACBEMG_EBDEMNDNCFA JJJGOFOKAKE, ::System::Boolean& BPBCHCPGPHM, ::System::Boolean& AGLLHNKKCAM, ::Foundation::ViewObject::SuiteInfo& DOJFEJPBANP)
	{
		return ((::System::Void(*)(::DJMJBACBEMG_EBDEMNDNCFA, ::System::Boolean&, ::System::Boolean&, ::Foundation::ViewObject::SuiteInfo&))((::PBYTE)hIl2Cpp + DJMJBACBEMG_BFPBFGJFJCD_1_OFFSET))(JJJGOFOKAKE, BPBCHCPGPHM, AGLLHNKKCAM, DOJFEJPBANP);
	}

	::DJMJBACBEMG_EMHCMGMKHFI AKJPEAECOPF()
	{
		return ((::DJMJBACBEMG_EMHCMGMKHFI(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_AKJPEAECOPF_OFFSET))(this);
	}

	::System::Void GFAMAGEKEEK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJMJBACBEMG_GFAMAGEKEEK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DKAMODLKBPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_DKAMODLKBPK_OFFSET))(this);
	}

	::System::Void HIODPJBNAPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_HIODPJBNAPI_OFFSET))(this);
	}

	::System::Void CDAOCENFKKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_CDAOCENFKKB_OFFSET))(this);
	}

	::System::Void DAFGJOIJNGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_DAFGJOIJNGN_OFFSET))(this);
	}

	::System::Void AKFMIIECEGP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_AKFMIIECEGP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FAPMCLAPOJA(::Foundation::ViewObject::SuiteInfo DOJFEJPBANP)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + DJMJBACBEMG_FAPMCLAPOJA_OFFSET))(this, DOJFEJPBANP);
	}

	::System::Void OHKOHPHMAON(::Foundation::ViewObject::SuiteInfo EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + DJMJBACBEMG_OHKOHPHMAON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void APEHPDJPCPF(::System::Int32 HPFIJJOGGEC, ::System::Boolean HFNPCHEOOPJ, ::System::Collections::Generic::List_1<::System::Int32>* OJGKBOPKDNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_APEHPDJPCPF_OFFSET))(this, HPFIJJOGGEC, HFNPCHEOOPJ, OJGKBOPKDNJ);
	}

	::System::Boolean ECMHOEFGKNM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ECMHOEFGKNM_OFFSET))(this);
	}

	::System::Void EHAFMMNKOIP_1(::System::String* HIAIKHDFCLN, ::Foundation::ViewObject::SuiteInfo DOJFEJPBANP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + DJMJBACBEMG_EHAFMMNKOIP_1_OFFSET))(this, HIAIKHDFCLN, DOJFEJPBANP);
	}

	::System::Void DMEGIBKHBIJ(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_DMEGIBKHBIJ_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void HMJJGLAMJKO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_HMJJGLAMJKO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LHNLLMKNLGE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJMJBACBEMG_LHNLLMKNLGE_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::ViewObject::SuiteInfo HPIEICHJLJN()
	{
		return ((::Foundation::ViewObject::SuiteInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_HPIEICHJLJN_OFFSET))(this);
	}

	::System::Void NJGLJGGKGLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_NJGLJGGKGLH_OFFSET))(this);
	}

	::System::Void IKFHEEKHJKL(::System::Int32 BBOLKIABJHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_IKFHEEKHJKL_OFFSET))(this, BBOLKIABJHA);
	}

	::System::Void AMEGHCHMIOD(::LCDNBAKJFKF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::LCDNBAKJFKF*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_AMEGHCHMIOD_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void PBMGJEGHHHL(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJMJBACBEMG_PBMGJEGHHHL_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Int32 NJJPBDDNFJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_NJJPBDDNFJO_OFFSET))(this);
	}

	::System::Void NFIEDOAIHHD(::System::Collections::Generic::HashSet_1<::System::Int32>* KLFMNJLANEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_NFIEDOAIHHD_OFFSET))(this, KLFMNJLANEK);
	}

	::System::Void KIBKKHBMAOH(::IFLPGOKHDJI* MHPNGBGGMMN)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_KIBKKHBMAOH_OFFSET))(this, MHPNGBGGMMN);
	}
};
