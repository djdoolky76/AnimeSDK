#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondBuffCountConfig; }

#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B20D0)
#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B20E0)
#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondBuffCountConfig_TypeDefinitionIndex = 19794;

	class RogueCondBuffCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
