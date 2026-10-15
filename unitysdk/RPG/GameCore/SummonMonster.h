#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/SummonMonsterUsage.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SummonMonster; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class VCameraConfig; }

#define RPG_GAMECORE_SUMMONMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB39C70)
#define RPG_GAMECORE_SUMMONMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB39CD0)
#define RPG_GAMECORE_SUMMONMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB39BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonMonster_TypeDefinitionIndex = 22654;

	class SummonMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SummonMonsterData*>* SummonMonsterDataList; // 0x18
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* InheritPropertyList; // 0x28
		::System::Boolean InheritAllProperties; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* DelayRatio; // 0x38
		::System::Boolean InheritSummonerDelay; // 0x40
		::System::Boolean InheritSummonerWeakness; // 0x41
		::System::Boolean InheritSummonerCurrentStance; // 0x42
		::System::Boolean RefreshTeamLocation; // 0x43
		::System::Boolean AlignYawWithCaster; // 0x44
		::System::Byte _padding1[0x3];
		::RPG::GameCore::DynamicFloat* InitHP; // 0x48
		::RPG::GameCore::SummonMonsterUsage UsageType; // 0x50
		::System::Byte _padding2[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMonsterCreate; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
