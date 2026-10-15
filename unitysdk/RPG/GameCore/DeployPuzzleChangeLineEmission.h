#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeployPuzzleChangeLineEmission; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FBA90)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FBAC0)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FBA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleChangeLineEmission_TypeDefinitionIndex = 20365;

	class DeployPuzzleChangeLineEmission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* TargetEmission; // 0x20
		::RPG::GameCore::DynamicFloat* TransitionTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleChangeLineEmission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleChangeLineEmission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleChangeLineEmission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleChangeLineEmission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
