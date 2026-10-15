#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterCleanObstacle; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7D1A0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7D1B0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7D0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterCleanObstacle_TypeDefinitionIndex = 21522;

	class ST_Main_ElfWaiterCleanObstacle : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
