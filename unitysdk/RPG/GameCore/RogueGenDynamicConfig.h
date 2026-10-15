#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueGenDynamicConfig; }

#define RPG_GAMECORE_ROGUEGENDYNAMICCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CCB30)
#define RPG_GAMECORE_ROGUEGENDYNAMICCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9CCAF0)

namespace RPG::GameCore
{
	class RogueGenDynamicConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGENDYNAMICCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueGenDynamicConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueGenDynamicConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGENDYNAMICCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
