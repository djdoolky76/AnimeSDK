#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActionWeightConfig; }

#define RPG_GAMECORE_ROGUEACTIONWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F55A630)
#define RPG_GAMECORE_ROGUEACTIONWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F55A5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionWeightConfig_TypeDefinitionIndex = 20032;

	class RogueActionWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActionWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActionWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
