#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierDelItemAfterRoundBeginConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733990)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7339A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDelItemAfterRoundBeginConfig_TypeDefinitionIndex = 19423;

	class GridFightModifierDelItemAfterRoundBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierDelItemAfterRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierDelItemAfterRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierDelItemAfterRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierDelItemAfterRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
