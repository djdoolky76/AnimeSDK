#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCMonsterHintSoundConfig; }
namespace System { class String; }

#define RPG_GAMECORE_NPCMONSTERHINTSOUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A4690)
#define RPG_GAMECORE_NPCMONSTERHINTSOUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A4580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterHintSoundConfig_TypeDefinitionIndex = 17471;

	class NPCMonsterHintSoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HintSoundEvent; // 0x10
		::System::Single TriggerRange; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERHINTSOUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCMonsterHintSoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCMonsterHintSoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERHINTSOUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
