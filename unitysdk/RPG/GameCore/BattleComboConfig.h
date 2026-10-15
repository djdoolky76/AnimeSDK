#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleComboConfig; }

#define RPG_GAMECORE_BATTLECOMBOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D454F70)
#define RPG_GAMECORE_BATTLECOMBOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D454AB0)

namespace RPG::GameCore
{
	class BattleComboConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint HitComboValueAddDelta; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* HitComboValueMinusDelta; // 0x18
		::RPG::GameCore::StringHash SkillComboValueDeltaHash; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FixPoint>* StanceComboValueDelta; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* EliminateComboValueDelta; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* DynamicAddRatioByGear; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* DynamicMinusRatioByGear; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* Gear; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* DamageAdd; // 0x50
		::RPG::GameCore::FixPoint ComboDamageSkillAdded; // 0x58
		::RPG::GameCore::FixPoint ComboMaxConst; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOMBOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleComboConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleComboConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOMBOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
