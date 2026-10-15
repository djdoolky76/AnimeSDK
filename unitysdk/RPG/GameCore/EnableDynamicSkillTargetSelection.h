#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableDynamicSkillTargetSelection; }

#define RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63E970)
#define RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63E980)
#define RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63E940)

namespace RPG::GameCore
{
	class EnableDynamicSkillTargetSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableDynamicSkillTargetSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableDynamicSkillTargetSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLTARGETSELECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
