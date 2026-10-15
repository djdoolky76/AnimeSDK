#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class ClockFaceEmotion; }
namespace RPG::GameCore { class SetClockBoyEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCLOCKBOYEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6EF50)
#define RPG_GAMECORE_SETCLOCKBOYEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6EF60)
#define RPG_GAMECORE_SETCLOCKBOYEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6EF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetClockBoyEmotion_TypeDefinitionIndex = 21894;

	class SetClockBoyEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::CharacterAtlasFaceEmotion*>* AtlasEmotions; // 0x20
		::RPG::GameCore::ClockFaceEmotion* Clock; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLOCKBOYEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetClockBoyEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetClockBoyEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLOCKBOYEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetClockBoyEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetClockBoyEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLOCKBOYEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
