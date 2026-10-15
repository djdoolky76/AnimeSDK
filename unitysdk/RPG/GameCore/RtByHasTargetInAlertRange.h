#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByHasTargetInAlertRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA261B0)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA26370)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA26340)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA261C0)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA26180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasTargetInAlertRange_TypeDefinitionIndex = 24227;

	class RtByHasTargetInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
