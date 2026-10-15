#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePostureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePostureConfig; }
namespace RPG::GameCore { class TriggerBattlePostureType; }

#define RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC16A10)
#define RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC16A20)
#define RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC169E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBattlePostureType_TypeDefinitionIndex = 20450;

	class TriggerBattlePostureType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattlePostureType PostureType; // 0x18
		::System::Boolean IsTriggerPerform; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::BattlePostureConfig* PostureConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBattlePostureType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBattlePostureType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
