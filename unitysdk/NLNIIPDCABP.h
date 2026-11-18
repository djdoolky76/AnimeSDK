#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFBNPCINOGG.h"
#include "unitysdk/DPADGCFFBCJ.h"
#include "unitysdk/FDBDCCPIBKF.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/KOAKFMKALPO.h"
#include "unitysdk/MEFIOFBDFFL.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorUpdateMode.h"

class DIAEPBNFKBO;
class HIOPCDHINKA;
class IBGOGDAEGIK;
class JODJCPEIIHG;
class KBALNFBNAFI;
class MLFADFNMJFO;
class NLFDBFBBNAI;
class PKMJPMFCNBK;
class PNDGAILCJLC;
namespace Foundation { template <typename T1, typename T2, typename T3, typename T4> class CustomEventAction_4; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEventGroup; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class RuntimeAnimatorController; }
template <typename T> class OGBNPMJPGBC_1;

#define NLNIIPDCABP_ADLENODLDEI_OFFSET UNITYSDK_OFFSET(0x13167600)
#define NLNIIPDCABP_AJKFCELAOLD_OFFSET UNITYSDK_OFFSET(0x13168C30)
#define NLNIIPDCABP_AJMNHBBKPHJ_OFFSET UNITYSDK_OFFSET(0x13168D80)
#define NLNIIPDCABP_BFINEJMBFAJ_OFFSET UNITYSDK_OFFSET(0x13168FD0)
#define NLNIIPDCABP_BHIICLIMLBI_OFFSET UNITYSDK_OFFSET(0x13167E10)
#define NLNIIPDCABP_BNAKNBNDJGK_OFFSET UNITYSDK_OFFSET(0x13168050)
#define NLNIIPDCABP_DGODEGIFIAF_OFFSET UNITYSDK_OFFSET(0x13166F20)
#define NLNIIPDCABP_DIFEKGNCEHI_OFFSET UNITYSDK_OFFSET(0x13168180)
#define NLNIIPDCABP_EDOBJBBHFKJ_OFFSET UNITYSDK_OFFSET(0x13166BE0)
#define NLNIIPDCABP_ELCJOJDGAAM_OFFSET UNITYSDK_OFFSET(0x131666F0)
#define NLNIIPDCABP_ELIFGLGEGPO_OFFSET UNITYSDK_OFFSET(0x13166B10)
#define NLNIIPDCABP_EMMEFFAKPFE_OFFSET UNITYSDK_OFFSET(0x13168170)
#define NLNIIPDCABP_FGLNBJFEIHM_OFFSET UNITYSDK_OFFSET(0x13166400)
#define NLNIIPDCABP_FOLLOPLAMNF_OFFSET UNITYSDK_OFFSET(0x13168D20)
#define NLNIIPDCABP_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x131681B0)
#define NLNIIPDCABP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13165E80)
#define NLNIIPDCABP_GNJCDCDMIBN_OFFSET UNITYSDK_OFFSET(0x131687B0)
#define NLNIIPDCABP_HCLMAELBHGD_OFFSET UNITYSDK_OFFSET(0x13168D30)
#define NLNIIPDCABP_HEKPCBILHCC_OFFSET UNITYSDK_OFFSET(0x131685B0)
#define NLNIIPDCABP_HOIGCDOJOMG_OFFSET UNITYSDK_OFFSET(0x13168040)
#define NLNIIPDCABP_HOJHLAJADEN_OFFSET UNITYSDK_OFFSET(0x131664C0)
#define NLNIIPDCABP_IEALPJOKDCE_OFFSET UNITYSDK_OFFSET(0x13168590)
#define NLNIIPDCABP_IGKBAKDFGMC_OFFSET UNITYSDK_OFFSET(0x13168E50)
#define NLNIIPDCABP_IIAJFAJFPGA_OFFSET UNITYSDK_OFFSET(0x131689D0)
#define NLNIIPDCABP_IJMANDKAHPK_OFFSET UNITYSDK_OFFSET(0x13168C20)
#define NLNIIPDCABP_IMOGKADDEPP_OFFSET UNITYSDK_OFFSET(0x131690B0)
#define NLNIIPDCABP_JDGAMBDFJKP_OFFSET UNITYSDK_OFFSET(0x13167E00)
#define NLNIIPDCABP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13166EA0)
#define NLNIIPDCABP_JMJCFCEKFBO_OFFSET UNITYSDK_OFFSET(0x131690A0)
#define NLNIIPDCABP_JMMIBLFGEAK_OFFSET UNITYSDK_OFFSET(0x13168D10)
#define NLNIIPDCABP_KHLHOHNJIPL_OFFSET UNITYSDK_OFFSET(0x13168C10)
#define NLNIIPDCABP_LLHHHHBPBED_OFFSET UNITYSDK_OFFSET(0x13166D00)
#define NLNIIPDCABP_LLMJMBPCKKN_OFFSET UNITYSDK_OFFSET(0x13168820)
#define NLNIIPDCABP_LPDONCNIHKE_OFFSET UNITYSDK_OFFSET(0x131685A0)
#define NLNIIPDCABP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13168EA0)
#define NLNIIPDCABP_MKEOOAIDCBG_OFFSET UNITYSDK_OFFSET(0x13168190)
#define NLNIIPDCABP_MMGLMNFJBBF_OFFSET UNITYSDK_OFFSET(0x13168E40)
#define NLNIIPDCABP_MMKCLOAHDPM_OFFSET UNITYSDK_OFFSET(0x131687C0)
#define NLNIIPDCABP_MPMJBFKBIPJ_OFFSET UNITYSDK_OFFSET(0x13168120)
#define NLNIIPDCABP_NMBBPALBEPJ_OFFSET UNITYSDK_OFFSET(0x13168B70)
#define NLNIIPDCABP_OLNFCHEDDOB_OFFSET UNITYSDK_OFFSET(0x13166AF0)
#define NLNIIPDCABP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13164500)
#define NLNIIPDCABP_OPMEAJOJKAF_OFFSET UNITYSDK_OFFSET(0x13166A60)
#define NLNIIPDCABP_PCJPOBPLJNP_OFFSET UNITYSDK_OFFSET(0x13168F30)
#define NLNIIPDCABP_PDFCAPKEHBC_OFFSET UNITYSDK_OFFSET(0x13167480)
#define NLNIIPDCABP_PICOFBEBLFA_OFFSET UNITYSDK_OFFSET(0x131681A0)
#define NLNIIPDCABP_PMNBPGEDFKP_OFFSET UNITYSDK_OFFSET(0x13168C00)
#define NLNIIPDCABP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13165ED0)
#define NLNIIPDCABP__CTOR_OFFSET UNITYSDK_OFFSET(0x13165F50)

inline static constexpr unsigned int NLNIIPDCABP_TypeDefinitionIndex = 52698;

class NLNIIPDCABP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 MHEFJDPCAFM = 0x4; // 0x0
	// static const ::System::String* JBJLJNHHBOF; // 0x0
	// static const ::System::Single OGFAMMLKOHL; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x18; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MMOHDNCMDNF; // 0x48
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>* EDHPGKOEMED; // 0x50
	::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>* PJONPBKADJF; // 0x58
	::UnityEngine::MdbComponent* PLGOEJMNION; // 0x60
	::Il2CppArray<::System::Int32>* JFNIJDIPBMO; // 0x68
	::System::Collections::Generic::List_1<::PKMJPMFCNBK*>* DPAPMAIHJCM; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* NGCPNGEKKCO; // 0x78
	::Il2CppArray<::UnityEngine::AnimatorStateInfo>* LKKPNPGKPCM; // 0x80
	::System::Collections::Generic::HashSet_1<::System::Int32>* LAOKMMDKGMB; // 0x88
	::OGBNPMJPGBC_1<::MoleMole::Config::CharacterAnimatorStateType>* GEOOFAAELPC; // 0x90
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* GAOPJHIDFOB; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KLGNFFKLPKE; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* NFBIEOHBGLJ; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::Int32>* PLNGKKLDFMF; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*>* IGOJLBFMJFA; // 0xB8
	::System::Action_4<::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* MPFFAOGLMAB; // 0xC0
	::System::Action_2<::System::Single, ::System::Boolean>* BHFAICNLFEF; // 0xC8
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* CLAJBLKJKJD; // 0xD0
	::System::Action_2<::System::Int32, ::UnityEngine::AnimatorStateInfo>* FPHANLMCDGA; // 0xD8
	::System::Collections::Generic::HashSet_1<::System::UInt32>* HNIDPGKKOMN; // 0xE0
	::Il2CppArray<::System::Object*>* ECPPDMFOADL; // 0xE8
	::System::Action* MLNOLLPOANM; // 0xF0
	::System::Action* PIOPBCMPANK; // 0xF8
	::System::Collections::Generic::List_1<::MEFIOFBDFFL>* FHGMCDIEGNI; // 0x100
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::PKMJPMFCNBK*>*>*>* FFILKFOFAGD; // 0x108
	::System::Action_1<::System::Int32>* IAIJCGBDPJA; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AKEGMMHHKII; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::UnityEngine::RuntimeAnimatorController*>* CDIDOFPJLOD; // 0x120
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MAOBALLMJNE; // 0x128
	::System::Collections::Generic::List_1<::FDBDCCPIBKF>* DKDBABFNBEE; // 0x130
	::System::Action_2<::System::Int32, ::System::Int32>* JODFJHDPALK; // 0x138
	::MLFADFNMJFO* LCIJBPPKAIF; // 0x140
	::System::Collections::Generic::List_1<::NLFDBFBBNAI*>* IJKDCEHJJHE; // 0x148
	::Foundation::CustomEventAction_4<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32>* GHFCCEIIHDI; // 0x150
	::System::Collections::Generic::List_1<::PKMJPMFCNBK*>* CAEGOBEMKHM; // 0x158
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* CHMGMPFIONM; // 0x160
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* IPMCHNBEJDG; // 0x168
	::System::Action_1<::System::Int32>* NLPKELALHKI; // 0x170
	::System::Action_2<::System::Int32, ::System::Boolean>* DKJKPAMDFED; // 0x178
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* HHCNKHMJLLB; // 0x180
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* GOOHCFEGECP; // 0x188
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* JDPBPLMFDBJ; // 0x190
	::PNDGAILCJLC* MHEDPNJCCME; // 0x198
	::KBALNFBNAFI* MNJOBKEEPNG; // 0x1A0
	::System::Collections::Generic::List_1<::PKMJPMFCNBK*>* DHJGBDPINBO; // 0x1A8
	::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB; // 0x1B0
	::UnityEngine::Animator* FPGIEMNHLEF; // 0x1B8
	::System::Action_2<::System::Int32, ::System::Single>* ADOKLODNDGL; // 0x1C0
	::System::Action* EOAPJGOGHCB; // 0x1C8
	::System::Collections::Generic::List_1<::PKMJPMFCNBK*>* JKLIAFPCCDB; // 0x1D0
	::Il2CppArray<::UnityEngine::AnimatorStateInfo>* DDKHAJHDOHB; // 0x1D8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* BCIGOLHNNAA; // 0x1E0
	::System::Collections::Generic::List_1<::IBGOGDAEGIK*>* JGJMKCFMFOI; // 0x1E8
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* GGBPKBEHOPJ; // 0x1F0
	::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* KODCAJOOPDC; // 0x1F8
	::System::Collections::Generic::Dictionary_2<::DPADGCFFBCJ, ::AFBNPCINOGG>* GLOMCPCCFJI; // 0x200
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* LNNGLMLLCBG; // 0x208
	::Il2CppArray<::HIOPCDHINKA*>* GHENNNOLGLK; // 0x210
	::UnityEngine::RuntimeAnimatorController* LPLCFMLJJJO; // 0x218
	::DIAEPBNFKBO* JHFHAEJANIE; // 0x220
	::System::Action_1<::System::Int32>* ABOKHIAIJEM; // 0x228
	::System::Action_2<::System::Int32, ::KOAKFMKALPO>* DHNGMDNBJPJ; // 0x230
	::System::Int32 OGMJLPMAIOM; // 0x238
	::System::Single MOFCNOJBENF; // 0x23C
	::System::Single AOIMNLDFMOA; // 0x240
	::System::Single JLKLMGBFMCE; // 0x244
	::System::Int32 MFNMGCEOEHF; // 0x248
	::UnityEngine::AnimatorCullingMode BLAINEPFKPA; // 0x24C
	::System::UInt64 IPJGDJBONOH; // 0x250
	::System::Boolean LGAEEGCGFBJ; // 0x258
	::System::Boolean DAHBPOHEGPF; // 0x259
	::System::Boolean POMFLFKDDID; // 0x25A
	::System::Boolean GCKCEHKBPGA; // 0x25B
	::System::Int32 MDOFHOBIEMI; // 0x25C
	::System::Int32 CLAGOFNJLEA; // 0x260
	::System::Int32 HFMCLJBHOFO; // 0x264
	::System::Int32 AKCLPAIIGDA; // 0x268
	::System::Boolean NDFGDHONGAJ; // 0x26C
	::System::Boolean HFOBHEBFPEO; // 0x26D
	::System::Byte MFMMIEKAFEJ; // 0x26E
	::System::Boolean GBGMMDOGBMC; // 0x26F
	::System::Single FFCMLAOAFEB; // 0x270
	::System::Int32 FNGJGCIKAAF; // 0x274
	::System::UInt64 JFHFPOGADAJ; // 0x278
	::System::Int32 EGPGJNCCGMC; // 0x280
	::System::Single HFAFOIGBANF; // 0x284
	::System::Boolean PJJPBNADACN; // 0x288
	::System::Boolean NPEFDJEDKFC; // 0x289
	::System::Boolean INAEHPLACIL; // 0x28A
	::System::Boolean _KJAKALMNPKN_k__BackingField; // 0x28B
	::System::Int32 GJDMJDENFII; // 0x28C
	::System::Int32 GEOJIIIDBPP; // 0x290
	::UnityEngine::AnimatorUpdateMode PEBMOOHIIPC; // 0x294
	::MoleMole::Config::AnimatorHitEffect JMHMADAPKKO; // 0x298
	::System::Int32 CJPEPALEIPL; // 0x29C
	::System::Boolean AGLBOKNLGBE; // 0x2A0
	::System::Boolean BNHIMPAGDIG; // 0x2A1
	::System::Boolean PNEHMJHJMBE; // 0x2A2
	::System::Boolean HKGKPFNPLJA; // 0x2A3
	::System::Int32 IIKGJFJLGPF; // 0x2A4
	::System::Boolean EEAGIIOJLLL; // 0x2A8
	::System::Boolean FGONCJMJALJ; // 0x2A9
	::System::Boolean BOHNBMIJKKN; // 0x2AA
	::System::Boolean MGKCBFDAMCE; // 0x2AB
	::System::Int32 DDBGDEGKNIN; // 0x2AC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLNIIPDCABP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_GETCLASSID_OFFSET))(this);
	}

	::DIAEPBNFKBO* FGLNBJFEIHM()
	{
		return ((::DIAEPBNFKBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_FGLNBJFEIHM_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>* HOJHLAJADEN()
	{
		return ((::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_HOJHLAJADEN_OFFSET))(this);
	}

	::System::Boolean OPMEAJOJKAF(::NLFDBFBBNAI* NCILKAOLPJJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::NLFDBFBBNAI*))((::PBYTE)hIl2Cpp + NLNIIPDCABP_OPMEAJOJKAF_OFFSET))(this, NCILKAOLPJJ);
	}

	::System::Boolean OLNFCHEDDOB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_OLNFCHEDDOB_OFFSET))(this);
	}

	::MoleMole::Config::CharacterAnimatorStateType ELIFGLGEGPO()
	{
		return ((::MoleMole::Config::CharacterAnimatorStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_ELIFGLGEGPO_OFFSET))(this);
	}

	::System::Int32 EDOBJBBHFKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_EDOBJBBHFKJ_OFFSET))(this);
	}

	::System::Void LLHHHHBPBED(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLNIIPDCABP_LLHHHHBPBED_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::NLNIIPDCABP* JFDOOELFAOA()
	{
		return ((::NLNIIPDCABP*(*)())((::PBYTE)hIl2Cpp + NLNIIPDCABP_JFDOOELFAOA_OFFSET))();
	}

	::System::Void DGODEGIFIAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_DGODEGIFIAF_OFFSET))(this);
	}

	::System::Void ADLENODLDEI(::DPADGCFFBCJ FGHKMFMBOHI)
	{
		return ((::System::Void(*)(::PVOID, ::DPADGCFFBCJ))((::PBYTE)hIl2Cpp + NLNIIPDCABP_ADLENODLDEI_OFFSET))(this, FGHKMFMBOHI);
	}

	::System::Void JDGAMBDFJKP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLNIIPDCABP_JDGAMBDFJKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BHIICLIMLBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_BHIICLIMLBI_OFFSET))(this);
	}

	::System::Int32 HOIGCDOJOMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_HOIGCDOJOMG_OFFSET))(this);
	}

	::System::Void BNAKNBNDJGK(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLNIIPDCABP_BNAKNBNDJGK_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void MPMJBFKBIPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_MPMJBFKBIPJ_OFFSET))(this);
	}

	::System::Void EMMEFFAKPFE(::UnityEngine::RuntimeAnimatorController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + NLNIIPDCABP_EMMEFFAKPFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DIFEKGNCEHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_DIFEKGNCEHI_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorHitEffect MKEOOAIDCBG()
	{
		return ((::MoleMole::Config::AnimatorHitEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_MKEOOAIDCBG_OFFSET))(this);
	}

	::System::Void PICOFBEBLFA(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>*))((::PBYTE)hIl2Cpp + NLNIIPDCABP_PICOFBEBLFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GALGFCPKMGC(::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::UnityEngine::Animator* INCMMOGPNHO, ::PNDGAILCJLC* MHEDPNJCCME)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*, ::UnityEngine::Animator*, ::PNDGAILCJLC*))((::PBYTE)hIl2Cpp + NLNIIPDCABP_GALGFCPKMGC_OFFSET))(this, DFMKILICPFB, INCMMOGPNHO, MHEDPNJCCME);
	}

	::System::Single IEALPJOKDCE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_IEALPJOKDCE_OFFSET))(this);
	}

	::System::Void LPDONCNIHKE(::MoleMole::Config::AnimatorHitEffect EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorHitEffect))((::PBYTE)hIl2Cpp + NLNIIPDCABP_LPDONCNIHKE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HEKPCBILHCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_HEKPCBILHCC_OFFSET))(this);
	}

	::System::Boolean GNJCDCDMIBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_GNJCDCDMIBN_OFFSET))(this);
	}

	::System::Boolean MMKCLOAHDPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_MMKCLOAHDPM_OFFSET))(this);
	}

	::System::Void LLMJMBPCKKN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLNIIPDCABP_LLMJMBPCKKN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IIAJFAJFPGA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLNIIPDCABP_IIAJFAJFPGA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NMBBPALBEPJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_NMBBPALBEPJ_OFFSET))(this);
	}

	::System::Int32 PMNBPGEDFKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_PMNBPGEDFKP_OFFSET))(this);
	}

	::System::Int32 KHLHOHNJIPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_KHLHOHNJIPL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>* IJMANDKAHPK()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_IJMANDKAHPK_OFFSET))(this);
	}

	::System::Void AJKFCELAOLD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLNIIPDCABP_AJKFCELAOLD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JMMIBLFGEAK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLNIIPDCABP_JMMIBLFGEAK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FOLLOPLAMNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_FOLLOPLAMNF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>* PDFCAPKEHBC()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_PDFCAPKEHBC_OFFSET))(this);
	}

	::System::Void HCLMAELBHGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_HCLMAELBHGD_OFFSET))(this);
	}

	::System::Void AJMNHBBKPHJ(::NLFDBFBBNAI* NCILKAOLPJJ)
	{
		return ((::System::Void(*)(::PVOID, ::NLFDBFBBNAI*))((::PBYTE)hIl2Cpp + NLNIIPDCABP_AJMNHBBKPHJ_OFFSET))(this, NCILKAOLPJJ);
	}

	::UnityEngine::Animator* ELCJOJDGAAM()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_ELCJOJDGAAM_OFFSET))(this);
	}

	::System::Boolean MMGLMNFJBBF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_MMGLMNFJBBF_OFFSET))(this);
	}

	::System::Void IGKBAKDFGMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_IGKBAKDFGMC_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void PCJPOBPLJNP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLNIIPDCABP_PCJPOBPLJNP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BFINEJMBFAJ(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLNIIPDCABP_BFINEJMBFAJ_OFFSET))(this, AELLPLBJELA);
	}

	::UnityEngine::RuntimeAnimatorController* JMJCFCEKFBO()
	{
		return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_JMJCFCEKFBO_OFFSET))(this);
	}

	::UnityEngine::MdbComponent* IMOGKADDEPP()
	{
		return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNIIPDCABP_IMOGKADDEPP_OFFSET))(this);
	}
};
