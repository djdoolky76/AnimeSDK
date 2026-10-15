#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGuideQuestGoToWikiConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTGUIDEQUESTGOTOWIKICONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D731A20)
#define RPG_GAMECORE_GRIDFIGHTGUIDEQUESTGOTOWIKICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D731900)

namespace RPG::GameCore
{
	class GridFightGuideQuestGoToWikiConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 TutorialGuideGroupID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGUIDEQUESTGOTOWIKICONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGUIDEQUESTGOTOWIKICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
