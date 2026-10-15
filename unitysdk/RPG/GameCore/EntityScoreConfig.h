#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityScoreType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityScoreConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYSCORECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D679D80)
#define RPG_GAMECORE_ENTITYSCORECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D679C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityScoreConfig_TypeDefinitionIndex = 16572;

	class EntityScoreConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AllEntityMaxScore; // 0x10
		::System::Single DisableAtmoThresholdScore; // 0x14
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityScoreType, ::System::Single>* SingleEntityScoreDict; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYSCORECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityScoreConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityScoreConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYSCORECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
