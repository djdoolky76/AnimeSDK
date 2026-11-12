#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierDelItemAfterRoundBeginConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E940C90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E940CA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDELITEMAFTERROUNDBEGINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E940C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDelItemAfterRoundBeginConfig_TypeDefinitionIndex = 19656;

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
