#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideWaveMonsterPerform; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E9B30)
#define RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E9B40)
#define RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E9B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideWaveMonsterPerform_TypeDefinitionIndex = 23408;

	class OverrideWaveMonsterPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* OverrideTemplateName; // 0x18
		::RPG::GameCore::TargetEvaluator* ParamEntity; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::System::Boolean EffectInAllWaves; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideWaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideWaveMonsterPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideWaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideWaveMonsterPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
