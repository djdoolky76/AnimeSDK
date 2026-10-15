#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeCreateLevel; }

#define RPG_GAMECORE_MATCHTHREECREATELEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D854830)
#define RPG_GAMECORE_MATCHTHREECREATELEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D854840)
#define RPG_GAMECORE_MATCHTHREECREATELEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D854800)

namespace RPG::GameCore
{
	class MatchThreeCreateLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LevelID; // 0x18
		::System::UInt32 Mode; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeCreateLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeCreateLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeCreateLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeCreateLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
