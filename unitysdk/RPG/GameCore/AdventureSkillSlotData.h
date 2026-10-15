#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillSlotState.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AdventureSkillData; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURESKILLSLOTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE583F40)
#define RPG_GAMECORE_ADVENTURESKILLSLOTDATA_GET_SKILLINDEX_OFFSET UNITYSDK_OFFSET(0xE57E360)

namespace RPG::GameCore
{
	class AdventureSkillSlotData : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureSkillData* SkillData; // 0x10
		::System::String* SkillBtnPrefabPath; // 0x18
		::RPG::GameCore::AdventureSkillSlotState State; // 0x20
		::System::Boolean TaskInputOnly; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AdventureSkillType Slot; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLSLOTDATA_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLSLOTDATA_GET_SKILLINDEX_OFFSET))(this);
		}

	};
}
