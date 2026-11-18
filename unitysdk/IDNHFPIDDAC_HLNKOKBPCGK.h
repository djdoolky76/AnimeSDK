#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopClueLevelThemeTabWidgetController_DataProxy; }

#define IDNHFPIDDAC_HLNKOKBPCGK_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x15BFE480)
#define IDNHFPIDDAC_HLNKOKBPCGK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFE470)

inline static constexpr unsigned int IDNHFPIDDAC_HLNKOKBPCGK_TypeDefinitionIndex = 55340;

class IDNHFPIDDAC_HLNKOKBPCGK : public ::System::Object
{
public:
	::MoleMole::UICoopClueLevelThemeTabWidgetController_DataProxy* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNHFPIDDAC_HLNKOKBPCGK__CTOR_OFFSET))(this);
	}

	::System::Boolean HGMCGMDMANJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNHFPIDDAC_HLNKOKBPCGK_HGMCGMDMANJ_OFFSET))(this);
	}
};
