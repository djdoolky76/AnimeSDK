#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournCurrentRoomVariantTypeConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B540)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B550)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B500)

namespace RPG::GameCore
{
	class RogueParamRogueTournCurrentRoomVariantTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
