#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2E6C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractCondition_TypeDefinitionIndex = 70262;

	class ConfigHollowInteractCondition : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITION__CTOR_OFFSET))(this);
		}
	};
}
