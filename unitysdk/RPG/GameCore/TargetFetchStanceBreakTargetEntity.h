#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchStanceBreakTargetEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB65950)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB659E0)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB659C0)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB65960)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB658E0)

namespace RPG::GameCore
{
	class TargetFetchStanceBreakTargetEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
