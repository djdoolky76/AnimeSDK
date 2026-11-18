#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
namespace MoleMole { class ChessEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBAMLABJMKF_NGEFBANMLJO_BNDGGOHLHEM_OFFSET UNITYSDK_OFFSET(0x161715E0)
#define FBAMLABJMKF_NGEFBANMLJO_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x16172BA0)
#define FBAMLABJMKF_NGEFBANMLJO_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x16172E60)
#define FBAMLABJMKF_NGEFBANMLJO_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x16172BE0)
#define FBAMLABJMKF_NGEFBANMLJO_FJEMCJJOEND_OFFSET UNITYSDK_OFFSET(0x16172890)
#define FBAMLABJMKF_NGEFBANMLJO_FJMHCNINFPD_OFFSET UNITYSDK_OFFSET(0x16172A30)
#define FBAMLABJMKF_NGEFBANMLJO_FMFGOCNMENJ_OFFSET UNITYSDK_OFFSET(0x16172390)
#define FBAMLABJMKF_NGEFBANMLJO_GPAOHEEKFCD_OFFSET UNITYSDK_OFFSET(0x16172910)
#define FBAMLABJMKF_NGEFBANMLJO_IFPACAAHGLH_OFFSET UNITYSDK_OFFSET(0x16172D80)
#define FBAMLABJMKF_NGEFBANMLJO_KCOKAPJJOKL_OFFSET UNITYSDK_OFFSET(0x16172380)
#define FBAMLABJMKF_NGEFBANMLJO_LDKBAHBEIEO_OFFSET UNITYSDK_OFFSET(0x161725D0)
#define FBAMLABJMKF_NGEFBANMLJO_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x16172EA0)
#define FBAMLABJMKF_NGEFBANMLJO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x161717D0)
#define FBAMLABJMKF_NGEFBANMLJO_PJPLEPIDLBB_OFFSET UNITYSDK_OFFSET(0x161725C0)
#define FBAMLABJMKF_NGEFBANMLJO_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x16171C90)
#define FBAMLABJMKF_NGEFBANMLJO__CTOR_OFFSET UNITYSDK_OFFSET(0x161714E0)

inline static constexpr unsigned int FBAMLABJMKF_NGEFBANMLJO_TypeDefinitionIndex = 78137;

class FBAMLABJMKF_NGEFBANMLJO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* NEBFKGHHCNO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* GGFJHNBEAGM; // 0x18
	::System::Boolean _GFPKPNFEKCG_k__BackingField; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 JHLDDCBHIAH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO__CTOR_OFFSET))(this);
	}

	::System::Void BNDGGOHLHEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_BNDGGOHLHEM_OFFSET))(this);
	}

	::System::Boolean KCOKAPJJOKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_KCOKAPJJOKL_OFFSET))(this);
	}

	::MoleMole::ChessEntity* FMFGOCNMENJ(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::MoleMole::ChessEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_FMFGOCNMENJ_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void PJPLEPIDLBB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_PJPLEPIDLBB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>* LDKBAHBEIEO(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_LDKBAHBEIEO_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void FJEMCJJOEND(::MoleMole::ChessEntity* KECKGDFIALJ, ::System::String* KPIAFDELPJL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::String*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_FJEMCJJOEND_OFFSET))(this, KECKGDFIALJ, KPIAFDELPJL);
	}

	::MoleMole::ChessEntity* GPAOHEEKFCD(::System::String* JEEBGGPBHJL, ::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::FBAMLABJMKF* ALOOEAKLOPK)
	{
		return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::String*, ::MoleMole::HollowChessboard::HollowCell, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_GPAOHEEKFCD_OFFSET))(this, JEEBGGPBHJL, ABHBKFJKINO, ALOOEAKLOPK);
	}

	::System::Void DNNJOOJBJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_DNNJOOJBJNB_OFFSET))(this);
	}

	::System::Void PLCJNBHECGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_PLCJNBHECGC_OFFSET))(this);
	}

	::System::Void FJMHCNINFPD(::MoleMole::ChessEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_FJMHCNINFPD_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void EFGOADGCJMA(::MoleMole::ChessEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_EFGOADGCJMA_OFFSET))(this, KECKGDFIALJ);
	}

	::MoleMole::ChessEntity* IFPACAAHGLH(::System::Int32 KGMILFHDNMB)
	{
		return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_IFPACAAHGLH_OFFSET))(this, KGMILFHDNMB);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NGEFBANMLJO_LJMIPGJJELP_OFFSET))(this);
	}
};
