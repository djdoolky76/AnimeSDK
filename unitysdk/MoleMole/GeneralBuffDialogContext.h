#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JNPEJGEMEDE;

#define MOLEMOLE_GENERALBUFFDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D224C0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralBuffDialogContext_TypeDefinitionIndex = 85639;

	class GeneralBuffDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JNPEJGEMEDE* Config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBUFFDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
