#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class CollectionPlayBubbleTalk; }
namespace RPG::GameCore { class DynamicStringList; }

#define RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59C8B0)
#define RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59C8D0)
#define RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59C860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectionPlayBubbleTalk_TypeDefinitionIndex = 20410;

	class CollectionPlayBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BubbleTalkInfo* BubbleTemplate; // 0x18
		::RPG::GameCore::DynamicStringList* TalkSentenceIdList; // 0x20
		::RPG::GameCore::DynamicStringList* ReplaceParamList; // 0x28
		::RPG::GameCore::BubbleTalkType BubbleTalkType; // 0x30
		::System::Boolean IsLoop; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single LoopInterval; // 0x38
		::System::Boolean InstantFinish; // 0x3C
		::System::Byte _padding1[0x3];
		::System::UInt32 UniqueID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectionPlayBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectionPlayBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectionPlayBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectionPlayBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
