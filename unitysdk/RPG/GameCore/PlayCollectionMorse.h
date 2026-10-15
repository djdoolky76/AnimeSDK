#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class PlayCollectionMorse; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PLAYCOLLECTIONMORSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92CDA0)
#define RPG_GAMECORE_PLAYCOLLECTIONMORSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92CDB0)
#define RPG_GAMECORE_PLAYCOLLECTIONMORSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92CD70)

namespace RPG::GameCore
{
	class PlayCollectionMorse : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* StartEvent; // 0x20
		::RPG::GameCore::DynamicString* StopEvent; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PlayerMorse; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStop; // 0x38
		::System::Single MinTime; // 0x40
		::System::Single MaxTime; // 0x44
		::System::Single BubbleSkipTime; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicStringList* TalkSentenceIdList; // 0x50
		::System::Single GapMinTime; // 0x58
		::System::Single GapMaxTime; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCOLLECTIONMORSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayCollectionMorse* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayCollectionMorse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCOLLECTIONMORSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayCollectionMorse* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayCollectionMorse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCOLLECTIONMORSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
