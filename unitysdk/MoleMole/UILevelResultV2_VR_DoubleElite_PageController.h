#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMKLPPGLKJJ.h"
#include "unitysdk/MoleMole/UILevelResultV2_VR_PageController.h"

#define MOLEMOLE_UILEVELRESULTV2_VR_DOUBLEELITE_PAGECONTROLLER_GET_REWARDBUFFGAMETAG_OFFSET UNITYSDK_OFFSET(0x14C8C110)
#define MOLEMOLE_UILEVELRESULTV2_VR_DOUBLEELITE_PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C8C120)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_DoubleElite_PageController_TypeDefinitionIndex = 77651;

	class UILevelResultV2_VR_DoubleElite_PageController : public ::MoleMole::UILevelResultV2_VR_PageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_DOUBLEELITE_PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::JMKLPPGLKJJ get_RewardBuffGameTag()
		{
			return ((::JMKLPPGLKJJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_DOUBLEELITE_PAGECONTROLLER_GET_REWARDBUFFGAMETAG_OFFSET))(this);
		}
	};
}
