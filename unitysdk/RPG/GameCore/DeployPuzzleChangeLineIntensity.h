#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeployPuzzleChangeLineIntensity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80EFA0)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E80EFD0)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E80EF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleChangeLineIntensity_TypeDefinitionIndex = 22374;

	class DeployPuzzleChangeLineIntensity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single LineFadeoutDuration; // 0x20
		::System::Single TargetIntensity; // 0x24
		::System::Boolean IsHintLine; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleChangeLineIntensity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleChangeLineIntensity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleChangeLineIntensity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleChangeLineIntensity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
