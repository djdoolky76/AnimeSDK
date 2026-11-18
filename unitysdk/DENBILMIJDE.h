#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANECFJNBJOL.h"
#include "unitysdk/MNBLIKPHDEA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define DENBILMIJDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1536C8B0)

inline static constexpr unsigned int DENBILMIJDE_TypeDefinitionIndex = 49545;

class DENBILMIJDE : public ::MNBLIKPHDEA
{
public:
	::MoleMole::HollowChessboard::HollowCell NHGHPCBGGCI; // 0x10
	::System::Boolean FGAIAOHGNFJ; // 0x1C
	::System::Boolean MGCGDMLOHNG; // 0x1D
	::System::Byte _padding0[0x2];
	::ANECFJNBJOL JMINOGAOFIL; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DENBILMIJDE__CTOR_OFFSET))(this, ABHBKFJKINO);
	}
};
