#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetEntityFadeWithAnim; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC5A90)
#define RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC5AA0)
#define RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC5A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetEntityFadeWithAnim_TypeDefinitionIndex = 20515;

	class SetTargetEntityFadeWithAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TargetValue; // 0x20
		::System::Single Duration; // 0x24
		::System::Boolean EnableMultiTargets; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetEntityFadeWithAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetEntityFadeWithAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetEntityFadeWithAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetEntityFadeWithAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
