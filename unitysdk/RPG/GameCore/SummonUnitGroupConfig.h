#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventurePositionCheckConfig; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class SummonUnitGroupConfig; }
namespace RPG::GameCore { class SummonUnitInteractionDestroyRule; }

#define RPG_GAMECORE_SUMMONUNITGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB10E70)
#define RPG_GAMECORE_SUMMONUNITGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB109E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitGroupConfig_TypeDefinitionIndex = 17607;

	class SummonUnitGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityPosAdaptionConfig* PositionAdpationConfig; // 0x10
		::RPG::GameCore::AdventurePositionCheckConfig* PositionCheckConfig; // 0x18
		::System::Boolean EnablePlatformMove; // 0x20
		::System::Boolean HideWhenGroundInvalid; // 0x21
		::System::Boolean HideWhenMapRotation; // 0x22
		::System::Boolean DestroyWhenGroundInvalid; // 0x23
		::System::Boolean DestroyInInteraction; // 0x24
		::System::Boolean DestroyWhenHide; // 0x25
		::System::Boolean HideWithSummoner; // 0x26
		::System::Byte _padding0[0x1];
		::Il2CppArray<::RPG::GameCore::ELevelPerformanceType>* HideInPerformanceList; // 0x28
		::Il2CppArray<::RPG::GameCore::SummonUnitInteractionDestroyRule*>* InteractionDestroyRuleList; // 0x30
		::RPG::Client::GamePlayLockTarget LockTarget; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
