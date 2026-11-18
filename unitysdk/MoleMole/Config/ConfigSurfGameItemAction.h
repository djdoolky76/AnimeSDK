#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBDIFFENBJO;

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTION_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1653F470)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1653F4D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemAction_TypeDefinitionIndex = 40755;

	class ConfigSurfGameItemAction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute_1(::MBDIFFENBJO* source)
		{
			return ((::System::Void(*)(::PVOID, ::MBDIFFENBJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTION_EXECUTE_1_OFFSET))(this, source);
		}
	};
}
