#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_LittleGame_DoNothing; }

#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7F080)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7F090)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7F050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_LittleGame_DoNothing_TypeDefinitionIndex = 21326;

	class ST_Main_LittleGame_DoNothing : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_LittleGame_DoNothing* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_LittleGame_DoNothing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_LittleGame_DoNothing* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_LittleGame_DoNothing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
