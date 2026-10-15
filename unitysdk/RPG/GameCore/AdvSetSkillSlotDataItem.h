#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillSlotState.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetSkillSlotDataItem; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETSKILLSLOTDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B1340)
#define RPG_GAMECORE_ADVSETSKILLSLOTDATAITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B10C0)

namespace RPG::GameCore
{
	class AdvSetSkillSlotDataItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType Slot; // 0x10
		::RPG::GameCore::AdventureSkillSlotState State; // 0x14
		::System::Int32 BindSkillIndex; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* SkillBtnPrefab; // 0x20
		::System::String* SkillBtnEffect; // 0x28
		::System::Boolean TaskInputOnly; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATAITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetSkillSlotDataItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetSkillSlotDataItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATAITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
