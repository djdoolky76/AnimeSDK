#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFJIMHBAHBI.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JEHLBFOILMA;
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1593CF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleMonsterHudWidgetController_Context_TypeDefinitionIndex = 92510;

	class UIAutoBattleMonsterHudWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JEHLBFOILMA* slot; // 0x28
		::UnityEngine::Canvas* root; // 0x30
		::BFJIMHBAHBI hudData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
