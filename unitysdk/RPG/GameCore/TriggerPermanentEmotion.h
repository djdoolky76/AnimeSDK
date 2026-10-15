#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerPermanentEmotion; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERPERMANENTEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC57C40)
#define RPG_GAMECORE_TRIGGERPERMANENTEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC57C50)
#define RPG_GAMECORE_TRIGGERPERMANENTEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC57C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPermanentEmotion_TypeDefinitionIndex = 21888;

	class TriggerPermanentEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EmotionName; // 0x20
		::System::Single TransitTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERMANENTEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPermanentEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPermanentEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERMANENTEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPermanentEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPermanentEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERMANENTEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
