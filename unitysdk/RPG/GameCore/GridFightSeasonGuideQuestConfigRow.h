#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonGuideQuestConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSEASONGUIDEQUESTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9521F0)
#define RPG_GAMECORE_GRIDFIGHTSEASONGUIDEQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E952050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonGuideQuestConfigRow_TypeDefinitionIndex = 13690;

	class GridFightSeasonGuideQuestConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ChapterAimQuest; // 0x18
		::System::UInt32 SeasonID; // 0x1C
		::System::UInt32 ChapterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONGUIDEQUESTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONGUIDEQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
