#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaCurRoomCardCastCloneConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99EED0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99EEE0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99EE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastCloneConfig_TypeDefinitionIndex = 19769;

	class RogueActPersonaCurRoomCardCastCloneConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLONECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
