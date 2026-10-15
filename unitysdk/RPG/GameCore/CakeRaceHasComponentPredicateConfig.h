#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceComponentType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceHasComponentPredicateConfig; }

#define RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B770)
#define RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54B780)
#define RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D550AA0)

namespace RPG::GameCore
{
	class CakeRaceHasComponentPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceComponentType>* ComponentTypes; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
