#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueBlackboardConfig; }

#define RPG_GAMECORE_ROGUEBLACKBOARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AB3A0)
#define RPG_GAMECORE_ROGUEBLACKBOARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AB360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBlackboardConfig_TypeDefinitionIndex = 19789;

	class RogueBlackboardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBLACKBOARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueBlackboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueBlackboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBLACKBOARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
