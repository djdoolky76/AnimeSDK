#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class ElfBehaviorStateEmojiItem; }
namespace RPG::GameCore { class ElfBehaviorStateItem; }

#define RPG_GAMECORE_ELFBEHAVIORSTATEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D606950)
#define RPG_GAMECORE_ELFBEHAVIORSTATEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D606790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBehaviorStateItem_TypeDefinitionIndex = 18504;

	class ElfBehaviorStateItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfBehaviorStateContentItem* Anim; // 0x10
		::RPG::GameCore::ElfBehaviorStateEmojiItem* Emoji; // 0x18
		::RPG::GameCore::ElfBehaviorStateContentItem* Text; // 0x20
		::RPG::GameCore::ElfBehaviorStateContentItem* Effect; // 0x28
		::RPG::GameCore::ElfBehaviorStateContentItem* SpecialBubble; // 0x30
		::RPG::GameCore::ElfBehaviorStateContentItem* AudioEffect; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfBehaviorStateItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
