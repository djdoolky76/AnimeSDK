#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalVisibilityControl; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D720420)
#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D720440)
#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7203E0)

namespace RPG::GameCore
{
	class GlobalVisibilityControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StageVisible; // 0x18
		::System::Boolean AtmosphereVisible; // 0x19
		::System::Byte _padding0[0x6];
		::RPG::GameCore::EntityTypeMask VisibleEntityMask; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::EntityTypeMask InvisibleEntityMask; // 0x28
		::System::Byte _padding2[0x4];
		::RPG::GameCore::TargetEvaluator* VisibleTargets; // 0x30
		::RPG::GameCore::TargetEvaluator* InvisibleTargets; // 0x38
		::RPG::GameCore::PredicateConfig* VisibleEffectsFilter; // 0x40
		::Il2CppArray<::System::String*>* VisibleEffects; // 0x48
		::Il2CppArray<::System::String*>* InvisibleEffects; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALVISIBILITYCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalVisibilityControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalVisibilityControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALVISIBILITYCONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalVisibilityControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalVisibilityControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALVISIBILITYCONTROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
