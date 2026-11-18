#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JDEGKAENALE;

#define MOLEMOLE_UIROLEEFFECTDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166C9D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEffectDialogPopContext_TypeDefinitionIndex = 65330;

	class UIRoleEffectDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JDEGKAENALE* info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
