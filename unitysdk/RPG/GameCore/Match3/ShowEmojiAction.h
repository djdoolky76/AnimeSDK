#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ShowEmojiAction; }

#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8239A0)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8239B0)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D823950)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowEmojiAction_TypeDefinitionIndex = 24905;

	class ShowEmojiAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x18
		::System::Single DelayTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowEmojiAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowEmojiAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowEmojiAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowEmojiAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
