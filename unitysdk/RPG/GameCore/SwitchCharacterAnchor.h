#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHCHARACTERANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB40DF0)
#define RPG_GAMECORE_SWITCHCHARACTERANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB40E00)
#define RPG_GAMECORE_SWITCHCHARACTERANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB40DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCharacterAnchor_TypeDefinitionIndex = 20825;

	class SwitchCharacterAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLocalPlayer; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* CharacterUniqueName; // 0x20
		::RPG::GameCore::DynamicString* AreaName; // 0x28
		::RPG::GameCore::DynamicString* AnchorName; // 0x30
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x38
		::RPG::GameCore::TargetEvaluator* Target; // 0x40
		::System::String* AttachPoint; // 0x48
		::System::Boolean ResetAnimation; // 0x50
		::System::Boolean ResetCamera; // 0x51
		::System::Boolean ResetTurnInPlace; // 0x52
		::System::Boolean ClearSpecialVision; // 0x53
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCharacterAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCharacterAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
