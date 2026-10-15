#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleSeekOnBGM; }

#define RPG_GAMECORE_BATTLESEEKONBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43AA90)
#define RPG_GAMECORE_BATTLESEEKONBGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43AAA0)
#define RPG_GAMECORE_BATTLESEEKONBGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43AA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleSeekOnBGM_TypeDefinitionIndex = 22967;

	class BattleSeekOnBGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MilliSecondPosition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESEEKONBGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleSeekOnBGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleSeekOnBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESEEKONBGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleSeekOnBGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleSeekOnBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESEEKONBGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
