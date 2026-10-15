#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchTurnActionEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB66810)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB668A0)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB66880)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB66820)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB667A0)

namespace RPG::GameCore
{
	class TargetFetchTurnActionEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
