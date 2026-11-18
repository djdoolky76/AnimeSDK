#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class OMIKNPHDPMA;

#define OMIKNPHDPMA_HMEEFIOAJMA_ABLAIMDLECI_OFFSET UNITYSDK_OFFSET(0x15F7F170)
#define OMIKNPHDPMA_HMEEFIOAJMA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7F160)

inline static constexpr unsigned int OMIKNPHDPMA_HMEEFIOAJMA_TypeDefinitionIndex = 84762;

class OMIKNPHDPMA_HMEEFIOAJMA : public ::System::Object
{
public:
	::OMIKNPHDPMA* KLHPEBKNIFB; // 0x10
	::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIKNPHDPMA_HMEEFIOAJMA__CTOR_OFFSET))(this);
	}

	::System::Void ABLAIMDLECI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIKNPHDPMA_HMEEFIOAJMA_ABLAIMDLECI_OFFSET))(this);
	}
};
