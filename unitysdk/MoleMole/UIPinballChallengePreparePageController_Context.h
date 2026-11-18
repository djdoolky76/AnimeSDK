#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPINBALLCHALLENGEPREPAREPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1906C3E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballChallengePreparePageController_Context_TypeDefinitionIndex = 41512;

	class UIPinballChallengePreparePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LevelID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLCHALLENGEPREPAREPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
