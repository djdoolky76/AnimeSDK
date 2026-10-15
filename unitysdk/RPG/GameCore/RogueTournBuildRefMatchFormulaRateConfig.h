#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuildRefMatchFormulaRateConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHFORMULARATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA35070)
#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHFORMULARATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA34DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefMatchFormulaRateConfig_TypeDefinitionIndex = 17678;

	class RogueTournBuildRefMatchFormulaRateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>* Essential; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>* Optional; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHFORMULARATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournBuildRefMatchFormulaRateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournBuildRefMatchFormulaRateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHFORMULARATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
