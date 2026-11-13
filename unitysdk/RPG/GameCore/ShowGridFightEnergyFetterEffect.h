#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowGridFightEnergyFetterEffect; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWGRIDFIGHTENERGYFETTEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E8F90)
#define RPG_GAMECORE_SHOWGRIDFIGHTENERGYFETTEREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3E8FA0)
#define RPG_GAMECORE_SHOWGRIDFIGHTENERGYFETTEREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3E8F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGridFightEnergyFetterEffect_TypeDefinitionIndex = 22948;

	class ShowGridFightEnergyFetterEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTENERGYFETTEREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGridFightEnergyFetterEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGridFightEnergyFetterEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTENERGYFETTEREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGridFightEnergyFetterEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGridFightEnergyFetterEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTENERGYFETTEREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
