#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LineGlowLightMonoPlugin; }

#define STAGEHARMONYLINEGLOWLIGHTBEHAVIORLINKSLOT_MOGPLMCMJHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE9940F0)

inline static constexpr unsigned int StageHarmonyLineGlowLightBehaviorLinkSlot_MOGPLMCMJHJ_TypeDefinitionIndex = 47376;

	class StageHarmonyLineGlowLightBehaviorLinkSlot_MOGPLMCMJHJ : public ::System::Object
	{
	public:
		::RPG::Client::LineGlowLightMonoPlugin* JNDFNOIIIAG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLINEGLOWLIGHTBEHAVIORLINKSLOT_MOGPLMCMJHJ_CTOR_OFFSET))(this);
		}

	};
