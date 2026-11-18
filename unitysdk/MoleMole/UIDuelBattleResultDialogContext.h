#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UILevelResultPageContext; }

#define MOLEMOLE_UIDUELBATTLERESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF1660)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleResultDialogContext_TypeDefinitionIndex = 84193;

	class UIDuelBattleResultDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UILevelResultPageContext* LevelResultContext; // 0x28
		::System::Int32 Score; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLERESULTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
