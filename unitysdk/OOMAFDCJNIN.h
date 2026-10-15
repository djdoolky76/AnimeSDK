#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
namespace RPG::GameCore { class RemoveBehaviorFlagForModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define OOMAFDCJNIN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8CD50)
#define OOMAFDCJNIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF8CD80)

	class OOMAFDCJNIN
	{
	public:
		::RPG::GameCore::ArrayPoolWrapper_1<::RPG::GameCore::TurnBasedModifierInstance*> PIIIMMOPIKE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveBehaviorFlagForModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + OOMAFDCJNIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMAFDCJNIN_ONTASKBEGIN_OFFSET))(this);
		}

	};
