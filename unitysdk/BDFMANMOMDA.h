#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define BDFMANMOMDA_CKCLIGEPPKC_OFFSET UNITYSDK_OFFSET(0xFF670F0)
#define BDFMANMOMDA_INMLFALFLEM_OFFSET UNITYSDK_OFFSET(0xFF670D0)
#define BDFMANMOMDA__CTOR_OFFSET UNITYSDK_OFFSET(0xFF670C0)

inline static constexpr unsigned int BDFMANMOMDA_TypeDefinitionIndex = 86695;

class BDFMANMOMDA : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell _GHJGCAEJHBL_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFMANMOMDA__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell INMLFALFLEM()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFMANMOMDA_INMLFALFLEM_OFFSET))(this);
	}

	::System::Void CKCLIGEPPKC(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BDFMANMOMDA_CKCLIGEPPKC_OFFSET))(this, EGEGIMGMJHN);
	}
};
