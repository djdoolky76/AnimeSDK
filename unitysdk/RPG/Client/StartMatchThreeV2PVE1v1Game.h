#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class StartMatchThreeV2PVE1v1Game; }

#define RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D337160)
#define RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D337170)
#define RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D337130)

namespace RPG::Client
{
	inline static constexpr unsigned int StartMatchThreeV2PVE1v1Game_TypeDefinitionIndex = 10254;

	class StartMatchThreeV2PVE1v1Game : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 levelID; // 0x18
		::System::UInt32 birdID; // 0x1C
		::System::UInt32 prop1ID; // 0x20
		::System::UInt32 prop1Level; // 0x24
		::System::UInt32 prop2ID; // 0x28
		::System::UInt32 prop2Level; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::StartMatchThreeV2PVE1v1Game* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::StartMatchThreeV2PVE1v1Game*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::StartMatchThreeV2PVE1v1Game* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::StartMatchThreeV2PVE1v1Game*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
