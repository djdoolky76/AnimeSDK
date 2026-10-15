#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99FD10)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99FD20)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99FE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig_TypeDefinitionIndex = 19736;

	class RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
