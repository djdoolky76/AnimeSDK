#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMainStoryEventEffectConfig; }

#define RPG_GAMECORE_ROGUEMAINSTORYEVENTEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AAF90)
#define RPG_GAMECORE_ROGUEMAINSTORYEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AAF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMainStoryEventEffectConfig_TypeDefinitionIndex = 18006;

	class RogueMainStoryEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAINSTORYEVENTEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMainStoryEventEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMainStoryEventEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAINSTORYEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
