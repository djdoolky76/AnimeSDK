#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyStance; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86D060)
#define RPG_GAMECORE_MODIFYSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86D070)
#define RPG_GAMECORE_MODIFYSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86D020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyStance_TypeDefinitionIndex = 22630;

	class ModifyStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean IsReset; // 0x22
		::System::Boolean ForbidWhenEmpty; // 0x23
		::System::Boolean SkipLockTeamStance; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DynamicFloat* StanceCountConst; // 0x28
		::RPG::GameCore::DynamicFloat* StanceCountAdd; // 0x30
		::RPG::GameCore::DynamicFloat* StanceValueConst; // 0x38
		::RPG::GameCore::DynamicFloat* StanceValueAdd; // 0x40
		::RPG::GameCore::DynamicFloat* StanceRatioConst; // 0x48
		::RPG::GameCore::DynamicFloat* StanceRatioAdd; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
