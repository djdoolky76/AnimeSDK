#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ManualTriggerAnimEvent; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MANUALTRIGGERANIMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D829200)
#define RPG_GAMECORE_MANUALTRIGGERANIMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D829330)
#define RPG_GAMECORE_MANUALTRIGGERANIMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8291C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManualTriggerAnimEvent_TypeDefinitionIndex = 22878;

	class ManualTriggerAnimEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimStateName; // 0x20
		::RPG::GameCore::DynamicFloat* AnimClipLength; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x38
		::System::Boolean SyncEffectTime; // 0x40
		::System::Boolean AdvanceOneFrame; // 0x41
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DynamicFloat* ExtraAdvanceTime; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANUALTRIGGERANIMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManualTriggerAnimEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManualTriggerAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANUALTRIGGERANIMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManualTriggerAnimEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManualTriggerAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANUALTRIGGERANIMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
