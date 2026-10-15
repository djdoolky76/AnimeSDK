#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityStart; }

#define RPG_GAMECORE_CHIMERAABILITYSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56A240)
#define RPG_GAMECORE_CHIMERAABILITYSTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56A250)
#define RPG_GAMECORE_CHIMERAABILITYSTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56B640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityStart_TypeDefinitionIndex = 15858;

	class ChimeraAbilityStart : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYSTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYSTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYSTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
