#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class AIMNKMEFBKE;
class DMGMDAFEFAP;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
class KFAGEHPLMJB;
class KFPLECNMLNF;
class LHOBLLEMGHB;
class MOCPBOFGDCP;
class OKCLMKOCLKL;
class PHEHGMEOKMB;
class PLAJONHLDJN;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAILIPBNAJL_ABEHKNBGHBL_OFFSET UNITYSDK_OFFSET(0x1C61F3C0)
#define HAILIPBNAJL_ACHGHOLLNBE_OFFSET UNITYSDK_OFFSET(0x1C6210A0)
#define HAILIPBNAJL_AIOEJCJOJPF_OFFSET UNITYSDK_OFFSET(0x1C623EA0)
#define HAILIPBNAJL_ALOENLBEPEE_OFFSET UNITYSDK_OFFSET(0x1C5EE2D0)
#define HAILIPBNAJL_ANGDOHMIPFN_OFFSET UNITYSDK_OFFSET(0x1C621100)
#define HAILIPBNAJL_BLLCMFINEOM_OFFSET UNITYSDK_OFFSET(0x1C62AED0)
#define HAILIPBNAJL_CLCPFFJBENN_OFFSET UNITYSDK_OFFSET(0x1C628E10)
#define HAILIPBNAJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C61EB20)
#define HAILIPBNAJL_DEJEPGFLOBL_OFFSET UNITYSDK_OFFSET(0x1C626E40)
#define HAILIPBNAJL_DEPCMHAGDGP_OFFSET UNITYSDK_OFFSET(0x1C629040)
#define HAILIPBNAJL_DKDNCLCOPAB_OFFSET UNITYSDK_OFFSET(0x1C61F830)
#define HAILIPBNAJL_DMBOGKFFNLP_OFFSET UNITYSDK_OFFSET(0x1C629670)
#define HAILIPBNAJL_DPDMNPMPNOP_OFFSET UNITYSDK_OFFSET(0x1C6252A0)
#define HAILIPBNAJL_EJHAPAIBFPI_OFFSET UNITYSDK_OFFSET(0x1C628CF0)
#define HAILIPBNAJL_ENGLAFOOIIK_OFFSET UNITYSDK_OFFSET(0x1C624280)
#define HAILIPBNAJL_EOIIPLJIAAF_OFFSET UNITYSDK_OFFSET(0x1C620820)
#define HAILIPBNAJL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C61F1F0)
#define HAILIPBNAJL_GFGIPBNJEOG_OFFSET UNITYSDK_OFFSET(0x1C62C080)
#define HAILIPBNAJL_HFKHDGAJGNF_OFFSET UNITYSDK_OFFSET(0x1C628F30)
#define HAILIPBNAJL_HMBDLFPKOAF_OFFSET UNITYSDK_OFFSET(0x1C627960)
#define HAILIPBNAJL_HMOCCJGMENB_OFFSET UNITYSDK_OFFSET(0x1C628D50)
#define HAILIPBNAJL_IDOOMOAFJDF_OFFSET UNITYSDK_OFFSET(0x1C624760)
#define HAILIPBNAJL_IFPDEMFAKNO_OFFSET UNITYSDK_OFFSET(0x1C627F10)
#define HAILIPBNAJL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C61EBD0)
#define HAILIPBNAJL_JBKFJHEAPIH_OFFSET UNITYSDK_OFFSET(0x1C621620)
#define HAILIPBNAJL_JJDIFLCAPBK_OFFSET UNITYSDK_OFFSET(0x1C625440)
#define HAILIPBNAJL_JKOGFHNJPBC_1_OFFSET UNITYSDK_OFFSET(0x1C626C90)
#define HAILIPBNAJL_JKOGFHNJPBC_OFFSET UNITYSDK_OFFSET(0x1C5EDCD0)
#define HAILIPBNAJL_JPDHPHBNCJF_OFFSET UNITYSDK_OFFSET(0x1C6257F0)
#define HAILIPBNAJL_KCEJNBGKLPA_OFFSET UNITYSDK_OFFSET(0x1C61FD70)
#define HAILIPBNAJL_LBHCPPODHBB_OFFSET UNITYSDK_OFFSET(0x1C623860)
#define HAILIPBNAJL_LDCAAPEINAN_OFFSET UNITYSDK_OFFSET(0x1C621DA0)
#define HAILIPBNAJL_LDLAJNEOGNO_OFFSET UNITYSDK_OFFSET(0x1C628C20)
#define HAILIPBNAJL_LLJHIDAJJOA_OFFSET UNITYSDK_OFFSET(0x1C61EC10)
#define HAILIPBNAJL_MADILKBMKBK_OFFSET UNITYSDK_OFFSET(0x1C627C20)
#define HAILIPBNAJL_MHMOHJCDDFC_OFFSET UNITYSDK_OFFSET(0x1C62C140)
#define HAILIPBNAJL_MIJCHKDFBFC_OFFSET UNITYSDK_OFFSET(0x1C622530)
#define HAILIPBNAJL_MNHJKFIECEO_OFFSET UNITYSDK_OFFSET(0x1C62AFB0)
#define HAILIPBNAJL_NBFONANHLGM_OFFSET UNITYSDK_OFFSET(0x1C6202B0)
#define HAILIPBNAJL_NBJCDHILFKH_OFFSET UNITYSDK_OFFSET(0x1C6281B0)
#define HAILIPBNAJL_NBNMHEBDFEK_OFFSET UNITYSDK_OFFSET(0x1C626710)
#define HAILIPBNAJL_NDLDJAHBPPO_OFFSET UNITYSDK_OFFSET(0x1C628EB0)
#define HAILIPBNAJL_NIFNDPCDJBD_OFFSET UNITYSDK_OFFSET(0x1C626AB0)
#define HAILIPBNAJL_NJFLNDCEKHF_OFFSET UNITYSDK_OFFSET(0x1C62B0D0)
#define HAILIPBNAJL_NPNMAHIHGFE_OFFSET UNITYSDK_OFFSET(0x1C61F550)
#define HAILIPBNAJL_OCLFIKMCKJN_1_OFFSET UNITYSDK_OFFSET(0x1C62A510)
#define HAILIPBNAJL_OCLFIKMCKJN_OFFSET UNITYSDK_OFFSET(0x1C62A350)
#define HAILIPBNAJL_PNMMHCLMOMM_OFFSET UNITYSDK_OFFSET(0x1C628DB0)
#define HAILIPBNAJL_PPOIGNJBFHI_OFFSET UNITYSDK_OFFSET(0x1C623AD0)

inline static constexpr unsigned int HAILIPBNAJL_TypeDefinitionIndex = 36407;

	class HAILIPBNAJL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LHOBLLEMGHB*>* HFNLFCABBOI; // 0x10
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::PLAJONHLDJN* FLMODBLFAGD; // 0x20
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL_INITIALIZE_OFFSET))(this);
		}

		::System::Void LLJHIDAJJOA(::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_LLJHIDAJJOA_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL_EXECUTE_OFFSET))(this);
		}

		::System::Void ABEHKNBGHBL(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_ABEHKNBGHBL_OFFSET))(this, a1);
		}

		::System::Boolean MIJCHKDFBFC(::IJFIHJJPHNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_MIJCHKDFBFC_OFFSET))(this, a1);
		}

		::System::Boolean JJDIFLCAPBK(::IJFIHJJPHNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_JJDIFLCAPBK_OFFSET))(this, a1);
		}

		::System::Void NBNMHEBDFEK(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_NBNMHEBDFEK_OFFSET))(this, a1);
		}

		::System::Void NPNMAHIHGFE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_NPNMAHIHGFE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KFAGEHPLMJB*>* DEJEPGFLOBL(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Single a4)
		{
			return ((::System::Collections::Generic::List_1<::KFAGEHPLMJB*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + HAILIPBNAJL_DEJEPGFLOBL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HMBDLFPKOAF(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::KFAGEHPLMJB*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::KFAGEHPLMJB*>*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_HMBDLFPKOAF_OFFSET))(this, a1, a2);
		}

		::System::Void DKDNCLCOPAB(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_DKDNCLCOPAB_OFFSET))(this, a1);
		}

		::System::Void KCEJNBGKLPA(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_KCEJNBGKLPA_OFFSET))(this, a1);
		}

		::System::Void ACHGHOLLNBE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_ACHGHOLLNBE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* JKOGFHNJPBC(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_JKOGFHNJPBC_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* JKOGFHNJPBC_1(::IJFIHJJPHNA* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_JKOGFHNJPBC_1_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> LBHCPPODHBB(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Int32 a4)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_LBHCPPODHBB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NBFONANHLGM(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_NBFONANHLGM_OFFSET))(this, a1);
		}

		::System::Void EOIIPLJIAAF(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_EOIIPLJIAAF_OFFSET))(this, a1);
		}

		::System::Void LDLAJNEOGNO(::IJFIHJJPHNA* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + HAILIPBNAJL_LDLAJNEOGNO_OFFSET))(this, a1, a2);
		}

		::System::Void EJHAPAIBFPI(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_EJHAPAIBFPI_OFFSET))(this, a1);
		}

		::System::Void HMOCCJGMENB(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_HMOCCJGMENB_OFFSET))(this, a1);
		}

		::System::Void PNMMHCLMOMM(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_PNMMHCLMOMM_OFFSET))(this, a1);
		}

		::System::Void CLCPFFJBENN(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_CLCPFFJBENN_OFFSET))(this, a1);
		}

		::System::Void ANGDOHMIPFN(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_ANGDOHMIPFN_OFFSET))(this, a1);
		}

		::System::Void JBKFJHEAPIH(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_JBKFJHEAPIH_OFFSET))(this, a1);
		}

		::System::Void LDCAAPEINAN(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_LDCAAPEINAN_OFFSET))(this, a1);
		}

		::System::Void ALOENLBEPEE(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_ALOENLBEPEE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::GLPPDCIBMIH*>* OCLFIKMCKJN(::IJFIHJJPHNA* a1, ::LHOBLLEMGHB* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::LHOBLLEMGHB*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_OCLFIKMCKJN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::GLPPDCIBMIH*>* OCLFIKMCKJN_1(::IJFIHJJPHNA* a1, ::LHOBLLEMGHB* a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::LHOBLLEMGHB*, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_OCLFIKMCKJN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DEPCMHAGDGP(::IJFIHJJPHNA* a1, ::LHOBLLEMGHB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::LHOBLLEMGHB*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_DEPCMHAGDGP_OFFSET))(this, a1, a2);
		}

		::System::Void DMBOGKFFNLP(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::LHOBLLEMGHB* a3, ::System::Single a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::LHOBLLEMGHB*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_DMBOGKFFNLP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*> JPDHPHBNCJF(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_JPDHPHBNCJF_OFFSET))(this, a1, a2);
		}

		::System::Single IDOOMOAFJDF(::DMGMDAFEFAP* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::BitArray* a3)
		{
			return ((::System::Single(*)(::PVOID, ::DMGMDAFEFAP*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_IDOOMOAFJDF_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> NBJCDHILFKH(::OKCLMKOCLKL* a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::OKCLMKOCLKL*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_NBJCDHILFKH_OFFSET))(this, a1);
		}

		::PHEHGMEOKMB* NJFLNDCEKHF(::MOCPBOFGDCP* a1)
		{
			return ((::PHEHGMEOKMB*(*)(::PVOID, ::MOCPBOFGDCP*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_NJFLNDCEKHF_OFFSET))(this, a1);
		}

		::System::Int32 MADILKBMKBK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_MADILKBMKBK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* IFPDEMFAKNO(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_IFPDEMFAKNO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>* AIOEJCJOJPF(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_AIOEJCJOJPF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* PPOIGNJBFHI(::IJFIHJJPHNA* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_PPOIGNJBFHI_OFFSET))(this, a1);
		}

		::KFPLECNMLNF* ENGLAFOOIIK(::IJFIHJJPHNA* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::KFPLECNMLNF*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HAILIPBNAJL_ENGLAFOOIIK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NIFNDPCDJBD(::IJFIHJJPHNA* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + HAILIPBNAJL_NIFNDPCDJBD_OFFSET))(this, a1, a2);
		}

		::LHOBLLEMGHB* DPDMNPMPNOP(::System::UInt32 a1)
		{
			return ((::LHOBLLEMGHB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_DPDMNPMPNOP_OFFSET))(this, a1);
		}

		::System::Boolean NDLDJAHBPPO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HAILIPBNAJL_NDLDJAHBPPO_OFFSET))(this, a1, a2);
		}

		::System::Single HFKHDGAJGNF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HAILIPBNAJL_HFKHDGAJGNF_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Object*>* GFGIPBNJEOG(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL_GFGIPBNJEOG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BLLCMFINEOM(::System::Int32 a1, ::System::Int32 a2, ::System::Action_1<::System::UInt64>* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Action_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_BLLCMFINEOM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MHMOHJCDDFC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt64 a5, ::System::Action_1<::System::UInt64>* a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Action_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_MHMOHJCDDFC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* MNHJKFIECEO(::System::UInt64 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::UInt64, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HAILIPBNAJL_MNHJKFIECEO_OFFSET))(a1, a2, a3);
		}

	};
