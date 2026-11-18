#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

#define AEPLOIJBPBK_HEDJJKPNLJG_FDJBJDJIBHM_OFFSET UNITYSDK_OFFSET(0x1264B4A0)
#define AEPLOIJBPBK_HEDJJKPNLJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1264B490)

inline static constexpr unsigned int AEPLOIJBPBK_HEDJJKPNLJG_TypeDefinitionIndex = 62342;

class AEPLOIJBPBK_HEDJJKPNLJG : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF; // 0x10
	::MoleMole::HollowChessboard::HollowCell IBONAOPHDCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLOIJBPBK_HEDJJKPNLJG__CTOR_OFFSET))(this);
	}

	::System::Void FDJBJDJIBHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLOIJBPBK_HEDJJKPNLJG_FDJBJDJIBHM_OFFSET))(this);
	}
};
