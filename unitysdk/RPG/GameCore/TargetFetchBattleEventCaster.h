#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchBattleEventCaster; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB32FF0)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB33080)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB33060)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB33000)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB32F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchBattleEventCaster_TypeDefinitionIndex = 23927;

	class TargetFetchBattleEventCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
