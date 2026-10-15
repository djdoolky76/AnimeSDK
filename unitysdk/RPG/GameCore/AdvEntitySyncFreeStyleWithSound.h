#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntitySyncFreeStyleWithSound; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D371160)
#define RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D371170)
#define RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D371120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntitySyncFreeStyleWithSound_TypeDefinitionIndex = 22427;

	class AdvEntitySyncFreeStyleWithSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SoundEventName; // 0x18
		::System::Single NormalizedTransitionDuration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
