#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NMPKPCHPDMG.h"

#define MOLEMOLE_UIRELICSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147FE8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRelicSelectContext_TypeDefinitionIndex = 78467;

	class UIRelicSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 initialRelicUID; // 0x28
		::NMPKPCHPDMG ShowType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRELICSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
