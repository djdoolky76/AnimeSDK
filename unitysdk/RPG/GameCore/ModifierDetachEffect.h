#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierDetachEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERDETACHEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88DFB0)
#define RPG_GAMECORE_MODIFIERDETACHEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D88DFC0)
#define RPG_GAMECORE_MODIFIERDETACHEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88DF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierDetachEffect_TypeDefinitionIndex = 23467;

	class ModifierDetachEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::Boolean IsNeedFadeOut; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDETACHEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierDetachEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierDetachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDETACHEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierDetachEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierDetachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDETACHEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
