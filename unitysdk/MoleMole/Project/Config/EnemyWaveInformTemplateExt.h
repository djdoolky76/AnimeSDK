#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/EnemyWaveInformTemplate.h"
#include "unitysdk/NAFOIOFKONL.h"

class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_ENEMYWAVEINFORMTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1734DD30)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int EnemyWaveInformTemplateExt_TypeDefinitionIndex = 12214;

	class EnemyWaveInformTemplateExt : public ::MoleMole::FlatBuffers::Config::EnemyWaveInformTemplate
	{
	public:
		::System::Void _ctor(::NAFOIOFKONL data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::NAFOIOFKONL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ENEMYWAVEINFORMTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
