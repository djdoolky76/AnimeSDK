#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TrainPartyEventCharacterTriggerFreeStyle; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC03730)
#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC03740)
#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC03700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventCharacterTriggerFreeStyle_TypeDefinitionIndex = 22368;

	class TrainPartyEventCharacterTriggerFreeStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MotionID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* EntityUniqueName; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetAlias; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
