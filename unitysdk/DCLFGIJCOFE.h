#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/ILAGIDEHCJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DCLFGIJCOFE_AHJCKHIDPDG_OFFSET UNITYSDK_OFFSET(0x13E3A350)
#define DCLFGIJCOFE_BFJLDEDIDKE_OFFSET UNITYSDK_OFFSET(0x13E3D510)
#define DCLFGIJCOFE_CCGJNGIGCFC_OFFSET UNITYSDK_OFFSET(0x13E3C6D0)
#define DCLFGIJCOFE_CMKIKJMAPIA_OFFSET UNITYSDK_OFFSET(0x13E3A170)
#define DCLFGIJCOFE_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x13E3D190)
#define DCLFGIJCOFE_CNLJMMALOCH_OFFSET UNITYSDK_OFFSET(0x13E3D0C0)
#define DCLFGIJCOFE_CPGBJGJDFBF_OFFSET UNITYSDK_OFFSET(0x13E3A310)
#define DCLFGIJCOFE_DBEHNPFPANN_OFFSET UNITYSDK_OFFSET(0x13E3C6F0)
#define DCLFGIJCOFE_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x13E390B0)
#define DCLFGIJCOFE_DFAPLDEHGGA_OFFSET UNITYSDK_OFFSET(0x13E3A3B0)
#define DCLFGIJCOFE_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x13E39190)
#define DCLFGIJCOFE_DIGNNOBCBLJ_OFFSET UNITYSDK_OFFSET(0x13E3D140)
#define DCLFGIJCOFE_DLHNMNKCNMI_OFFSET UNITYSDK_OFFSET(0x13E3CA60)
#define DCLFGIJCOFE_DMEBBPOLIAH_OFFSET UNITYSDK_OFFSET(0x13E3A6C0)
#define DCLFGIJCOFE_DPBMDOJBJLJ_OFFSET UNITYSDK_OFFSET(0x13E398E0)
#define DCLFGIJCOFE_DPNJGALAMFI_OFFSET UNITYSDK_OFFSET(0x13E3B280)
#define DCLFGIJCOFE_EGJIBHMEPOO_OFFSET UNITYSDK_OFFSET(0x13E3C150)
#define DCLFGIJCOFE_EIHAJAPGCMI_OFFSET UNITYSDK_OFFSET(0x13E3C5F0)
#define DCLFGIJCOFE_FGFKPMGKCBJ_OFFSET UNITYSDK_OFFSET(0x13E3C8A0)
#define DCLFGIJCOFE_FJKBBOEBOCI_OFFSET UNITYSDK_OFFSET(0x13E3A5E0)
#define DCLFGIJCOFE_FPEBPPEKFEN_OFFSET UNITYSDK_OFFSET(0x13E3A910)
#define DCLFGIJCOFE_GHGNLOIEPMG_OFFSET UNITYSDK_OFFSET(0x13E3C700)
#define DCLFGIJCOFE_GPLFKLHBBEJ_OFFSET UNITYSDK_OFFSET(0x13E3C5C0)
#define DCLFGIJCOFE_GPPJIDNIALL_OFFSET UNITYSDK_OFFSET(0x13E3CEE0)
#define DCLFGIJCOFE_HDGKHEICMCL_OFFSET UNITYSDK_OFFSET(0x13E3D520)
#define DCLFGIJCOFE_HFDGLAKOAKF_OFFSET UNITYSDK_OFFSET(0x13E3C6E0)
#define DCLFGIJCOFE_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x13E38F50)
#define DCLFGIJCOFE_IBMPJBOPHJN_OFFSET UNITYSDK_OFFSET(0x13E3AEF0)
#define DCLFGIJCOFE_IDMMEENALFK_OFFSET UNITYSDK_OFFSET(0x13E3AF40)
#define DCLFGIJCOFE_JANCBGDJAMP_OFFSET UNITYSDK_OFFSET(0x13E3C160)
#define DCLFGIJCOFE_JCCOAFLMMLA_OFFSET UNITYSDK_OFFSET(0x13E3C3F0)
#define DCLFGIJCOFE_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x13E3C140)
#define DCLFGIJCOFE_JGJHNHNBGFK_OFFSET UNITYSDK_OFFSET(0x13E3BC70)
#define DCLFGIJCOFE_KAHAKKMLIPL_OFFSET UNITYSDK_OFFSET(0x13E3B500)
#define DCLFGIJCOFE_KEPOPBFGHDO_OFFSET UNITYSDK_OFFSET(0x13E3C3C0)
#define DCLFGIJCOFE_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x13E3D150)
#define DCLFGIJCOFE_KNKODNAHFLG_OFFSET UNITYSDK_OFFSET(0x13E3B170)
#define DCLFGIJCOFE_LGHHIBAOHOB_OFFSET UNITYSDK_OFFSET(0x13E3ABE0)
#define DCLFGIJCOFE_LGLPLOJFKIK_OFFSET UNITYSDK_OFFSET(0x13E3C6B0)
#define DCLFGIJCOFE_MLHACPLIKAA_OFFSET UNITYSDK_OFFSET(0x13E3C6C0)
#define DCLFGIJCOFE_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x13E38E00)
#define DCLFGIJCOFE_MPILIIKHDMD_OFFSET UNITYSDK_OFFSET(0x13E3A110)
#define DCLFGIJCOFE_NCPJAEKCFIH_OFFSET UNITYSDK_OFFSET(0x13E3C5E0)
#define DCLFGIJCOFE_NIDJONGAGBB_OFFSET UNITYSDK_OFFSET(0x13E3D3A0)
#define DCLFGIJCOFE_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x13E39980)
#define DCLFGIJCOFE_NLHDOGGGBAM_OFFSET UNITYSDK_OFFSET(0x13E39540)
#define DCLFGIJCOFE_NPALELOIOMJ_OFFSET UNITYSDK_OFFSET(0x13E3C3E0)
#define DCLFGIJCOFE_NPOENIONCLP_OFFSET UNITYSDK_OFFSET(0x13E3B980)
#define DCLFGIJCOFE_OLIKPDIFHFD_OFFSET UNITYSDK_OFFSET(0x13E3C940)
#define DCLFGIJCOFE_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x13E3D530)
#define DCLFGIJCOFE_PBINHOEIFHH_OFFSET UNITYSDK_OFFSET(0x13E39FC0)
#define DCLFGIJCOFE_PCKDFLGMOCB_OFFSET UNITYSDK_OFFSET(0x13E3C3D0)
#define DCLFGIJCOFE_PDKKPJCGPBF_OFFSET UNITYSDK_OFFSET(0x13E38EF0)
#define DCLFGIJCOFE_PHMMBPJGIAH_OFFSET UNITYSDK_OFFSET(0x13E3D1B0)
#define DCLFGIJCOFE_PIJGNPKCDHK_OFFSET UNITYSDK_OFFSET(0x13E3D1A0)
#define DCLFGIJCOFE_PPJGCKMLLHA_OFFSET UNITYSDK_OFFSET(0x13E3BFC0)
#define DCLFGIJCOFE__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3BB40)

inline static constexpr unsigned int DCLFGIJCOFE_TypeDefinitionIndex = 91395;

class DCLFGIJCOFE : public ::ILAGIDEHCJG
{
public:
	::MoleMole::EntityHandle CFJFKDENBII; // 0xA0
	::System::Boolean LBILLAHEJPG; // 0xB0
	::System::Boolean BPLIIOHJNGC; // 0xB1
	::System::Boolean BAFMLECAHDK; // 0xB2
	::System::Boolean JFJNEPIBOOH; // 0xB3
	::Foundation::Coroutine::CoroutineHandle DKGMGEFFCBJ; // 0xB4
	::System::Single EKHGDPDMFPC; // 0xB8
	::System::Boolean ENEFJEJBIDL; // 0xBC
	::System::Boolean PMCJCHDKLKM; // 0xBD
	::System::Boolean AIPPECFJJCP; // 0xBE
	::System::Boolean KJLHDILKEMH; // 0xBF
	::System::Single LFBPFJPIIMK; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE__CTOR_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Void CPGBJGJDFBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_CPGBJGJDFBF_OFFSET))(this);
	}

	::System::Void DFAPLDEHGGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DFAPLDEHGGA_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> FJKBBOEBOCI()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_FJKBBOEBOCI_OFFSET))(this);
	}

	::System::Void PDKKPJCGPBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_PDKKPJCGPBF_OFFSET))(this);
	}

	::System::Void DMEBBPOLIAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DMEBBPOLIAH_OFFSET))(this);
	}

	::System::Void AHJCKHIDPDG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_AHJCKHIDPDG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void FPEBPPEKFEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_FPEBPPEKFEN_OFFSET))(this);
	}

	::System::Void IBMPJBOPHJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_IBMPJBOPHJN_OFFSET))(this);
	}

	::System::Void KNKODNAHFLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_KNKODNAHFLG_OFFSET))(this);
	}

	::System::Void KAHAKKMLIPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_KAHAKKMLIPL_OFFSET))(this);
	}

	::System::Void MPILIIKHDMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_MPILIIKHDMD_OFFSET))(this);
	}

	::System::Void NLHDOGGGBAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NLHDOGGGBAM_OFFSET))(this);
	}

	::System::Void PBINHOEIFHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_PBINHOEIFHH_OFFSET))(this);
	}

	::System::Void NPOENIONCLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NPOENIONCLP_OFFSET))(this);
	}

	::System::Void LGHHIBAOHOB(::System::Boolean HFKPDCHKNFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_LGHHIBAOHOB_OFFSET))(this, HFKPDCHKNFD);
	}

	::System::Void JGJHNHNBGFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_JGJHNHNBGFK_OFFSET))(this);
	}

	::System::Void PPJGCKMLLHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_PPJGCKMLLHA_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Void EGJIBHMEPOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_EGJIBHMEPOO_OFFSET))(this);
	}

	::System::Void JANCBGDJAMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_JANCBGDJAMP_OFFSET))(this);
	}

	::System::Void KEPOPBFGHDO(::System::Action* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_KEPOPBFGHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PCKDFLGMOCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_PCKDFLGMOCB_OFFSET))(this);
	}

	::System::Void NPALELOIOMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NPALELOIOMJ_OFFSET))(this);
	}

	::System::Void JCCOAFLMMLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_JCCOAFLMMLA_OFFSET))(this);
	}

	::System::Void GPLFKLHBBEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_GPLFKLHBBEJ_OFFSET))(this);
	}

	::System::Void NCPJAEKCFIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NCPJAEKCFIH_OFFSET))(this);
	}

	static ::System::Void CMKIKJMAPIA(::Il2CppArray<::System::String*>* JFAJHLHHHPM)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_CMKIKJMAPIA_OFFSET))(JFAJHLHHHPM);
	}

	::System::Void EIHAJAPGCMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_EIHAJAPGCMI_OFFSET))(this);
	}

	::System::Void LGLPLOJFKIK(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_LGLPLOJFKIK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MLHACPLIKAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_MLHACPLIKAA_OFFSET))(this);
	}

	::System::Void DPBMDOJBJLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DPBMDOJBJLJ_OFFSET))(this);
	}

	::System::Void CCGJNGIGCFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_CCGJNGIGCFC_OFFSET))(this);
	}

	::System::Void HFDGLAKOAKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_HFDGLAKOAKF_OFFSET))(this);
	}

	::System::Boolean DPNJGALAMFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DPNJGALAMFI_OFFSET))(this);
	}

	::System::Void DBEHNPFPANN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DBEHNPFPANN_OFFSET))(this);
	}

	::System::Boolean GHGNLOIEPMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_GHGNLOIEPMG_OFFSET))(this);
	}

	::System::Void FGFKPMGKCBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_FGFKPMGKCBJ_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> OLIKPDIFHFD()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_OLIKPDIFHFD_OFFSET))(this);
	}

	::System::Void DLHNMNKCNMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DLHNMNKCNMI_OFFSET))(this);
	}

	::System::Void GPPJIDNIALL(::System::Boolean NFBCEMGCHFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_GPPJIDNIALL_OFFSET))(this, NFBCEMGCHFK);
	}

	::System::Void DIGNNOBCBLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_DIGNNOBCBLJ_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_KHJELIBOECB_OFFSET))(this);
	}

	::System::Void IDMMEENALFK(::System::Boolean APDFJOIFGPL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_IDMMEENALFK_OFFSET))(this, APDFJOIFGPL);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void PIJGNPKCDHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_PIJGNPKCDHK_OFFSET))(this);
	}

	static ::System::Void PHMMBPJGIAH(::Il2CppArray<::System::String*>* JFAJHLHHHPM)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_PHMMBPJGIAH_OFFSET))(JFAJHLHHHPM);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* CNLJMMALOCH()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_CNLJMMALOCH_OFFSET))(this);
	}

	::System::Void NIDJONGAGBB(::System::Boolean APJHJMGBBBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_NIDJONGAGBB_OFFSET))(this, APJHJMGBBBM);
	}

	::System::Void BFJLDEDIDKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_BFJLDEDIDKE_OFFSET))(this);
	}

	::System::Void HDGKHEICMCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_HDGKHEICMCL_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLFGIJCOFE_PBGJKMAEINN_OFFSET))(this);
	}
};
