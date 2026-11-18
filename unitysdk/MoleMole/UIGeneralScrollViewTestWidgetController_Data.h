#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2EA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralScrollViewTestWidgetController_Data_TypeDefinitionIndex = 61191;

	class UIGeneralScrollViewTestWidgetController_Data : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10
		::MoleMole::Vector2Int size; // 0x20

		::System::Void _ctor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this, color);
		}
	};
}
