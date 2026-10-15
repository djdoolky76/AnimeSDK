#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WeaknessStackOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearWeakness; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARWEAKNESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B7880)
#define RPG_GAMECORE_CLEARWEAKNESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B7890)
#define RPG_GAMECORE_CLEARWEAKNESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B7850)

namespace RPG::GameCore
{
	class ClearWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::WeaknessStackOperationType OPType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* WeakList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARWEAKNESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARWEAKNESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARWEAKNESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
