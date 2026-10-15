#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMainStoryEventConfig; }

#define RPG_GAMECORE_ROGUEMAINSTORYEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AAF40)
#define RPG_GAMECORE_ROGUEMAINSTORYEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AAF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMainStoryEventConfig_TypeDefinitionIndex = 18007;

	class RogueMainStoryEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAINSTORYEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMainStoryEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMainStoryEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAINSTORYEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
