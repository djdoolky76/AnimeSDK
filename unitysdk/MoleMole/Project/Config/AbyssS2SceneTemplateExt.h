#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/AbyssS2SceneTemplate.h"
#include "unitysdk/LGHDKODCODJ.h"

class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_ABYSSS2SCENETEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE6100)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int AbyssS2SceneTemplateExt_TypeDefinitionIndex = 12658;

	class AbyssS2SceneTemplateExt : public ::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate
	{
	public:
		::System::Void _ctor(::LGHDKODCODJ data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::LGHDKODCODJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABYSSS2SCENETEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
