#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityEnds; }

#define RPG_GAMECORE_CHIMERAABILITYENDS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596A30)
#define RPG_GAMECORE_CHIMERAABILITYENDS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D596A40)
#define RPG_GAMECORE_CHIMERAABILITYENDS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D596970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityEnds_TypeDefinitionIndex = 15859;

	class ChimeraAbilityEnds : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYENDS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityEnds* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityEnds*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYENDS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityEnds* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityEnds*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYENDS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
