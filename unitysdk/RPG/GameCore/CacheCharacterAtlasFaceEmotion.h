#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CacheCharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D546250)
#define RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D546260)
#define RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D546220)

namespace RPG::GameCore
{
	class CacheCharacterAtlasFaceEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
