#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournPreviousRoomTypeConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDD60)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FDD70)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FDD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournPreviousRoomTypeConfig_TypeDefinitionIndex = 19819;

	class RogueParamRogueTournPreviousRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
