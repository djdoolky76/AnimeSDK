#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpticalIllusionExitPerformance; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E4180)
#define RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E41B0)
#define RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E4130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionExitPerformance_TypeDefinitionIndex = 22223;

	class OpticalIllusionExitPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionExitPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionExitPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionExitPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionExitPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
