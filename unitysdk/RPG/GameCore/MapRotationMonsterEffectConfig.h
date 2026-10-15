#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationEntityEffectConfig.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationMonsterEffectConfig; }

#define RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82F680)
#define RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D82F690)
#define RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D830180)

namespace RPG::GameCore
{
	class MapRotationMonsterEffectConfig : public ::RPG::GameCore::MapRotationEntityEffectConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MonsterRank>* MonsterRanks; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationMonsterEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationMonsterEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationMonsterEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationMonsterEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
