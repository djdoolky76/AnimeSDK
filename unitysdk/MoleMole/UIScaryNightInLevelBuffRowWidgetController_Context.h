#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167C3450)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightInLevelBuffRowWidgetController_Context_TypeDefinitionIndex = 69103;

	class UIScaryNightInLevelBuffRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::Battle::Entity* TargetEntity; // 0x28
		::System::Int32 ScaryNightCharBuffId; // 0x30
		::GPJMHAAEIKO AttributeName; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
