#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionPropertyModifier; }
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace RPG::GameCore { class CakeRacePropertyModifier; }

#define RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D549AC0)
#define RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D549AD0)
#define RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D549A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionPropertyModifier_TypeDefinitionIndex = 18333;

	class CakeRaceActionPropertyModifier : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>* PropertyModifiers; // 0x10
		::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* TargetSelector; // 0x18
		::RPG::GameCore::CakeRaceBasePredicateConfig* Predicate; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionPropertyModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionPropertyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionPropertyModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionPropertyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
