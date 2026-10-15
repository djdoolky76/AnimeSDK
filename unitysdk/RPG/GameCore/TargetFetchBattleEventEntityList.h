#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchBattleEventEntityList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB33100)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB33190)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB33170)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB33110)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB33090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchBattleEventEntityList_TypeDefinitionIndex = 24005;

	class TargetFetchBattleEventEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
