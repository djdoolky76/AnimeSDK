#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerCableProceduralEffect; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC173B0)
#define RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC173C0)
#define RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC17380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCableProceduralEffect_TypeDefinitionIndex = 23634;

	class TriggerCableProceduralEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueEffectName; // 0x28
		::RPG::GameCore::TargetEvaluator* StartTarget; // 0x30
		::System::String* StartAttachPoint; // 0x38
		::RPG::GameCore::TargetEvaluator* EndTarget; // 0x40
		::System::String* EndAttachPoint; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCableProceduralEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCableProceduralEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCableProceduralEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCableProceduralEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
