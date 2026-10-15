#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_LittleGame_SelfDestory; }

#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7F440)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7F450)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7F380)

namespace RPG::GameCore
{
	class ST_Main_LittleGame_SelfDestory : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
