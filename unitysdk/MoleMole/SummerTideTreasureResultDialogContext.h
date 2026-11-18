#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GDCLGFPAMDH;
namespace System { class Action; }

#define MOLEMOLE_SUMMERTIDETREASURERESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18120B40)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasureResultDialogContext_TypeDefinitionIndex = 51039;

	class SummerTideTreasureResultDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnExitBattleAction; // 0x28
		::GDCLGFPAMDH* DungeonDoneNotify; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURERESULTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
