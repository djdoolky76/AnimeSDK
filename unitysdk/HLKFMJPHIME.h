#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"
#include "unitysdk/HFNDLDPJIPK.h"
#include "unitysdk/HPLCGHLHMNK.h"
#include "unitysdk/JIMIDOPGJBC.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/OKFBPMKBHDE.h"
#include "unitysdk/LFBBIECPOLF.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DIAEPBNFKBO;
class ENGKPGFGGLM;
class FAKIEIBPKCK;
class FJGDLDIGJAE;
class FLFECLGHPEP;
class HJDNNLKBHBA;
class JCADHFOKIHK;
class KAOHIFFJNFF;
class KFHNCJALFJK;
class KMIGPEONHJE;
class LNFCIBHFJHI;
class OOHOOAFNBNF;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define HLKFMJPHIME_ADPMJBNGGBH_OFFSET UNITYSDK_OFFSET(0x17E5F5B0)
#define HLKFMJPHIME_AEJHJMHJJAH_OFFSET UNITYSDK_OFFSET(0x17E5DFE0)
#define HLKFMJPHIME_AHELBEPODDM_OFFSET UNITYSDK_OFFSET(0x17E58460)
#define HLKFMJPHIME_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x17E5E330)
#define HLKFMJPHIME_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17E560F0)
#define HLKFMJPHIME_BFFGDDOFGNB_OFFSET UNITYSDK_OFFSET(0x17E5E3C0)
#define HLKFMJPHIME_BJBMHDBFPEK_OFFSET UNITYSDK_OFFSET(0x17E56DD0)
#define HLKFMJPHIME_BNKNMBJDKKN_OFFSET UNITYSDK_OFFSET(0x17E59470)
#define HLKFMJPHIME_CDIMEJGDFOG_OFFSET UNITYSDK_OFFSET(0x17E596B0)
#define HLKFMJPHIME_CJKKDGIIBCP_OFFSET UNITYSDK_OFFSET(0x17E5D9F0)
#define HLKFMJPHIME_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x17E56960)
#define HLKFMJPHIME_EJGLAFHCJMH_OFFSET UNITYSDK_OFFSET(0x17E574D0)
#define HLKFMJPHIME_EKELMGBPABH_OFFSET UNITYSDK_OFFSET(0x17E5EE50)
#define HLKFMJPHIME_FCBKGNCLDKL_OFFSET UNITYSDK_OFFSET(0x17E5EA10)
#define HLKFMJPHIME_FGBJJGLDODB_OFFSET UNITYSDK_OFFSET(0x17E57D20)
#define HLKFMJPHIME_FHGDDLCPJPC_OFFSET UNITYSDK_OFFSET(0x17E56C00)
#define HLKFMJPHIME_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17E5AEE0)
#define HLKFMJPHIME_FNJCCBLGAFD_OFFSET UNITYSDK_OFFSET(0x17E57A10)
#define HLKFMJPHIME_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17E5AD00)
#define HLKFMJPHIME_GCJDFMBFDPE_OFFSET UNITYSDK_OFFSET(0x17E5AA30)
#define HLKFMJPHIME_GCKHEFEPNEC_OFFSET UNITYSDK_OFFSET(0x17E5AF70)
#define HLKFMJPHIME_GFIMIBOOBEO_OFFSET UNITYSDK_OFFSET(0x17E5EEC0)
#define HLKFMJPHIME_GHLENGABHNA_OFFSET UNITYSDK_OFFSET(0x17E56380)
#define HLKFMJPHIME_GJKNOCJCHNF_OFFSET UNITYSDK_OFFSET(0x17E5CFE0)
#define HLKFMJPHIME_GKPFCGFIPGB_OFFSET UNITYSDK_OFFSET(0x17E5EAA0)
#define HLKFMJPHIME_IAAKOIBFMPM_OFFSET UNITYSDK_OFFSET(0x17E5DBA0)
#define HLKFMJPHIME_IBHAEIPFJOH_OFFSET UNITYSDK_OFFSET(0x17E57F50)
#define HLKFMJPHIME_IDMOFKLLOCK_OFFSET UNITYSDK_OFFSET(0x17E57000)
#define HLKFMJPHIME_JFHPNLGILEI_OFFSET UNITYSDK_OFFSET(0x17E5F000)
#define HLKFMJPHIME_KJPOKECACOE_OFFSET UNITYSDK_OFFSET(0x17E5EF50)
#define HLKFMJPHIME_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x17E575D0)
#define HLKFMJPHIME_LBCBMNCKDPG_OFFSET UNITYSDK_OFFSET(0x17E5F6B0)
#define HLKFMJPHIME_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x17E57D70)
#define HLKFMJPHIME_LHLBNDFAMNE_OFFSET UNITYSDK_OFFSET(0x17E5EB30)
#define HLKFMJPHIME_LKBCEFHMJHE_OFFSET UNITYSDK_OFFSET(0x17E57A60)
#define HLKFMJPHIME_MBPGHBIIMAH_OFFSET UNITYSDK_OFFSET(0x17E5B320)
#define HLKFMJPHIME_MFGPGNOOOFE_OFFSET UNITYSDK_OFFSET(0x17E5ED30)
#define HLKFMJPHIME_MGPMAOJBGHF_OFFSET UNITYSDK_OFFSET(0x17E5EBD0)
#define HLKFMJPHIME_MIHDENAHMEC_OFFSET UNITYSDK_OFFSET(0x17E5F540)
#define HLKFMJPHIME_MKAAGPCLMOE_OFFSET UNITYSDK_OFFSET(0x17E5E450)
#define HLKFMJPHIME_MMGMBDMNCLF_OFFSET UNITYSDK_OFFSET(0x17E56550)
#define HLKFMJPHIME_NCDOALMKGJD_OFFSET UNITYSDK_OFFSET(0x17E5D7B0)
#define HLKFMJPHIME_NHAAMECCJDF_OFFSET UNITYSDK_OFFSET(0x17E57DD0)
#define HLKFMJPHIME_NIGOKBKHGOD_OFFSET UNITYSDK_OFFSET(0x17E5CCB0)
#define HLKFMJPHIME_NIOMKDAJDMM_OFFSET UNITYSDK_OFFSET(0x17E576E0)
#define HLKFMJPHIME_OLMBJKCIDKJ_OFFSET UNITYSDK_OFFSET(0x17E5F2A0)
#define HLKFMJPHIME_OOFDLGFHPKB_OFFSET UNITYSDK_OFFSET(0x17E5F5A0)
#define HLKFMJPHIME_PCPECIKIPMB_OFFSET UNITYSDK_OFFSET(0x17E59720)
#define HLKFMJPHIME_PCPGCPFCIOC_OFFSET UNITYSDK_OFFSET(0x17E56E50)
#define HLKFMJPHIME_PHIEOGGGHBH_OFFSET UNITYSDK_OFFSET(0x17E5DF70)
#define HLKFMJPHIME_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x17E5DFD0)
#define HLKFMJPHIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E5AED0)
#define HLKFMJPHIME__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5AD90)

inline static constexpr unsigned int HLKFMJPHIME_TypeDefinitionIndex = 81677;

class HLKFMJPHIME : public ::ABLPDAPPABA
{
public:
	static ::System::Boolean* StaticGet_EKFNBOJILOA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HLKFMJPHIME_TypeDefinitionIndex)->GetStaticField(0xC510);
	}
	static ::System::Boolean* StaticGet_KDFBGHAOLAE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HLKFMJPHIME_TypeDefinitionIndex)->GetStaticField(0xC511);
	}
	static ::System::Boolean* StaticGet_BBPKCHKCNKC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HLKFMJPHIME_TypeDefinitionIndex)->GetStaticField(0xC512);
	}
	static ::System::Boolean* StaticGet_HFANNAKOAPB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HLKFMJPHIME_TypeDefinitionIndex)->GetStaticField(0xC513);
	}
	// static const ::System::String* IJCBKKPHBCP; // 0x0
	// static const ::System::String* LEHMFEEKFOF; // 0x0
	// static const ::System::Single ABBPHMGBDEG; // 0x0
	::HJDNNLKBHBA* POBADKEDFOE; // 0x50
	::System::Collections::Generic::List_1<::FJGDLDIGJAE*>* IKBALCFLCIK; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* FLLAIODPFPA; // 0x60
	::FLFECLGHPEP* DFMKILICPFB; // 0x68
	::System::Collections::Generic::List_1<::KAOHIFFJNFF*>* ODFAKGBLDFI; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* FPPIGCNFPCB; // 0x78
	::System::Collections::Generic::List_1<::System::UInt32>* AGOJDOIGCGD; // 0x80
	::DIAEPBNFKBO* IMJFJEBDKAF; // 0x88
	::System::String* NMPDGJGOAOA; // 0x90
	::System::Double FCNLKFLNLMC; // 0x98
	::System::Double NODDOPENBOF; // 0xA0
	::System::UInt32 HPDDJJPINCM; // 0xA8
	::System::UInt32 BGKHCGNMMKD; // 0xAC
	::System::Boolean BIIGPMAGIKO; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLKFMJPHIME__CCTOR_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::OOHOOAFNBNF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_BBOMJDBNHIC_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, DFMKILICPFB);
	}

	::System::Void MMGMBDMNCLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_MMGMBDMNCLF_OFFSET))(this);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void BJBMHDBFPEK(::FJGDLDIGJAE* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_BJBMHDBFPEK_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void EJGLAFHCJMH(::LFBBIECPOLF& FIHAFNMKPIH)
	{
		return ((::System::Void(*)(::PVOID, ::LFBBIECPOLF&))((::PBYTE)hIl2Cpp + HLKFMJPHIME_EJGLAFHCJMH_OFFSET))(this, FIHAFNMKPIH);
	}

	::System::Boolean KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void FNJCCBLGAFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_FNJCCBLGAFD_OFFSET))(this);
	}

	::System::UInt16& FGBJJGLDODB()
	{
		return ((::System::UInt16&(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_FGBJJGLDODB_OFFSET))(this);
	}

	::System::Void LBODGKNICHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLKFMJPHIME_LBODGKNICHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean AHELBEPODDM(::KMIGPEONHJE* GPINBMEPPCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::KMIGPEONHJE*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_AHELBEPODDM_OFFSET))(this, GPINBMEPPCD);
	}

	::MoleMole::Battle::Entity* BNKNMBJDKKN(::LFGBJHCEJID& KGLHEPAALDB, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::LFGBJHCEJID&, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_BNKNMBJDKKN_OFFSET))(this, KGLHEPAALDB, NCIMBHDKIJM, FFNKDGGHBPP);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GCJDFMBFDPE(::LFGBJHCEJID& KGLHEPAALDB, ::ENGKPGFGGLM* FFNKDGGHBPP, ::System::UInt32 CCOIAGNGLNK)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::LFGBJHCEJID&, ::ENGKPGFGGLM*, ::System::UInt32))((::PBYTE)hIl2Cpp + HLKFMJPHIME_GCJDFMBFDPE_OFFSET))(this, KGLHEPAALDB, FFNKDGGHBPP, CCOIAGNGLNK);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void GHLENGABHNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_GHLENGABHNA_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_FIGPAOKNJLN_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* PCPECIKIPMB(::UnityEngine::Vector3 CBPFCJODEBP, ::UnityEngine::Vector3 FJDFGDFPJBE, ::LFGBJHCEJID& KGLHEPAALDB, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM, ::System::UInt32 CCOIAGNGLNK, ::System::UInt32 DCHLBALBDIM, ::System::UInt32 LONFEKGCBOD, ::System::UInt32 LOMIODJNMKE)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::LFGBJHCEJID&, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HLKFMJPHIME_PCPECIKIPMB_OFFSET))(this, CBPFCJODEBP, FJDFGDFPJBE, KGLHEPAALDB, NCIMBHDKIJM, CCOIAGNGLNK, DCHLBALBDIM, LONFEKGCBOD, LOMIODJNMKE);
	}

	::System::Void NCDOALMKGJD(::FLFECLGHPEP* DFMKILICPFB, ::MoleMole::Battle::Entity* NAPEOKMONIB, ::System::UInt32 LONFEKGCBOD, ::System::UInt32 LOMIODJNMKE)
	{
		return ((::System::Void(*)(::PVOID, ::FLFECLGHPEP*, ::MoleMole::Battle::Entity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HLKFMJPHIME_NCDOALMKGJD_OFFSET))(this, DFMKILICPFB, NAPEOKMONIB, LONFEKGCBOD, LOMIODJNMKE);
	}

	::System::Void PNHPDOBPKKE(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::OOHOOAFNBNF* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void CJKKDGIIBCP(::FLFECLGHPEP* NLEJNACGBJM, ::MoleMole::Battle::Entity* NAPEOKMONIB)
	{
		return ((::System::Void(*)(::PVOID, ::FLFECLGHPEP*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_CJKKDGIIBCP_OFFSET))(this, NLEJNACGBJM, NAPEOKMONIB);
	}

	static ::UnityEngine::Rigidbody* AEJHJMHJJAH(::UnityEngine::GameObject* GENFJNEPKEA, ::UnityEngine::Vector3 KEIBFKHFLAJ)
	{
		return ((::UnityEngine::Rigidbody*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HLKFMJPHIME_AEJHJMHJJAH_OFFSET))(GENFJNEPKEA, KEIBFKHFLAJ);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_BBJHAJJPFKG_OFFSET))(this);
	}

	::System::Void BFFGDDOFGNB(::FJGDLDIGJAE* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_BFFGDDOFGNB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IBHAEIPFJOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_IBHAEIPFJOH_OFFSET))(this);
	}

	::System::Void NIGOKBKHGOD(::FLFECLGHPEP* DFMKILICPFB, ::MoleMole::Battle::Entity* NAPEOKMONIB, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::FLFECLGHPEP*, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + HLKFMJPHIME_NIGOKBKHGOD_OFFSET))(this, DFMKILICPFB, NAPEOKMONIB, MDPPNMIPDMP);
	}

	::System::Void FCBKGNCLDKL(::LFBBIECPOLF& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LFBBIECPOLF&))((::PBYTE)hIl2Cpp + HLKFMJPHIME_FCBKGNCLDKL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean GKPFCGFIPGB(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_GKPFCGFIPGB_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* GCKHEFEPNEC(::MoleMole::Battle::Entity* KDEHMPGOCEP, ::System::String* GPMKNAIINNH)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_GCKHEFEPNEC_OFFSET))(this, KDEHMPGOCEP, GPMKNAIINNH);
	}

	::System::Void LHLBNDFAMNE(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLKFMJPHIME_LHLBNDFAMNE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IDMOFKLLOCK(::FJGDLDIGJAE* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_IDMOFKLLOCK_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void MFGPGNOOOFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_MFGPGNOOOFE_OFFSET))(this);
	}

	::System::Boolean EKELMGBPABH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_EKELMGBPABH_OFFSET))(this);
	}

	::System::Void IAAKOIBFMPM(::FLFECLGHPEP* NLEJNACGBJM, ::MoleMole::Battle::Entity* NAPEOKMONIB)
	{
		return ((::System::Void(*)(::PVOID, ::FLFECLGHPEP*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_IAAKOIBFMPM_OFFSET))(this, NLEJNACGBJM, NAPEOKMONIB);
	}

	::System::Void MKAAGPCLMOE(::MoleMole::Battle::Entity* NAPEOKMONIB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_MKAAGPCLMOE_OFFSET))(this, NAPEOKMONIB);
	}

	::System::Boolean LKBCEFHMJHE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_LKBCEFHMJHE_OFFSET))(this);
	}

	::System::Void GFIMIBOOBEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_GFIMIBOOBEO_OFFSET))(this);
	}

	::System::Boolean NIOMKDAJDMM(::FAKIEIBPKCK* CGIEPNDELPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FAKIEIBPKCK*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_NIOMKDAJDMM_OFFSET))(this, CGIEPNDELPK);
	}

	::System::Void KJPOKECACOE(::LFGBJHCEJID& KGLHEPAALDB)
	{
		return ((::System::Void(*)(::PVOID, ::LFGBJHCEJID&))((::PBYTE)hIl2Cpp + HLKFMJPHIME_KJPOKECACOE_OFFSET))(this, KGLHEPAALDB);
	}

	::System::Void CDIMEJGDFOG(::System::UInt32& LONFEKGCBOD, ::System::UInt32& LOMIODJNMKE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + HLKFMJPHIME_CDIMEJGDFOG_OFFSET))(this, LONFEKGCBOD, LOMIODJNMKE);
	}

	::System::Boolean MIHDENAHMEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_MIHDENAHMEC_OFFSET))(this);
	}

	::System::Void FHGDDLCPJPC(::MoleMole::Battle::Entity* NAPEOKMONIB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_FHGDDLCPJPC_OFFSET))(this, NAPEOKMONIB);
	}

	::System::Void GJKNOCJCHNF(::FLFECLGHPEP* DFMKILICPFB, ::MoleMole::Battle::Entity* NAPEOKMONIB)
	{
		return ((::System::Void(*)(::PVOID, ::FLFECLGHPEP*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_GJKNOCJCHNF_OFFSET))(this, DFMKILICPFB, NAPEOKMONIB);
	}

	::System::UInt16& OOFDLGFHPKB()
	{
		return ((::System::UInt16&(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_OOFDLGFHPKB_OFFSET))(this);
	}

	::System::Void PHIEOGGGHBH(::FLFECLGHPEP* NLEJNACGBJM, ::MoleMole::Battle::Entity* NAPEOKMONIB)
	{
		return ((::System::Void(*)(::PVOID, ::FLFECLGHPEP*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_PHIEOGGGHBH_OFFSET))(this, NLEJNACGBJM, NAPEOKMONIB);
	}

	::System::Void ADPMJBNGGBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_ADPMJBNGGBH_OFFSET))(this);
	}

	::System::Boolean OLMBJKCIDKJ(::System::UInt32& LOMIODJNMKE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + HLKFMJPHIME_OLMBJKCIDKJ_OFFSET))(this, LOMIODJNMKE);
	}

	::System::Void PCPGCPFCIOC(::FJGDLDIGJAE* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_PCPGCPFCIOC_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void LBCBMNCKDPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_LBCBMNCKDPG_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* MBPGHBIIMAH(::System::String* ALFCJABDJCP, ::UnityEngine::Vector3 JMFFGJMMCAC, ::UnityEngine::Vector3 LMGDIEPPBIC, ::UnityEngine::Vector3 DMJBOODLCNE, ::MoleMole::Config::ConfigMovement* POEDFEDGEAI, ::MoleMole::Config::ConfigRotation* DLJFAIIPPAN, ::System::Int32 FDIGNCKAMBO, ::System::Int32 GNBJANCHKMI, ::System::Int32 NAAJJMCACAA, ::System::Int32 NNGHCNMCIHL, ::System::Single IAPDECBJNKB, ::HPLCGHLHMNK CMGGOHFADAH, ::OKFBPMKBHDE CLGFKHNFHKB, ::HFNDLDPJIPK OGIGOPHMJEP, ::System::Int32 NIDKFHKLMNN, ::System::Single GDHHMLLCECL, ::JIMIDOPGJBC HAODIMHKOJB, ::System::Boolean KGPKMBFHFJA, ::System::Boolean FLBPBMJCDIL, ::System::Boolean INPILCIPIIK, ::System::Boolean NIBFIBIOBNO, ::MoleMole::Config::ConfigEntityAnimEvent* LEBCCFKLGEB, ::MoleMole::Config::ConfigEntityAnimEvent* FIFIEBNAJAP, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::String* DBIJOBOKGPH, ::MoleMole::Config::AbilityTargetting BLFJNMAJINC, ::System::String* NGMPMJOLABC, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::HPLCGHLHMNK, ::OKFBPMKBHDE, ::HFNDLDPJIPK, ::System::Int32, ::System::Single, ::JIMIDOPGJBC, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::ConfigEntityAnimEvent*, ::MoleMole::Config::ConfigEntityAnimEvent*, ::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Config::AbilityTargetting, ::System::String*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_MBPGHBIIMAH_OFFSET))(this, ALFCJABDJCP, JMFFGJMMCAC, LMGDIEPPBIC, DMJBOODLCNE, POEDFEDGEAI, DLJFAIIPPAN, FDIGNCKAMBO, GNBJANCHKMI, NAAJJMCACAA, NNGHCNMCIHL, IAPDECBJNKB, CMGGOHFADAH, CLGFKHNFHKB, OGIGOPHMJEP, NIDKFHKLMNN, GDHHMLLCECL, HAODIMHKOJB, KGPKMBFHFJA, FLBPBMJCDIL, INPILCIPIIK, NIBFIBIOBNO, LEBCCFKLGEB, FIFIEBNAJAP, AMNIHACKELI, DBIJOBOKGPH, BLFJNMAJINC, NGMPMJOLABC, NCIMBHDKIJM);
	}

	::System::Boolean JFHPNLGILEI(::System::UInt32& LONFEKGCBOD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + HLKFMJPHIME_JFHPNLGILEI_OFFSET))(this, LONFEKGCBOD);
	}

	::System::Void NHAAMECCJDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKFMJPHIME_NHAAMECCJDF_OFFSET))(this);
	}

	::System::Void MGPMAOJBGHF(::FJGDLDIGJAE* FFNKDGGHBPP, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + HLKFMJPHIME_MGPMAOJBGHF_OFFSET))(this, FFNKDGGHBPP, NCIMBHDKIJM);
	}
};
