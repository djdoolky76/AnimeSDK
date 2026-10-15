#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class WaitAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC93830)
#define RPG_GAMECORE_WAITANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC93890)
#define RPG_GAMECORE_WAITANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC937B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimState_TypeDefinitionIndex = 22875;

	class WaitAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimStateName; // 0x20
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x28
		::System::Boolean SkipWhenStateChange; // 0x30
		::System::Boolean IgnoreStateChangeCheck; // 0x31
		::System::Boolean WaitForFrameEnd; // 0x32
		::System::Boolean SyncVCameraTime; // 0x33
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
