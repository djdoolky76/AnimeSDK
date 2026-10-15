#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AbortInsertAbility; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ABORTINSERTABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33F3E0)
#define RPG_GAMECORE_ABORTINSERTABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33F3F0)
#define RPG_GAMECORE_ABORTINSERTABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33F3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbortInsertAbility_TypeDefinitionIndex = 22666;

	class AbortInsertAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetFilter; // 0x18
		::System::String* AbilityName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTINSERTABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbortInsertAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbortInsertAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTINSERTABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbortInsertAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbortInsertAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTINSERTABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
