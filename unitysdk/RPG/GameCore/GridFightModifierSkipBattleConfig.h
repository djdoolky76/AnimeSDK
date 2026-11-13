#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSkipBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BBF60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BBF70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BBF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSkipBattleConfig_TypeDefinitionIndex = 19741;

	class GridFightModifierSkipBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSkipBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSkipBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSkipBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSkipBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
