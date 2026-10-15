#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierReattachEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERREATTACHEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88EE60)
#define RPG_GAMECORE_MODIFIERREATTACHEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D88EE70)
#define RPG_GAMECORE_MODIFIERREATTACHEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88EE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierReattachEffect_TypeDefinitionIndex = 21744;

	class ModifierReattachEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AddColliderHeightOffset; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single ColliderHeightRatio; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERREATTACHEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierReattachEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierReattachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERREATTACHEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierReattachEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierReattachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERREATTACHEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
