#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifiyRoomCardDrawNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA174A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA174B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17460)

namespace RPG::GameCore
{
	class RogueModifierModifiyRoomCardDrawNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
