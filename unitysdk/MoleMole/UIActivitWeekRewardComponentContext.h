#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JNCBGOANMMK;

#define MOLEMOLE_UIACTIVITWEEKREWARDCOMPONENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x198FBC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitWeekRewardComponentContext_TypeDefinitionIndex = 70408;

	class UIActivitWeekRewardComponentContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JNCBGOANMMK* proxy; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITWEEKREWARDCOMPONENTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
