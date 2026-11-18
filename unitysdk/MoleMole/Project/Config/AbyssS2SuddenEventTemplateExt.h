#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/AbyssS2SuddenEventTemplate.h"
#include "unitysdk/LLFIEKLMILG.h"

class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_ABYSSS2SUDDENEVENTTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E190F0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int AbyssS2SuddenEventTemplateExt_TypeDefinitionIndex = 14932;

	class AbyssS2SuddenEventTemplateExt : public ::MoleMole::FlatBuffers::Config::AbyssS2SuddenEventTemplate
	{
	public:
		::System::Void _ctor(::LLFIEKLMILG data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::LLFIEKLMILG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABYSSS2SUDDENEVENTTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
