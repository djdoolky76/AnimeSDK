#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityBase.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAbilityPassiveType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityPassive; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAABILITYPASSIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D568B70)
#define RPG_GAMECORE_CHIMERAABILITYPASSIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D568B80)
#define RPG_GAMECORE_CHIMERAABILITYPASSIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56A170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityPassive_TypeDefinitionIndex = 15842;

	class ChimeraAbilityPassive : public ::RPG::GameCore::ChimeraAbilityBase
	{
	public:
		::System::String* PerformanceJsonPath; // 0x20
		::RPG::GameCore::ChimeraBattleAbilityPassiveType Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPASSIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityPassive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityPassive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPASSIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityPassive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityPassive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPASSIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
