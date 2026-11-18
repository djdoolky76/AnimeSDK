#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANKBGMKLIJP.h"
#include "unitysdk/GKHEMPJCONG.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AIFGNKADBKN.h"
#include "unitysdk/BLAMMKDGAAC.h"
#include "unitysdk/ECLDJGAJPJM.h"
#include "unitysdk/HNIHOHFIEKD.h"
#include "unitysdk/JPLGICECOCO.h"
#include "unitysdk/MCKCKBEGCCM.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class BFLPANDDGHG;
class ENGKPGFGGLM;
class GKNGGHDFOIE;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { template <typename T> class QuickList_1; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMINBHLDOMC_AAMPBEGFKIG_1_OFFSET UNITYSDK_OFFSET(0x1C66B1A0)
#define PMINBHLDOMC_AAMPBEGFKIG_OFFSET UNITYSDK_OFFSET(0x1C66A490)
#define PMINBHLDOMC_AFACFKBHGDA_OFFSET UNITYSDK_OFFSET(0x1C6696B0)
#define PMINBHLDOMC_BIFFPLPKPNF_OFFSET UNITYSDK_OFFSET(0x1C669D30)
#define PMINBHLDOMC_BIPJICAABPC_OFFSET UNITYSDK_OFFSET(0x1C665CF0)
#define PMINBHLDOMC_BNCDEHHGLDH_OFFSET UNITYSDK_OFFSET(0x1C666770)
#define PMINBHLDOMC_CBGBEGBKPIM_OFFSET UNITYSDK_OFFSET(0x1C664980)
#define PMINBHLDOMC_CHLMHFFBFLE_OFFSET UNITYSDK_OFFSET(0x1C664AE0)
#define PMINBHLDOMC_CKIJCAJAMHK_OFFSET UNITYSDK_OFFSET(0x1C666E70)
#define PMINBHLDOMC_CODNFJOFCAI_OFFSET UNITYSDK_OFFSET(0x1C66ACB0)
#define PMINBHLDOMC_DDIANCLDFND_2_OFFSET UNITYSDK_OFFSET(0x1C666D30)
#define PMINBHLDOMC_DDIANCLDFND_3_OFFSET UNITYSDK_OFFSET(0x1C667450)
#define PMINBHLDOMC_DDIANCLDFND_4_OFFSET UNITYSDK_OFFSET(0x1C668730)
#define PMINBHLDOMC_DDIANCLDFND_5_OFFSET UNITYSDK_OFFSET(0x1C66A720)
#define PMINBHLDOMC_DDIANCLDFND_6_OFFSET UNITYSDK_OFFSET(0x1C66B740)
#define PMINBHLDOMC_DDIANCLDFND_OFFSET UNITYSDK_OFFSET(0x1C666960)
#define PMINBHLDOMC_DEEBJBHOPFK_11_OFFSET UNITYSDK_OFFSET(0x1C668320)
#define PMINBHLDOMC_DEEBJBHOPFK_OFFSET UNITYSDK_OFFSET(0x1C664550)
#define PMINBHLDOMC_DFFOPKFCPKI_1_OFFSET UNITYSDK_OFFSET(0x1C66B490)
#define PMINBHLDOMC_DFFOPKFCPKI_OFFSET UNITYSDK_OFFSET(0x1C6672B0)
#define PMINBHLDOMC_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x1C666A80)
#define PMINBHLDOMC_DIFFIJIBAPH_OFFSET UNITYSDK_OFFSET(0x1C667930)
#define PMINBHLDOMC_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x1C665920)
#define PMINBHLDOMC_DOGHENLAKHN_1_OFFSET UNITYSDK_OFFSET(0x1C6662D0)
#define PMINBHLDOMC_DOGHENLAKHN_3_OFFSET UNITYSDK_OFFSET(0x1C667EE0)
#define PMINBHLDOMC_DOGHENLAKHN_4_OFFSET UNITYSDK_OFFSET(0x1C6681E0)
#define PMINBHLDOMC_DOGHENLAKHN_5_OFFSET UNITYSDK_OFFSET(0x1C669410)
#define PMINBHLDOMC_DOGHENLAKHN_6_OFFSET UNITYSDK_OFFSET(0x1C66A230)
#define PMINBHLDOMC_DOGHENLAKHN_OFFSET UNITYSDK_OFFSET(0x1C665F00)
#define PMINBHLDOMC_EJPKKJMDMID_15_OFFSET UNITYSDK_OFFSET(0x1C668560)
#define PMINBHLDOMC_EJPKKJMDMID_22_OFFSET UNITYSDK_OFFSET(0x1C66B240)
#define PMINBHLDOMC_ENKPPGKAABI_17_OFFSET UNITYSDK_OFFSET(0x1C66AFD0)
#define PMINBHLDOMC_EOAIOCIBFIM_OFFSET UNITYSDK_OFFSET(0x1C66A840)
#define PMINBHLDOMC_FKHHLOONBEI_1_OFFSET UNITYSDK_OFFSET(0x1C664870)
#define PMINBHLDOMC_FKHHLOONBEI_OFFSET UNITYSDK_OFFSET(0x1C6647D0)
#define PMINBHLDOMC_FONKJJEKKLK_1_OFFSET UNITYSDK_OFFSET(0x1C669610)
#define PMINBHLDOMC_FONKJJEKKLK_OFFSET UNITYSDK_OFFSET(0x1C667980)
#define PMINBHLDOMC_GDEGNIGOAEP_13_OFFSET UNITYSDK_OFFSET(0x1C6691C0)
#define PMINBHLDOMC_GDEGNIGOAEP_9_OFFSET UNITYSDK_OFFSET(0x1C6677B0)
#define PMINBHLDOMC_HDDCBKBFNLK_OFFSET UNITYSDK_OFFSET(0x1C669380)
#define PMINBHLDOMC_HHBDGMBNAEG_OFFSET UNITYSDK_OFFSET(0x1C66A350)
#define PMINBHLDOMC_HICHGFDCEJI_OFFSET UNITYSDK_OFFSET(0x1C66AA40)
#define PMINBHLDOMC_HMDAFGEHFKJ_OFFSET UNITYSDK_OFFSET(0x1C6670A0)
#define PMINBHLDOMC_HMGOCMDEADN_OFFSET UNITYSDK_OFFSET(0x1C66BAA0)
#define PMINBHLDOMC_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1C668020)
#define PMINBHLDOMC_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0x1C669840)
#define PMINBHLDOMC_JHPHDGMCJHN_1_OFFSET UNITYSDK_OFFSET(0x1C668E30)
#define PMINBHLDOMC_JHPHDGMCJHN_OFFSET UNITYSDK_OFFSET(0x1C6663F0)
#define PMINBHLDOMC_KGDKMKMMOIK_OFFSET UNITYSDK_OFFSET(0x1C66B390)
#define PMINBHLDOMC_KINLEOAMIDB_9_OFFSET UNITYSDK_OFFSET(0x1C668C50)
#define PMINBHLDOMC_KIOEDEAENNB_OFFSET UNITYSDK_OFFSET(0x1C666AD0)
#define PMINBHLDOMC_KMCJKIJOKKA_OFFSET UNITYSDK_OFFSET(0x1C664BD0)
#define PMINBHLDOMC_LEMMGGJGPCL_OFFSET UNITYSDK_OFFSET(0x1C669D90)
#define PMINBHLDOMC_LIKHJHAOMOE_OFFSET UNITYSDK_OFFSET(0x1C667150)
#define PMINBHLDOMC_LJJLPOADMDG_OFFSET UNITYSDK_OFFSET(0x1C6684D0)
#define PMINBHLDOMC_LNFLDBGPCGK_OFFSET UNITYSDK_OFFSET(0x1C668930)
#define PMINBHLDOMC_LOLEINAONAG_OFFSET UNITYSDK_OFFSET(0x1C66AEB0)
#define PMINBHLDOMC_MFJJLECHNOL_OFFSET UNITYSDK_OFFSET(0x1C66A120)
#define PMINBHLDOMC_MJOGPAJHFHD_OFFSET UNITYSDK_OFFSET(0x1C6656A0)
#define PMINBHLDOMC_MLDAHIJLNMD_14_OFFSET UNITYSDK_OFFSET(0x1C669E10)
#define PMINBHLDOMC_MOHHAAGNLEL_1_OFFSET UNITYSDK_OFFSET(0x1C66B610)
#define PMINBHLDOMC_MOHHAAGNLEL_OFFSET UNITYSDK_OFFSET(0x1C66B4E0)
#define PMINBHLDOMC_NJPKAFBFJKK_OFFSET UNITYSDK_OFFSET(0x1C667720)
#define PMINBHLDOMC_NPMPBOOBMDM_OFFSET UNITYSDK_OFFSET(0x1C66AE50)
#define PMINBHLDOMC_OCLDFAAIAKJ_OFFSET UNITYSDK_OFFSET(0x1C669FE0)
#define PMINBHLDOMC_OOEMKPDFPGF_OFFSET UNITYSDK_OFFSET(0x1C667B40)
#define PMINBHLDOMC_OOHLLCLGOBA_OFFSET UNITYSDK_OFFSET(0x1C6676C0)
#define PMINBHLDOMC_PEIIBLEKAON_OFFSET UNITYSDK_OFFSET(0x1C66B940)
#define PMINBHLDOMC_PGACKCJMGMJ_OFFSET UNITYSDK_OFFSET(0x1C668B90)
#define PMINBHLDOMC_PGLIPOEJMNE_OFFSET UNITYSDK_OFFSET(0x1C666CD0)
#define PMINBHLDOMC_PIDIPMHEPNJ_6_OFFSET UNITYSDK_OFFSET(0x1C666100)
#define PMINBHLDOMC_PMGJFAHDMOC_OFFSET UNITYSDK_OFFSET(0x1C667590)
#define PMINBHLDOMC_PNBOOAHAJFG_1_OFFSET UNITYSDK_OFFSET(0x1C668A90)
#define PMINBHLDOMC_PNBOOAHAJFG_OFFSET UNITYSDK_OFFSET(0x1C6646D0)

inline static constexpr unsigned int PMINBHLDOMC_TypeDefinitionIndex = 84752;

class PMINBHLDOMC : public ::System::Object
{
public:
	static ::System::Void DEEBJBHOPFK(::System::Action_1<::ENGKPGFGGLM*>* EJGDHCIBCJH, ::MCKCKBEGCCM MCNHNKDMCIO)
	{
		return ((::System::Void(*)(::System::Action_1<::ENGKPGFGGLM*>*, ::MCKCKBEGCCM))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DEEBJBHOPFK_OFFSET))(EJGDHCIBCJH, MCNHNKDMCIO);
	}

	static ::System::Void PNBOOAHAJFG(::System::Action_1<::ENGKPGFGGLM*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action_1<::ENGKPGFGGLM*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_PNBOOAHAJFG_OFFSET))(EJGDHCIBCJH);
	}

	static ::System::Boolean FKHHLOONBEI(::MoleMole::EntityHandle NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + PMINBHLDOMC_FKHHLOONBEI_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Void CBGBEGBKPIM(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::System::Action_1<::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_CBGBEGBKPIM_OFFSET))(KECKGDFIALJ, EJGDHCIBCJH);
	}

	static ::System::Boolean CHLMHFFBFLE(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_CHLMHFFBFLE_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean KMCJKIJOKKA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::ICollection_1<::System::String*>* EGHBEKEHKGP, ::ANKBGMKLIJP DHGLCFGINLL)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::ANKBGMKLIJP))((::PBYTE)hIl2Cpp + PMINBHLDOMC_KMCJKIJOKKA_OFFSET))(KECKGDFIALJ, EGHBEKEHKGP, DHGLCFGINLL);
	}

	static ::System::Void DJDJKILDPGP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EntityType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DJDJKILDPGP_OFFSET))(KECKGDFIALJ, OBNIAHNMHPF);
	}

	static ::System::Void BIPJICAABPC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean EEJEJDGJIGH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMINBHLDOMC_BIPJICAABPC_OFFSET))(KECKGDFIALJ, EEJEJDGJIGH);
	}

	static ::System::Void DOGHENLAKHN(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::System::Byte HOBKINFOOPB)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::System::Byte))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DOGHENLAKHN_OFFSET))(EJGDHCIBCJH, HOBKINFOOPB);
	}

	static ::System::Void PIDIPMHEPNJ_6(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM MCNHNKDMCIO, ::BLAMMKDGAAC CKFABDAMEJM)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM, ::BLAMMKDGAAC))((::PBYTE)hIl2Cpp + PMINBHLDOMC_PIDIPMHEPNJ_6_OFFSET))(EJGDHCIBCJH, MCNHNKDMCIO, CKFABDAMEJM);
	}

	static ::System::Void DOGHENLAKHN_1(::System::Delegate* EJGDHCIBCJH, ::MCKCKBEGCCM& NMALEFHDCFA)
	{
		return ((::System::Void(*)(::System::Delegate*, ::MCKCKBEGCCM&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DOGHENLAKHN_1_OFFSET))(EJGDHCIBCJH, NMALEFHDCFA);
	}

	static ::System::Boolean JHPHDGMCJHN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_JHPHDGMCJHN_OFFSET))(KECKGDFIALJ, JMDOANHOEJG);
	}

	static ::System::Void DDIANCLDFND(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM& NMALEFHDCFA)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DDIANCLDFND_OFFSET))(EJGDHCIBCJH, NMALEFHDCFA);
	}

	static ::System::Void DIEPHAJCGOE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DIEPHAJCGOE_OFFSET))(KECKGDFIALJ, FFNKDGGHBPP);
	}

	static ::System::Boolean PGLIPOEJMNE(::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + PMINBHLDOMC_PGLIPOEJMNE_OFFSET))(MKCOMJHINNJ);
	}

	static ::System::Void DDIANCLDFND_2(::System::Delegate* EJGDHCIBCJH, ::MCKCKBEGCCM NMALEFHDCFA)
	{
		return ((::System::Void(*)(::System::Delegate*, ::MCKCKBEGCCM))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DDIANCLDFND_2_OFFSET))(EJGDHCIBCJH, NMALEFHDCFA);
	}

	static ::System::Void CKIJCAJAMHK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_CKIJCAJAMHK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void LIKHJHAOMOE(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::System::Action_1<::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_LIKHJHAOMOE_OFFSET))(KECKGDFIALJ, EJGDHCIBCJH);
	}

	static ::System::Boolean DFFOPKFCPKI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DFFOPKFCPKI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void DDIANCLDFND_3(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM NMALEFHDCFA)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DDIANCLDFND_3_OFFSET))(EJGDHCIBCJH, NMALEFHDCFA);
	}

	static ::System::Void PMGJFAHDMOC(::System::Delegate* EJGDHCIBCJH, ::MCKCKBEGCCM& EDOBIHIHNCO, ::MCKCKBEGCCM& DOLAINAIEDB)
	{
		return ((::System::Void(*)(::System::Delegate*, ::MCKCKBEGCCM&, ::MCKCKBEGCCM&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_PMGJFAHDMOC_OFFSET))(EJGDHCIBCJH, EDOBIHIHNCO, DOLAINAIEDB);
	}

	static ::System::Boolean OOHLLCLGOBA(::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + PMINBHLDOMC_OOHLLCLGOBA_OFFSET))(MKCOMJHINNJ);
	}

	static ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* NJPKAFBFJKK()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)())((::PBYTE)hIl2Cpp + PMINBHLDOMC_NJPKAFBFJKK_OFFSET))();
	}

	static ::System::Void GDEGNIGOAEP_9(::System::Action_1<::ENGKPGFGGLM*>* EJGDHCIBCJH, ::GKHEMPJCONG CFMBGCMCNMM, ::MCKCKBEGCCM MCNHNKDMCIO)
	{
		return ((::System::Void(*)(::System::Action_1<::ENGKPGFGGLM*>*, ::GKHEMPJCONG, ::MCKCKBEGCCM))((::PBYTE)hIl2Cpp + PMINBHLDOMC_GDEGNIGOAEP_9_OFFSET))(EJGDHCIBCJH, CFMBGCMCNMM, MCNHNKDMCIO);
	}

	static ::System::Boolean DIFFIJIBAPH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DIFFIJIBAPH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean FONKJJEKKLK(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_FONKJJEKKLK_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Void KIOEDEAENNB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_KIOEDEAENNB_OFFSET))(KECKGDFIALJ, FFNKDGGHBPP);
	}

	static ::System::Void DOGHENLAKHN_3(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM NMALEFHDCFA)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DOGHENLAKHN_3_OFFSET))(EJGDHCIBCJH, NMALEFHDCFA);
	}

	static ::System::Void HMLGKBFFNHI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_HMLGKBFFNHI_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void DOGHENLAKHN_4(::System::Delegate* EJGDHCIBCJH, ::MCKCKBEGCCM NMALEFHDCFA)
	{
		return ((::System::Void(*)(::System::Delegate*, ::MCKCKBEGCCM))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DOGHENLAKHN_4_OFFSET))(EJGDHCIBCJH, NMALEFHDCFA);
	}

	static ::System::Void DEEBJBHOPFK_11(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM MCNHNKDMCIO, ::HNIHOHFIEKD PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM, ::HNIHOHFIEKD))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DEEBJBHOPFK_11_OFFSET))(EJGDHCIBCJH, MCNHNKDMCIO, PNPMMLNCDNK);
	}

	static ::System::Void LJJLPOADMDG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_LJJLPOADMDG_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void EJPKKJMDMID_15(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM MCNHNKDMCIO, ::BLAMMKDGAAC CKFABDAMEJM)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM, ::BLAMMKDGAAC))((::PBYTE)hIl2Cpp + PMINBHLDOMC_EJPKKJMDMID_15_OFFSET))(EJGDHCIBCJH, MCNHNKDMCIO, CKFABDAMEJM);
	}

	static ::System::Void DDIANCLDFND_4(::System::Delegate* EJGDHCIBCJH, ::System::Byte HOBKINFOOPB)
	{
		return ((::System::Void(*)(::System::Delegate*, ::System::Byte))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DDIANCLDFND_4_OFFSET))(EJGDHCIBCJH, HOBKINFOOPB);
	}

	static ::System::Void LNFLDBGPCGK(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::System::Action_1<::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_LNFLDBGPCGK_OFFSET))(KECKGDFIALJ, EJGDHCIBCJH);
	}

	static ::System::Void PNBOOAHAJFG_1(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_PNBOOAHAJFG_1_OFFSET))(EJGDHCIBCJH);
	}

	static ::System::Void PGACKCJMGMJ(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_PGACKCJMGMJ_OFFSET))(FNGBEJKAECI);
	}

	static ::System::Void KINLEOAMIDB_9(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::GKHEMPJCONG CFMBGCMCNMM, ::MCKCKBEGCCM MCNHNKDMCIO, ::BLAMMKDGAAC CKFABDAMEJM)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::GKHEMPJCONG, ::MCKCKBEGCCM, ::BLAMMKDGAAC))((::PBYTE)hIl2Cpp + PMINBHLDOMC_KINLEOAMIDB_9_OFFSET))(EJGDHCIBCJH, CFMBGCMCNMM, MCNHNKDMCIO, CKFABDAMEJM);
	}

	static ::System::Boolean JHPHDGMCJHN_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::ICollection_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_JHPHDGMCJHN_1_OFFSET))(KECKGDFIALJ, JMDOANHOEJG);
	}

	static ::System::Void GDEGNIGOAEP_13(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::GKHEMPJCONG CFMBGCMCNMM, ::MCKCKBEGCCM MCNHNKDMCIO, ::HNIHOHFIEKD PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::GKHEMPJCONG, ::MCKCKBEGCCM, ::HNIHOHFIEKD))((::PBYTE)hIl2Cpp + PMINBHLDOMC_GDEGNIGOAEP_13_OFFSET))(EJGDHCIBCJH, CFMBGCMCNMM, MCNHNKDMCIO, PNPMMLNCDNK);
	}

	static ::BFLPANDDGHG* HDDCBKBFNLK(::MoleMole::EntityHandle NFFNEFLKPDG)
	{
		return ((::BFLPANDDGHG*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + PMINBHLDOMC_HDDCBKBFNLK_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Void DOGHENLAKHN_5(::System::Delegate* EJGDHCIBCJH, ::System::Byte HOBKINFOOPB)
	{
		return ((::System::Void(*)(::System::Delegate*, ::System::Byte))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DOGHENLAKHN_5_OFFSET))(EJGDHCIBCJH, HOBKINFOOPB);
	}

	static ::System::Boolean FONKJJEKKLK_1(::MoleMole::EntityHandle NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + PMINBHLDOMC_FONKJJEKKLK_1_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Void AFACFKBHGDA(::System::Delegate* EJGDHCIBCJH, ::MCKCKBEGCCM MCNHNKDMCIO, ::System::Boolean LLKENPEOKFC)
	{
		return ((::System::Void(*)(::System::Delegate*, ::MCKCKBEGCCM, ::System::Boolean))((::PBYTE)hIl2Cpp + PMINBHLDOMC_AFACFKBHGDA_OFFSET))(EJGDHCIBCJH, MCNHNKDMCIO, LLKENPEOKFC);
	}

	static ::System::Void INOKFEPEEDJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_INOKFEPEEDJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean LEMMGGJGPCL(::MoleMole::EntityHandle NFFNEFLKPDG, ::MoleMole::Config::BaseProperty JHFKODOOENA)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + PMINBHLDOMC_LEMMGGJGPCL_OFFSET))(NFFNEFLKPDG, JHFKODOOENA);
	}

	static ::System::Void MLDAHIJLNMD_14(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM MCNHNKDMCIO, ::BLAMMKDGAAC CKFABDAMEJM)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM, ::BLAMMKDGAAC))((::PBYTE)hIl2Cpp + PMINBHLDOMC_MLDAHIJLNMD_14_OFFSET))(EJGDHCIBCJH, MCNHNKDMCIO, CKFABDAMEJM);
	}

	static ::System::Void OCLDFAAIAKJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean NPCCGHNEADK)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMINBHLDOMC_OCLDFAAIAKJ_OFFSET))(KECKGDFIALJ, NPCCGHNEADK);
	}

	static ::System::Boolean MFJJLECHNOL(::MoleMole::EntityHandle NFFNEFLKPDG, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::ECLDJGAJPJM& LHPFMGBDFPN)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::Config::BaseProperty, ::ECLDJGAJPJM&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_MFJJLECHNOL_OFFSET))(NFFNEFLKPDG, OBNIAHNMHPF, LHPFMGBDFPN);
	}

	static ::System::Boolean BNCDEHHGLDH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + PMINBHLDOMC_BNCDEHHGLDH_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}

	static ::System::Boolean MJOGPAJHFHD(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& FNPDIEIKMPE)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_MJOGPAJHFHD_OFFSET))(KECKGDFIALJ, FNPDIEIKMPE);
	}

	static ::System::Void DOGHENLAKHN_6(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM& NMALEFHDCFA)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DOGHENLAKHN_6_OFFSET))(EJGDHCIBCJH, NMALEFHDCFA);
	}

	static ::System::Void HHBDGMBNAEG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean NPCCGHNEADK)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMINBHLDOMC_HHBDGMBNAEG_OFFSET))(KECKGDFIALJ, NPCCGHNEADK);
	}

	static ::System::Boolean AAMPBEGFKIG(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_AAMPBEGFKIG_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Boolean HMDAFGEHFKJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::GKNGGHDFOIE*& GLAIPAHCIKA)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::GKNGGHDFOIE*&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_HMDAFGEHFKJ_OFFSET))(KECKGDFIALJ, GLAIPAHCIKA);
	}

	static ::System::Boolean FKHHLOONBEI_1(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_FKHHLOONBEI_1_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Void DDIANCLDFND_5(::System::Delegate* EJGDHCIBCJH, ::MCKCKBEGCCM& NMALEFHDCFA)
	{
		return ((::System::Void(*)(::System::Delegate*, ::MCKCKBEGCCM&))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DDIANCLDFND_5_OFFSET))(EJGDHCIBCJH, NMALEFHDCFA);
	}

	static ::System::Boolean EOAIOCIBFIM(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* DJLOKMMLFJC, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* FPPOOCHLOHJ)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_EOAIOCIBFIM_OFFSET))(DJLOKMMLFJC, FPPOOCHLOHJ);
	}

	static ::System::Void HICHGFDCEJI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* BHNHOEONIBL)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_HICHGFDCEJI_OFFSET))(KECKGDFIALJ, BHNHOEONIBL);
	}

	static ::System::Void CODNFJOFCAI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_CODNFJOFCAI_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void LOLEINAONAG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::JPLGICECOCO ANJBNHAHCAJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::JPLGICECOCO))((::PBYTE)hIl2Cpp + PMINBHLDOMC_LOLEINAONAG_OFFSET))(KECKGDFIALJ, ANJBNHAHCAJ);
	}

	static ::System::Void ENKPPGKAABI_17(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM MCNHNKDMCIO, ::BLAMMKDGAAC CKFABDAMEJM)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM, ::BLAMMKDGAAC))((::PBYTE)hIl2Cpp + PMINBHLDOMC_ENKPPGKAABI_17_OFFSET))(EJGDHCIBCJH, MCNHNKDMCIO, CKFABDAMEJM);
	}

	static ::System::Boolean AAMPBEGFKIG_1(::MoleMole::EntityHandle NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + PMINBHLDOMC_AAMPBEGFKIG_1_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Void OOEMKPDFPGF(::Nap::NapECS::QuickList_1<::AIFGNKADBKN>* EJGPLBPDMAN, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::Nap::NapECS::QuickList_1<::AIFGNKADBKN>*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_OOEMKPDFPGF_OFFSET))(EJGPLBPDMAN, KECKGDFIALJ, FFNKDGGHBPP);
	}

	static ::System::Boolean NPMPBOOBMDM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_NPMPBOOBMDM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void EJPKKJMDMID_22(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::MCKCKBEGCCM PNHNEENAEGD, ::Nap::NapECS::EcsFilter* PNPMMLNCDNK, ::System::Boolean MIIKPGNACCL)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::MCKCKBEGCCM, ::Nap::NapECS::EcsFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMINBHLDOMC_EJPKKJMDMID_22_OFFSET))(EJGDHCIBCJH, PNHNEENAEGD, PNPMMLNCDNK, MIIKPGNACCL);
	}

	static ::System::Void KGDKMKMMOIK(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_KGDKMKMMOIK_OFFSET))(EJGDHCIBCJH);
	}

	static ::System::Boolean DFFOPKFCPKI_1(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DFFOPKFCPKI_1_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean MOHHAAGNLEL(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::ICollection_1<::System::String*>* JMDOANHOEJG, ::System::Boolean BFIAPCFMNFG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMINBHLDOMC_MOHHAAGNLEL_OFFSET))(KECKGDFIALJ, JMDOANHOEJG, BFIAPCFMNFG);
	}

	static ::System::Boolean MOHHAAGNLEL_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* JMDOANHOEJG, ::System::Boolean BFIAPCFMNFG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMINBHLDOMC_MOHHAAGNLEL_1_OFFSET))(KECKGDFIALJ, JMDOANHOEJG, BFIAPCFMNFG);
	}

	static ::System::Void DDIANCLDFND_6(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::System::Byte HOBKINFOOPB)
	{
		return ((::System::Void(*)(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::System::Byte))((::PBYTE)hIl2Cpp + PMINBHLDOMC_DDIANCLDFND_6_OFFSET))(EJGDHCIBCJH, HOBKINFOOPB);
	}

	static ::System::Void PEIIBLEKAON(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::System::Action_1<::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_PEIIBLEKAON_OFFSET))(KECKGDFIALJ, EJGDHCIBCJH);
	}

	static ::System::Void HMGOCMDEADN(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_HMGOCMDEADN_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean BIFFPLPKPNF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PMINBHLDOMC_BIFFPLPKPNF_OFFSET))(KECKGDFIALJ);
	}
};
