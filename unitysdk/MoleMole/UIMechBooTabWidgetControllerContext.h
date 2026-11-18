#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1961A8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTabWidgetControllerContext_TypeDefinitionIndex = 66398;

	class UIMechBooTabWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ScriptID; // 0x28
		::System::Int32 TabID; // 0x2C
		::System::Boolean IsUnlocked; // 0x30
		::System::Boolean IsUp; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
