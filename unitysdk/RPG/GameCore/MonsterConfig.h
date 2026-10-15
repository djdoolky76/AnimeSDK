#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HPBarType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MonsterConfig; }

#define RPG_GAMECORE_MONSTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D881820)
#define RPG_GAMECORE_MONSTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D881100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterConfig_TypeDefinitionIndex = 16516;

	class MonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* InitHPValue; // 0x18
		::RPG::GameCore::DynamicFloat* InitHPRatio; // 0x20
		::System::Single MultiHitAmplitudeNormalize; // 0x28
		::System::Single MultiHitHAmplitudeNormalize; // 0x2C
		::System::Single MultiHitStartOffsetNormalize; // 0x30
		::System::Single MultiHitHStartOffsetNormalize; // 0x34
		::RPG::GameCore::HPBarType HPBarType; // 0x38
		::System::UInt32 MultiHPSeg; // 0x3C
		::RPG::MVector3 ModelRotation; // 0x40
		::RPG::MVector3 ModelScale; // 0x4C
		::RPG::MVector3 ModelEffectScale; // 0x58
		::RPG::GameCore::MonsterRank ShowHpWidthRank; // 0x64
		::System::Boolean AddToTeamFormation; // 0x68
		::System::Boolean InheritEliteGroupForBodyPart; // 0x69
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
