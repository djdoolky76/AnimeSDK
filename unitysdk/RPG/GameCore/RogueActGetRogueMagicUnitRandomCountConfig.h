#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueMagicUnitRandomCountConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E3A0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E390)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicUnitRandomCountConfig_TypeDefinitionIndex = 19678;

	class RogueActGetRogueMagicUnitRandomCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
