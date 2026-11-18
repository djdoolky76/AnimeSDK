#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPLAYERACCESSORYITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4A300)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryItemWidgetControllerContext_TypeDefinitionIndex = 72205;

	class UIPlayerAccessoryItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ClientEquipped; // 0x28
		::System::Boolean Banned; // 0x29
		::System::Boolean ServerEquipped; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Int32 SheetType; // 0x2C
		::System::Int32 ConfigID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
