#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchStanceBreakTargetEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38070)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB38100)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB380E0)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB38080)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB38000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchStanceBreakTargetEntity_TypeDefinitionIndex = 23999;

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
