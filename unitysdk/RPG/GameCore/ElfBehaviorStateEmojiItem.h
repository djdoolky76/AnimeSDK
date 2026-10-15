#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateContentItem.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfBehaviorStateEmojiItem; }

#define RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6064E0)
#define RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6064F0)
#define RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D606730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBehaviorStateEmojiItem_TypeDefinitionIndex = 18503;

	class ElfBehaviorStateEmojiItem : public ::RPG::GameCore::ElfBehaviorStateContentItem
	{
	public:
		::RPG::GameCore::ElfBehaviorStateType EmojiType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfBehaviorStateEmojiItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfBehaviorStateEmojiItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfBehaviorStateEmojiItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfBehaviorStateEmojiItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEEMOJIITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
