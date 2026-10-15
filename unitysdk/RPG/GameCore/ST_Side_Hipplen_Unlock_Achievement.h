#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_Unlock_Achievement; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA84C50)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA84C60)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA84C20)

namespace RPG::GameCore
{
	class ST_Side_Hipplen_Unlock_Achievement : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::UInt32 AchievementID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
