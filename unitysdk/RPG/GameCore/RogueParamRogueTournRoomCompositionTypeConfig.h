#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournRoomCompositionTypeConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDE20)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FDE30)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FDDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournRoomCompositionTypeConfig_TypeDefinitionIndex = 19852;

	class RogueParamRogueTournRoomCompositionTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournRoomCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournRoomCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournRoomCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournRoomCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
