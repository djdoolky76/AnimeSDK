#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FEFGIOJJDPO;

#define BDAHKMEGACK_IGELMGHFLMK_LDMKNICFFNB_OFFSET UNITYSDK_OFFSET(0x136167D0)
#define BDAHKMEGACK_IGELMGHFLMK__CTOR_OFFSET UNITYSDK_OFFSET(0x136167C0)

inline static constexpr unsigned int BDAHKMEGACK_IGELMGHFLMK_TypeDefinitionIndex = 91988;

class BDAHKMEGACK_IGELMGHFLMK : public ::System::Object
{
public:
	::FEFGIOJJDPO* NHPNONAHCOM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAHKMEGACK_IGELMGHFLMK__CTOR_OFFSET))(this);
	}

	::System::Boolean LDMKNICFFNB(::MoleMole::HollowChessboard::HollowCell HBJOLKHGGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BDAHKMEGACK_IGELMGHFLMK_LDMKNICFFNB_OFFSET))(this, HBJOLKHGGDD);
	}
};
