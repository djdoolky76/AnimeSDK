#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerEnergyBarEffect; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC51FA0)
#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC51FE0)
#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC51F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEnergyBarEffect_TypeDefinitionIndex = 22740;

	class TriggerEnergyBarEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::Boolean IsLoop; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEnergyBarEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEnergyBarEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEnergyBarEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEnergyBarEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
