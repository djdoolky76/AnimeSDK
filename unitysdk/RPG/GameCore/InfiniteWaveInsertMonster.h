#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InfiniteWavePosition.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InfiniteWaveInsertMonster; }

#define RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D786BF0)
#define RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D786C00)
#define RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D786BC0)

namespace RPG::GameCore
{
	class InfiniteWaveInsertMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MonsterID; // 0x18
		::RPG::GameCore::InfiniteWavePosition InsertPos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveInsertMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveInsertMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveInsertMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveInsertMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
