#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIGCNGHBADI.h"
#include "unitysdk/MANNBPDPBBN.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MOLEMOLE_PROJECT_CONFIG_MONSTERGROUPTEMPLATEEXT_SPLITMONSTERID_OFFSET UNITYSDK_OFFSET(0x18953180)
#define MOLEMOLE_PROJECT_CONFIG_MONSTERGROUPTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18953170)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int MonsterGroupTemplateExt_TypeDefinitionIndex = 62408;

	class MonsterGroupTemplateExt : public ::OIGCNGHBADI
	{
	public:
		::System::Void _ctor(::MANNBPDPBBN data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::MANNBPDPBBN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_MONSTERGROUPTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		static ::System::Boolean SplitMonsterID(::System::String* monsterConfig, ::System::Int32& monsterId, ::System::Int32& aiId)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_MONSTERGROUPTEMPLATEEXT_SPLITMONSTERID_OFFSET))(monsterConfig, monsterId, aiId);
		}
	};
}
