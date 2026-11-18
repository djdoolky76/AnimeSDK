#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }

#define MOLEMOLE_UIINLEVELPAUSEBATTLEINFOLEVELMISSIONROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E90290)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBattleInfoLevelMissionRowContext_TypeDefinitionIndex = 58797;

	class UIInLevelPauseBattleInfoLevelMissionRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Object* Quests; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEINFOLEVELMISSIONROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
