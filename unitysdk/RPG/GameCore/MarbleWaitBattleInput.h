#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleWaitBattleInput; }

#define RPG_GAMECORE_MARBLEWAITBATTLEINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81BBD0)
#define RPG_GAMECORE_MARBLEWAITBATTLEINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81BBE0)
#define RPG_GAMECORE_MARBLEWAITBATTLEINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81BB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleWaitBattleInput_TypeDefinitionIndex = 24292;

	class MarbleWaitBattleInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SealTeamIndex; // 0x18
		::RPG::MVector2 ForceShootVector; // 0x1C
		::System::Single AngleTolerance; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEWAITBATTLEINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleWaitBattleInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleWaitBattleInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEWAITBATTLEINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleWaitBattleInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleWaitBattleInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEWAITBATTLEINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
