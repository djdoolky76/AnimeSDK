#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerSound.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SynchronouslyTriggerSound; }

#define RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB50A70)
#define RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB50A80)
#define RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB50A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SynchronouslyTriggerSound_TypeDefinitionIndex = 20610;

	class SynchronouslyTriggerSound : public ::RPG::GameCore::TriggerSound
	{
	public:
		::RPG::GameCore::DynamicString* SynchronizedSoundName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SynchronouslyTriggerSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SynchronouslyTriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SynchronouslyTriggerSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SynchronouslyTriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
