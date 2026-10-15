#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageBattleEventConfig; }

#define RPG_GAMECORE_STAGEBATTLEEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADB000)
#define RPG_GAMECORE_STAGEBATTLEEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADABA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageBattleEventConfig_TypeDefinitionIndex = 23456;

	class StageBattleEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EventID; // 0x10
		::System::Int32 DurationMin; // 0x14
		::System::Int32 DurationMax; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Probability; // 0x20
		::System::Int32 MinCD; // 0x28
		::System::Int32 MaxGap; // 0x2C
		::System::Boolean TriggerOnStart; // 0x30
		::System::Byte _padding1[0x3];
		::System::Int32 RankLevel; // 0x34
		::System::Int32 MaxCreationCount; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBATTLEEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageBattleEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageBattleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBATTLEEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
