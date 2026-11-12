#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapBattleEventCaster; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE19290)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE19340)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE19300)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE192A0)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE19200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapBattleEventCaster_TypeDefinitionIndex = 24387;

	class TargetMapBattleEventCaster : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
