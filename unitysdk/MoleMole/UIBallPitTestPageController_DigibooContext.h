#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_DIGIBOOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x159498D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallPitTestPageController_DigibooContext_TypeDefinitionIndex = 82076;

	class UIBallPitTestPageController_DigibooContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 DigibooID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_DIGIBOOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
