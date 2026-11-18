#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_BehaviorSerializeRequestHandle.h"
#include "unitysdk/EIMHGJELHGN_BJDIBOEMINB.h"
#include "unitysdk/FEMCIOOJGIM.h"
#include "unitysdk/KCIHKKOICHL_BHGAOMIOGJD.h"
#include "unitysdk/MDOCBPOKDJB.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/AIBattleState.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/EIMHGJELHGN_BGOICKPIHPM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class DBNMHAPONJK;
class LDDHJLCEFOJ;
class MLKPGAKLPMJ;
namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class BehaviorTree; }
namespace BehaviorDesigner::Runtime { class Behavior_BehaviorHandler; }
namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace MoleMole::Battle { class CharacterAIWatcher; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define EIMHGJELHGN_AAPEHEKOBMD_OFFSET UNITYSDK_OFFSET(0x16BEE540)
#define EIMHGJELHGN_ABANNHGJDHO_OFFSET UNITYSDK_OFFSET(0x16BEE410)
#define EIMHGJELHGN_ABCFKFDNHCH_OFFSET UNITYSDK_OFFSET(0x16BEDD40)
#define EIMHGJELHGN_ABKGOFKCNJF_OFFSET UNITYSDK_OFFSET(0x16BEE550)
#define EIMHGJELHGN_ACAAPELMMBK_OFFSET UNITYSDK_OFFSET(0x16BED980)
#define EIMHGJELHGN_AJCKIBFGBNK_OFFSET UNITYSDK_OFFSET(0x16BED600)
#define EIMHGJELHGN_AKGLLHMFPDL_OFFSET UNITYSDK_OFFSET(0x16BEE1B0)
#define EIMHGJELHGN_AKKHGLILFDH_OFFSET UNITYSDK_OFFSET(0x16BEC330)
#define EIMHGJELHGN_BCDFDELFFAH_OFFSET UNITYSDK_OFFSET(0x16BEE340)
#define EIMHGJELHGN_CHOKIAEFIFJ_OFFSET UNITYSDK_OFFSET(0x16BEE580)
#define EIMHGJELHGN_CJFCJJLLAOE_OFFSET UNITYSDK_OFFSET(0x16BEC510)
#define EIMHGJELHGN_CJLIAKHLGBI_OFFSET UNITYSDK_OFFSET(0x16BEB7D0)
#define EIMHGJELHGN_CMAFEIDLAAM_OFFSET UNITYSDK_OFFSET(0x16BED030)
#define EIMHGJELHGN_DIEODEDHCNB_OFFSET UNITYSDK_OFFSET(0x16BED170)
#define EIMHGJELHGN_DMJFAJMIOEH_OFFSET UNITYSDK_OFFSET(0x16BEE260)
#define EIMHGJELHGN_DOJKNGKEEIL_OFFSET UNITYSDK_OFFSET(0x16BEAFF0)
#define EIMHGJELHGN_EAKHFNPKMJC_OFFSET UNITYSDK_OFFSET(0x16BECE80)
#define EIMHGJELHGN_EMJMPHICCMF_OFFSET UNITYSDK_OFFSET(0x16BEE420)
#define EIMHGJELHGN_EMNDCLPJNKK_OFFSET UNITYSDK_OFFSET(0x16BEE0C0)
#define EIMHGJELHGN_ENFBIPHBNAM_OFFSET UNITYSDK_OFFSET(0x16BECE60)
#define EIMHGJELHGN_FDCIOOLPEEP_OFFSET UNITYSDK_OFFSET(0x16BEE430)
#define EIMHGJELHGN_FOOHKIJGFBP_OFFSET UNITYSDK_OFFSET(0x16BEB7C0)
#define EIMHGJELHGN_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x16BEDDE0)
#define EIMHGJELHGN_GBIDBGCBIFH_OFFSET UNITYSDK_OFFSET(0x16BEE750)
#define EIMHGJELHGN_GBKJGHCFEMD_OFFSET UNITYSDK_OFFSET(0x16BEDD20)
#define EIMHGJELHGN_GCNEDNAGNPM_OFFSET UNITYSDK_OFFSET(0x16BED1E0)
#define EIMHGJELHGN_GDBCFAJAGBH_OFFSET UNITYSDK_OFFSET(0x16BED9A0)
#define EIMHGJELHGN_GDLFLDMNHPC_OFFSET UNITYSDK_OFFSET(0x16BECD10)
#define EIMHGJELHGN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16BEAE10)
#define EIMHGJELHGN_GKJPGBGCELH_OFFSET UNITYSDK_OFFSET(0x16BEE570)
#define EIMHGJELHGN_GPLFGMJLJCM_OFFSET UNITYSDK_OFFSET(0x16BEB000)
#define EIMHGJELHGN_HELDKIGENJN_OFFSET UNITYSDK_OFFSET(0x16BEE2F0)
#define EIMHGJELHGN_HIPEDGOEKJK_OFFSET UNITYSDK_OFFSET(0x16BEE190)
#define EIMHGJELHGN_HJHDIFEOBIF_OFFSET UNITYSDK_OFFSET(0x16BEB870)
#define EIMHGJELHGN_HKPOKFCNDID_OFFSET UNITYSDK_OFFSET(0x16BEE450)
#define EIMHGJELHGN_HLHJOOFDPGG_OFFSET UNITYSDK_OFFSET(0x16BEB7F0)
#define EIMHGJELHGN_HLOCFEGOKPI_OFFSET UNITYSDK_OFFSET(0x16BECED0)
#define EIMHGJELHGN_HNHEPIMBCFP_OFFSET UNITYSDK_OFFSET(0x16BEE2E0)
#define EIMHGJELHGN_IIFBIHAKNHF_OFFSET UNITYSDK_OFFSET(0x16BED900)
#define EIMHGJELHGN_ILEMMFJLABB_OFFSET UNITYSDK_OFFSET(0x16BECE70)
#define EIMHGJELHGN_IMJLMIPINND_OFFSET UNITYSDK_OFFSET(0x16BECF20)
#define EIMHGJELHGN_IPCGBOHDLFP_OFFSET UNITYSDK_OFFSET(0x16BEABE0)
#define EIMHGJELHGN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16BEE460)
#define EIMHGJELHGN_JPLPGHBHIHJ_OFFSET UNITYSDK_OFFSET(0x16BEC320)
#define EIMHGJELHGN_KFABAOBANIG_OFFSET UNITYSDK_OFFSET(0x16BEBA40)
#define EIMHGJELHGN_LAKJOKDADMP_OFFSET UNITYSDK_OFFSET(0x16BECF70)
#define EIMHGJELHGN_LANKJCKHJCP_OFFSET UNITYSDK_OFFSET(0x16BEE530)
#define EIMHGJELHGN_MEEMPBNBGMM_OFFSET UNITYSDK_OFFSET(0x16BEB7E0)
#define EIMHGJELHGN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16BECD20)
#define EIMHGJELHGN_MIEDDEMMHDL_OFFSET UNITYSDK_OFFSET(0x16BEE1A0)
#define EIMHGJELHGN_MJMKNEOJIPD_OFFSET UNITYSDK_OFFSET(0x16BEDFD0)
#define EIMHGJELHGN_MONMEANLCFJ_OFFSET UNITYSDK_OFFSET(0x16BEB600)
#define EIMHGJELHGN_NCONFLHCOLE_OFFSET UNITYSDK_OFFSET(0x16BEE400)
#define EIMHGJELHGN_NELNOBPMHHG_OFFSET UNITYSDK_OFFSET(0x16BED8F0)
#define EIMHGJELHGN_NGFACJLEEHJ_OFFSET UNITYSDK_OFFSET(0x16BEE560)
#define EIMHGJELHGN_NGJEPIKMEPI_OFFSET UNITYSDK_OFFSET(0x16BEE440)
#define EIMHGJELHGN_NNOKCKIJILA_OFFSET UNITYSDK_OFFSET(0x16BEB1E0)
#define EIMHGJELHGN_OJCEBGCGLIK_OFFSET UNITYSDK_OFFSET(0x16BEB380)
#define EIMHGJELHGN_OMDMOIOFAFB_OFFSET UNITYSDK_OFFSET(0x16BECDB0)
#define EIMHGJELHGN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16BEA930)
#define EIMHGJELHGN_PDEBKHKOBJO_OFFSET UNITYSDK_OFFSET(0x16BED990)
#define EIMHGJELHGN_PEJJMFJPKIL_OFFSET UNITYSDK_OFFSET(0x16BEE4E0)
#define EIMHGJELHGN_PFJDMNHIEHC_OFFSET UNITYSDK_OFFSET(0x16BECD00)
#define EIMHGJELHGN_PIIEPFLNINB_OFFSET UNITYSDK_OFFSET(0x16BEDD30)
#define EIMHGJELHGN_PJGJBIOACMH_OFFSET UNITYSDK_OFFSET(0x16BECF10)
#define EIMHGJELHGN_PKALPKNBJMD_OFFSET UNITYSDK_OFFSET(0x16BEB250)
#define EIMHGJELHGN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BEAE60)
#define EIMHGJELHGN__CTOR_OFFSET UNITYSDK_OFFSET(0x16BEAEF0)

inline static constexpr unsigned int EIMHGJELHGN_TypeDefinitionIndex = 73405;

class EIMHGJELHGN : public ::MJHDNMKGLBJ
{
public:
	static ::System::Boolean* StaticGet_GJDIMGMAPBE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EIMHGJELHGN_TypeDefinitionIndex)->GetStaticField(0x12050);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x14; // 0x0
	::MoleMole::Battle::CharacterAIWatcher* _MJODPAKCHLH_k__BackingField; // 0x48
	::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* CKPBPBAGHLG; // 0x50
	::BehaviorDesigner::Runtime::BehaviorTree* BKOFGHAIPGI; // 0x58
	::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* _GLPJHNJPIJA_k__BackingField; // 0x60
	::KCIHKKOICHL_BHGAOMIOGJD JPIJBMKFJPD; // 0x68
	::System::Collections::Generic::List_1<::LDDHJLCEFOJ*>* GLEDIAGEBAL; // 0xA8
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* IHEHPLAKCEM; // 0xB0
	::MLKPGAKLPMJ* AAGEKBMELFB; // 0xB8
	::BehaviorDesigner::Runtime::ExternalBehavior* PCHMGFCCIBE; // 0xC0
	::System::Action* EOAPJGOGHCB; // 0xC8
	::System::Collections::Generic::List_1<::System::Object*>* DAGOHKGENJO; // 0xD0
	::DBNMHAPONJK* LMFOFDIFDBH; // 0xD8
	::MGHNAPKHBOG NNEHHALHIBO; // 0xE0
	::MoleMole::AIBattleState PHPOMJLOHGM; // 0xF8
	::System::Int32 IOOKPBNLGIP; // 0xFC
	::MoleMole::AttackType ENNCJPEOPGB; // 0x100
	::System::Single KOOBFMKNJFL; // 0x104
	::System::Int32 _LOLDDCMCMEE_k__BackingField; // 0x108
	::System::Int32 NDPGBFKMAIM; // 0x10C
	::System::Single EIPOCGEGPKP; // 0x110
	::System::UInt32 JGFFEOEADOL; // 0x114
	::System::Int32 JDBOJJPLKFB; // 0x118
	::System::Boolean _FNCGCBKICAF_k__BackingField; // 0x11C
	::System::Boolean _NJJLOICBNDH_k__BackingField; // 0x11D
	::System::Boolean EHJMODBNMCO; // 0x11E
	::System::Byte _padding0[0x1];
	::System::Int32 FJKJHBDOEOD; // 0x120
	::System::Single DNFPGFKMIBD; // 0x124
	::System::Int32 IBOBAJOPPEO; // 0x128
	::System::Boolean _NGHGEHBMNLC_k__BackingField; // 0x12C
	::System::Boolean NGDDIOPANDH; // 0x12D
	::System::Boolean _AOMIGFAIIMN_k__BackingField; // 0x12E
	::MDOCBPOKDJB EAIHLEAJBLC; // 0x12F
	::System::Byte _padding1[0x3];
	::EIMHGJELHGN_BJDIBOEMINB _EACFLMNEHLF_k__BackingField; // 0x134
	::MoleMole::AttackType BGIEADMLGJN; // 0x138
	::System::Single KLAPNKLBEEG; // 0x13C
	::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle AEOEGINCKND; // 0x140
	::MoleMole::AttackType OALDGHNOEBO; // 0x148
	::MoleMole::AttackType KPKBNCGGMMF; // 0x14C
	::System::Int32 HECGHHFJKEN; // 0x150
	::System::UInt32 IMGBAKKLEMJ; // 0x154
	::System::Boolean MOELDOPHOBF; // 0x158
	::System::Boolean _IPFGMDIJIOF_k__BackingField; // 0x159
	::System::Boolean _FKKLOGFPLEA_k__BackingField; // 0x15A
	::System::Boolean KDKBAFLGEHJ; // 0x15B
	::System::Byte _padding2[0x4];
	::System::Int64 GDNHHAOKLFG; // 0x160
	::System::Single _EIJGGAPCGIC_k__BackingField; // 0x168
	::System::Single MDIOAEIOFFM; // 0x16C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMHGJELHGN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GETCLASSID_OFFSET))(this);
	}

	::System::Void DOJKNGKEEIL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIMHGJELHGN_DOJKNGKEEIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GPLFGMJLJCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GPLFGMJLJCM_OFFSET))(this);
	}

	::System::Void OJCEBGCGLIK(::BehaviorDesigner::Runtime::BehaviorTree* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorTree*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_OJCEBGCGLIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NNOKCKIJILA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_NNOKCKIJILA_OFFSET))(this);
	}

	::System::Void FOOHKIJGFBP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_FOOHKIJGFBP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CJLIAKHLGBI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_CJLIAKHLGBI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MEEMPBNBGMM(::MoleMole::Battle::CharacterAIWatcher* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CharacterAIWatcher*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_MEEMPBNBGMM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HLHJOOFDPGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_HLHJOOFDPGG_OFFSET))(this);
	}

	static ::System::Void HJHDIFEOBIF(::BehaviorDesigner::Runtime::Behavior* FOPKPPMGLGH, ::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::Behavior*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EIMHGJELHGN_HJHDIFEOBIF_OFFSET))(FOPKPPMGLGH, KECKGDFIALJ);
	}

	::MoleMole::AIBattleState JPLPGHBHIHJ()
	{
		return ((::MoleMole::AIBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_JPLPGHBHIHJ_OFFSET))(this);
	}

	::System::Void AKKHGLILFDH(::System::UInt32 BKLGNCBNEGM, ::System::Boolean FOPGFEMGPNO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_AKKHGLILFDH_OFFSET))(this, BKLGNCBNEGM, FOPGFEMGPNO);
	}

	::System::Boolean PFJDMNHIEHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_PFJDMNHIEHC_OFFSET))(this);
	}

	static ::System::Void KFABAOBANIG(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EIMHGJELHGN_KFABAOBANIG_OFFSET))(KECKGDFIALJ);
	}

	::MoleMole::Battle::CharacterAIWatcher* GDLFLDMNHPC()
	{
		return ((::MoleMole::Battle::CharacterAIWatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GDLFLDMNHPC_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void OMDMOIOFAFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_OMDMOIOFAFB_OFFSET))(this);
	}

	::System::Boolean ENFBIPHBNAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_ENFBIPHBNAM_OFFSET))(this);
	}

	::System::Void ILEMMFJLABB(::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_ILEMMFJLABB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EAKHFNPKMJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_EAKHFNPKMJC_OFFSET))(this);
	}

	static ::System::Void HLOCFEGOKPI(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_HLOCFEGOKPI_OFFSET))(GFPINKJPPBC);
	}

	::System::Boolean PJGJBIOACMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_PJGJBIOACMH_OFFSET))(this);
	}

	::System::Void IMJLMIPINND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_IMJLMIPINND_OFFSET))(this);
	}

	::System::Void CJFCJJLLAOE(::System::Boolean JOFEHPHLCJF, ::System::Action_2<::System::UInt32, ::System::Boolean>* GPBGKDKOJAJ, ::System::String* MHENOFDLDJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_CJFCJJLLAOE_OFFSET))(this, JOFEHPHLCJF, GPBGKDKOJAJ, MHENOFDLDJH);
	}

	static ::System::Void AJCKIBFGBNK(::MoleMole::EntityHandle HPADNAEINPK, ::System::Action_2<::System::UInt32, ::System::Boolean>* MLJIJKCCGKK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_AJCKIBFGBNK_OFFSET))(HPADNAEINPK, MLJIJKCCGKK);
	}

	::System::Int32 NELNOBPMHHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_NELNOBPMHHG_OFFSET))(this);
	}

	::System::Void DIEODEDHCNB(::EIMHGJELHGN_BJDIBOEMINB JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::EIMHGJELHGN_BJDIBOEMINB))((::PBYTE)hIl2Cpp + EIMHGJELHGN_DIEODEDHCNB_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void IIFBIHAKNHF(::System::String* AELLPLBJELA, ::System::Boolean EHDCIBGNLOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_IIFBIHAKNHF_OFFSET))(this, AELLPLBJELA, EHDCIBGNLOE);
	}

	::System::Boolean ACAAPELMMBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_ACAAPELMMBK_OFFSET))(this);
	}

	::EIMHGJELHGN_BJDIBOEMINB PDEBKHKOBJO()
	{
		return ((::EIMHGJELHGN_BJDIBOEMINB(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_PDEBKHKOBJO_OFFSET))(this);
	}

	static ::System::Void GDBCFAJAGBH(::MoleMole::EntityHandle HPADNAEINPK, ::BehaviorDesigner::Runtime::ExternalBehavior* IALLACINCHL)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::BehaviorDesigner::Runtime::ExternalBehavior*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GDBCFAJAGBH_OFFSET))(HPADNAEINPK, IALLACINCHL);
	}

	::System::Boolean GBKJGHCFEMD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GBKJGHCFEMD_OFFSET))(this);
	}

	::System::Boolean PIIEPFLNINB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_PIIEPFLNINB_OFFSET))(this);
	}

	::System::Boolean MONMEANLCFJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_MONMEANLCFJ_OFFSET))(this);
	}

	static ::System::Void GCNEDNAGNPM(::MoleMole::EntityHandle HPADNAEINPK, ::BehaviorDesigner::Runtime::ExternalBehavior* NGLKIKLLLFL, ::System::Action_2<::System::UInt32, ::System::Boolean>* MLJIJKCCGKK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::BehaviorDesigner::Runtime::ExternalBehavior*, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GCNEDNAGNPM_OFFSET))(HPADNAEINPK, NGLKIKLLLFL, MLJIJKCCGKK);
	}

	::System::Boolean LAKJOKDADMP(::EIMHGJELHGN_BGOICKPIHPM FCEIKAIDHPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::EIMHGJELHGN_BGOICKPIHPM))((::PBYTE)hIl2Cpp + EIMHGJELHGN_LAKJOKDADMP_OFFSET))(this, FCEIKAIDHPM);
	}

	::System::Void ABCFKFDNHCH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_ABCFKFDNHCH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GALGFCPKMGC(::System::UInt32 POBLGIHBMOG, ::System::String* OIODEOMGMHM, ::System::Boolean MKFNCEIIPKH, ::System::Int32 PBCMNKKGKBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GALGFCPKMGC_OFFSET))(this, POBLGIHBMOG, OIODEOMGMHM, MKFNCEIIPKH, PBCMNKKGKBL);
	}

	::System::Void HIPEDGOEKJK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIMHGJELHGN_HIPEDGOEKJK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MIEDDEMMHDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_MIEDDEMMHDL_OFFSET))(this);
	}

	::System::Void AKGLLHMFPDL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIMHGJELHGN_AKGLLHMFPDL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IPCGBOHDLFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_IPCGBOHDLFP_OFFSET))(this);
	}

	::System::Boolean DMJFAJMIOEH(::System::Boolean FIPHFGHNNBE, ::FEMCIOOJGIM FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::FEMCIOOJGIM))((::PBYTE)hIl2Cpp + EIMHGJELHGN_DMJFAJMIOEH_OFFSET))(this, FIPHFGHNNBE, FCPCLIJNDLA);
	}

	::System::Int32 HNHEPIMBCFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_HNHEPIMBCFP_OFFSET))(this);
	}

	::System::Int32 HELDKIGENJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_HELDKIGENJN_OFFSET))(this);
	}

	::System::Void BCDFDELFFAH(::System::String* AELLPLBJELA, ::System::Boolean FBILHHBPEHD, ::System::Boolean EHDCIBGNLOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_BCDFDELFFAH_OFFSET))(this, AELLPLBJELA, FBILHHBPEHD, EHDCIBGNLOE);
	}

	::System::Void MJMKNEOJIPD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_MJMKNEOJIPD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CMAFEIDLAAM(::System::String* OIODEOMGMHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_CMAFEIDLAAM_OFFSET))(this, OIODEOMGMHM);
	}

	::System::Boolean NCONFLHCOLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_NCONFLHCOLE_OFFSET))(this);
	}

	::System::Void ABANNHGJDHO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_ABANNHGJDHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EMJMPHICCMF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_EMJMPHICCMF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FDCIOOLPEEP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIMHGJELHGN_FDCIOOLPEEP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NGJEPIKMEPI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_NGJEPIKMEPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single HKPOKFCNDID()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_HKPOKFCNDID_OFFSET))(this);
	}

	static ::EIMHGJELHGN* JFDOOELFAOA()
	{
		return ((::EIMHGJELHGN*(*)())((::PBYTE)hIl2Cpp + EIMHGJELHGN_JFDOOELFAOA_OFFSET))();
	}

	::System::Void PEJJMFJPKIL(::System::Text::StringBuilder* CKGGMNHMKDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_PEJJMFJPKIL_OFFSET))(this, CKGGMNHMKDB);
	}

	::BehaviorDesigner::Runtime::BehaviorTree* LANKJCKHJCP()
	{
		return ((::BehaviorDesigner::Runtime::BehaviorTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_LANKJCKHJCP_OFFSET))(this);
	}

	::System::Void AAPEHEKOBMD(::EIMHGJELHGN_BJDIBOEMINB EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EIMHGJELHGN_BJDIBOEMINB))((::PBYTE)hIl2Cpp + EIMHGJELHGN_AAPEHEKOBMD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ABKGOFKCNJF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_ABKGOFKCNJF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NGFACJLEEHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_NGFACJLEEHJ_OFFSET))(this);
	}

	::System::Void GKJPGBGCELH(::MoleMole::AIBattleState EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::AIBattleState))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GKJPGBGCELH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EMNDCLPJNKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_EMNDCLPJNKK_OFFSET))(this);
	}

	::System::Boolean PKALPKNBJMD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_PKALPKNBJMD_OFFSET))(this);
	}

	::BehaviorDesigner::Runtime::SharedVariable* CHOKIAEFIFJ(::System::String* HIAIKHDFCLN)
	{
		return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_CHOKIAEFIFJ_OFFSET))(this, HIAIKHDFCLN);
	}

	::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* GBIDBGCBIFH()
	{
		return ((::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_GBIDBGCBIFH_OFFSET))(this);
	}
};
