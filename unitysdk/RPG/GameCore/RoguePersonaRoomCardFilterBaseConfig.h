#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterBaseConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207B5F50)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207B5F40)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207B5B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterBaseConfig_TypeDefinitionIndex = 20195;

	class RoguePersonaRoomCardFilterBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
