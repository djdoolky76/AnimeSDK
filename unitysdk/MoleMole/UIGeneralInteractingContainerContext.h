#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHDBFPFHLEO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALINTERACTINGCONTAINERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18043EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralInteractingContainerContext_TypeDefinitionIndex = 66052;

	class UIGeneralInteractingContainerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DHDBFPFHLEO ShowType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTERACTINGCONTAINERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
