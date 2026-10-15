#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournCurrentRoomMarkTypeConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B480)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B490)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurrentRoomMarkTypeConfig_TypeDefinitionIndex = 19820;

	class RogueParamRogueTournCurrentRoomMarkTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
