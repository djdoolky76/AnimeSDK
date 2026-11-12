#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierTriggerRandomBonfireOptionConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERRANDOMBONFIREOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9447B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERRANDOMBONFIREOPTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9447C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERRANDOMBONFIREOPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E944770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierTriggerRandomBonfireOptionConfig_TypeDefinitionIndex = 19784;

	class GridFightModifierTriggerRandomBonfireOptionConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERRANDOMBONFIREOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierTriggerRandomBonfireOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierTriggerRandomBonfireOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERRANDOMBONFIREOPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierTriggerRandomBonfireOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierTriggerRandomBonfireOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERRANDOMBONFIREOPTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
