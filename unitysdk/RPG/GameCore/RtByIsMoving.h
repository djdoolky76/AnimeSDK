#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByIsMoving; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISMOVING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA54DF0)
#define RPG_GAMECORE_RTBYISMOVING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA54FB0)
#define RPG_GAMECORE_RTBYISMOVING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA54F80)
#define RPG_GAMECORE_RTBYISMOVING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA54E00)
#define RPG_GAMECORE_RTBYISMOVING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA54DC0)

namespace RPG::GameCore
{
	class RtByIsMoving : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
