#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByCompositionTypeConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE5F0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE600)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FE830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByCompositionTypeConfig_TypeDefinitionIndex = 19868;

	class RoguePersonaRoomCardFilterByCompositionTypeConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
