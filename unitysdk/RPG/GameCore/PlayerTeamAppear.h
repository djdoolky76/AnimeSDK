#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerTeamAppear; }

#define RPG_GAMECORE_PLAYERTEAMAPPEAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90ED60)
#define RPG_GAMECORE_PLAYERTEAMAPPEAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90ED70)
#define RPG_GAMECORE_PLAYERTEAMAPPEAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90ED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerTeamAppear_TypeDefinitionIndex = 22957;

	class PlayerTeamAppear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Single>* DelayAppearTimeList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerTeamAppear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerTeamAppear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerTeamAppear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerTeamAppear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
