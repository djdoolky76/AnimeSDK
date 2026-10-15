#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvCharacterSetMotionBlendTime; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36BD80)
#define RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36BDD0)
#define RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36BD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterSetMotionBlendTime_TypeDefinitionIndex = 20607;

	class AdvCharacterSetMotionBlendTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single RunGaitLerpTime; // 0x20
		::System::Single WalkGaitLerpTime; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterSetMotionBlendTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterSetMotionBlendTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterSetMotionBlendTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterSetMotionBlendTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
