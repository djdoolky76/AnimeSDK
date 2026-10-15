#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EasyFog; }

#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_KPBJACHOFBF_CTOR_OFFSET UNITYSDK_OFFSET(0xE98E6E0)

	class StageHarmonyEasyFogBehaviorLinkSlot_KPBJACHOFBF : public ::System::Object
	{
	public:
		::RPG::Client::EasyFog* JNDFNOIIIAG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_KPBJACHOFBF_CTOR_OFFSET))(this);
		}

	};
