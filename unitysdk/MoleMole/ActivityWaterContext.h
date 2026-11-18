#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_ACTIVITYWATERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164F9AC0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityWaterContext_TypeDefinitionIndex = 49114;

	class ActivityWaterContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* rootActivityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWATERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
