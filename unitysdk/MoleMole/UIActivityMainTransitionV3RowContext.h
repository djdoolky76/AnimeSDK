#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A31C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainTransitionV3RowContext_TypeDefinitionIndex = 45299;

	class UIActivityMainTransitionV3RowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
