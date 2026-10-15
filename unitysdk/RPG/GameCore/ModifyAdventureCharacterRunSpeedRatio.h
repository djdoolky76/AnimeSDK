#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D890910)
#define RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D890920)
#define RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8908D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAdventureCharacterRunSpeedRatio_TypeDefinitionIndex = 20520;

	class ModifyAdventureCharacterRunSpeedRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* UniqueKey; // 0x20
		::System::Boolean ModifyEnabled; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::CharacterMotionFlag ModifyMotionFlag; // 0x2C
		::System::Single TransitionDuration; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* SpeedRatioMultiplier; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
