#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class SetEmojiReplyPatternAction; }

#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D850820)
#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D850830)
#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8507D0)

namespace RPG::GameCore::Match3
{
	class SetEmojiReplyPatternAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x18
		::System::Single DelayTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
