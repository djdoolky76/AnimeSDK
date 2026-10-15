#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCTriggerSound; }
namespace System { class String; }

#define RPG_GAMECORE_NPCTRIGGERSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A50F0)
#define RPG_GAMECORE_NPCTRIGGERSOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A4E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCTriggerSound_TypeDefinitionIndex = 17469;

	class NPCTriggerSound : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EnterTriggerWaitTime; // 0x10
		::System::UInt32 OnEnterVoiceID; // 0x14
		::System::String* OnExitTriggerEvent; // 0x18
		::System::Single EnterTriggerCD; // 0x20
		::System::Boolean IsLoop; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single TriggerChance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTRIGGERSOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCTriggerSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCTriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTRIGGERSOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
