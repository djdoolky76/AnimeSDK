#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateBattleEventServant; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E25E0)
#define RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E2600)
#define RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E25A0)

namespace RPG::GameCore
{
	class CreateBattleEventServant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TriggerAllBlockedBECallbacks; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* EventID; // 0x20
		::RPG::GameCore::TargetEvaluator* SummonerBE; // 0x28
		::RPG::GameCore::DynamicFloat* InheritHPRatio; // 0x30
		::RPG::GameCore::DynamicFloat* InheritSpeedRatio; // 0x38
		::System::Boolean OnlyAllowHealBySelfOrSummoner; // 0x40
		::System::Boolean TriggerRedBreakCallbacks; // 0x41
		::System::Byte _padding1[0x6];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x48
		::RPG::GameCore::TeamType Team; // 0x50
		::RPG::GameCore::TeamType TotalDamageTeam; // 0x54
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeCreateCallback; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBattleEventCreate; // 0x60
		::System::Boolean IsDynamicPreload; // 0x68
		::System::Boolean AllowDuplicate; // 0x69
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleEventServant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleEventServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleEventServant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleEventServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
