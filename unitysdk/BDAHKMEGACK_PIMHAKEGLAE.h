#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define BDAHKMEGACK_PIMHAKEGLAE_ANAAOECEOMI_OFFSET UNITYSDK_OFFSET(0x14C35120)
#define BDAHKMEGACK_PIMHAKEGLAE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C35110)

inline static constexpr unsigned int BDAHKMEGACK_PIMHAKEGLAE_TypeDefinitionIndex = 91989;

class BDAHKMEGACK_PIMHAKEGLAE : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell JECHFGJBEHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAHKMEGACK_PIMHAKEGLAE__CTOR_OFFSET))(this);
	}

	::System::Boolean ANAAOECEOMI(::MoleMole::HollowChessboard::HollowCell HBJOLKHGGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BDAHKMEGACK_PIMHAKEGLAE_ANAAOECEOMI_OFFSET))(this, HBJOLKHGGDD);
	}
};
