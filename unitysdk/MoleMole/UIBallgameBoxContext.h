#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KAFPHKPLDMJ;

#define MOLEMOLE_UIBALLGAMEBOXCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19185670)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallgameBoxContext_TypeDefinitionIndex = 62462;

	class UIBallgameBoxContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KAFPHKPLDMJ* showHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEBOXCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
