#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/LDDHJLCEFOJ.h"
#include "unitysdk/MoleMole/Config/BaseMoveType.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/BaseMove_AIMoveTargetState.h"
#include "unitysdk/MoleMole/BaseMove_AroundAxis.h"
#include "unitysdk/MoleMole/BaseMove_AroundUpdateMode.h"
#include "unitysdk/MoleMole/BaseMove_EAroundMoveMode.h"
#include "unitysdk/MoleMole/BaseMove_MoveDirectionMode.h"
#include "unitysdk/MoleMole/BaseMove_TypeOfAngleCheck.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ACNLKLCDALA;
class CAPAFILOMGC;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class GEIHCPAOKKK;
class HAFLGNENJDI;
class JOOHBDMHGCA;
class LACHKEHCGNO;
class NBNJNBOMFOJ;
class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole { class AnimatorClipBlendData; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BFALGJKKGCH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14390E70)
#define BFALGJKKGCH_CCGMEBKAANO_OFFSET UNITYSDK_OFFSET(0x14390060)
#define BFALGJKKGCH_COMOJJMGNEL_OFFSET UNITYSDK_OFFSET(0x1438A1F0)
#define BFALGJKKGCH_COODDHHKCFN_OFFSET UNITYSDK_OFFSET(0x128A2F90)
#define BFALGJKKGCH_DADMLNBADCE_OFFSET UNITYSDK_OFFSET(0x143862F0)
#define BFALGJKKGCH_DHOOIMGOHNH_OFFSET UNITYSDK_OFFSET(0x128A3040)
#define BFALGJKKGCH_DMNOOODNLKC_OFFSET UNITYSDK_OFFSET(0x14388F30)
#define BFALGJKKGCH_DPJLHMCINLH_OFFSET UNITYSDK_OFFSET(0x1438EEF0)
#define BFALGJKKGCH_EAOFNOLGMFG_OFFSET UNITYSDK_OFFSET(0x14388EB0)
#define BFALGJKKGCH_EHOJEBDMPIM_OFFSET UNITYSDK_OFFSET(0x143895E0)
#define BFALGJKKGCH_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x14386240)
#define BFALGJKKGCH_EPNFPHLFLNP_OFFSET UNITYSDK_OFFSET(0x14388C50)
#define BFALGJKKGCH_FBPDOEHOMDD_OFFSET UNITYSDK_OFFSET(0x1438A270)
#define BFALGJKKGCH_FMKJIJKICIB_OFFSET UNITYSDK_OFFSET(0x1438FB10)
#define BFALGJKKGCH_GGCGIFOJIKJ_OFFSET UNITYSDK_OFFSET(0x128A47B0)
#define BFALGJKKGCH_GGECIKEMHGO_OFFSET UNITYSDK_OFFSET(0x1438B7C0)
#define BFALGJKKGCH_HNEDBFGBNDN_OFFSET UNITYSDK_OFFSET(0x14389B20)
#define BFALGJKKGCH_IIJMLMJBIFI_OFFSET UNITYSDK_OFFSET(0x143904C0)
#define BFALGJKKGCH_JGADLCHLGEC_OFFSET UNITYSDK_OFFSET(0x1438F770)
#define BFALGJKKGCH_KBLIKOLHIJF_OFFSET UNITYSDK_OFFSET(0x1438FA70)
#define BFALGJKKGCH_KNPBMOEGBLK_OFFSET UNITYSDK_OFFSET(0x1438DBB0)
#define BFALGJKKGCH_LDJKCOFPGKC_1_OFFSET UNITYSDK_OFFSET(0x1438F870)
#define BFALGJKKGCH_LDJKCOFPGKC_OFFSET UNITYSDK_OFFSET(0x1438EFA0)
#define BFALGJKKGCH_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x14390DE0)
#define BFALGJKKGCH_MBNDFOPPGCE_1_OFFSET UNITYSDK_OFFSET(0x1438D6B0)
#define BFALGJKKGCH_MBNDFOPPGCE_OFFSET UNITYSDK_OFFSET(0x143899E0)
#define BFALGJKKGCH_MDDPMNHHPGA_OFFSET UNITYSDK_OFFSET(0x1438BB70)
#define BFALGJKKGCH_MDFPNMMMFDB_OFFSET UNITYSDK_OFFSET(0x14389F40)
#define BFALGJKKGCH_MJIGMFDNCMP_OFFSET UNITYSDK_OFFSET(0x14388A70)
#define BFALGJKKGCH_MKGJAHLKJDA_OFFSET UNITYSDK_OFFSET(0x1438C420)
#define BFALGJKKGCH_NHNEEFJHFIM_OFFSET UNITYSDK_OFFSET(0x1438F8E0)
#define BFALGJKKGCH_NJCPLDHGHKG_OFFSET UNITYSDK_OFFSET(0x14390620)
#define BFALGJKKGCH_OJJIFCHOKNK_OFFSET UNITYSDK_OFFSET(0x14390570)
#define BFALGJKKGCH_OJPOBKDCCCC_OFFSET UNITYSDK_OFFSET(0x14390BF0)
#define BFALGJKKGCH_PLLABFEBDBI_OFFSET UNITYSDK_OFFSET(0x1438D180)
#define BFALGJKKGCH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14386360)
#define BFALGJKKGCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1438D050)

inline static constexpr unsigned int BFALGJKKGCH_TypeDefinitionIndex = 48933;

class BFALGJKKGCH : public ::LDDHJLCEFOJ
{
public:
	::System::String* LOIBFAJDBDL; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KGNJCOEKHMN; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EMNEBLDGADG; // 0x38
	::GEIHCPAOKKK* HPDFPPAHNGL; // 0x40
	::BehaviorDesigner::Runtime::SharedString* IGFPPCDPCBL; // 0x48
	::LACHKEHCGNO* CCNCPIACFAC; // 0x50
	::System::String* FPGLCABAKNK; // 0x58
	::System::String* EKKIKPNOEAH; // 0x60
	::BehaviorDesigner::Runtime::SharedVariable* ICOEFGPGMHE; // 0x68
	::System::String* OHBDNLCALFO; // 0x70
	::System::String* CNEKPFFMLHO; // 0x78
	::System::String* GNHMDANIPNO; // 0x80
	::JOOHBDMHGCA* KGBDHLOLGLB; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JNHNNNGFEOB; // 0x90
	::ACNLKLCDALA* HMKPMMCDECM; // 0x98
	::UnityEngine::Transform* CCOGBLADGNK; // 0xA0
	::System::String* OHAADAGKHKK; // 0xA8
	::MoleMole::AnimatorBlendData* PGJHJMGEMLF; // 0xB0
	::MoleMole::SkillCharacterScriptConfig* CEJENBBHBBG; // 0xB8
	::HAFLGNENJDI* LFNOPPOOKLE; // 0xC0
	::DIAEPBNFKBO* NKMOCOILNHD; // 0xC8
	::BehaviorDesigner::Runtime::SharedVariable* HIMOPFJGDEF; // 0xD0
	::BehaviorDesigner::Runtime::SharedVariable* CNANKGJODKB; // 0xD8
	::CAPAFILOMGC* LCIOJOKGJOJ; // 0xE0
	::BehaviorDesigner::Runtime::SharedBool* OFMCCONKGON; // 0xE8
	::NBNJNBOMFOJ* BMLHHOCIDJE; // 0xF0
	::DKPJAEANAPO* HLNKECDMDIA; // 0xF8
	::NLNIIPDCABP* MOJPJEKJKNE; // 0x100
	::System::String* JDECFDFFNAI; // 0x108
	::System::Single IAECDMACDJF; // 0x110
	::UnityEngine::LayerMask NLEPBCGJGEG; // 0x114
	::System::Single PGPODCEBMNN; // 0x118
	::UnityEngine::RaycastHit LCLPFNMJIJK; // 0x11C
	::System::Single ELDJCLCKFHE; // 0x150
	::UnityEngine::Vector3 BBHCBOIKBOI; // 0x154
	::System::Single IFOFJHCLLML; // 0x160
	::System::Single ALEBHIBLPIH; // 0x164
	::MoleMole::Config::BaseMoveType EFPFIAAPGMM; // 0x168
	::System::Single FBLOIHGKPLA; // 0x16C
	::MoleMole::BaseMove_MoveDirectionMode JLHBMCDFFBK; // 0x170
	::System::Single BDNKHDEANIC; // 0x174
	::UnityEngine::Vector3 NBJCAKNFJID; // 0x178
	::System::Single JMKHNBPAMLB; // 0x184
	::System::Single DNNGGMJALLO; // 0x188
	::System::Boolean DIPAKNHMFGJ; // 0x18C
	::System::Boolean OABAAKLCIAF; // 0x18D
	::System::Boolean MEOGJPFAGDK; // 0x18E
	::System::Boolean LNJMANLAFFO; // 0x18F
	::System::Single JPMNGMCKAAG; // 0x190
	::MoleMole::AIMoveTargetType OBNIAHNMHPF; // 0x194
	::System::Single MOFONBICFDF; // 0x198
	::System::Single GLCIIDFNLCN; // 0x19C
	::BehaviorDesigner::Runtime::Tasks::TaskStatus KICODABHLLO; // 0x1A0
	::System::Single JJIKJCJOEFM; // 0x1A4
	::System::Single CMCHICLDLLG; // 0x1A8
	::System::Single MIENIAINODL; // 0x1AC
	::System::Single OGIHENKICBP; // 0x1B0
	::System::Single KBFLPLLABAK; // 0x1B4
	::BehaviorDesigner::Runtime::Tasks::TaskStatus IJGGPOHEHKI; // 0x1B8
	::UnityEngine::Vector3 IPJGFNOPDPD; // 0x1BC
	::System::Single LBEJPNNCAMA; // 0x1C8
	::System::Int32 OPPDDDCJHAI; // 0x1CC
	::System::Boolean JDOJGNMHMLG; // 0x1D0
	::System::Boolean KGGDBMPAMJL; // 0x1D1
	::System::Boolean DODAMMOCKLD; // 0x1D2
	::System::Boolean JIOLEFOEDOA; // 0x1D3
	::System::Boolean NCCACLIONMJ; // 0x1D4
	::System::Boolean BMBLGKOKMJD; // 0x1D5
	::System::Boolean OKLEBDNCJML; // 0x1D6
	::System::Boolean DOIIEFBOEAL; // 0x1D7
	::MoleMole::BaseMove_TypeOfAngleCheck HPFEIAJGIMP; // 0x1D8
	::System::Single IILPKNNNJCM; // 0x1DC
	::System::Single BCKJIHJHJDE; // 0x1E0
	::System::Single AOEICNPJMAO; // 0x1E4
	::System::Single NBHFJOBEIMJ; // 0x1E8
	::MoleMole::BaseMove_AroundAxis BDPOBPDKLHJ; // 0x1EC
	::System::Single NEEGKNOOOLI; // 0x1F0
	::UnityEngine::Vector3 FMMNGMNIIGD; // 0x1F4
	::MoleMole::BaseMove_AroundUpdateMode EFCBCJOMLIM; // 0x200
	::System::Single EAAEMFJKEPG; // 0x204
	::MoleMole::Config::Boolean AIFEJGALKDG; // 0x208
	::System::Single AINFOHOCJIL; // 0x20C
	::System::Single DOHOHLBGDBI; // 0x210
	::System::Single MPHIEGLPOLM; // 0x214
	::System::Single JLHHAJIIHPI; // 0x218
	::System::Single OECCNODDAFK; // 0x21C
	::System::Single NFJDJBAFFFP; // 0x220
	::UnityEngine::Vector3 KNNDKNLAPII; // 0x224
	::System::Single MBHIBJFJAPO; // 0x230
	::MoleMole::BaseMove_AIMoveTargetState FOMFEHLHOJP; // 0x234
	::System::Single AOLBAMKCLFA; // 0x238
	::BehaviorDesigner::Runtime::Tasks::TaskStatus ABDGBPLJFIG; // 0x23C
	::System::Single GPPLIFEMDED; // 0x240
	::System::Single CJPLCFPAHFG; // 0x244
	::MoleMole::BaseMove_EAroundMoveMode HLAFKNBOFPG; // 0x248
	::System::Single OJCCGNPMDMP; // 0x24C
	::BehaviorDesigner::Runtime::Tasks::TaskStatus MHPMKCHOEJD; // 0x250

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH__CTOR_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Boolean EHOJEBDMPIM(::UnityEngine::Vector3& CKPGOKHECCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BFALGJKKGCH_EHOJEBDMPIM_OFFSET))(this, CKPGOKHECCH);
	}

	::UnityEngine::Vector3 PLLABFEBDBI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_PLLABFEBDBI_OFFSET))(this);
	}

	::System::Boolean MBNDFOPPGCE(::MoleMole::Battle::Entity* EPDICPKBBIB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BFALGJKKGCH_MBNDFOPPGCE_OFFSET))(this, EPDICPKBBIB);
	}

	::System::Void HNEDBFGBNDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_HNEDBFGBNDN_OFFSET))(this);
	}

	::System::Single COMOJJMGNEL(::System::Single ELHMOANKHFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFALGJKKGCH_COMOJJMGNEL_OFFSET))(this, ELHMOANKHFM);
	}

	::System::Void GGECIKEMHGO(::UnityEngine::Vector3 GKOEEJHILPG, ::UnityEngine::Vector3 ODEIPJJELJI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFALGJKKGCH_GGECIKEMHGO_OFFSET))(this, GKOEEJHILPG, ODEIPJJELJI);
	}

	::System::Void DPJLHMCINLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_DPJLHMCINLH_OFFSET))(this);
	}

	::MoleMole::AnimatorBlendGroup* LDJKCOFPGKC(::MoleMole::AnimatorBlendData* JPFIBOCMHOL, ::System::Single& ELHMOANKHFM, ::MoleMole::AnimatorClipBlendData*& GLPHHDMCDDB, ::MoleMole::AnimatorClipBlendData*& HDLECGINJDM)
	{
		return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::MoleMole::AnimatorBlendData*, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + BFALGJKKGCH_LDJKCOFPGKC_OFFSET))(this, JPFIBOCMHOL, ELHMOANKHFM, GLPHHDMCDDB, HDLECGINJDM);
	}

	::System::Boolean MJIGMFDNCMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_MJIGMFDNCMP_OFFSET))(this);
	}

	::System::Void MDDPMNHHPGA(::UnityEngine::Vector3 ODEIPJJELJI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFALGJKKGCH_MDDPMNHHPGA_OFFSET))(this, ODEIPJJELJI);
	}

	::System::Void JGADLCHLGEC(::UnityEngine::Vector3 KHGFAKJKDGG, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* FLIKNNJJDBM, ::System::Int32& GIMIPADFJEG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32&))((::PBYTE)hIl2Cpp + BFALGJKKGCH_JGADLCHLGEC_OFFSET))(this, KHGFAKJKDGG, FLIKNNJJDBM, GIMIPADFJEG);
	}

	::System::Void MKGJAHLKJDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_MKGJAHLKJDA_OFFSET))(this);
	}

	::UnityEngine::Vector3 FMKJIJKICIB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_FMKJIJKICIB_OFFSET))(this);
	}

	::System::Void CCGMEBKAANO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_CCGMEBKAANO_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* IIJMLMJBIFI()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_IIJMLMJBIFI_OFFSET))(this);
	}

	::System::Void EPNFPHLFLNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_EPNFPHLFLNP_OFFSET))(this);
	}

	::System::Boolean MBNDFOPPGCE_1(::MoleMole::Battle::Entity* EPDICPKBBIB, ::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFALGJKKGCH_MBNDFOPPGCE_1_OFFSET))(this, EPDICPKBBIB, CFJFMMGPGKE);
	}

	::System::Void MDFPNMMMFDB(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single& KDGKNDDIMKL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + BFALGJKKGCH_MDFPNMMMFDB_OFFSET))(this, IACKHFCLPJI, KDGKNDDIMKL);
	}

	::System::Boolean FBPDOEHOMDD(::UnityEngine::Vector3& GBEFFCCPBIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BFALGJKKGCH_FBPDOEHOMDD_OFFSET))(this, GBEFFCCPBIC);
	}

	::UnityEngine::Vector3 NJCPLDHGHKG(::UnityEngine::Vector3 KHGFAKJKDGG, ::System::Boolean& JBNBMFNNELP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + BFALGJKKGCH_NJCPLDHGHKG_OFFSET))(this, KHGFAKJKDGG, JBNBMFNNELP);
	}

	::System::Single OJJIFCHOKNK(::System::Single ELHMOANKHFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFALGJKKGCH_OJJIFCHOKNK_OFFSET))(this, ELHMOANKHFM);
	}

	::MoleMole::AnimatorBlendGroup* LDJKCOFPGKC_1(::System::Single& ELHMOANKHFM, ::MoleMole::AnimatorClipBlendData*& GLPHHDMCDDB, ::MoleMole::AnimatorClipBlendData*& HDLECGINJDM)
	{
		return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + BFALGJKKGCH_LDJKCOFPGKC_1_OFFSET))(this, ELHMOANKHFM, GLPHHDMCDDB, HDLECGINJDM);
	}

	::System::Void DADMLNBADCE(::System::Boolean AMOOCOOKODB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFALGJKKGCH_DADMLNBADCE_OFFSET))(this, AMOOCOOKODB);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> KNPBMOEGBLK()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_KNPBMOEGBLK_OFFSET))(this);
	}

	::System::Single OJPOBKDCCCC(::UnityEngine::Vector3 NPPMJEIPMFC, ::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFALGJKKGCH_OJPOBKDCCCC_OFFSET))(this, NPPMJEIPMFC, CFJFMMGPGKE);
	}

	::UnityEngine::Vector2 KBLIKOLHIJF(::System::Single ELHMOANKHFM)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFALGJKKGCH_KBLIKOLHIJF_OFFSET))(this, ELHMOANKHFM);
	}

	::System::Void DMNOOODNLKC(::UnityEngine::Vector3& IACKHFCLPJI, ::System::Boolean DHABHIHCHDH, ::System::Single IGONFFDNMPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + BFALGJKKGCH_DMNOOODNLKC_OFFSET))(this, IACKHFCLPJI, DHABHIHCHDH, IGONFFDNMPI);
	}

	::System::Single NHNEEFJHFIM(::System::Single BCGAPHFBFEB, ::System::Single HHFJJBAPNJP, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BFALGJKKGCH_NHNEEFJHFIM_OFFSET))(this, BCGAPHFBFEB, HHFJJBAPNJP, IMLLDOHDCNC);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_LJNFANAEHHA_OFFSET))(this);
	}

	::MGHNAPKHBOG EAOFNOLGMFG()
	{
		return ((::MGHNAPKHBOG(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_EAOFNOLGMFG_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::BehaviorDesigner::Runtime::Behavior* CJHKKDKFGJE, ::DIAEPBNFKBO* GCLHDKDFOOH, ::HAFLGNENJDI* EKLGJJLEGGC, ::NLNIIPDCABP* OPLGDAMMLHM, ::JOOHBDMHGCA* LFHAIKOOKOB, ::GEIHCPAOKKK* MNIEFFFEKEH, ::ACNLKLCDALA* PAHAKIECKMN)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::DIAEPBNFKBO*, ::HAFLGNENJDI*, ::NLNIIPDCABP*, ::JOOHBDMHGCA*, ::GEIHCPAOKKK*, ::ACNLKLCDALA*))((::PBYTE)hIl2Cpp + BFALGJKKGCH_BBOMJDBNHIC_OFFSET))(this, CJHKKDKFGJE, GCLHDKDFOOH, EKLGJJLEGGC, OPLGDAMMLHM, LFHAIKOOKOB, MNIEFFFEKEH, PAHAKIECKMN);
	}

	::System::Boolean COODDHHKCFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_COODDHHKCFN_OFFSET))(this);
	}

	::System::Boolean DHOOIMGOHNH(::MoleMole::Battle::Entity* EPDICPKBBIB, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Boolean CCKFAJDPCCF, ::UnityEngine::Vector3& IEKOKMJDIML)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BFALGJKKGCH_DHOOIMGOHNH_OFFSET))(this, EPDICPKBBIB, CFJFMMGPGKE, CCKFAJDPCCF, IEKOKMJDIML);
	}

	::System::Boolean GGCGIFOJIKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGJKKGCH_GGCGIFOJIKJ_OFFSET))(this);
	}
};
