#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIDailyChallengePageController_PageState.h"

#define MOLEMOLE_DAILYCHALLENGEPAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x142CECD0)

namespace MoleMole
{
	inline static constexpr unsigned int DailyChallengePageData_TypeDefinitionIndex = 69001;

	class DailyChallengePageData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean KeepBuild; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 SelectEntranceId; // 0x2C
		::System::Int32 SelectSuitId; // 0x30
		::MoleMole::UIDailyChallengePageController_PageState StartPageState; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DAILYCHALLENGEPAGEDATA__CTOR_OFFSET))(this);
		}
	};
}
