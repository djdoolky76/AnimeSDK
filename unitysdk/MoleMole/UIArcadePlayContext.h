#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJIEMKHJEEM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIARCADEPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17036C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePlayContext_TypeDefinitionIndex = 50409;

	class UIArcadePlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ArcadeID; // 0x28
		::AJIEMKHJEEM MiniGameType; // 0x2C
		::System::Boolean IsMultiPlayerGame; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
