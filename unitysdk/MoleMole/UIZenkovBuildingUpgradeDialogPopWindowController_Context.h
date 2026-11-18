#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHAHGICCGN;
namespace MoleMole { class UIZenkovControlCenterPageController; }

#define MOLEMOLE_UIZENKOVBUILDINGUPGRADEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170C44B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBuildingUpgradeDialogPopWindowController_Context_TypeDefinitionIndex = 62712;

	class UIZenkovBuildingUpgradeDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIZenkovControlCenterPageController* Ctrl; // 0x28
		::BPHAHGICCGN* BuildingData; // 0x30
		::System::Int32 Level; // 0x38
		::System::Int32 DstLevel; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGUPGRADEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
