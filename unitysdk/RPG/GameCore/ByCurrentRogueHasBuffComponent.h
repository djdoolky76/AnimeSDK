#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentRogueHasBuffComponent; }

#define RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FAA40)
#define RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6FAA50)
#define RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6FAA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentRogueHasBuffComponent_TypeDefinitionIndex = 21382;

	class ByCurrentRogueHasBuffComponent : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentRogueHasBuffComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentRogueHasBuffComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentRogueHasBuffComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentRogueHasBuffComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASBUFFCOMPONENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
