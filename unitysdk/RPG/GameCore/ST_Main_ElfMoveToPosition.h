#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameNavigationType.h"
#include "unitysdk/RPG/GameCore/LittleGamePositionType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfMoveToPosition; }

#define RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4EF50)
#define RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4EF60)
#define RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4EF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfMoveToPosition_TypeDefinitionIndex = 21543;

	class ST_Main_ElfMoveToPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::LittleGameNavigationType NavigationType; // 0x18
		::RPG::GameCore::LittleGamePositionType PositionType; // 0x1C
		::System::Single TargetStopDistance; // 0x20
		::System::Single StartMoveDuration; // 0x24
		::System::Single Delay; // 0x28
		::System::Single RandomDelay; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfMoveToPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfMoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfMoveToPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfMoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
