#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapBattleEventCreator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB69E30)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB69EE0)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB69EA0)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB69E40)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB69DA0)

namespace RPG::GameCore
{
	class TargetMapBattleEventCreator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
