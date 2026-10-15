#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyEventCharacterTriggerEmotion; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC03550)
#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC03560)
#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC03520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventCharacterTriggerEmotion_TypeDefinitionIndex = 22369;

	class TrainPartyEventCharacterTriggerEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EntityUniqueName; // 0x18
		::System::String* EmotionName; // 0x20
		::System::Single TransitionTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
