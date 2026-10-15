#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleTargetFetchGridByTag; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA21C10)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA21D10)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA21CC0)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA21C20)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA21B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleTargetFetchGridByTag_TypeDefinitionIndex = 24245;

	class RtBattleTargetFetchGridByTag : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* Tag; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
