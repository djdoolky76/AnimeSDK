#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTeammateAttackFormation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TeammateAttackFormationConfig; }

#define RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC7480)
#define RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC74C0)
#define RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC7410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeammateAttackFormation_TypeDefinitionIndex = 22490;

	class SetTeammateAttackFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* Attacker; // 0x28
		::RPG::GameCore::TargetEvaluator* Defender; // 0x30
		::Il2CppArray<::RPG::GameCore::TeammateAttackFormationConfig*>* OverrideConfig; // 0x38
		::RPG::GameCore::TargetEvaluator* HideEntityTargetType; // 0x40
		::System::Boolean HideBetweenEntity; // 0x48
		::System::Boolean LockFormation; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTeammateAttackFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTeammateAttackFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTeammateAttackFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTeammateAttackFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
