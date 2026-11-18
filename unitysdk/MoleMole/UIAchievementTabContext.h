#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KJFPHPKFKMI;

#define MOLEMOLE_UIACHIEVEMENTTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BE9070)

namespace MoleMole
{
	inline static constexpr unsigned int UIAchievementTabContext_TypeDefinitionIndex = 80336;

	class UIAchievementTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KJFPHPKFKMI* Config; // 0x28
		::System::Boolean Selected; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
