#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueBuffByAeonConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970610)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D970620)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9705D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByAeonConfig_TypeDefinitionIndex = 19589;

	class RogueActGetRogueBuffByAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
