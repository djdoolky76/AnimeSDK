#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData_Value.h"

namespace MoleMole::HollowChessboard { class MatPropertyData; }

#define OLADCDDOLPI_PLFENDDNJBL_OFFSET UNITYSDK_OFFSET(0x595670)
#define OLADCDDOLPI__CTOR_OFFSET UNITYSDK_OFFSET(0x5955E0)

inline static constexpr unsigned int OLADCDDOLPI_TypeDefinitionIndex = 64698;

struct alignas(8) OLADCDDOLPI
{
	::MoleMole::HollowChessboard::MatPropertyData* FNBEIAJEJGD; // 0x10
	::MoleMole::HollowChessboard::MatPropertyData* JHLGFPBDJIL; // 0x18
	::System::Boolean HCCOGMGMMML; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::MatPropertyData* KDEHMPGOCEP, ::MoleMole::HollowChessboard::MatPropertyData* PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::MatPropertyData*, ::MoleMole::HollowChessboard::MatPropertyData*))((::PBYTE)hIl2Cpp + OLADCDDOLPI__CTOR_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Boolean PLFENDDNJBL(::System::Single BFGHPIFHKAO, ::MoleMole::HollowChessboard::MatPropertyData_Value& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::HollowChessboard::MatPropertyData_Value&))((::PBYTE)hIl2Cpp + OLADCDDOLPI_PLFENDDNJBL_OFFSET))(this, BFGHPIFHKAO, IGAAKDOIPNN);
	}
};
