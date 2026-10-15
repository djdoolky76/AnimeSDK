#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeCharacterUIDisplay; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D538820)
#define RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D538860)
#define RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D538660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterUIDisplay_TypeDefinitionIndex = 23674;

	class ChangeCharacterUIDisplay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* FromTarget; // 0x20
		::RPG::Client::TextID CharacterName; // 0x28
		::RPG::Client::TextID Introduction; // 0x38
		::System::String* HeadIconPath; // 0x48
		::System::String* RoundIconPath; // 0x50
		::System::String* SideHeadIconPath; // 0x58
		::System::String* SideIconPath; // 0x60
		::System::String* WaitingHeadIconPath; // 0x68
		::System::String* ActionHeadIconPath; // 0x70
		::System::String* ServantMiniIconPath; // 0x78
		::System::String* UltraSkillCutInPrefabPath; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterUIDisplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterUIDisplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERUIDISPLAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
