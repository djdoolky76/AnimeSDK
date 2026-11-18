#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_UIGRIDLAYOUTGROUPV2TESTPOPWINDOWCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x175A6400)

namespace MoleMole
{
	inline static constexpr unsigned int UIGridLayoutGroupV2TestPopWindowController_Data_TypeDefinitionIndex = 79337;

	class UIGridLayoutGroupV2TestPopWindowController_Data : public ::System::Object
	{
	public:
		::MoleMole::Vector2Int size; // 0x10
		::UnityEngine::Color color; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRIDLAYOUTGROUPV2TESTPOPWINDOWCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
