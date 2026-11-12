#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }

#define RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75CCE0)
#define RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E75D120)
#define RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E759520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBasePredicateConfig_TypeDefinitionIndex = 18533;

	class CakeRaceBasePredicateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsInverse; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceBasePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceBasePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceBasePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceBasePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
