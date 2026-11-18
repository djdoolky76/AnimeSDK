#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBALLGAMECOLLECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1983BBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameCollectPageContext_TypeDefinitionIndex = 45667;

	class UIBallGameCollectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
