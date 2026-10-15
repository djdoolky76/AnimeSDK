#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99F2E0)
#define RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99F2F0)
#define RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99F2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig_TypeDefinitionIndex = 19770;

	class RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
