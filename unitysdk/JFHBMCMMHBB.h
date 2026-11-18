#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOADBGJENKE.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryFilter.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryKey.h"
#include "unitysdk/NEOHMGDKACL.h"
#include "unitysdk/PJHKDJEGJOG.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class AAAPLPDBHPL;
class AELGCMDIIIG;
class BGOAHIPCCKO;
class CCFCJEHDHBL;
class EEHJOPEJOCD;
class ENGKPGFGGLM;
class FAOLDKHFLCM;
class GINHAMIGDNA;
class JDLMAOBBDEE;
class KEALLHIKKLA;
class KGMDCDKMBEJ_HKEFCDFAGCF;
class LDFHCNHINCB;
class MENMIHAMGKH;
class OGKNLFKPKNC;
class POFOFGILKAA;
namespace MoleMole { class MonsterFantasyResultContext; }
namespace MoleMole { class TurnBattleEntityTemporaryUnit; }
namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class TurnBattleUnitBase; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIInLevelPauseDialogContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class ALOMECPFOPN_2;
template <typename T1, typename T2> class CNKGGMABMGE_2;

#define JFHBMCMMHBB_ABDJICHGFMA_OFFSET UNITYSDK_OFFSET(0x13CB1010)
#define JFHBMCMMHBB_AIGCHIBMLBB_OFFSET UNITYSDK_OFFSET(0x13CB43F0)
#define JFHBMCMMHBB_AMLCMLMDNNI_OFFSET UNITYSDK_OFFSET(0x13CB8F20)
#define JFHBMCMMHBB_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x13CB80C0)
#define JFHBMCMMHBB_ANFFNLNENHM_OFFSET UNITYSDK_OFFSET(0x13CB2C40)
#define JFHBMCMMHBB_BAMJCIEAEFG_OFFSET UNITYSDK_OFFSET(0x13CB5B10)
#define JFHBMCMMHBB_BDINOAFHFJO_OFFSET UNITYSDK_OFFSET(0x13CB8280)
#define JFHBMCMMHBB_BEBLFMKHGKH_OFFSET UNITYSDK_OFFSET(0x13CB8DC0)
#define JFHBMCMMHBB_BJNPGMJOABA_OFFSET UNITYSDK_OFFSET(0x13CB86A0)
#define JFHBMCMMHBB_BOKOKOKBKMG_OFFSET UNITYSDK_OFFSET(0x13CB6360)
#define JFHBMCMMHBB_CCJEKPEGIGH_OFFSET UNITYSDK_OFFSET(0x13CB5080)
#define JFHBMCMMHBB_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x13CB3570)
#define JFHBMCMMHBB_CFOCBJMMJDA_OFFSET UNITYSDK_OFFSET(0x13CB8320)
#define JFHBMCMMHBB_CGMKKFEIFMI_OFFSET UNITYSDK_OFFSET(0x13CB0C00)
#define JFHBMCMMHBB_CKINGEHLFIH_OFFSET UNITYSDK_OFFSET(0x13CB3060)
#define JFHBMCMMHBB_CLBFEECDKCG_OFFSET UNITYSDK_OFFSET(0x13CB5EF0)
#define JFHBMCMMHBB_DAAGCJOKFGP_OFFSET UNITYSDK_OFFSET(0x13CB68D0)
#define JFHBMCMMHBB_DFAHENILBJB_OFFSET UNITYSDK_OFFSET(0x13CB8C70)
#define JFHBMCMMHBB_DHMMLLBCDOI_OFFSET UNITYSDK_OFFSET(0x13CB6440)
#define JFHBMCMMHBB_DOGOIBPKPPN_OFFSET UNITYSDK_OFFSET(0x13CB86B0)
#define JFHBMCMMHBB_ECBJLALOIKE_OFFSET UNITYSDK_OFFSET(0x13CB8270)
#define JFHBMCMMHBB_ECKGOJHDHCN_OFFSET UNITYSDK_OFFSET(0x13CAFCD0)
#define JFHBMCMMHBB_EFDJGDAKJHI_OFFSET UNITYSDK_OFFSET(0x13CB80E0)
#define JFHBMCMMHBB_EHNBMNEBNKM_OFFSET UNITYSDK_OFFSET(0x13CB5090)
#define JFHBMCMMHBB_EJLCLOCIIDP_OFFSET UNITYSDK_OFFSET(0x13CB8D00)
#define JFHBMCMMHBB_EKECAEHDJEN_OFFSET UNITYSDK_OFFSET(0x13CB3980)
#define JFHBMCMMHBB_FLMBAHOKMGK_OFFSET UNITYSDK_OFFSET(0x13CB8E60)
#define JFHBMCMMHBB_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x13CB2040)
#define JFHBMCMMHBB_FPCNBMPEFCJ_OFFSET UNITYSDK_OFFSET(0x13CB80D0)
#define JFHBMCMMHBB_GCKKDLFJELC_OFFSET UNITYSDK_OFFSET(0x13CB4B60)
#define JFHBMCMMHBB_GGKBJLHDDNF_OFFSET UNITYSDK_OFFSET(0x13CB3630)
#define JFHBMCMMHBB_GHIKPOHDEGM_OFFSET UNITYSDK_OFFSET(0x13CB8BE0)
#define JFHBMCMMHBB_HBHKNNEHOOB_OFFSET UNITYSDK_OFFSET(0x13CB3220)
#define JFHBMCMMHBB_HDMPHJONCIB_OFFSET UNITYSDK_OFFSET(0x13CB0A50)
#define JFHBMCMMHBB_HIGNGDBJJOI_OFFSET UNITYSDK_OFFSET(0x13CB5700)
#define JFHBMCMMHBB_HIKFHKGCIJN_OFFSET UNITYSDK_OFFSET(0x13CB6430)
#define JFHBMCMMHBB_HLECAABIHCI_OFFSET UNITYSDK_OFFSET(0x13CB37D0)
#define JFHBMCMMHBB_HMFNBNNACMA_OFFSET UNITYSDK_OFFSET(0x13CB0D90)
#define JFHBMCMMHBB_HMIANBGOMHE_OFFSET UNITYSDK_OFFSET(0x13CB4B00)
#define JFHBMCMMHBB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x13CB2CA0)
#define JFHBMCMMHBB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x13CB89F0)
#define JFHBMCMMHBB_IGDEOPDJINL_OFFSET UNITYSDK_OFFSET(0x13CB50A0)
#define JFHBMCMMHBB_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x13CB8E70)
#define JFHBMCMMHBB_JJMHAHOFNEH_OFFSET UNITYSDK_OFFSET(0x13CB8A00)
#define JFHBMCMMHBB_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x13CB33B0)
#define JFHBMCMMHBB_KFDHPJDCLMD_OFFSET UNITYSDK_OFFSET(0x13CB1730)
#define JFHBMCMMHBB_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x13CB5AF0)
#define JFHBMCMMHBB_KOIICHHMLIG_OFFSET UNITYSDK_OFFSET(0x13CB6A40)
#define JFHBMCMMHBB_LANCLCHIMEN_OFFSET UNITYSDK_OFFSET(0x13CB0600)
#define JFHBMCMMHBB_LHJDGOGMOPC_OFFSET UNITYSDK_OFFSET(0x13CB2E40)
#define JFHBMCMMHBB_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x13CAFCB0)
#define JFHBMCMMHBB_MDFLNNMEPJA_OFFSET UNITYSDK_OFFSET(0x13CB7760)
#define JFHBMCMMHBB_MMPJDBOOJBM_OFFSET UNITYSDK_OFFSET(0x13CB80F0)
#define JFHBMCMMHBB_NBPBDHFLJAD_OFFSET UNITYSDK_OFFSET(0x13CAFCC0)
#define JFHBMCMMHBB_NGILPIJINKH_OFFSET UNITYSDK_OFFSET(0x13CB1480)
#define JFHBMCMMHBB_NIHMLEPOLGO_OFFSET UNITYSDK_OFFSET(0x13CB5B00)
#define JFHBMCMMHBB_NKDFNPEAHOA_OFFSET UNITYSDK_OFFSET(0x13CB6970)
#define JFHBMCMMHBB_NKJJNAIPGHF_OFFSET UNITYSDK_OFFSET(0x13CB06C0)
#define JFHBMCMMHBB_NNNNFOLNPPA_OFFSET UNITYSDK_OFFSET(0x13CB8290)
#define JFHBMCMMHBB_OMCJKOEJAFM_OFFSET UNITYSDK_OFFSET(0x13CAFEB0)
#define JFHBMCMMHBB_OMLBEHADIJJ_OFFSET UNITYSDK_OFFSET(0x13CB7370)
#define JFHBMCMMHBB_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x13CB8E80)
#define JFHBMCMMHBB_OPLKGEKMGGG_OFFSET UNITYSDK_OFFSET(0x13CB6A50)
#define JFHBMCMMHBB_PDLCDFNFMKA_OFFSET UNITYSDK_OFFSET(0x13CB5F60)
#define JFHBMCMMHBB_PNCPPODEDOB_OFFSET UNITYSDK_OFFSET(0x13CB43E0)
#define JFHBMCMMHBB_PNIEPBEDINN_OFFSET UNITYSDK_OFFSET(0x13CB8260)
#define JFHBMCMMHBB_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x13CB0480)
#define JFHBMCMMHBB__CTOR_OFFSET UNITYSDK_OFFSET(0x13CB3AB0)

inline static constexpr unsigned int JFHBMCMMHBB_TypeDefinitionIndex = 40288;

class JFHBMCMMHBB : public ::PJHKDJEGJOG
{
public:
	// static const ::System::String* NEKGJGFMLJK; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::LDFHCNHINCB*>*>* JBIPGHPJJOK; // 0x2F8
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleUnitQueryKey, ::System::Object*>* CEJEMODMEDP; // 0x300
	::CNKGGMABMGE_2<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>* CFNCAPGBMEF; // 0x308
	::CNKGGMABMGE_2<::System::Int32, ::MENMIHAMGKH*>* HDJMCJOEJJI; // 0x310
	::System::Collections::Generic::Dictionary_2<::System::String*, ::AELGCMDIIIG*>* DFMMMIACMIH; // 0x318
	::KEALLHIKKLA* FGOIHIOBIKI; // 0x320
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* LEMDBDMGJLI; // 0x328
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*, ::System::Boolean>>* HIHKKICLNEM; // 0x330
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* ABGCGGHDIKJ; // 0x338
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleUnitQueryFilter, ::System::Func_2<::MoleMole::TurnBattleUnitBase*, ::System::Boolean>*>* ENJNLNKEFHC; // 0x340
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*, ::System::Boolean>>* IKGBGLHFOMO; // 0x348
	::OGKNLFKPKNC* _AKHCFNAMCPL_k__BackingField; // 0x350
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* AHPIMNEDODP; // 0x358
	::AAAPLPDBHPL* _KODHKKNFEDL_k__BackingField; // 0x360
	::MoleMole::Battle::Entity* _HHKDAKAGPBE_k__BackingField; // 0x368
	::CNKGGMABMGE_2<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>* HFGLJOECHNI; // 0x370
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* OODPEHPBDEA; // 0x378
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleEntityUnit*, ::System::Collections::Generic::Stack_1<::System::Single>*>* KAIOMBNPNAB; // 0x380
	::System::Collections::Generic::HashSet_1<::System::String*>* DJEOFKOIMOP; // 0x388
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* FHHPLLEKBPJ; // 0x390
	::System::Int32 KKBOFHPKPHA; // 0x398
	::System::Boolean _ENIHNPDNDKB_k__BackingField; // 0x39C
	::System::Boolean DKDIKLAAHFC; // 0x39D
	::System::Boolean IKAHMDDFCJL; // 0x39E
	::System::Byte _padding0[0x1];
	::System::Int32 NHPDLGMJFGH; // 0x3A0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_LJEEJABBAHD_OFFSET))(this);
	}

	::AAAPLPDBHPL* NBPBDHFLJAD()
	{
		return ((::AAAPLPDBHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_NBPBDHFLJAD_OFFSET))(this);
	}

	::System::Void ECKGOJHDHCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_ECKGOJHDHCN_OFFSET))(this);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Void LANCLCHIMEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_LANCLCHIMEN_OFFSET))(this);
	}

	::System::Void NKJJNAIPGHF(::EEHJOPEJOCD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_NKJJNAIPGHF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void CGMKKFEIFMI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_CGMKKFEIFMI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void KFDHPJDCLMD(::GINHAMIGDNA* ELKICNLJCAM)
	{
		return ((::System::Void(*)(::PVOID, ::GINHAMIGDNA*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_KFDHPJDCLMD_OFFSET))(this, ELKICNLJCAM);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Boolean CKINGEHLFIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_CKINGEHLFIH_OFFSET))(this);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_JLHBKJKDGDE_OFFSET))(this);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::System::Boolean GGKBJLHDDNF(::KGMDCDKMBEJ_HKEFCDFAGCF* NCPIBDLCFFI)
	{
		return ((::System::Boolean(*)(::PVOID, ::KGMDCDKMBEJ_HKEFCDFAGCF*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_GGKBJLHDDNF_OFFSET))(this, NCPIBDLCFFI);
	}

	::MoleMole::UIInLevelPauseDialogContext* HLECAABIHCI()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_HLECAABIHCI_OFFSET))(this);
	}

	::System::Void EKECAEHDJEN(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* ENNKHKCCIII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_EKECAEHDJEN_OFFSET))(this, ENNKHKCCIII);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MoleMole::TurnBattleUnitBase*>* PNCPPODEDOB()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::TurnBattleUnitBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_PNCPPODEDOB_OFFSET))(this);
	}

	::MOADBGJENKE AIGCHIBMLBB()
	{
		return ((::MOADBGJENKE(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_AIGCHIBMLBB_OFFSET))(this);
	}

	::System::Void GCKKDLFJELC(::System::UInt32 NJNCGJLHLKC, ::System::Single HOKJLCIJHEN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_GCKKDLFJELC_OFFSET))(this, NJNCGJLHLKC, HOKJLCIJHEN);
	}

	::ALOMECPFOPN_2<::System::Int32, ::MENMIHAMGKH*>* CCJEKPEGIGH()
	{
		return ((::ALOMECPFOPN_2<::System::Int32, ::MENMIHAMGKH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_CCJEKPEGIGH_OFFSET))(this);
	}

	::ALOMECPFOPN_2<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>* EHNBMNEBNKM()
	{
		return ((::ALOMECPFOPN_2<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_EHNBMNEBNKM_OFFSET))(this);
	}

	::System::Boolean IGDEOPDJINL(::MoleMole::TurnBattleUnitBase* DGCGOJNDKPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_IGDEOPDJINL_OFFSET))(this, DGCGOJNDKPM);
	}

	::System::Boolean HMIANBGOMHE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_HMIANBGOMHE_OFFSET))(this);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Battle::Entity* NIHMLEPOLGO()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_NIHMLEPOLGO_OFFSET))(this);
	}

	::System::Void BAMJCIEAEFG(::System::UInt32 NJNCGJLHLKC, ::System::Int32 CKEDPOEIAMH, ::System::Int32 LLNCKEENHDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_BAMJCIEAEFG_OFFSET))(this, NJNCGJLHLKC, CKEDPOEIAMH, LLNCKEENHDH);
	}

	::System::Void PDLCDFNFMKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_PDLCDFNFMKA_OFFSET))(this);
	}

	::System::Void BOKOKOKBKMG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_BOKOKOKBKMG_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::TurnBattleUnitBase* CLBFEECDKCG()
	{
		return ((::MoleMole::TurnBattleUnitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_CLBFEECDKCG_OFFSET))(this);
	}

	::System::Void HIKFHKGCIJN(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_HIKFHKGCIJN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void HMFNBNNACMA(::BGOAHIPCCKO* OBGDNJDADBK)
	{
		return ((::System::Void(*)(::PVOID, ::BGOAHIPCCKO*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_HMFNBNNACMA_OFFSET))(this, OBGDNJDADBK);
	}

	::JDLMAOBBDEE* HDMPHJONCIB()
	{
		return ((::JDLMAOBBDEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_HDMPHJONCIB_OFFSET))(this);
	}

	::System::Void DHMMLLBCDOI(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_DHMMLLBCDOI_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void DAAGCJOKFGP(::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>* IEEFJFMIDMG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_DAAGCJOKFGP_OFFSET))(this, IEEFJFMIDMG);
	}

	::System::Void LHJDGOGMOPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_LHJDGOGMOPC_OFFSET))(this);
	}

	::System::Void NKDFNPEAHOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_NKDFNPEAHOA_OFFSET))(this);
	}

	::System::Void ABDJICHGFMA(::FAOLDKHFLCM* CANEAOHJPBF)
	{
		return ((::System::Void(*)(::PVOID, ::FAOLDKHFLCM*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_ABDJICHGFMA_OFFSET))(this, CANEAOHJPBF);
	}

	::System::Void KOIICHHMLIG(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_KOIICHHMLIG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* OPLKGEKMGGG(::MoleMole::TurnBattleUnitQueryKey MCOHLHMKLIP, ::MoleMole::TurnBattleUnitQueryFilter PNPMMLNCDNK, ::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* IGAAKDOIPNN)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*(*)(::PVOID, ::MoleMole::TurnBattleUnitQueryKey, ::MoleMole::TurnBattleUnitQueryFilter, ::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_OPLKGEKMGGG_OFFSET))(this, MCOHLHMKLIP, PNPMMLNCDNK, IGAAKDOIPNN);
	}

	::System::Void OMLBEHADIJJ(::System::String* FKMHMOELCIO, ::System::Boolean EALIAMLMHBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_OMLBEHADIJJ_OFFSET))(this, FKMHMOELCIO, EALIAMLMHBM);
	}

	::System::Collections::Generic::List_1<::MoleMole::TurnBattleEntityUnit*>* MDFLNNMEPJA(::UnityEngine::Vector2 ILOHHLNGEHM, ::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>* PNPMMLNCDNK)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::TurnBattleEntityUnit*>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_MDFLNNMEPJA_OFFSET))(this, ILOHHLNGEHM, PNPMMLNCDNK);
	}

	::System::Int32 ANFFNLNENHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_ANFFNLNENHM_OFFSET))(this);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FPCNBMPEFCJ(::OGKNLFKPKNC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OGKNLFKPKNC*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_FPCNBMPEFCJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFDJGDAKJHI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_EFDJGDAKJHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MMPJDBOOJBM(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_MMPJDBOOJBM_OFFSET))(this, EJGDHCIBCJH);
	}

	::ALOMECPFOPN_2<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>* PNIEPBEDINN()
	{
		return ((::ALOMECPFOPN_2<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_PNIEPBEDINN_OFFSET))(this);
	}

	::System::Boolean ECBJLALOIKE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_ECBJLALOIKE_OFFSET))(this);
	}

	::System::Void BDINOAFHFJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_BDINOAFHFJO_OFFSET))(this);
	}

	::System::Void NNNNFOLNPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_NNNNFOLNPPA_OFFSET))(this);
	}

	::System::Void NGILPIJINKH(::CCFCJEHDHBL* CEMLONPBPCL)
	{
		return ((::System::Void(*)(::PVOID, ::CCFCJEHDHBL*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_NGILPIJINKH_OFFSET))(this, CEMLONPBPCL);
	}

	::System::Boolean CFOCBJMMJDA(::MoleMole::TurnBattleUnitBase* DGCGOJNDKPM, ::NEOHMGDKACL FKMHMOELCIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*, ::NEOHMGDKACL))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_CFOCBJMMJDA_OFFSET))(this, DGCGOJNDKPM, FKMHMOELCIO);
	}

	::System::Void HBHKNNEHOOB(::MoleMole::MonsterFantasyResultContext* DDPOMMMNHMD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterFantasyResultContext*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_HBHKNNEHOOB_OFFSET))(this, DDPOMMMNHMD);
	}

	::System::Void HIGNGDBJJOI(::MoleMole::TurnBattleEntityUnit* MDJNAJJHJGP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_HIGNGDBJJOI_OFFSET))(this, MDJNAJJHJGP);
	}

	::System::Void OMCJKOEJAFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_OMCJKOEJAFM_OFFSET))(this);
	}

	::OGKNLFKPKNC* BJNPGMJOABA()
	{
		return ((::OGKNLFKPKNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_BJNPGMJOABA_OFFSET))(this);
	}

	::System::Void DOGOIBPKPPN(::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>* IEEFJFMIDMG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_DOGOIBPKPPN_OFFSET))(this, IEEFJFMIDMG);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void JJMHAHOFNEH(::System::Action* EJGDHCIBCJH, ::System::Boolean IKOKPDNCEFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_JJMHAHOFNEH_OFFSET))(this, EJGDHCIBCJH, IKOKPDNCEFF);
	}

	::System::Boolean GHIKPOHDEGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_GHIKPOHDEGM_OFFSET))(this);
	}

	::System::Void DFAHENILBJB(::GINHAMIGDNA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::GINHAMIGDNA*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_DFAHENILBJB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 EJLCLOCIIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_EJLCLOCIIDP_OFFSET))(this);
	}

	::System::Void BEBLFMKHGKH(::EEHJOPEJOCD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_BEBLFMKHGKH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::MoleMole::Battle::Entity*>* FLMBAHOKMGK()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_FLMBAHOKMGK_OFFSET))(this);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_JJCECLNIHEK_OFFSET))(this);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean AMLCMLMDNNI(::KGMDCDKMBEJ_HKEFCDFAGCF* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::KGMDCDKMBEJ_HKEFCDFAGCF*))((::PBYTE)hIl2Cpp + JFHBMCMMHBB_AMLCMLMDNNI_OFFSET))(this, MIALFKCCCPI);
	}
};
