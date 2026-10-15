#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ResetStance; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98B990)
#define RPG_GAMECORE_RESETSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98B9A0)
#define RPG_GAMECORE_RESETSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98B950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetStance_TypeDefinitionIndex = 22628;

	class ResetStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ConstantValue; // 0x28
		::RPG::GameCore::DynamicFloat* AddValue; // 0x30
		::System::Boolean ForbidWhenEmpty; // 0x38
		::System::Boolean SkipLockTeamStance; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
