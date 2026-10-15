#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueBuffConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E150)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E160)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffConfig_TypeDefinitionIndex = 19587;

	class RogueActGetRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
