#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

class IDOJEBICCHE;
class LHINLKLOLMP;

#define IDOJEBICCHE_MOOAPCLDDBG_DADFGKCECEI_OFFSET UNITYSDK_OFFSET(0x1A39AA80)
#define IDOJEBICCHE_MOOAPCLDDBG_MABMNAOEMNN_OFFSET UNITYSDK_OFFSET(0x1A39A790)
#define IDOJEBICCHE_MOOAPCLDDBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39A780)

inline static constexpr unsigned int IDOJEBICCHE_MOOAPCLDDBG_TypeDefinitionIndex = 49185;

class IDOJEBICCHE_MOOAPCLDDBG : public ::System::Object
{
public:
	::IDOJEBICCHE* KLHPEBKNIFB; // 0x10
	::LHINLKLOLMP* DPOIMBCAJCG; // 0x18
	::MoleMole::UI::FlowerShop::ESlotType ABOCGLAOJGC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJEBICCHE_MOOAPCLDDBG__CTOR_OFFSET))(this);
	}

	::System::Void MABMNAOEMNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJEBICCHE_MOOAPCLDDBG_MABMNAOEMNN_OFFSET))(this);
	}

	::System::Void DADFGKCECEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJEBICCHE_MOOAPCLDDBG_DADFGKCECEI_OFFSET))(this);
	}
};
