#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_RtBattleGridOrder; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC82BB0)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC82D70)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC82D40)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC82BC0)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC82B80)

namespace RPG::GameCore
{
	class VE_RtBattleGridOrder : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleGridOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleGridOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleGridOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleGridOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleGridOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleGridOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleGridOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleGridOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
