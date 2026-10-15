#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckPredicateAxis; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_CHECKPREDICATEAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54E920)
#define RPG_GAMECORE_CHECKPREDICATEAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54E930)
#define RPG_GAMECORE_CHECKPREDICATEAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54E8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckPredicateAxis_TypeDefinitionIndex = 15512;

	class CheckPredicateAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::RPG::GameCore::FixPoint SuccessScore; // 0x18
		::RPG::GameCore::FixPoint FailScore; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKPREDICATEAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckPredicateAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckPredicateAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKPREDICATEAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckPredicateAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckPredicateAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKPREDICATEAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
