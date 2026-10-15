#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_PlayBubbleTalk; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA85D40)
#define RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA85D50)
#define RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA85D00)

namespace RPG::GameCore
{
	class ST_Side_PlayBubbleTalk : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single AutoSkipTime; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* TalkSentenceIDs; // 0x20
		::System::Boolean TalkSentenceUseVariable; // 0x28
		::System::Byte _padding1[0x7];
		::System::String* TalkSentenceVarName; // 0x30
		::System::Boolean EnableVoice; // 0x38
		::System::Boolean IsLoop; // 0x39
		::System::Byte _padding2[0x2];
		::System::Single LoopInterval; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_PlayBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_PlayBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_PlayBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_PlayBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
