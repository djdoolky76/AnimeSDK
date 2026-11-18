#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/AbyssS2AreaConfigTemplate.h"
#include "unitysdk/GLANDAGNIJK.h"

class HJFICLHGFHJ;
class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_ABYSSS2AREACONFIGTEMPLATEEXT_GETMETATYPECONFIG_OFFSET UNITYSDK_OFFSET(0x195AE4C0)
#define MOLEMOLE_PROJECT_CONFIG_ABYSSS2AREACONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x195AE4B0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int AbyssS2AreaConfigTemplateExt_TypeDefinitionIndex = 15380;

	class AbyssS2AreaConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::AbyssS2AreaConfigTemplate
	{
	public:
		::System::Void _ctor(::GLANDAGNIJK data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::GLANDAGNIJK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABYSSS2AREACONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		::HJFICLHGFHJ* GetMetaTypeConfig()
		{
			return ((::HJFICLHGFHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABYSSS2AREACONFIGTEMPLATEEXT_GETMETATYPECONFIG_OFFSET))(this);
		}
	};
}
