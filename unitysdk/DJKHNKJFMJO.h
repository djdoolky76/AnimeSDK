#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class BPDDEPLBABF;
class GLHMAKNABLL;
class IFBGJJPIDLA;
class NAGNFEAANEP;
class PNGJBNLGLBK;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define DJKHNKJFMJO_AFFFLEKCIGO_OFFSET UNITYSDK_OFFSET(0x15A4CE00)
#define DJKHNKJFMJO_BAHBJHOLMHI_OFFSET UNITYSDK_OFFSET(0x15A4DE20)
#define DJKHNKJFMJO_BNCEIHGJEFP_OFFSET UNITYSDK_OFFSET(0x15A4DDC0)
#define DJKHNKJFMJO_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x15A4DDA0)
#define DJKHNKJFMJO_DCANJLONEGA_OFFSET UNITYSDK_OFFSET(0x15A4D3A0)
#define DJKHNKJFMJO_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x15A4D9E0)
#define DJKHNKJFMJO_EJEBNBAJDIA_OFFSET UNITYSDK_OFFSET(0x15A4E350)
#define DJKHNKJFMJO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A4CC10)
#define DJKHNKJFMJO_FLFLJLIJOHF_OFFSET UNITYSDK_OFFSET(0x15A4DA40)
#define DJKHNKJFMJO_GDDNJLBODAA_OFFSET UNITYSDK_OFFSET(0x15A4CCD0)
#define DJKHNKJFMJO_GHBPNGDLDJE_OFFSET UNITYSDK_OFFSET(0x15A4D7F0)
#define DJKHNKJFMJO_GIOCFOMJNHO_OFFSET UNITYSDK_OFFSET(0x15A4DDB0)
#define DJKHNKJFMJO_GLMNNEPGJGD_OFFSET UNITYSDK_OFFSET(0x15A4E260)
#define DJKHNKJFMJO_GMMPNGPNLMF_OFFSET UNITYSDK_OFFSET(0x15A4DF40)
#define DJKHNKJFMJO_IDCJJIBDHOC_OFFSET UNITYSDK_OFFSET(0x15A4D710)
#define DJKHNKJFMJO_IPCDLONNBJN_OFFSET UNITYSDK_OFFSET(0x15A4E310)
#define DJKHNKJFMJO_KBBKBDCGNNB_OFFSET UNITYSDK_OFFSET(0x15A4E300)
#define DJKHNKJFMJO_KGKMLIEIAIB_OFFSET UNITYSDK_OFFSET(0x15A4D570)
#define DJKHNKJFMJO_KPDOCLFPGHJ_OFFSET UNITYSDK_OFFSET(0x15A4DC80)
#define DJKHNKJFMJO_LNBCPBNPCCN_OFFSET UNITYSDK_OFFSET(0x15A4E2B0)
#define DJKHNKJFMJO_MDAALIEGOFO_OFFSET UNITYSDK_OFFSET(0x15A4D8B0)
#define DJKHNKJFMJO_MIOGCBBILOE_OFFSET UNITYSDK_OFFSET(0x15A4DDD0)
#define DJKHNKJFMJO_NBPGLBKJMCI_1_OFFSET UNITYSDK_OFFSET(0x15A4E120)
#define DJKHNKJFMJO_NBPGLBKJMCI_OFFSET UNITYSDK_OFFSET(0x15A4DF50)
#define DJKHNKJFMJO_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x15A4E060)
#define DJKHNKJFMJO_OHAIKNCCOIA_OFFSET UNITYSDK_OFFSET(0x15A4E320)
#define DJKHNKJFMJO_PBJGPKCLGON_OFFSET UNITYSDK_OFFSET(0x15A4DC90)
#define DJKHNKJFMJO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A4D470)
#define DJKHNKJFMJO__CTOR_OFFSET UNITYSDK_OFFSET(0x15A4CB20)

inline static constexpr unsigned int DJKHNKJFMJO_TypeDefinitionIndex = 57070;

class DJKHNKJFMJO : public ::System::Object
{
public:
	static ::System::Action_1<::DJKHNKJFMJO*>** StaticGet_FDFPHEFBBOJ()
	{
		return (::System::Action_1<::DJKHNKJFMJO*>**)Il2CppClass::FromTypeDefinitionIndex(DJKHNKJFMJO_TypeDefinitionIndex)->GetStaticField(0x4B7B0);
	}
	static ::System::Action_1<::System::UInt32>** StaticGet_GFJELKLHAJO()
	{
		return (::System::Action_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DJKHNKJFMJO_TypeDefinitionIndex)->GetStaticField(0x4B7B8);
	}
	static ::System::Action_1<::DJKHNKJFMJO*>** StaticGet_OPOPFPALPCF()
	{
		return (::System::Action_1<::DJKHNKJFMJO*>**)Il2CppClass::FromTypeDefinitionIndex(DJKHNKJFMJO_TypeDefinitionIndex)->GetStaticField(0x4B7C0);
	}
	::System::String* PAAMCDGKCIL; // 0x10
	::System::Collections::Generic::List_1<::GLHMAKNABLL*>* FHAKPKCPCPP; // 0x18
	::System::Threading::CancellationTokenSource* LLPBGAOODJI; // 0x20
	::PNGJBNLGLBK* LMAMOJPPHKE; // 0x28
	::System::Boolean _FPADINLCPEO_k__BackingField; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 HMOPJLHIJLF; // 0x34
	::System::UInt32 NJNCIEGPGCI; // 0x38

	::System::Void _ctor(::System::String* DIAOEGCDIGP, ::System::Boolean PLKHKELPCDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJKHNKJFMJO__CTOR_OFFSET))(this, DIAOEGCDIGP, PLKHKELPCDE);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_FINALIZE_OFFSET))(this);
	}

	::BPDDEPLBABF* GDDNJLBODAA(::System::String* HIAIKHDFCLN)
	{
		return ((::BPDDEPLBABF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_GDDNJLBODAA_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::String* AFFFLEKCIGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_AFFFLEKCIGO_OFFSET))(this);
	}

	::System::Void DCANJLONEGA(::System::Boolean IONFIOOFHBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_DCANJLONEGA_OFFSET))(this, IONFIOOFHBA);
	}

	::System::Void IDCJJIBDHOC(::System::Int32 FNEAIJMIAFF, ::System::Action* ODLKCMLBIGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_IDCJJIBDHOC_OFFSET))(this, FNEAIJMIAFF, ODLKCMLBIGL);
	}

	::IFBGJJPIDLA* MDAALIEGOFO(::System::String* HIAIKHDFCLN)
	{
		return ((::IFBGJJPIDLA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_MDAALIEGOFO_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_EDEFLFIKNFK_OFFSET))(this);
	}

	::GLHMAKNABLL* FLFLJLIJOHF(::System::String* HIAIKHDFCLN)
	{
		return ((::GLHMAKNABLL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_FLFLJLIJOHF_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void KGKMLIEIAIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_KGKMLIEIAIB_OFFSET))(this);
	}

	::System::Void KPDOCLFPGHJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_KPDOCLFPGHJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::NAGNFEAANEP* PBJGPKCLGON(::System::String* HIAIKHDFCLN, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FCCFGMANMKM)
	{
		return ((::NAGNFEAANEP*(*)(::PVOID, ::System::String*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_PBJGPKCLGON_OFFSET))(this, HIAIKHDFCLN, FCCFGMANMKM);
	}

	::PNGJBNLGLBK* CJBFCLMFDOM()
	{
		return ((::PNGJBNLGLBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Boolean GIOCFOMJNHO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_GIOCFOMJNHO_OFFSET))(this);
	}

	::System::Boolean BNCEIHGJEFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_BNCEIHGJEFP_OFFSET))(this);
	}

	static ::System::Void MIOGCBBILOE(::System::Action_1<::DJKHNKJFMJO*>* CAFIBEBKELJ)
	{
		return ((::System::Void(*)(::System::Action_1<::DJKHNKJFMJO*>*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_MIOGCBBILOE_OFFSET))(CAFIBEBKELJ);
	}

	::NAGNFEAANEP* BAHBJHOLMHI(::System::String* HIAIKHDFCLN, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FCCFGMANMKM)
	{
		return ((::NAGNFEAANEP*(*)(::PVOID, ::System::String*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_BAHBJHOLMHI_OFFSET))(this, HIAIKHDFCLN, FCCFGMANMKM);
	}

	::System::String* GMMPNGPNLMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_GMMPNGPNLMF_OFFSET))(this);
	}

	::System::Void NBPGLBKJMCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_NBPGLBKJMCI_OFFSET))(this);
	}

	::System::Void OENOEFBECOA(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_OENOEFBECOA_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Void NBPGLBKJMCI_1(::System::Action* OJCDHADFENK, ::System::Action* PEGBHJCNKJG, ::System::Action* NDHDHCANNKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_NBPGLBKJMCI_1_OFFSET))(this, OJCDHADFENK, PEGBHJCNKJG, NDHDHCANNKK);
	}

	::System::Void GHBPNGDLDJE(::System::Int32 FNEAIJMIAFF, ::System::Action* ODLKCMLBIGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_GHBPNGDLDJE_OFFSET))(this, FNEAIJMIAFF, ODLKCMLBIGL);
	}

	static ::System::Void GLMNNEPGJGD(::System::Action_1<::System::UInt32>* FPLFECFKABE)
	{
		return ((::System::Void(*)(::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_GLMNNEPGJGD_OFFSET))(FPLFECFKABE);
	}

	static ::System::Void LNBCPBNPCCN(::System::Action_1<::DJKHNKJFMJO*>* CCDHGLJICJG)
	{
		return ((::System::Void(*)(::System::Action_1<::DJKHNKJFMJO*>*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_LNBCPBNPCCN_OFFSET))(CCDHGLJICJG);
	}

	static ::System::Action_1<::System::UInt32>* KBBKBDCGNNB()
	{
		return ((::System::Action_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + DJKHNKJFMJO_KBBKBDCGNNB_OFFSET))();
	}

	::System::UInt32 IPCDLONNBJN()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_IPCDLONNBJN_OFFSET))(this);
	}

	::System::Threading::CancellationToken OHAIKNCCOIA()
	{
		return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_OHAIKNCCOIA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::GLHMAKNABLL*>* EJEBNBAJDIA()
	{
		return ((::System::Collections::Generic::List_1<::GLHMAKNABLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_EJEBNBAJDIA_OFFSET))(this);
	}
};
