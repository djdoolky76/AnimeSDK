#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNJINLDLIDO_GJLFGFPGJAN;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define HNJINLDLIDO_MGPBGGLJBJO_JNEJDABHPJB_OFFSET UNITYSDK_OFFSET(0xE9FFAC0)
#define HNJINLDLIDO_MGPBGGLJBJO__CTOR_OFFSET UNITYSDK_OFFSET(0xE9FFAB0)

inline static constexpr unsigned int HNJINLDLIDO_MGPBGGLJBJO_TypeDefinitionIndex = 74442;

class HNJINLDLIDO_MGPBGGLJBJO : public ::System::Object
{
public:
	::HNJINLDLIDO_GJLFGFPGJAN* FGBNBFHOKAA; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* KOOEMKFHBMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJINLDLIDO_MGPBGGLJBJO__CTOR_OFFSET))(this);
	}

	::System::Void JNEJDABHPJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJINLDLIDO_MGPBGGLJBJO_JNEJDABHPJB_OFFSET))(this);
	}
};
