#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1757F540)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleInLevelPauseBuffRowWidgetContext_TypeDefinitionIndex = 74423;

	class UIDuelBattleInLevelPauseBuffRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Name; // 0x28
		::System::String* Description; // 0x30
		::System::String* IconPath; // 0x38
		::System::Int32 Count; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
