#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityKeepFacingTo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYKEEPFACINGTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3702B0)
#define RPG_GAMECORE_ADVENTITYKEEPFACINGTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3702C0)
#define RPG_GAMECORE_ADVENTITYKEEPFACINGTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D370280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityKeepFacingTo_TypeDefinitionIndex = 20566;

	class AdvEntityKeepFacingTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single StopFacingDistance; // 0x28
		::System::Single StartFacingDistance; // 0x2C
		::System::Boolean FinishImmediately; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYKEEPFACINGTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityKeepFacingTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityKeepFacingTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYKEEPFACINGTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityKeepFacingTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityKeepFacingTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYKEEPFACINGTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
