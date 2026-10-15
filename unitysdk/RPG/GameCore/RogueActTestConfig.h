#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTestConfig; }

#define RPG_GAMECORE_ROGUEACTTESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D973FA0)
#define RPG_GAMECORE_ROGUEACTTESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D973FB0)
#define RPG_GAMECORE_ROGUEACTTESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTestConfig_TypeDefinitionIndex = 19708;

	class RogueActTestConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
