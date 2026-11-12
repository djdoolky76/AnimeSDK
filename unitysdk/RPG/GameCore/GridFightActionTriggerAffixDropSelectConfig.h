#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionTriggerAffixDropSelectConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAFFIXDROPSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92E7F0)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAFFIXDROPSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92E800)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAFFIXDROPSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92E7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionTriggerAffixDropSelectConfig_TypeDefinitionIndex = 19522;

	class GridFightActionTriggerAffixDropSelectConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAFFIXDROPSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerAffixDropSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerAffixDropSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAFFIXDROPSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerAffixDropSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerAffixDropSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAFFIXDROPSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
