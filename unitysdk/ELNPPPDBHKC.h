#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEFCAFDPOIL.h"
#include "unitysdk/EDBDIPCOLIG.h"
#include "unitysdk/PDJDBADBCLM.h"
#include "unitysdk/System/Object.h"

class DEPCBKBGPDO;
class EFNFAOBLNAE;
class IBEFDKKACEC;
class MCJKEFBAHAD;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class EventHandler_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELNPPPDBHKC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x154BD520)
#define ELNPPPDBHKC_AEGOCGIPANM_OFFSET UNITYSDK_OFFSET(0x15E31520)
#define ELNPPPDBHKC_AOINDGCDDGM_OFFSET UNITYSDK_OFFSET(0x15E32010)
#define ELNPPPDBHKC_BMAEIGIFPFN_OFFSET UNITYSDK_OFFSET(0x15E328A0)
#define ELNPPPDBHKC_BNDBAJHMHHC_OFFSET UNITYSDK_OFFSET(0x15E32960)
#define ELNPPPDBHKC_CFIFEGBAPCG_OFFSET UNITYSDK_OFFSET(0x15E32640)
#define ELNPPPDBHKC_CGEGKPBMLCE_OFFSET UNITYSDK_OFFSET(0x154BE210)
#define ELNPPPDBHKC_CGGEOLMBNHD_OFFSET UNITYSDK_OFFSET(0x15E32C00)
#define ELNPPPDBHKC_CNCLNNCADFI_OFFSET UNITYSDK_OFFSET(0x154BEF80)
#define ELNPPPDBHKC_DCBGGIBIEHG_OFFSET UNITYSDK_OFFSET(0x154BEDC0)
#define ELNPPPDBHKC_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x154BD530)
#define ELNPPPDBHKC_DMMPDDIGBEP_OFFSET UNITYSDK_OFFSET(0x15E32700)
#define ELNPPPDBHKC_ECODAPAFGDA_1_OFFSET UNITYSDK_OFFSET(0x15E325B0)
#define ELNPPPDBHKC_ECODAPAFGDA_OFFSET UNITYSDK_OFFSET(0x15E31B90)
#define ELNPPPDBHKC_EGKHDOGJOAO_OFFSET UNITYSDK_OFFSET(0x15E32970)
#define ELNPPPDBHKC_EKNJFMIKLDF_OFFSET UNITYSDK_OFFSET(0x154BE5F0)
#define ELNPPPDBHKC_FEAMOBAPGFC_OFFSET UNITYSDK_OFFSET(0x154BD9F0)
#define ELNPPPDBHKC_GCMLPLNKGEE_1_OFFSET UNITYSDK_OFFSET(0x154BE640)
#define ELNPPPDBHKC_GCMLPLNKGEE_2_OFFSET UNITYSDK_OFFSET(0x154BE4F0)
#define ELNPPPDBHKC_GCMLPLNKGEE_4_OFFSET UNITYSDK_OFFSET(0x154BED60)
#define ELNPPPDBHKC_GCMLPLNKGEE_5_OFFSET UNITYSDK_OFFSET(0x154BE1B0)
#define ELNPPPDBHKC_GCMLPLNKGEE_7_OFFSET UNITYSDK_OFFSET(0x154BE6A0)
#define ELNPPPDBHKC_GCMLPLNKGEE_8_OFFSET UNITYSDK_OFFSET(0x154BEA00)
#define ELNPPPDBHKC_HLNABALDCPA_OFFSET UNITYSDK_OFFSET(0x15E316B0)
#define ELNPPPDBHKC_IHOKIGHLECP_OFFSET UNITYSDK_OFFSET(0x15E32810)
#define ELNPPPDBHKC_IJCKEDHICPP_OFFSET UNITYSDK_OFFSET(0x15E32B10)
#define ELNPPPDBHKC_IKOFJEHPPAN_OFFSET UNITYSDK_OFFSET(0x15E312A0)
#define ELNPPPDBHKC_IPNMBJHDOMK_OFFSET UNITYSDK_OFFSET(0x154BF340)
#define ELNPPPDBHKC_JFCDKEOOEEJ_OFFSET UNITYSDK_OFFSET(0x15E31980)
#define ELNPPPDBHKC_JJBJIGJAIPK_OFFSET UNITYSDK_OFFSET(0x15E31730)
#define ELNPPPDBHKC_JMANPNEFDIF_OFFSET UNITYSDK_OFFSET(0x15E31830)
#define ELNPPPDBHKC_JMLMOLPFCCD_OFFSET UNITYSDK_OFFSET(0x154BEEA0)
#define ELNPPPDBHKC_JOBJDBBKHBM_1_OFFSET UNITYSDK_OFFSET(0x154BE400)
#define ELNPPPDBHKC_JOBJDBBKHBM_2_OFFSET UNITYSDK_OFFSET(0x154BE550)
#define ELNPPPDBHKC_JOBJDBBKHBM_OFFSET UNITYSDK_OFFSET(0x154BE0B0)
#define ELNPPPDBHKC_JOELOCACOEH_OFFSET UNITYSDK_OFFSET(0x154BDF20)
#define ELNPPPDBHKC_JPFENBMDOHH_OFFSET UNITYSDK_OFFSET(0x15E31F20)
#define ELNPPPDBHKC_JPNMPBPALBM_OFFSET UNITYSDK_OFFSET(0x15E329F0)
#define ELNPPPDBHKC_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x15E325A0)
#define ELNPPPDBHKC_KHEJKAPIMAG_OFFSET UNITYSDK_OFFSET(0x15E314C0)
#define ELNPPPDBHKC_KHJKBELKFKM_OFFSET UNITYSDK_OFFSET(0x15E32A50)
#define ELNPPPDBHKC_KKOAAMFGBNM_1_OFFSET UNITYSDK_OFFSET(0x15E32400)
#define ELNPPPDBHKC_KKOAAMFGBNM_OFFSET UNITYSDK_OFFSET(0x15E32380)
#define ELNPPPDBHKC_KNFPMPPEHII_OFFSET UNITYSDK_OFFSET(0x154BF060)
#define ELNPPPDBHKC_LCCADKGLLJI_OFFSET UNITYSDK_OFFSET(0x15E31340)
#define ELNPPPDBHKC_LLCBDGDPKLI_OFFSET UNITYSDK_OFFSET(0x15E31A40)
#define ELNPPPDBHKC_LMGAOCENNFC_OFFSET UNITYSDK_OFFSET(0x15E31AA0)
#define ELNPPPDBHKC_MBHNJOGEEOF_OFFSET UNITYSDK_OFFSET(0x15E31EA0)
#define ELNPPPDBHKC_NEDNHLMPCLJ_1_OFFSET UNITYSDK_OFFSET(0x15E32150)
#define ELNPPPDBHKC_NEDNHLMPCLJ_OFFSET UNITYSDK_OFFSET(0x15E320D0)
#define ELNPPPDBHKC_OADNEAKMACM_OFFSET UNITYSDK_OFFSET(0x15E31930)
#define ELNPPPDBHKC_OKIAIHHBGHH_OFFSET UNITYSDK_OFFSET(0x15E32630)
#define ELNPPPDBHKC_PJEFJMKCLBL_OFFSET UNITYSDK_OFFSET(0x154BDD00)
#define ELNPPPDBHKC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E313B0)
#define ELNPPPDBHKC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x154BD6F0)
#define ELNPPPDBHKC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x154BDC20)
#define ELNPPPDBHKC__CTOR_OFFSET UNITYSDK_OFFSET(0x154BD540)

inline static constexpr unsigned int ELNPPPDBHKC_TypeDefinitionIndex = 48228;

class ELNPPPDBHKC : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::MCJKEFBAHAD*>** StaticGet_BKOJPFMJELN()
	{
		return (::System::Collections::Generic::HashSet_1<::MCJKEFBAHAD*>**)Il2CppClass::FromTypeDefinitionIndex(ELNPPPDBHKC_TypeDefinitionIndex)->GetStaticField(0x51E10);
	}
	static ::System::EventHandler_1<::DEPCBKBGPDO*>** StaticGet_MMICLMMIGEP()
	{
		return (::System::EventHandler_1<::DEPCBKBGPDO*>**)Il2CppClass::FromTypeDefinitionIndex(ELNPPPDBHKC_TypeDefinitionIndex)->GetStaticField(0x51E18);
	}
	static ::EFNFAOBLNAE** StaticGet_GBLEDHNDFCF()
	{
		return (::EFNFAOBLNAE**)Il2CppClass::FromTypeDefinitionIndex(ELNPPPDBHKC_TypeDefinitionIndex)->GetStaticField(0x51E20);
	}
	static ::System::Boolean* StaticGet_GGGGKPLJAOA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ELNPPPDBHKC_TypeDefinitionIndex)->GetStaticField(0x13750);
	}
	static ::System::Int32* StaticGet_IFCBBFKPBGM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ELNPPPDBHKC_TypeDefinitionIndex)->GetStaticField(0x13754);
	}
	::System::Exception* EIBOPNJBJGF; // 0x10
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::PDJDBADBCLM>* NBLHCJIFNLO; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* KPANMJEECCH; // 0x28
	::System::Collections::Generic::List_1<::DEFCAFDPOIL>* MDBMLDKMCLL; // 0x30
	::EDBDIPCOLIG _HPHAJDNAPKM_k__BackingField; // 0x38
	::System::Int32 MGMDLMBEDJF; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>* AHEDFMJIOLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC__CTOR_1_OFFSET))(this, AHEDFMJIOLN);
	}

	::System::Void _ctor_2(::EDBDIPCOLIG OECJIKMPHEE)
	{
		return ((::System::Void(*)(::PVOID, ::EDBDIPCOLIG))((::PBYTE)hIl2Cpp + ELNPPPDBHKC__CTOR_2_OFFSET))(this, OECJIKMPHEE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELNPPPDBHKC__CCTOR_OFFSET))();
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void FEAMOBAPGFC(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_FEAMOBAPGFC_OFFSET))(this, KMDHKNFMCAE);
	}

	::System::Void PJEFJMKCLBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_PJEFJMKCLBL_OFFSET))(this);
	}

	::System::Void JOELOCACOEH(::System::Single PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JOELOCACOEH_OFFSET))(this, PMGFIHJAJHL);
	}

	::System::Void JOBJDBBKHBM(::System::Action* HKJODKBNEJE, ::System::Action_1<::System::Exception*>* COKHBPKODGI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JOBJDBBKHBM_OFFSET))(this, HKJODKBNEJE, COKHBPKODGI);
	}

	::System::Void JOBJDBBKHBM_1(::System::Action* HKJODKBNEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JOBJDBBKHBM_1_OFFSET))(this, HKJODKBNEJE);
	}

	::System::Void JOBJDBBKHBM_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JOBJDBBKHBM_2_OFFSET))(this);
	}

	::EFNFAOBLNAE* EKNJFMIKLDF(::System::String* HIAIKHDFCLN)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_EKNJFMIKLDF_OFFSET))(this, HIAIKHDFCLN);
	}

	::EFNFAOBLNAE* CGEGKPBMLCE(::System::Action_1<::System::Exception*>* COKHBPKODGI)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CGEGKPBMLCE_OFFSET))(this, COKHBPKODGI);
	}

	::EFNFAOBLNAE* GCMLPLNKGEE_1(::System::Func_1<::EFNFAOBLNAE*>* HKJODKBNEJE)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_1<::EFNFAOBLNAE*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GCMLPLNKGEE_1_OFFSET))(this, HKJODKBNEJE);
	}

	::EFNFAOBLNAE* GCMLPLNKGEE_2(::System::Action* HKJODKBNEJE)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GCMLPLNKGEE_2_OFFSET))(this, HKJODKBNEJE);
	}

	::EFNFAOBLNAE* GCMLPLNKGEE_4(::System::Func_1<::EFNFAOBLNAE*>* HKJODKBNEJE, ::System::Action_1<::System::Exception*>* COKHBPKODGI)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_1<::EFNFAOBLNAE*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GCMLPLNKGEE_4_OFFSET))(this, HKJODKBNEJE, COKHBPKODGI);
	}

	::EFNFAOBLNAE* GCMLPLNKGEE_5(::System::Action* HKJODKBNEJE, ::System::Action_1<::System::Exception*>* COKHBPKODGI)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GCMLPLNKGEE_5_OFFSET))(this, HKJODKBNEJE, COKHBPKODGI);
	}

	::EFNFAOBLNAE* GCMLPLNKGEE_7(::System::Func_1<::EFNFAOBLNAE*>* HKJODKBNEJE, ::System::Action_1<::System::Exception*>* COKHBPKODGI, ::System::Action_1<::System::Single>* OFCBMOAKHHK)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_1<::EFNFAOBLNAE*>*, ::System::Action_1<::System::Exception*>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GCMLPLNKGEE_7_OFFSET))(this, HKJODKBNEJE, COKHBPKODGI, OFCBMOAKHHK);
	}

	::EFNFAOBLNAE* GCMLPLNKGEE_8(::System::Action* HKJODKBNEJE, ::System::Action_1<::System::Exception*>* COKHBPKODGI, ::System::Action_1<::System::Single>* OFCBMOAKHHK)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GCMLPLNKGEE_8_OFFSET))(this, HKJODKBNEJE, COKHBPKODGI, OFCBMOAKHHK);
	}

	::EFNFAOBLNAE* DCBGGIBIEHG(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>*>* CNOKOKGOHHK)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_DCBGGIBIEHG_OFFSET))(this, CNOKOKGOHHK);
	}

	::EFNFAOBLNAE* JMLMOLPFCCD(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::EFNFAOBLNAE*>*>*>* CNOKOKGOHHK)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::EFNFAOBLNAE*>*>*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JMLMOLPFCCD_OFFSET))(this, CNOKOKGOHHK);
	}

	::EFNFAOBLNAE* CNCLNNCADFI(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>*>* CNOKOKGOHHK)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CNCLNNCADFI_OFFSET))(this, CNOKOKGOHHK);
	}

	::EFNFAOBLNAE* KNFPMPPEHII(::System::Action* HKEBHFKHBCC)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KNFPMPPEHII_OFFSET))(this, HKEBHFKHBCC);
	}

	::EFNFAOBLNAE* IPNMBJHDOMK(::System::Func_1<::EFNFAOBLNAE*>* HKEBHFKHBCC)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_1<::EFNFAOBLNAE*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_IPNMBJHDOMK_OFFSET))(this, HKEBHFKHBCC);
	}

	::EFNFAOBLNAE* IKOFJEHPPAN(::System::Action_1<::System::Single>* OFCBMOAKHHK)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_IKOFJEHPPAN_OFFSET))(this, OFCBMOAKHHK);
	}

	::System::Void KHEJKAPIMAG(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KHEJKAPIMAG_OFFSET))(this, KMDHKNFMCAE);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MCJKEFBAHAD*>* HLNABALDCPA()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MCJKEFBAHAD*>*(*)())((::PBYTE)hIl2Cpp + ELNPPPDBHKC_HLNABALDCPA_OFFSET))();
	}

	::System::Void JJBJIGJAIPK(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JJBJIGJAIPK_OFFSET))(this, KMDHKNFMCAE);
	}

	::System::Void LCCADKGLLJI(::IBEFDKKACEC* AFKKKJKJEIC, ::System::Action_1<::System::Single>* ALEADJIBHMD)
	{
		return ((::System::Void(*)(::PVOID, ::IBEFDKKACEC*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_LCCADKGLLJI_OFFSET))(this, AFKKKJKJEIC, ALEADJIBHMD);
	}

	static ::System::Void AEGOCGIPANM(::System::Object* LIKBIMNLKBC, ::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_AEGOCGIPANM_OFFSET))(LIKBIMNLKBC, KMDHKNFMCAE);
	}

	::System::Void LLCBDGDPKLI(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_LLCBDGDPKLI_OFFSET))(this, KMDHKNFMCAE);
	}

	static ::System::Void LMGAOCENNFC(::System::EventHandler_1<::DEPCBKBGPDO*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::EventHandler_1<::DEPCBKBGPDO*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_LMGAOCENNFC_OFFSET))(EGEGIMGMJHN);
	}

	static ::EFNFAOBLNAE* ECODAPAFGDA(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::EFNFAOBLNAE*>*>* CKJNBMOLALN)
	{
		return ((::EFNFAOBLNAE*(*)(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::EFNFAOBLNAE*>*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_ECODAPAFGDA_OFFSET))(CKJNBMOLALN);
	}

	::System::Void JPFENBMDOHH(::System::Action* EJGDHCIBCJH, ::IBEFDKKACEC* KDMJNDFJFAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::IBEFDKKACEC*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JPFENBMDOHH_OFFSET))(this, EJGDHCIBCJH, KDMJNDFJFAA);
	}

	static ::EFNFAOBLNAE* MBHNJOGEEOF()
	{
		return ((::EFNFAOBLNAE*(*)())((::PBYTE)hIl2Cpp + ELNPPPDBHKC_MBHNJOGEEOF_OFFSET))();
	}

	::System::Void AOINDGCDDGM(::System::Action* HKJODKBNEJE, ::IBEFDKKACEC* KDMJNDFJFAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::IBEFDKKACEC*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_AOINDGCDDGM_OFFSET))(this, HKJODKBNEJE, KDMJNDFJFAA);
	}

	static ::EFNFAOBLNAE* NEDNHLMPCLJ(::Il2CppArray<::EFNFAOBLNAE*>* PHNOHHNCOJC)
	{
		return ((::EFNFAOBLNAE*(*)(::Il2CppArray<::EFNFAOBLNAE*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_NEDNHLMPCLJ_OFFSET))(PHNOHHNCOJC);
	}

	static ::EFNFAOBLNAE* KKOAAMFGBNM(::Il2CppArray<::EFNFAOBLNAE*>* PHNOHHNCOJC)
	{
		return ((::EFNFAOBLNAE*(*)(::Il2CppArray<::EFNFAOBLNAE*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KKOAAMFGBNM_OFFSET))(PHNOHHNCOJC);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::EFNFAOBLNAE* ECODAPAFGDA_1(::Il2CppArray<::System::Func_1<::EFNFAOBLNAE*>*>* CKJNBMOLALN)
	{
		return ((::EFNFAOBLNAE*(*)(::Il2CppArray<::System::Func_1<::EFNFAOBLNAE*>*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_ECODAPAFGDA_1_OFFSET))(CKJNBMOLALN);
	}

	static ::EFNFAOBLNAE* KKOAAMFGBNM_1(::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>* PHNOHHNCOJC)
	{
		return ((::EFNFAOBLNAE*(*)(::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KKOAAMFGBNM_1_OFFSET))(PHNOHHNCOJC);
	}

	::EDBDIPCOLIG OKIAIHHBGHH()
	{
		return ((::EDBDIPCOLIG(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_OKIAIHHBGHH_OFFSET))(this);
	}

	::System::Void CFIFEGBAPCG(::System::Single PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CFIFEGBAPCG_OFFSET))(this, PMGFIHJAJHL);
	}

	static ::EFNFAOBLNAE* IHOKIGHLECP(::System::Exception* KMDHKNFMCAE)
	{
		return ((::EFNFAOBLNAE*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_IHOKIGHLECP_OFFSET))(KMDHKNFMCAE);
	}

	::System::Void OADNEAKMACM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_OADNEAKMACM_OFFSET))(this);
	}

	::System::Void BMAEIGIFPFN(::System::Action_1<::System::Exception*>* COKHBPKODGI, ::IBEFDKKACEC* KDMJNDFJFAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::IBEFDKKACEC*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_BMAEIGIFPFN_OFFSET))(this, COKHBPKODGI, KDMJNDFJFAA);
	}

	::System::Void BNDBAJHMHHC(::EDBDIPCOLIG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EDBDIPCOLIG))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_BNDBAJHMHHC_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Int32 EGKHDOGJOAO()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ELNPPPDBHKC_EGKHDOGJOAO_OFFSET))();
	}

	::System::Void JPNMPBPALBM(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JPNMPBPALBM_OFFSET))(this, KMDHKNFMCAE);
	}

	::System::Void DMMPDDIGBEP(::System::Action_1<::System::Single>* EJGDHCIBCJH, ::IBEFDKKACEC* KDMJNDFJFAA, ::System::Single PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::IBEFDKKACEC*, ::System::Single))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_DMMPDDIGBEP_OFFSET))(this, EJGDHCIBCJH, KDMJNDFJFAA, PMGFIHJAJHL);
	}

	::System::Void JMANPNEFDIF(::System::Action_1<::System::Exception*>* EJGDHCIBCJH, ::IBEFDKKACEC* KDMJNDFJFAA, ::System::Exception* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::IBEFDKKACEC*, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JMANPNEFDIF_OFFSET))(this, EJGDHCIBCJH, KDMJNDFJFAA, EGEGIMGMJHN);
	}

	::System::Void JFCDKEOOEEJ(::System::Action_1<::System::Single>* OFCBMOAKHHK, ::IBEFDKKACEC* KDMJNDFJFAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::IBEFDKKACEC*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JFCDKEOOEEJ_OFFSET))(this, OFCBMOAKHHK, KDMJNDFJFAA);
	}

	::System::Void KHJKBELKFKM(::IBEFDKKACEC* AFKKKJKJEIC, ::System::Action* NILJHNNBOFJ, ::System::Action_1<::System::Exception*>* EHDNHONFBKB)
	{
		return ((::System::Void(*)(::PVOID, ::IBEFDKKACEC*, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KHJKBELKFKM_OFFSET))(this, AFKKKJKJEIC, NILJHNNBOFJ, EHDNHONFBKB);
	}

	static ::System::Void IJCKEDHICPP(::System::EventHandler_1<::DEPCBKBGPDO*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::EventHandler_1<::DEPCBKBGPDO*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_IJCKEDHICPP_OFFSET))(EGEGIMGMJHN);
	}

	static ::EFNFAOBLNAE* NEDNHLMPCLJ_1(::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>* PHNOHHNCOJC)
	{
		return ((::EFNFAOBLNAE*(*)(::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_NEDNHLMPCLJ_1_OFFSET))(PHNOHHNCOJC);
	}

	::System::Void CGGEOLMBNHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CGGEOLMBNHD_OFFSET))(this);
	}
};
