#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RogueDLC1Dot3DiceInteract; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B32F0)
#define RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B3300)
#define RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B32C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3DiceInteract_TypeDefinitionIndex = 22271;

	class RogueDLC1Dot3DiceInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x28
		::Il2CppArray<::System::String*>* AttachPoints; // 0x30
		::RPG::GameCore::TriggerEffect* Dice; // 0x38
		::RPG::GameCore::TargetEvaluator* DiceFollowEntity; // 0x40
		::RPG::GameCore::DynamicString* CustomString; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3DiceInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3DiceInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3DiceInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3DiceInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
