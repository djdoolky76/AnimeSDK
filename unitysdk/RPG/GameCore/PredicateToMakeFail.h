#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PredicateToMakeFail; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PREDICATETOMAKEFAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9118A0)
#define RPG_GAMECORE_PREDICATETOMAKEFAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9118B0)
#define RPG_GAMECORE_PREDICATETOMAKEFAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateToMakeFail_TypeDefinitionIndex = 23764;

	class PredicateToMakeFail : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETOMAKEFAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PredicateToMakeFail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PredicateToMakeFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETOMAKEFAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PredicateToMakeFail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PredicateToMakeFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETOMAKEFAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
