#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/MechaConfigTemplate.h"
#include "unitysdk/MCOJFCHPGIO.h"

class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_MECHACONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BF270)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int MechaConfigTemplateExt_TypeDefinitionIndex = 9153;

	class MechaConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::MechaConfigTemplate
	{
	public:
		::System::Void _ctor(::MCOJFCHPGIO data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::MCOJFCHPGIO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_MECHACONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
