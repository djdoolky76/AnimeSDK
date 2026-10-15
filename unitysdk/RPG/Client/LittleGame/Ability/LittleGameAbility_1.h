#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

namespace RPG::Client::LittleGame::Ability
{
	template <typename T>
	class LittleGameAbility_1 : public ::System::Object
	{
	public:
		T _AbilityOwner_k__BackingField; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x0
		::KFELGAIGHAP* _SequenceComposite_k__BackingField; // 0x0
		::RPG::GameCore::LittleGameAbilityConfig* _Config_k__BackingField; // 0x0
		::System::UInt32 _SkillID_k__BackingField; // 0x0
	};
}
