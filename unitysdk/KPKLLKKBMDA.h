#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define KPKLLKKBMDA_ANMGLGEKGJA_OFFSET UNITYSDK_OFFSET(0x15176C10)
#define KPKLLKKBMDA__CTOR_OFFSET UNITYSDK_OFFSET(0x15176BC0)

inline static constexpr unsigned int KPKLLKKBMDA_TypeDefinitionIndex = 89578;

class KPKLLKKBMDA : public ::MDGLNFGCBOJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKLLKKBMDA__CTOR_OFFSET))(this);
	}

	::System::Void ANMGLGEKGJA(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + KPKLLKKBMDA_ANMGLGEKGJA_OFFSET))(this, EKPEBNCLJPM);
	}
};
