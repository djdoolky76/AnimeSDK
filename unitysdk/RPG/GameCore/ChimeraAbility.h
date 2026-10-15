#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbility; }
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D595E90)
#define RPG_GAMECORE_CHIMERAABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D595EA0)
#define RPG_GAMECORE_CHIMERAABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D595E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbility_TypeDefinitionIndex = 15841;

	class ChimeraAbility : public ::RPG::GameCore::ChimeraAbilityBase
	{
	public:
		::System::String* PerformanceJsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::ChimeraAbilityModifier*>* Modifiers; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
