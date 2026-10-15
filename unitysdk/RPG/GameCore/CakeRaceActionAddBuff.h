#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionAddBuff; }
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace RPG::GameCore { class CakeRaceBuffConfig; }

#define RPG_GAMECORE_CAKERACEACTIONADDBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D547990)
#define RPG_GAMECORE_CAKERACEACTIONADDBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5479A0)
#define RPG_GAMECORE_CAKERACEACTIONADDBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D547960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionAddBuff_TypeDefinitionIndex = 18334;

	class CakeRaceActionAddBuff : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBuffConfig*>* AddBuffs; // 0x10
		::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* TargetSelector; // 0x18
		::RPG::GameCore::CakeRaceBasePredicateConfig* Predicate; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONADDBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionAddBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionAddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONADDBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionAddBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionAddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONADDBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
