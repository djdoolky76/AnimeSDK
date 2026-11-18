#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/BangbooDefenseDataTemplate.h"
#include "unitysdk/BMHOICGHFPC.h"

class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_BANGBOODEFENSEDATATEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0BF10)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int BangbooDefenseDataTemplateExt_TypeDefinitionIndex = 10885;

	class BangbooDefenseDataTemplateExt : public ::MoleMole::FlatBuffers::Config::BangbooDefenseDataTemplate
	{
	public:
		::System::Void _ctor(::BMHOICGHFPC data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::BMHOICGHFPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BANGBOODEFENSEDATATEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
