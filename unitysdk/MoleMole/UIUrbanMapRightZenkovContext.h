#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBFEGIGFHMD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPRIGHTZENKOVCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170A1240)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightZenkovContext_TypeDefinitionIndex = 84776;

	class UIUrbanMapRightZenkovContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBFEGIGFHMD rightTabType; // 0x28
		::System::Int32 selectQuestId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTZENKOVCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
