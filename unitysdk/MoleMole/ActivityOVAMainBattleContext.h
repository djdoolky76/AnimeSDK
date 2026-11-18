#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PPDNMFONAEH;

#define MOLEMOLE_ACTIVITYOVAMAINBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B6C7A0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVAMainBattleContext_TypeDefinitionIndex = 79987;

	class ActivityOVAMainBattleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PPDNMFONAEH* BattleEntryData; // 0x28
		::System::Int32 focusQuest; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVAMAINBATTLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
