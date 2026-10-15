#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationTimeEvent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ANIMATIONTIMEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F4630)
#define RPG_GAMECORE_ANIMATIONTIMEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F44E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimationTimeEvent_TypeDefinitionIndex = 22465;

	class AnimationTimeEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NormalizedTime; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONTIMEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimationTimeEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimationTimeEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONTIMEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
