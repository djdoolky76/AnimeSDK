#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SingleMonsterInfo; }
namespace RPG::GameCore { class WaveMonster; }
namespace System { class String; }

#define RPG_GAMECORE_WAVEMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA56D0)
#define RPG_GAMECORE_WAVEMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA5740)
#define RPG_GAMECORE_WAVEMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA5640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonster_TypeDefinitionIndex = 23400;

	class WaveMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleMonsterInfo*>* MonsterList; // 0x18
		::RPG::GameCore::DynamicFloat* OverrideMonsterLevel; // 0x20
		::System::Int32 LevelWaveIndex; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* InitAnimStateName; // 0x30
		::System::Boolean WaitDie; // 0x38
		::System::Byte _padding1[0x7];
		::System::String* TriggerCustomStringOnCreated; // 0x40
		::System::Boolean Hide; // 0x48
		::System::Boolean ForbiddenPassiveSkill; // 0x49
		::System::Byte _padding2[0x2];
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaveMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaveMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
