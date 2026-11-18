#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/RABMapConfigTemplate.h"
#include "unitysdk/HGOBJKFDAHJ.h"

class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_RABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF679C0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int RABMapConfigTemplateExt_TypeDefinitionIndex = 10671;

	class RABMapConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::RABMapConfigTemplate
	{
	public:
		::System::Void _ctor(::HGOBJKFDAHJ data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::HGOBJKFDAHJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_RABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
