#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCJFBAKNDNN.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class BCMBIDLJDME;
class BIGFDINOEGJ;
class JBGKCOPNHBE;
class OBKNEEOLOPB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMLBNDDMIBJ_BOFHMMKAGOL_OFFSET UNITYSDK_OFFSET(0x152AF4B0)
#define JMLBNDDMIBJ_CKOCPKHHLOC_OFFSET UNITYSDK_OFFSET(0x152AED80)
#define JMLBNDDMIBJ_FLLBOJHIGBL_OFFSET UNITYSDK_OFFSET(0x152AF0A0)
#define JMLBNDDMIBJ_HCCOEBHPAFP_OFFSET UNITYSDK_OFFSET(0x152AF2D0)
#define JMLBNDDMIBJ_HKCKIDFCNPL_OFFSET UNITYSDK_OFFSET(0x152AF7F0)
#define JMLBNDDMIBJ_IHFGAAEBMFL_OFFSET UNITYSDK_OFFSET(0x152AF320)
#define JMLBNDDMIBJ_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x152AEBD0)
#define JMLBNDDMIBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x152AE980)

inline static constexpr unsigned int JMLBNDDMIBJ_TypeDefinitionIndex = 38491;

class JMLBNDDMIBJ : public ::HCJFBAKNDNN
{
public:
	::System::Collections::Generic::List_1<::JBGKCOPNHBE*>* BBMDKDJJGCN; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* CHMOLGPGCAK; // 0x30
	::OBKNEEOLOPB* EKHAPLAFMCB; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* FKKMBFACNKI; // 0x40
	::BIGFDINOEGJ* KPFNAMACIDA; // 0x48
	::System::Boolean HFGAKOKKBCP; // 0x50
	::System::Boolean BBBKHAJEHLA; // 0x51

	::System::Void _ctor(::BIGFDINOEGJ* KPFNAMACIDA, ::MoleMole::HollowChessboard::HollowChessboardUID COBEJJHGMPO, ::LJIBNLBCGFG FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::BIGFDINOEGJ*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + JMLBNDDMIBJ__CTOR_OFFSET))(this, KPFNAMACIDA, COBEJJHGMPO, FGLDMHFEJDI);
	}

	::System::Void KNDMMHPDPIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLBNDDMIBJ_KNDMMHPDPIB_OFFSET))(this);
	}

	::System::Void HCCOEBHPAFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLBNDDMIBJ_HCCOEBHPAFP_OFFSET))(this);
	}

	::System::Void BOFHMMKAGOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLBNDDMIBJ_BOFHMMKAGOL_OFFSET))(this);
	}

	::System::Void HKCKIDFCNPL(::System::Collections::Generic::List_1<::System::String*>* FKDMBPECLJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + JMLBNDDMIBJ_HKCKIDFCNPL_OFFSET))(this, FKDMBPECLJL);
	}

	::System::Void CKOCPKHHLOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLBNDDMIBJ_CKOCPKHHLOC_OFFSET))(this);
	}

	::System::Void FLLBOJHIGBL(::BCMBIDLJDME* LLMMPGEGNLB, ::System::String* CFJPKNDJAFF)
	{
		return ((::System::Void(*)(::PVOID, ::BCMBIDLJDME*, ::System::String*))((::PBYTE)hIl2Cpp + JMLBNDDMIBJ_FLLBOJHIGBL_OFFSET))(this, LLMMPGEGNLB, CFJPKNDJAFF);
	}

	::System::Void IHFGAAEBMFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLBNDDMIBJ_IHFGAAEBMFL_OFFSET))(this);
	}
};
