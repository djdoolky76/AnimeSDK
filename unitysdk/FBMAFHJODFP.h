#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKADONKJALP.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveContext.h"

class AICPGKGMMEH;
class COLAFHCBNLE;
class HFHIMPFIHMA;
class IKAFOFHODOJ;
class KEJJFKHICBC;
class LHDIPIBIDLO;
class MAEGCCMKDCA;
class MonoUITableScrollGroup;
class MonoUITableScrollV2;
class OBNFLGIOLNA;
class PHECEIPKGFA;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIInterKnotPageConfig; }
namespace MoleMole { class UIInterKnotPostRowWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }

#define FBMAFHJODFP_AEOPHJIEDBI_OFFSET UNITYSDK_OFFSET(0xF9F2780)
#define FBMAFHJODFP_AIHNCMHAFCF_OFFSET UNITYSDK_OFFSET(0xF9F7560)
#define FBMAFHJODFP_ALCBHJPMDDK_OFFSET UNITYSDK_OFFSET(0xF9F2FB0)
#define FBMAFHJODFP_ANGLOMHBNLO_OFFSET UNITYSDK_OFFSET(0xF9F7E70)
#define FBMAFHJODFP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xF9F1380)
#define FBMAFHJODFP_CCODNFMEKAK_OFFSET UNITYSDK_OFFSET(0xF9F06C0)
#define FBMAFHJODFP_CLACLEJJHBG_OFFSET UNITYSDK_OFFSET(0xF9F3620)
#define FBMAFHJODFP_CLBCLLKKHCG_OFFSET UNITYSDK_OFFSET(0xF9F7DD0)
#define FBMAFHJODFP_EEFBCHHIIKK_OFFSET UNITYSDK_OFFSET(0xF9F1CB0)
#define FBMAFHJODFP_EHKJCNHAPCF_OFFSET UNITYSDK_OFFSET(0xF9F6910)
#define FBMAFHJODFP_EIDDDMMLMMD_OFFSET UNITYSDK_OFFSET(0xF9F3B00)
#define FBMAFHJODFP_GLABPNLAIKE_OFFSET UNITYSDK_OFFSET(0xF9F6150)
#define FBMAFHJODFP_HABPBFCBAMA_OFFSET UNITYSDK_OFFSET(0xF9F06E0)
#define FBMAFHJODFP_HDKCCAIHDLA_OFFSET UNITYSDK_OFFSET(0xF9F0660)
#define FBMAFHJODFP_HFIBEJKNHEN_OFFSET UNITYSDK_OFFSET(0xF9F7DB0)
#define FBMAFHJODFP_HFKPKHMFBJM_OFFSET UNITYSDK_OFFSET(0xF9F7EC0)
#define FBMAFHJODFP_HFLOGIJNMCN_OFFSET UNITYSDK_OFFSET(0xF9F74C0)
#define FBMAFHJODFP_HMNLKKGKBHL_OFFSET UNITYSDK_OFFSET(0xF9F1100)
#define FBMAFHJODFP_IHGENOOAJED_OFFSET UNITYSDK_OFFSET(0xF9F73F0)
#define FBMAFHJODFP_ILBHKFNFKNG_OFFSET UNITYSDK_OFFSET(0xF9F3F00)
#define FBMAFHJODFP_IMHJKAHGLJO_OFFSET UNITYSDK_OFFSET(0xF9F1F00)
#define FBMAFHJODFP_JJGKHJPDLGI_OFFSET UNITYSDK_OFFSET(0xF9F5A50)
#define FBMAFHJODFP_KGFEOKHHOPO_OFFSET UNITYSDK_OFFSET(0xF9F55B0)
#define FBMAFHJODFP_KIJMHJNJMHM_OFFSET UNITYSDK_OFFSET(0xF9F3B50)
#define FBMAFHJODFP_KJPFMLCNCKN_OFFSET UNITYSDK_OFFSET(0xF9F5640)
#define FBMAFHJODFP_LCPLHJHOMOH_OFFSET UNITYSDK_OFFSET(0xF9F7E20)
#define FBMAFHJODFP_LFBPOIAGFKM_OFFSET UNITYSDK_OFFSET(0xF9F2730)
#define FBMAFHJODFP_LHGIHFAAILN_OFFSET UNITYSDK_OFFSET(0xF9F2F20)
#define FBMAFHJODFP_LJOPBGDMILM_OFFSET UNITYSDK_OFFSET(0xF9F74B0)
#define FBMAFHJODFP_MGJPFCNMECH_OFFSET UNITYSDK_OFFSET(0xF9F5300)
#define FBMAFHJODFP_MGKCAAOGNEP_OFFSET UNITYSDK_OFFSET(0xF9F2890)
#define FBMAFHJODFP_MOHFEKCKJFA_OFFSET UNITYSDK_OFFSET(0xF9F3460)
#define FBMAFHJODFP_NGIENMGIFCK_OFFSET UNITYSDK_OFFSET(0xF9F1110)
#define FBMAFHJODFP_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xF9F00F0)
#define FBMAFHJODFP_OOOIOABLJIP_OFFSET UNITYSDK_OFFSET(0xF9F2790)
#define FBMAFHJODFP_PDEFKIBLPGC_OFFSET UNITYSDK_OFFSET(0xF9F3810)
#define FBMAFHJODFP_PEEEOOHFLBH_OFFSET UNITYSDK_OFFSET(0xF9F4B50)
#define FBMAFHJODFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xF9F08D0)
#define FBMAFHJODFP__CTOR_OFFSET UNITYSDK_OFFSET(0xF9F0760)

inline static constexpr unsigned int FBMAFHJODFP_TypeDefinitionIndex = 76175;

class FBMAFHJODFP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* IFHHEBGFLGF; // 0x10
	::UnityEngine::Transform* GMBEFLPOIBN; // 0x18
	::KEJJFKHICBC* FFAHHKJDICH; // 0x20
	::MoleMole::UIBaseController* DCGPAMOGDGP; // 0x28
	::MonoUITableScrollGroup* DBNKJHOPGEG; // 0x30
	::PHECEIPKGFA* PCIDKEGHHDL; // 0x38
	::UnityEngine::GameObject* MGAGJEMBFKJ; // 0x40
	::MoleMole::UIWindowController* MAMPMBFMOIP; // 0x48
	::MoleMole::UIInterKnotPostRowWidgetController* FDPCGGJNPCP; // 0x50
	::MoleMole::UIInterKnotPageConfig* CEJENBBHBBG; // 0x58
	::UnityEngine::UI::Text* JNAJBJKEDGG; // 0x60
	::System::Func_2<::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*, ::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*>* LMBCKMCCJGA; // 0x68
	::MoleMole::MonoGamepadNestedListDelegate* EPCLCMCEHAM; // 0x70
	::System::Action* LODAPHEGGLC; // 0x78
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::IKAFOFHODOJ*>*>* LJHODMHEJCP; // 0x80
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* EKENGBHHGFG; // 0x88
	::UnityEngine::UI::LayoutElement* IELPKOJHDKB; // 0x90
	::System::Boolean GJEJINNODPC; // 0x98
	::System::Boolean FLDDOLGIOII; // 0x99
	::System::Boolean KJNICHFOLKF; // 0x9A
	::System::Boolean OADCPLJOBNF; // 0x9B
	::System::Boolean HKNABMIMMAG; // 0x9C
	::System::Boolean NOBCGMHAANH; // 0x9D
	::System::Boolean EGENBHCKAPC; // 0x9E
	::System::Byte _padding0[0x1];
	::System::Int32 FDLBAHNODDC; // 0xA0
	::System::Int32 PBPLDGBFKPO; // 0xA4
	::System::Single PDNCAOBIOBD; // 0xA8
	::System::Int32 FJOBBCNBLOE; // 0xAC
	::System::Int32 CEFNJOAPJKO; // 0xB0
	::System::Int32 FEIINPLFMJG; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OnScroll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_ONSCROLL_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE(::System::Boolean ONJJAFLHDKB, ::System::Boolean PPMKCDDHJKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMAFHJODFP_PHOADBJGFBE_OFFSET))(this, ONJJAFLHDKB, PPMKCDDHJKN);
	}

	::System::Boolean HMNLKKGKBHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_HMNLKKGKBHL_OFFSET))(this);
	}

	::System::Void NGIENMGIFCK(::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMAFHJODFP_NGIENMGIFCK_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void BBOMJDBNHIC(::COLAFHCBNLE* AEJAMJDBHAM, ::AKADONKJALP GEJIOCAJDEC, ::MoleMole::UIWindowController* FKJAHOHKHAK, ::MoleMole::UIInterKnotPageConfig* DFMKILICPFB, ::System::Boolean CKELHDKBEBK, ::System::Int32 NFEFOIGAFGN, ::System::Action* EOGNDPKCDNL, ::System::Action* LHJPPJDHFNE, ::System::Action* OGFIAFPCBBH, ::System::Func_2<::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*, ::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*>* LMBCKMCCJGA)
	{
		return ((::System::Void(*)(::PVOID, ::COLAFHCBNLE*, ::AKADONKJALP, ::MoleMole::UIWindowController*, ::MoleMole::UIInterKnotPageConfig*, ::System::Boolean, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Func_2<::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*, ::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*>*))((::PBYTE)hIl2Cpp + FBMAFHJODFP_BBOMJDBNHIC_OFFSET))(this, AEJAMJDBHAM, GEJIOCAJDEC, FKJAHOHKHAK, DFMKILICPFB, CKELHDKBEBK, NFEFOIGAFGN, EOGNDPKCDNL, LHJPPJDHFNE, OGFIAFPCBBH, LMBCKMCCJGA);
	}

	::System::Void LFBPOIAGFKM(::System::Func_2<::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*, ::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*, ::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*>*))((::PBYTE)hIl2Cpp + FBMAFHJODFP_LFBPOIAGFKM_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void AEOPHJIEDBI(::NAPScrollView::DataStruct::MoveContext MDLNMDJMMJP, ::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + FBMAFHJODFP_AEOPHJIEDBI_OFFSET))(this, MDLNMDJMMJP, HFMHOELKCAJ);
	}

	static ::System::Boolean OOOIOABLJIP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBMAFHJODFP_OOOIOABLJIP_OFFSET))();
	}

	::System::Void MGKCAAOGNEP(::System::Int32 NLHHPPAPNFI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_MGKCAAOGNEP_OFFSET))(this, NLHHPPAPNFI);
	}

	::System::Void LHGIHFAAILN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_LHGIHFAAILN_OFFSET))(this);
	}

	::System::Void MOHFEKCKJFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_MOHFEKCKJFA_OFFSET))(this);
	}

	::System::Single CLACLEJJHBG(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_CLACLEJJHBG_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 EIDDDMMLMMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_EIDDDMMLMMD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MAEGCCMKDCA*>* CCODNFMEKAK()
	{
		return ((::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_CCODNFMEKAK_OFFSET))(this);
	}

	::System::Void KIJMHJNJMHM(::HFHIMPFIHMA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HFHIMPFIHMA*))((::PBYTE)hIl2Cpp + FBMAFHJODFP_KIJMHJNJMHM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void PEEEOOHFLBH(::UnityEngine::Transform* MNFGENNGLCO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FBMAFHJODFP_PEEEOOHFLBH_OFFSET))(this, MNFGENNGLCO);
	}

	::System::Void KGFEOKHHOPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_KGFEOKHHOPO_OFFSET))(this);
	}

	::System::Void EEFBCHHIIKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_EEFBCHHIIKK_OFFSET))(this);
	}

	::System::Int32 KJPFMLCNCKN(::System::Int32 NBHHOEKGGIM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_KJPFMLCNCKN_OFFSET))(this, NBHHOEKGGIM);
	}

	::OBNFLGIOLNA* JJGKHJPDLGI(::MoleMole::ConfigNewbie_HighLightDynamicData* DFMKILICPFB)
	{
		return ((::OBNFLGIOLNA*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + FBMAFHJODFP_JJGKHJPDLGI_OFFSET))(this, DFMKILICPFB);
	}

	::MAEGCCMKDCA* GLABPNLAIKE(::System::Int32 GCHDFMGHPOF, ::System::Int32 BAJCHFHALOA)
	{
		return ((::MAEGCCMKDCA*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_GLABPNLAIKE_OFFSET))(this, GCHDFMGHPOF, BAJCHFHALOA);
	}

	::System::Void ALCBHJPMDDK(::System::Int32 FNEFGHCAGAP, ::System::Int32 HNEHCKBPBHF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_ALCBHJPMDDK_OFFSET))(this, FNEFGHCAGAP, HNEHCKBPBHF);
	}

	::System::Void HABPBFCBAMA(::System::Boolean DDDGCEDBKHD, ::System::Boolean KJKEKINOPNO, ::System::Boolean GPHEBCOGGAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMAFHJODFP_HABPBFCBAMA_OFFSET))(this, DDDGCEDBKHD, KJKEKINOPNO, GPHEBCOGGAK);
	}

	::System::Boolean HDKCCAIHDLA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_HDKCCAIHDLA_OFFSET))(this);
	}

	::LHDIPIBIDLO* IHGENOOAJED()
	{
		return ((::LHDIPIBIDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_IHGENOOAJED_OFFSET))(this);
	}

	::System::Void MGJPFCNMECH(::MonoUITableScrollV2* FKJMNHMBELE, ::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FBMAFHJODFP_MGJPFCNMECH_OFFSET))(this, FKJMNHMBELE, GKBJOPJKCLB);
	}

	::System::Void LJOPBGDMILM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_LJOPBGDMILM_OFFSET))(this);
	}

	::System::Boolean HFLOGIJNMCN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_HFLOGIJNMCN_OFFSET))(this);
	}

	::System::Void ILBHKFNFKNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_ILBHKFNFKNG_OFFSET))(this);
	}

	::System::Void EHKJCNHAPCF(::System::Int32 FKGNDKNHAEH, ::System::Int32 LFIFAMMMIBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_EHKJCNHAPCF_OFFSET))(this, FKGNDKNHAEH, LFIFAMMMIBC);
	}

	::System::Boolean AIHNCMHAFCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_AIHNCMHAFCF_OFFSET))(this);
	}

	::System::Void IMHJKAHGLJO(::System::Int32 NLHHPPAPNFI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_IMHJKAHGLJO_OFFSET))(this, NLHHPPAPNFI);
	}

	::System::Single PDEFKIBLPGC(::AICPGKGMMEH* JFDKIGGPONC)
	{
		return ((::System::Single(*)(::PVOID, ::AICPGKGMMEH*))((::PBYTE)hIl2Cpp + FBMAFHJODFP_PDEFKIBLPGC_OFFSET))(this, JFDKIGGPONC);
	}

	::System::Collections::Generic::Dictionary_2<::AICPGKGMMEH*, ::System::Single>* HFIBEJKNHEN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::AICPGKGMMEH*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_HFIBEJKNHEN_OFFSET))(this);
	}

	::System::Int32 CLBCLLKKHCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_CLBCLLKKHCG_OFFSET))(this);
	}

	::System::Void LCPLHJHOMOH(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_LCPLHJHOMOH_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Void ANGLOMHBNLO(::System::Int32 BAJCHFHALOA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_ANGLOMHBNLO_OFFSET))(this, BAJCHFHALOA, ABHBKFJKINO);
	}

	::System::Void HFKPKHMFBJM(::KEJJFKHICBC* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::KEJJFKHICBC*))((::PBYTE)hIl2Cpp + FBMAFHJODFP_HFKPKHMFBJM_OFFSET))(this, CENDLIKDNJA);
	}
};
