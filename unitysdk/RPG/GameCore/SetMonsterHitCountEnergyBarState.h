#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetMonsterHitCountEnergyBarState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8E750)
#define RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8E790)
#define RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8E6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHitCountEnergyBarState_TypeDefinitionIndex = 23654;

	class SetMonsterHitCountEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BoolEx Active; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* LeftCount; // 0x28
		::RPG::GameCore::DynamicFloat* PastCount; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterHitCountEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterHitCountEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterHitCountEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterHitCountEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHITCOUNTENERGYBARSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
