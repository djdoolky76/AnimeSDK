#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRelicBoxQuestConfigRow; }

#define RPG_GAMECORE_ACTIVITYRELICBOXQUESTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D34EEE0)
#define RPG_GAMECORE_ACTIVITYRELICBOXQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D34ED40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRelicBoxQuestConfigRow_TypeDefinitionIndex = 12335;

	class ActivityRelicBoxQuestConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 TabID; // 0x1C
		::System::UInt32 GotoID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRELICBOXQUESTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRELICBOXQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
