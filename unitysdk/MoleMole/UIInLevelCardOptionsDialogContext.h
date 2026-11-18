#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardOptionsDialogContext.h"

class CBIHNLNIPAM;

#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187D82B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCardOptionsDialogContext_TypeDefinitionIndex = 55949;

	class UIInLevelCardOptionsDialogContext : public ::MoleMole::UIHollowCardOptionsDialogContext
	{
	public:
		::CBIHNLNIPAM* InLevelOptionsCardChoiceData; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
