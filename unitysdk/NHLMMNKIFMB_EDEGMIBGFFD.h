#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NHLMMNKIFMB;
class NHLMMNKIFMB_ALMANCFBJJN;

#define NHLMMNKIFMB_EDEGMIBGFFD_HBOHHGDJBJF_OFFSET UNITYSDK_OFFSET(0x1AE211D0)
#define NHLMMNKIFMB_EDEGMIBGFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE211C0)

inline static constexpr unsigned int NHLMMNKIFMB_EDEGMIBGFFD_TypeDefinitionIndex = 71031;

class NHLMMNKIFMB_EDEGMIBGFFD : public ::System::Object
{
public:
	::NHLMMNKIFMB_ALMANCFBJJN* FGBNBFHOKAA; // 0x10
	::NHLMMNKIFMB* FBNGLHEEPFH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_EDEGMIBGFFD__CTOR_OFFSET))(this);
	}

	::System::Void HBOHHGDJBJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_EDEGMIBGFFD_HBOHHGDJBJF_OFFSET))(this);
	}
};
