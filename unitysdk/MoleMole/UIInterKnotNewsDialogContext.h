#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINTERKNOTNEWSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F84D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsDialogContext_TypeDefinitionIndex = 58346;

	class UIInterKnotNewsDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 GroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
