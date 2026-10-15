#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PlayNPCSingleBubbleTalk; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92F1D0)
#define RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92F250)
#define RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92F130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayNPCSingleBubbleTalk_TypeDefinitionIndex = 21597;

	class PlayNPCSingleBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single AutoSkipTime; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* TalkSentenceID; // 0x28
		::System::Boolean EnableVoice; // 0x30
		::System::Boolean InstantFinish; // 0x31
		::System::Byte _padding1[0x6];
		::RPG::GameCore::DynamicFloat* ID; // 0x38
		::System::UInt32 UniqueID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayNPCSingleBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayNPCSingleBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayNPCSingleBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayNPCSingleBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
