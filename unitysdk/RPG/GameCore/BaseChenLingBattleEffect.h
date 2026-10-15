#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }

#define RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40CCC0)
#define RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40CC60)
#define RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40C6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleEffect_TypeDefinitionIndex = 15783;

	class BaseChenLingBattleEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
