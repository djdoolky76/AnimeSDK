#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAbilityTag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace RPG::GameCore { class ChimeraAbilityModifierParam; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_CHIMERAABILITYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D597A00)
#define RPG_GAMECORE_CHIMERAABILITYMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D597820)

namespace RPG::GameCore
{
	class ChimeraAbilityModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::RPG::GameCore::ChimeraBattleAbilityTag Tag; // 0x20
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::ChimeraAbilityModifierParam*>* Params; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
