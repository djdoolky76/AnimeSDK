#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimelineIntermediaStateConfig; }
namespace RPG::GameCore { class TimelineStateTransitionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMELINESTATETRANSITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB89FB0)
#define RPG_GAMECORE_TIMELINESTATETRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB89E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineStateTransitionConfig_TypeDefinitionIndex = 16611;

	class TimelineStateTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StartStateName; // 0x10
		::System::String* EndStateName; // 0x18
		::Il2CppArray<::RPG::GameCore::TimelineIntermediaStateConfig*>* TransitionStates; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINESTATETRANSITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimelineStateTransitionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimelineStateTransitionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINESTATETRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
