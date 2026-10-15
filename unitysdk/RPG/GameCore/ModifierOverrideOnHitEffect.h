#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierOverrideOnHitEffect; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D860DC0)
#define RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D860DE0)
#define RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D860D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierOverrideOnHitEffect_TypeDefinitionIndex = 23468;

	class ModifierOverrideOnHitEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::System::String* SheildBreakEffectPath; // 0x20
		::System::String* ModifierOverrideOnHitEffectPriority; // 0x28
		::RPG::GameCore::ModifierHitEffectStacking HitEffectStacking; // 0x30
		::System::Boolean OverrideOffset; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::MVector3 Offset; // 0x38
		::System::Boolean KeepHitEffect; // 0x44
		::System::Boolean ReplayWhenMutex; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierOverrideOnHitEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierOverrideOnHitEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierOverrideOnHitEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierOverrideOnHitEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
