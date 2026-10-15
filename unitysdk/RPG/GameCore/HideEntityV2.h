#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideEntityV2; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEENTITYV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73AC70)
#define RPG_GAMECORE_HIDEENTITYV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73AC80)
#define RPG_GAMECORE_HIDEENTITYV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73AC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEntityV2_TypeDefinitionIndex = 21666;

	class HideEntityV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean IsHide; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEntityV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEntityV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEntityV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEntityV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
