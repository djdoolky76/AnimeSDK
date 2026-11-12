#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DarkTeamDestroyCheck; }

#define RPG_GAMECORE_DARKTEAMDESTROYCHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E805FA0)
#define RPG_GAMECORE_DARKTEAMDESTROYCHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E805FB0)
#define RPG_GAMECORE_DARKTEAMDESTROYCHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E805F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DarkTeamDestroyCheck_TypeDefinitionIndex = 23850;

	class DarkTeamDestroyCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForWaveEnd; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMDESTROYCHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DarkTeamDestroyCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DarkTeamDestroyCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMDESTROYCHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DarkTeamDestroyCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DarkTeamDestroyCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMDESTROYCHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
