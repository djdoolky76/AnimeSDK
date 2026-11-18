#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKCCCBDOLDL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIARCADECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15935FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeContext_TypeDefinitionIndex = 85401;

	class UIArcadeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CKCCCBDOLDL JumpType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
