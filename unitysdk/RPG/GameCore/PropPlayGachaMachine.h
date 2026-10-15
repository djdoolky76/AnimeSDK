#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropPlayGachaMachine; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPPLAYGACHAMACHINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D950C60)
#define RPG_GAMECORE_PROPPLAYGACHAMACHINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D950C90)
#define RPG_GAMECORE_PROPPLAYGACHAMACHINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D950C00)

namespace RPG::GameCore
{
	class PropPlayGachaMachine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* RollShopId; // 0x20
		::System::Boolean IsTigerMachine; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* RewardCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIExit; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGachaCloseUI; // 0x40
		::System::Single GachaAnimDelay; // 0x48
		::System::Boolean IsRandomReward; // 0x4C
		::System::Byte _padding1[0x3];
		::System::Int32 RewardGrade; // 0x50
		::System::Boolean IsRandomSlotNum; // 0x54
		::System::Byte _padding2[0x3];
		::System::Int32 SlotNum; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPLAYGACHAMACHINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPlayGachaMachine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPlayGachaMachine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPLAYGACHAMACHINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPlayGachaMachine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPlayGachaMachine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPLAYGACHAMACHINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
