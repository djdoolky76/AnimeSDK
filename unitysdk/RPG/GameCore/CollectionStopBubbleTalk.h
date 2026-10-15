#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CollectionStopBubbleTalk; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CA8E0)
#define RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CA8F0)
#define RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CA8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectionStopBubbleTalk_TypeDefinitionIndex = 20411;

	class CollectionStopBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectionStopBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectionStopBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectionStopBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectionStopBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
