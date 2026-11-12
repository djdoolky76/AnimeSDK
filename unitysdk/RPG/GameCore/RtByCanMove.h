#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByCanMove; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYCANMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC63640)
#define RPG_GAMECORE_RTBYCANMOVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EC63800)
#define RPG_GAMECORE_RTBYCANMOVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EC637D0)
#define RPG_GAMECORE_RTBYCANMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC63650)
#define RPG_GAMECORE_RTBYCANMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC63610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCanMove_TypeDefinitionIndex = 24577;

	class RtByCanMove : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
