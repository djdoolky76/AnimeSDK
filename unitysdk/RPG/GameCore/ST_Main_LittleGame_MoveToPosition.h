#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameNavigationType.h"
#include "unitysdk/RPG/GameCore/LittleGamePositionType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_LittleGame_MoveToPosition; }

#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA51930)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA51940)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA51900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_LittleGame_MoveToPosition_TypeDefinitionIndex = 21327;

	class ST_Main_LittleGame_MoveToPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::LittleGameNavigationType NavigationType; // 0x18
		::RPG::GameCore::LittleGamePositionType PositionType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
