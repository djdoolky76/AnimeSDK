#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NAGFHFBHMCJ.h"

#define MOLEMOLE_UIGOLDMININGDAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E62980)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayContext_TypeDefinitionIndex = 68235;

	class UIGoldMiningDayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NAGFHFBHMCJ oepnType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
