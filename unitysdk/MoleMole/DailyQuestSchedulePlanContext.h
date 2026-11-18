#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class LHFKDABLFJN;

#define MOLEMOLE_DAILYQUESTSCHEDULEPLANCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C6270)

namespace MoleMole
{
	inline static constexpr unsigned int DailyQuestSchedulePlanContext_TypeDefinitionIndex = 50400;

	class DailyQuestSchedulePlanContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LHFKDABLFJN* Quest; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DAILYQUESTSCHEDULEPLANCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
