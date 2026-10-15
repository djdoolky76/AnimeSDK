#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeMusicVisualBeatEffectState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D567D50)
#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D567D80)
#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D567D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMusicVisualBeatEffectState_TypeDefinitionIndex = 22309;

	class ChangeMusicVisualBeatEffectState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 InStateID; // 0x18
		::System::Boolean IsImmediate; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMusicVisualBeatEffectState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMusicVisualBeatEffectState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
