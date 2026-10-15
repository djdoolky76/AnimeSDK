#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AISkillDependencyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AISKILLDEPENDENCYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33B000)
#define RPG_GAMECORE_AISKILLDEPENDENCYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33AEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISkillDependencyConfig_TypeDefinitionIndex = 15613;

	class AISkillDependencyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 AfterUsedTurnCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISKILLDEPENDENCYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AISkillDependencyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AISkillDependencyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISKILLDEPENDENCYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
