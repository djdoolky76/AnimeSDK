#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGuideQuestConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTGUIDEQUESTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D703E60)
#define RPG_GAMECORE_GRIDFIGHTGUIDEQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D703D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGuideQuestConfigRow_TypeDefinitionIndex = 13579;

	class GridFightGuideQuestConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ChapterAimQuest; // 0x18
		::System::UInt32 ChapterID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGUIDEQUESTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGuideQuestConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGUIDEQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
