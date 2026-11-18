#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/PEBKOGJHCAF.h"
#include "unitysdk/System/Object.h"

#define CEDPBOJDIEI__CTOR_OFFSET UNITYSDK_OFFSET(0x199FBA10)

inline static constexpr unsigned int CEDPBOJDIEI_TypeDefinitionIndex = 86206;

class CEDPBOJDIEI : public ::System::Object
{
public:
	::PEBKOGJHCAF IAFHBCHLBME; // 0x10
	::MoleMole::HollowChessboard::HollowCell MKIFDGAEBIH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDPBOJDIEI__CTOR_OFFSET))(this);
	}
};
