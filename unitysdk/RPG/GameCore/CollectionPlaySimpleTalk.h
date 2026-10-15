#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CollectionPlaySimpleTalk; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59CBD0)
#define RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59CBE0)
#define RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59CB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectionPlaySimpleTalk_TypeDefinitionIndex = 20412;

	class CollectionPlaySimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SimpleTalkInfo* TalkTemplate; // 0x18
		::RPG::GameCore::DynamicStringList* TalkSentenceIdList; // 0x20
		::System::Boolean KeepDisplay; // 0x28
		::System::Boolean BlackMask; // 0x29
		::System::Boolean NeedFadeBlackMask; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectionPlaySimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectionPlaySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectionPlaySimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectionPlaySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
