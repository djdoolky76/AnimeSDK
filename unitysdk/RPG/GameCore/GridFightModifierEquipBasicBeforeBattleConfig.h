#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierEquipBasicBeforeBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733B10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733B20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierEquipBasicBeforeBattleConfig_TypeDefinitionIndex = 19465;

	class GridFightModifierEquipBasicBeforeBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierEquipBasicBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierEquipBasicBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierEquipBasicBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierEquipBasicBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
