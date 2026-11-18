#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/TurnBasedEntityTemplate.h"
#include "unitysdk/LCGNFEMGFJD.h"

class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_TURNBASEDENTITYTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0905A0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int TurnBasedEntityTemplateExt_TypeDefinitionIndex = 10276;

	class TurnBasedEntityTemplateExt : public ::MoleMole::FlatBuffers::Config::TurnBasedEntityTemplate
	{
	public:
		::System::Void _ctor(::LCGNFEMGFJD data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::LCGNFEMGFJD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_TURNBASEDENTITYTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
