#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class LPGNKALPGAF;
namespace System { class Action; }

#define MOLEMOLE_UNIVERSALGAME_UIBIGSCENEDUNGEONRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1286E7D0)

namespace MoleMole::UniversalGame
{
	inline static constexpr unsigned int UIBigSceneDungeonResultPageContext_TypeDefinitionIndex = 56389;

	class UIBigSceneDungeonResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnExitBattleAction; // 0x28
		::LPGNKALPGAF* Notify; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNIVERSALGAME_UIBIGSCENEDUNGEONRESULTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
