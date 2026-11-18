#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJAKAMBLNJH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBALLGAMELEVELPREPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17041360)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameLevelPrepContext_TypeDefinitionIndex = 73106;

	class UIBallGameLevelPrepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectGameLevelID; // 0x28
		::IJAKAMBLNJH levelType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPREPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
