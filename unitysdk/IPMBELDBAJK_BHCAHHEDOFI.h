#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/System/ValueType.h"

#define IPMBELDBAJK_BHCAHHEDOFI_HIADJABJGPB_OFFSET UNITYSDK_OFFSET(0x36C210)
#define IPMBELDBAJK_BHCAHHEDOFI_ILCPGEBEKJI_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define IPMBELDBAJK_BHCAHHEDOFI_JNHOAKIOBHC_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define IPMBELDBAJK_BHCAHHEDOFI_PMNCEMDEOLE_OFFSET UNITYSDK_OFFSET(0x36BEF0)

inline static constexpr unsigned int IPMBELDBAJK_BHCAHHEDOFI_TypeDefinitionIndex = 71403;

struct alignas(4) IPMBELDBAJK_BHCAHHEDOFI
{
	::MoleMole::HollowChessboard::HollowCell _HKMPDPOGBKF_k__BackingField; // 0x10
	::MoleMole::ChessboardPathLink _CPJIGNAJIMA_k__BackingField; // 0x1C

	::System::Void JNHOAKIOBHC(::MoleMole::ChessboardPathLink EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessboardPathLink))((::PBYTE)hIl2Cpp + IPMBELDBAJK_BHCAHHEDOFI_JNHOAKIOBHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::ChessboardPathLink ILCPGEBEKJI()
	{
		return ((::MoleMole::ChessboardPathLink(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMBELDBAJK_BHCAHHEDOFI_ILCPGEBEKJI_OFFSET))(this);
	}

	::System::Void PMNCEMDEOLE(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IPMBELDBAJK_BHCAHHEDOFI_PMNCEMDEOLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowCell HIADJABJGPB()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMBELDBAJK_BHCAHHEDOFI_HIADJABJGPB_OFFSET))(this);
	}
};
