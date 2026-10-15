#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace RPG::GameCore { class MarbleSampleConfig; }

#define RPG_GAMECORE_MARBLELAUNCHAICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83FAC0)
#define RPG_GAMECORE_MARBLELAUNCHAICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83F870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleLaunchAIConfig_TypeDefinitionIndex = 16913;

	class MarbleLaunchAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MarbleSampleConfig* DirectSample; // 0x10
		::RPG::GameCore::MarbleSampleConfig* IndirectSample; // 0x18
		::System::Single AddHpFactor; // 0x20
		::System::Single CostHpFactor; // 0x24
		::System::Single AddAttackFactor; // 0x28
		::System::Single ActionAgainScore; // 0x2C
		::Il2CppArray<::System::Single>* RankInterval; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELAUNCHAICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleLaunchAIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleLaunchAIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELAUNCHAICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
